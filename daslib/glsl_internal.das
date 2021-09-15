options indenting = 4

module glsl_internal shared private

require ast
require rtti
require strings

require daslib/ast_boost
require daslib/templates_boost
require daslib/strings_boost

enum ShaderType
    vertex
    fragment

[structure_macro(name="glsl_structure")]
class GlslStructureAnnotation : AstStructureAnnotation {}

class GlslShader : AstFunctionAnnotation
    shaderType = ShaderType vertex
    def override apply ( var func:FunctionPtr; var group:ModuleGroup; args:AnnotationArgumentList; var errors : das_string ) : bool
        func.flags |= FunctionFlags exports // note: this is temporary, until we are done with dependency collecting etc
        let argName = find_arg("name", args)
        if !(argName is tString)
            errors := "name must be string constant"
            return false
        add_global_var(compiling_module(),"{argName as tString}", new [[TypeDecl() at=func.at, baseType=Type tString]], func.at, false)
        generate_bind_uniform_dummy(func)
        return true
    def override patch ( var func:FunctionPtr; var group:ModuleGroup; args,progArgs:AnnotationArgumentList; var errors : das_string; var astChanged:bool& ) : bool
        for_each_function(compiling_module(), bind_uniform_function_name(func)) <| $ ( bfun )
            if bfun.flags.exports
                bfun.flags &= ~FunctionFlags exports
                generate_bind_uniform(func, bfun)
                astChanged = true
        return true
    def override fixup ( var func:FunctionPtr; var group:ModuleGroup; args,progArgs:AnnotationArgumentList; var errors : das_string ) : bool
        let argName = find_arg("name", args)
        if !(argName is tString)
            errors := "name must be string constant"
            return false
        var version = 100
        let argVersion = find_arg("version", args)
        if argVersion is tInt
            version = argVersion as tInt
        // TODO: 'find_global(name)'
        var err : array<string>
        for_each_global(compiling_module()) <| $ ( var glob )
            if err |> empty()
                if glob.init == null
                    peek(glob.name) <| $ ( gname )
                        if gname == argName as tString
                            glob.init <- new [[ExprConstString() at=func.at,
                                value:=generate_glsl(func, err, shaderType, version),
                                _type <- new [[TypeDecl() at=func.at, baseType=Type tString]]
                            ]]
                            if ! err |> empty()
                                glob.init := null
                            else
                                glob._type.flags |= TypeDeclFlags constant
        if !err |> empty()
            errors := join(err, "\n")
            return false
        return true

[function_macro(name="vertex_program")]
class GlslVertexProgram : GlslShader
    override shaderType = ShaderType vertex

[function_macro(name="fragment_program")]
class GlslPixelProgram : GlslShader
    override shaderType = ShaderType fragment

let private glsl_types <- {{
    Type tString    => "string";    // NOTE - this is temporary until we remove non glsl-related goo
    Type tFloat     => "float";
    Type tFloat2    => "vec2";
    Type tFloat3    => "vec3";
    Type tFloat4    => "vec4";
    Type tInt       => "int";
    Type tInt2      => "ivec2";
    Type tInt3      => "ivec3";
    Type tInt4      => "ivec4";
    Type tBool      => "bool";
    Type tRange     => "ivec2";
    Type tURange    => "uvec2";
    Type tVoid      => "void"
}}

let private glsl_handle_types <- {{
    "float4x4"      => "mat4";
    "float3x3"      => "mat3"
}}

let private glsl_functions <- {{
    "float2"    =>  "vec2";
    "float3"    =>  "vec3";
    "float4"    =>  "vec4";

    "floori"    =>  "floor";

    "lerp"      =>  "mix";

    "_"         =>  "_"
}}

class GlslExport : AstVisitor
    errors : array<string>
    writer : StringBuilderWriter?
    tab : int = 0
    depFun : table<uint64;bool>
    depVar : table<uint64;bool>
    trackLine : int = 0
    trackFile : string
    shaderType : ShaderType
    version : int = 0
    renames : array<tuple<name:string;repl:string>>
    astVisitorAdapter : smart_ptr<ast::VisitorAdapter>
    def GlslExport ( var w : StringBuilderWriter; sht:ShaderType; ver:int )
        unsafe
            writer = addr(w)
        shaderType = sht
        version = ver
// TODO: fixme (egyptian braces)
    def newLine(count:int)
        for t in range(count)
            *writer |> write("\n")
        trackLine += count
    def error ( txt:string; at:LineInfo )
        let fname = at.fileInfo!=null ? "{at.fileInfo.name} " : ""
        errors |> push("\tGLSL: {txt} at {fname}line {int(at.line)}")
    def line(at:LineInfo)
        if at.fileInfo!=null
            peek(at.fileInfo.name) <| $ ( atname )
                if trackLine!=int(at.line) || trackFile!=atname
                    trackLine = int(at.line)
                    trackFile = atname |> replace("\\","/")
                    *writer |> write("#line {trackLine} \"{trackFile}\"\n")
// GLSL TYPE
    def describe_glsl_type ( t : TypeDeclPtr )
        let st = build_string() <| $ ( var tw )
            if t.flags.ref
                tw |> write("& ")
            if t.baseType==Type tStructure
                tw |> write("{t.structType.name}")
            elif t.baseType==Type tHandle
                peek(t.annotation.name) <| $ ( aname )
                    tw |> write(glsl_handle_types?[aname] ?? "error")
            elif glsl_types |> key_exists(t.baseType)
                tw |> write(glsl_types?[t.baseType] ?? "error")
            else
                self->error ("unsupported type {t.baseType}", t.at)
                tw |> write("error")
            for d in t.dim
                tw |> write("[{d}]")
        return st
// any subexpression to string in current context
    def describe_subexpression(expr:ExpressionPtr)
        let oldWriter = writer
        var st = build_string() <| $ (var newWriter)
            unsafe
                writer = addr(newWriter)
            visit(expr, astVisitorAdapter)
        writer = oldWriter
        return st
// program
    def override preVisitProgram(prog:ProgramPtr) : void
        *writer |> write("#version {version} core\n\n")
// type
    ET : bool = false
    def override preVisitTypeDecl(typ:TypeDeclPtr)
        ET = typ.isExprType
        if ET
            *writer |> write("/*[")
    def override visitTypeDecl(typ:TypeDeclPtr)
        if ET
            *writer |> write("]*/")
        return typ
// alias
    def override preVisitAlias(typ:TypeDeclPtr;name:das_string)
        *writer |> write("// typedef\n\t{name} = {self->describe_glsl_type(typ)}")
        self->newLine(2)
// enumeration
    def override preVisitEnumeration(enu:EnumerationPtr)
        *writer |> write("enum {enu.name} : {das_to_string(enu.baseType)}")
        self->newLine(1)
    def override preVisitEnumerationValue(enu:EnumerationPtr;name:das_string;value:ExpressionPtr;last:bool)
        *writer |> write("\t{name} =")
    def override visitEnumerationValue(enu:EnumerationPtr;name:das_string;value:ExpressionPtr;last:bool)
        self->newLine(1)
        return value
    def override visitEnumeration(enu:EnumerationPtr)
        self->newLine(1)
        return enu
// structure
    def override canVisitStructure(str:Structure?)
        var canVisit = false
        for ann in str.annotations
            peek(ann.annotation.name) <| $ ( aname )
                if aname=="glsl_structure"
                    canVisit = true
        return canVisit
    def override preVisitStructure(str:StructurePtr)
        if str.flags.isClass
            self->error("classes are not supported", str.at)
        self->line(str.at)
        *writer |> write("struct {str.name}")
        self->newLine(1)
        *writer |> write("\{")
        self->newLine(1)
    def override preVisitStructureField(str:StructurePtr;decl:FieldDeclaration;last:bool)
        self->line(decl.at)
        *writer |> write("\t")
        //if decl.annotation.length != 0
        //    *writer |> write("[{describe(decl.annotation)}] ")
        *writer |> write("{self->describe_glsl_type(decl._type)} {decl.name}")
        if decl.init != null
            self->error("structure initialization is not supported", decl.init.at)
    def override visitStructureField(str:StructurePtr;decl:FieldDeclaration;last:bool)
        *writer |> write(";")
        self->newLine(1)
    def override visitStructure(str:StructurePtr) : StructurePtr
        *writer |> write("};")
        self->newLine(2)
        return str
// function
    def override canVisitFunction(arg:Function?):bool
        if !depFun |> key_exists(intptr(arg))
            return false
        return true
    def override preVisitFunction(fun:FunctionPtr)
        self->line(fun.at)
        *writer |> write("{self->describe_glsl_type(fun.result)} ")
        var fnName = "{fun.name}"
        for ann in fun.annotations
            peek(ann.annotation.name) <| $ ( aname )
                if aname=="vertex_program" || aname=="fragment_program"
                    fnName = "main"
                    if !fun.result.isVoid
                        self->error("shader function must be void", fun.at)
        *writer |> write("{fnName} ( ")
    def override preVisitFunctionBody(fun:FunctionPtr)
        *writer |> write(" )")
        for ann in fun.annotations
            peek(ann.annotation.name) <| $ ( aname )
                if aname=="pixel_shader" // TODO: other ann
                    let argo = find_arg("output",ann.arguments)
                    if argo is tString
                        *writer |> write(" : {argo as tString}")
        self->newLine(1)
    def override visitFunction(fun:FunctionPtr) : FunctionPtr
        self->newLine(1)
        return fun
    def override preVisitFunctionArgument(fun:FunctionPtr;arg:VariablePtr;last:bool)
        if arg._type.isRef && !arg._type.flags.constant
            *writer |> write("inout ")
        *writer |> write("{self->describe_glsl_type(arg._type)} {arg.name} ")
    def override visitFunctionArgument(fun:FunctionPtr;arg:VariablePtr;last:bool)
        if !last
            *writer |> write(", ")
        return arg
    def override canVisitFunctionArgumentInit (fun:Function?; arg:VariablePtr;value:ExpressionPtr) : bool
        return false
// block
    def override preVisitExprBlock(blk:smart_ptr<ExprBlock>)
        if blk.blockFlags.isClosure
            self->error ("closure is not supported", blk.at)
        *writer |> write("{repeat("\t",tab)}\{")
        self->newLine(1)
        tab ++
    def override visitExprBlock(blk:smart_ptr<ExprBlock>) : ExpressionPtr
        tab --
        *writer |> write("{repeat("\t",tab)}\}")
        self->newLine(1)
        return blk
    def override preVisitExprBlockExpression(blk:smart_ptr<ExprBlock>;expr:ExpressionPtr)
        self->line(expr.at)
        *writer |> write("{repeat("\t",tab)}")
    def override visitExprBlockExpression(blk:smart_ptr<ExprBlock>;expr:ExpressionPtr)
        *writer |> write(";")
        self->newLine(1)
        return expr
    def override visitExprBlockFinal(blk:smart_ptr<ExprBlock>)
        self->error ("finally is not supported", blk.at)
// let
    def override preVisitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool)
        self->line(arg.at)
        *writer |> write("{self->describe_glsl_type(arg._type)} {arg.name}")
    def override visitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool)
        if !lastArg
            *writer |> write(";")
        return arg
    def override preVisitExprLetVariableInit(blk:smart_ptr<ExprLet>;arg:VariablePtr;expr:ExpressionPtr)
        // if arg.flags.init_via_move
        // elif arg.flags.init_via_clone
        *writer |> write(" = ")
// global let
    def override canVisitGlobalVariable(arg:Variable?):bool
        if !depVar |> key_exists(intptr(arg))
            return false
        if !(find_arg("cbuffer",arg.annotation) is nothing)
            return false
        return true
    def override preVisitGlobalLetVariable(arg:VariablePtr;lastArg:bool)
        self->line(arg.at)
        if shaderType==ShaderType vertex
            if find_arg("uniform", arg.annotation) is tBool
                *writer |> write("uniform ")
            let argLoc = find_arg("location", arg.annotation)
            if argLoc is tInt
                *writer |> write("layout(location={argLoc as tInt}) ")
            if find_arg("in", arg.annotation) is tBool
                *writer |> write("in ")
            if find_arg("inout", arg.annotation) is tBool
                *writer |> write("out ")
        elif shaderType==ShaderType fragment
            if find_arg("uniform", arg.annotation) is tBool
                *writer |> write("uniform ")
            if find_arg("in", arg.annotation) is tBool
                *writer |> write("in ")
            if find_arg("out", arg.annotation) is tBool
                *writer |> write("out ")
            if find_arg("inout", arg.annotation) is tBool
                *writer |> write("in ")
        *writer |> write("{self->describe_glsl_type(arg._type)} {arg.name}")
    def override visitGlobalLetVariable(arg:VariablePtr;lastArg:bool)
        let reg = find_arg("register", arg.annotation)
        if reg is tString
            *writer |> write(": register({reg as tString})")
        *writer |> write(";")
        self->newLine(2)
        return arg
    def override preVisitGlobalLetVariableInit(arg:VariablePtr;expr:ExpressionPtr)
        // if arg.flags.init_via_move
        // elif arg.flags.init_via_clone
        *writer |> write(" = ")
// string builder
    def override preVisitExprStringBuilder(expr:smart_ptr<ExprStringBuilder>)
        self->error ("string builder is not supported", expr.at)
// new
    def override preVisitExprNew(expr:smart_ptr<ExprNew>)
        self->error ("new is not supported", expr.at)
// named call
    def override preVisitExprNamedCall(expr:smart_ptr<ExprNamedCall>)
        self->error ("named call is not supported", expr.at)
// looks like call (debug,assert,verify,erase,find,key_exists,keys,values,invoke,memzero etc)
    def isInvokeMethod(expr:smart_ptr<ExprLooksLikeCall>)
        if expr is ExprInvoke
            unsafe
                let einvoke = reinterpret<ExprInvoke?> expr
                return einvoke.isInvokeMethod
        return false
    def override preVisitExprLooksLikeCall(expr:smart_ptr<ExprLooksLikeCall>)
        if self->isInvokeMethod(expr)
            pass
        else
            *writer |> write("{expr.name}(")
    def override visitExprLooksLikeCall(expr:smart_ptr<ExprLooksLikeCall>) : ExpressionPtr
        *writer |> write(")")
        return expr
    def override preVisitExprLooksLikeCallArgument(expr:smart_ptr<ExprLooksLikeCall>;arg:ExpressionPtr;last:bool)
        let isInvoke = self->isInvokeMethod(expr)
        if isInvoke && arg==expr.arguments[1]
            *writer |> write("/*")
    def override visitExprLooksLikeCallArgument(expr:smart_ptr<ExprLooksLikeCall>;arg:ExpressionPtr;last:bool)
        let isInvoke = self->isInvokeMethod(expr)
        if isInvoke && arg==expr.arguments[0]
            *writer |> write("(")
        elif isInvoke && arg==expr.arguments[1]
            *writer |> write("*/")
        elif !last
            *writer |> write(",")
        return arg
// call
    def override preVisitExprCall(expr:smart_ptr<ExprCall>)
        var fnName = "{expr.name}"
        glsl_functions |> find_if_exists(fnName) <| $(newName:string?)
            if newName != null
                fnName = *newName
        *writer |> write("{fnName}(")
    def override visitExprCall(expr:smart_ptr<ExprCall>) : ExpressionPtr
        *writer |> write(")")
        return expr
    def override visitExprCallArgument(expr:smart_ptr<ExprCall>;arg:ExpressionPtr;last:bool)
        if !last
            *writer |> write(",")
        return arg
// null coaelescing
    def override preVisitExprNullCoalescing(expr:smart_ptr<ExprNullCoalescing>): void
        self->error ("null coaelescing is not supported", expr.at)
// at
    def override visitExprAt(expr:smart_ptr<ExprAt>) : ExpressionPtr
        *writer |> write("]")
        return expr
    def override preVisitExprAtIndex(expr:smart_ptr<ExprAt>;index:ExpressionPtr)
        *writer |> write("[")
// safe at
    def override preVisitExprSafeAt(expr:smart_ptr<ExprSafeAt>): void
        self->error ("safe index is not supported", expr.at)
// is
    def override preVisitExprIsType(expr:smart_ptr<ExprAt>;typeDecl:TypeDeclPtr)
        self->error ("is type is not supported", expr.at)
// op2
    def getReplaceOp2(expr:smart_ptr<ExprOp2>)
        if "{expr.op}"=="%" && !expr._type.isInteger
            return "mod"
        else
            return ""
    def override preVisitExprOp2(expr:smart_ptr<ExprOp2>)
        let repl = self->getReplaceOp2(expr)
        *writer |> write("{repl}(")
    def override visitExprOp2(expr:smart_ptr<ExprOp2>) : ExpressionPtr
        *writer |> write(")")
        return expr
    def override preVisitExprOp2Right(expr:smart_ptr<ExprOp2>;right:ExpressionPtr)
        let repl = self->getReplaceOp2(expr)
        if repl != ""
            *writer |> write(", ")
        else
            *writer |> write(" {expr.op} ")
// op3
    def override preVisitExprOp3(expr:smart_ptr<ExprOp3>)
        *writer |> write("(")
    def override visitExprOp3(expr:smart_ptr<ExprOp3>) : ExpressionPtr
        *writer |> write(")")
        return expr
    def override preVisitExprOp3Left(expr:smart_ptr<ExprOp3>;left:ExpressionPtr)
        *writer |> write(" ? ")
    def override preVisitExprOp3Right(expr:smart_ptr<ExprOp3>;right:ExpressionPtr)
        *writer |> write(" : ")
// copy
    def override preVisitExprCopyRight(expr:smart_ptr<ExprCopy>;right:ExpressionPtr)
        *writer |> write(" = ")
// move
    def override preVisitExprMoveRight(expr:smart_ptr<ExprMove>;right:ExpressionPtr)
        self->error ("move is not supported", expr.at)
// clone
    def override preVisitExprCloneRight(expr:smart_ptr<ExprClone>;right:ExpressionPtr)
        self->error ("clone is not supported", expr.at)
// with
    def override preVisitExprWith(expr:smart_ptr<ExprWith>)
        self->error ("with is not supported", expr.at)
// while
    def override preVisitExprWhile(expr:smart_ptr<ExprWhile>)
        *writer |> write("while ( ")
    def override preVisitExprWhileBody(expr:smart_ptr<ExprWhile>;right:ExpressionPtr)
        *writer |> write(") ")
        self->newLine(1)
// try-catch
    def override preVisitExprTryCatch(expr:smart_ptr<ExprTryCatch>)
        self->error ("try-recover is not supported", expr.at)
// if-then-else
    def override preVisitExprIfThenElse(expr:smart_ptr<ExprIfThenElse>)
        *writer |> write("if (")
    def override preVisitExprIfThenElseIfBlock(expr:smart_ptr<ExprIfThenElse>;ifBlock:ExpressionPtr)
        *writer |> write(")")
        self->newLine(1)
    def override preVisitExprIfThenElseElseBlock(expr:smart_ptr<ExprIfThenElse>;elseBlock:ExpressionPtr)
        *writer |> write("{repeat("\t",tab)}")
        if elseBlock.__rtti=="ExprIfThenElse"
            *writer |> write("else ")
        else
            *writer |> write("else")
            self->newLine(1)
// for
    def isDimFor(svar:ExpressionPtr)
        if length(svar._type.dim)>0
            return true
        return false
    def isRangeFor(svar:ExpressionPtr)
        let bt = svar._type.baseType
        if bt==Type tRange || bt==Type tURange
            return true
        return false
    def override preVisitExprFor(expr:smart_ptr<ExprFor>)
        for source in expr.sources
            if !self->isRangeFor(source) && !self->isDimFor(source)
                self->error("only range for or dim for are supported for now {describe(source._type)}", source.at)
                return
        *writer |> write("\{")
    def override preVisitExprForSource(expr:smart_ptr<ExprFor>;source:ExpressionPtr;last:bool) : void
        self->newLine(1)
        let index = get_for_source_index(expr, source)
        if self->isDimFor(source)
            *writer |> write("{repeat("\t",tab)}int {expr.iteratorVariables[index].name} = 0; //")
        elif self->isRangeFor(source)
            let svtype = "{self->describe_glsl_type(source._type)}"
            *writer |> write("{repeat("\t",tab)}{svtype} _for_range_{expr.iteratorVariables[index].name} = ")
    def override visitExprForSource(expr:smart_ptr<ExprFor>;source:ExpressionPtr;last:bool) : ExpressionPtr
        var index = get_for_source_index(expr,source)
        if self->isDimFor(source)
            pass
        elif self->isRangeFor(source)
            *writer |> write(";")
            self->newLine(1)
            let sname = "{expr.iteratorVariables[index].name}"
            let stype = "{self->describe_glsl_type(expr.iteratorVariables[index]._type)}"
            *writer |> write("{repeat("\t",tab)}{stype} {sname} = _for_range_{sname}.x;")
        return source
    def override preVisitExprForBody(expr:smart_ptr<ExprFor>)
        self->newLine(1)
        *writer |> write("{repeat("\t",tab)}while ( ")
        for source,svar,iter in expr.sources,expr.iteratorVariables,expr.iterators
            if iter != expr.iterators[0]
                *writer |> write(" && ")
            if self->isDimFor(source)
                let sdim = source._type.dim[length(source._type.dim)-1]
                *writer |> write("{svar.name}!={sdim}")
                let newsrc = "{self->describe_subexpression(source)}[{svar.name}]"
                renames |> push([[auto "{iter}", newsrc]])
            elif self->isRangeFor(source)
                *writer |> write("{svar.name}!=_for_range_{svar.name}.y")
        *writer |> write(" )")
        self->newLine(1)
        *writer |> write("{repeat("\t",tab)}\{")
        self->newLine(1)
        *writer |> write("{repeat("\t",tab-1)}")
    def override visitExprFor(expr:smart_ptr<ExprFor>) : ExpressionPtr
        for svar,source in expr.iteratorVariables,expr.sources
            *writer |> write("{repeat("\t",tab)}")
            if self->isDimFor(source)
                renames |> pop()
                *writer |> write("{svar.name}++;")
            elif self->isRangeFor(source)
                *writer |> write("{svar.name}++;")
            self->newLine(1)
        *writer |> write("{repeat("\t",tab)}\}\}")
        return expr
// make variant
    def override preVisitExprMakeVariant(expr:smart_ptr<ExprMakeVariant>)
        self->error ("variant is not supported", expr.at)
// make structure
    def override preVisitExprMakeStruct(expr:smart_ptr<ExprMakeStruct>)
        self->error ("structure initialization is not supported YET", expr.at)
// make array
    def override preVisitExprMakeArray(expr:smart_ptr<ExprMakeArray>)
        let atype = self->describe_glsl_type(expr._type)
        *writer |> write("({atype}(")
    def override visitExprMakeArray(expr:smart_ptr<ExprMakeArray>) : ExpressionPtr
        *writer |> write("))")
        return expr
    def override preVisitExprMakeArrayIndex(expr:smart_ptr<ExprMakeArray>;index:int;init:ExpressionPtr;last:bool) : void
        *writer |> write("(")
    def override visitExprMakeArrayIndex(expr:smart_ptr<ExprMakeArray>;index:int;init:ExpressionPtr;last:bool) : ExpressionPtr
        *writer |> write(")")
        if !last
            *writer |> write(",")
        return init

// make tuple
    def override preVisitExprMakeTuple(expr:smart_ptr<ExprMakeTuple>)
        // TODO: support nameless structure
        self->error ("tuple is not supported YET", expr.at)
// array comprehension
    def override preVisitExprArrayComprehension(expr:smart_ptr<ExprArrayComprehension>)
        self->error ("array comprehension is not supported", expr.at)
// type info
    def override preVisitExprTypeInfo(expr:smart_ptr<ExprTypeInfo>)
        self->error ("typeinfo is not supported", expr.at)
// ptr to ref
    def override preVisitExprPtr2Ref(expr:smart_ptr<ExprPtr2Ref>)
        self->error ("deref is not supported", expr.at)
// label
    def override preVisitExprLabel(expr:smart_ptr<ExprLabel>)
        self->error ("label is not supported", expr.at)
// goto
    def override preVisitExprGoto(expr:smart_ptr<ExprGoto>)
        self->error ("goto is not supported", expr.at)
// ref 2 ptr
    def override preVisitExprRef2Ptr(expr:smart_ptr<ExprRef2Ptr>)
        self->error ("addr is not supported", expr.at)
// ref to value
    def override preVisitExprRef2Value(expr:smart_ptr<ExprRef2Value>)
        *writer |> write("/*r2v*/ (")
    def override visitExprRef2Value(expr:smart_ptr<ExprRef2Value>) : ExpressionPtr
        *writer |> write(")")
        return expr
// @@
    def override preVisitExprAddr(expr:smart_ptr<ExprAddr>)
        self->error ("function addr is not supported", expr.at)
// assert / verify
    def override preVisitExprAssert(expr:smart_ptr<ExprAssert>) : void
        self->error ("assert is not supported", expr.at)
// static_assert
    def override preVisitExprStaticAssert(expr:smart_ptr<ExprStaticAssert>) : void
        self->error ("static_assert is not supported", expr.at)
// quote
    def override preVisitExprQuote(expr:smart_ptr<ExprQuote>) : void
        self->error ("quote is not supported", expr.at)
// debug
    def override preVisitExprDebug(expr:smart_ptr<ExprDebug>) : void
        self->error ("debug is not supported", expr.at)
// invoke
    def override preVisitExprInvoke(expr:smart_ptr<ExprInvoke>) : void
        self->error ("invoke is not supported", expr.at)
// erase
    def override preVisitExprErase(expr:smart_ptr<ExprErase>) : void
        self->error ("erase is not supported", expr.at)
// find
    def override preVisitExprFind(expr:smart_ptr<ExprFind>) : void
        self->error ("find is not supported", expr.at)
// key exists
    def override preVisitExprKeyExists(expr:smart_ptr<ExprKeyExists>) : void
        self->error ("keyexists is not supported", expr.at)
// ascend
    def override preVisitExprAscend(expr:smart_ptr<ExprAscend>)
        self->error ("new is not supported", expr.at)
// cast
    def override preVisitExprCast(expr:smart_ptr<ExprCast>)
        self->error ("cast is not supported", expr.at)
// delete
    def override preVisitExprDelete(expr:smart_ptr<ExprDelete>)
        self->error ("delete is not supported", expr.at)
// var
    def override preVisitExprVar(expr:smart_ptr<ExprVar>)
        let l = length(renames)
        let en = "{expr.name}"
        for i in range(l)
            let ri = l - i - 1
            if renames[ri].name == en
                *writer |> write(renames[ri].repl)
                return
        *writer |> write("{expr.name}")
// field
    def override visitExprField(expr:smart_ptr<ExprField>) : ExpressionPtr
        *writer |> write(".{expr.name}")
        return expr
// safe field
    def override preVisitExprSafeField(expr:smart_ptr<ExprSafeField>) : void
        self->error ("'?.' is not supported", expr.at)
// swizzle
    def override visitExprSwizzle(expr:smart_ptr<ExprSwizzle>) : ExpressionPtr
        *writer |> write(".")
        let f2name = [[string "x";"y";"z";"w"]]
        for fch in expr.fields
            let f = int(fch)
            *writer |> write("{f>=0 && f<=3 ? f2name[f] : "?"}")
        return expr
// is variant
    def override preVisitExprIsVariant(expr:smart_ptr<ExprIsVariant>) : void
        self->error ("'is' is not supported", expr.at)
// as variant
    def override preVisitExprAsVariant(expr:smart_ptr<ExprAsVariant>) : void
        self->error ("'as' is not supported", expr.at)
// safe as variant
    def override preVisitExprSafeAsVariant(expr:smart_ptr<ExprSafeAsVariant>) : void
        self->error ("'?as' is not supported", expr.at)
// op1
    def override preVisitExprOp1(expr:smart_ptr<ExprOp1>) : void
        let op = "{expr.op}"
        if op!="+++" && op!="---"
            *writer |> write(op)
        *writer |> write("(")
    def override visitExprOp1(expr:smart_ptr<ExprOp1>) : ExpressionPtr
        let op = "{expr.op}"
        *writer |> write(")")
        if op=="+++" || op=="---"
            *writer |> write("{slice(op,0,-1)}")
        return expr
// return
    def override preVisitExprReturn(expr:smart_ptr<ExprReturn>) : void
        *writer |> write("return ")
// yield
    def override preVisitExprYield(expr:smart_ptr<ExprYield>) : void
        self->error ("yield is not supported", expr.at)
// break
    def override preVisitExprBreak(expr:smart_ptr<ExprBreak>) : void
        *writer |> write("break")
// continue
    def override preVisitExprContinue(expr:smart_ptr<ExprContinue>) : void
        *writer |> write("continue")
// make block
    def override preVisitExprMakeBlock(expr:smart_ptr<ExprMakeBlock>) : void
        self->error ("'make block' is not supported", expr.at)
// make generator
    def override preVisitExprMakeGenerator(expr:smart_ptr<ExprMakeGenerator>) : void
        self->error ("'make generator' is not supported", expr.at)
// memzero
    def override preVisitExprMemZero(expr:smart_ptr<ExprMemZero>) : void
        self->error ("memzero is not supported", expr.at)
// const ptr
    def override preVisitExprConstPtr(expr:smart_ptr<ExprConstPtr>) : void
        self->error ("pointer is not supported", expr.at)
// const enumeraiton
    def override preVisitExprConstEnumeration(expr:smart_ptr<ExprConstEnumeration>) : void
        self->error ("enumeration is not supported", expr.at)
// const bitfield
    def override preVisitExprConstBitfield(expr:smart_ptr<ExprConstBitfield>) : void
        *writer |> write("{expr.value}")
// const int 8
    def override preVisitExprConstInt8(expr:smart_ptr<ExprConstInt8>) : void
        *writer |> write("{expr.value}")
// const int 16
    def override preVisitExprConstInt16(expr:smart_ptr<ExprConstInt16>) : void
        *writer |> write("{expr.value}")
// const int 64
    def override preVisitExprConstInt64(expr:smart_ptr<ExprConstInt64>) : void
        *writer |> write("{expr.value}")
// const int
    def override preVisitExprConstInt(expr:smart_ptr<ExprConstInt>) : void
        *writer |> write("{expr.value}")
// const int2
    def override preVisitExprConstInt2(expr:smart_ptr<ExprConstInt2>) : void
        *writer |> write("ivec2({expr.value})")
// const int3
    def override preVisitExprConstInt3(expr:smart_ptr<ExprConstInt3>) : void
        *writer |> write("ivec3({expr.value})")
// const int4
    def override preVisitExprConstInt4(expr:smart_ptr<ExprConstInt4>) : void
        *writer |> write("ivec4({expr.value})")
// const uint 8
    def override preVisitExprConstUInt8(expr:smart_ptr<ExprConstUInt8>) : void
        *writer |> write("{expr.value}")
// const uint 16
    def override preVisitExprConstUInt16(expr:smart_ptr<ExprConstUInt16>) : void
        *writer |> write("{expr.value}")
// const uint 64
    def override preVisitExprConstUInt64(expr:smart_ptr<ExprConstUInt64>) : void
        *writer |> write("{expr.value}")
// const uint
    def override preVisitExprConstUInt(expr:smart_ptr<ExprConstUInt>) : void
        *writer |> write("{expr.value}")
// const uint2
    def override preVisitExprConstUInt2(expr:smart_ptr<ExprConstUInt2>) : void
        *writer |> write("uvec2({expr.value})")
// const uint3
    def override preVisitExprConstUInt3(expr:smart_ptr<ExprConstUInt3>) : void
        *writer |> write("uvec3({expr.value})")
// const uint4
    def override preVisitExprConstUInt4(expr:smart_ptr<ExprConstUInt4>) : void
        *writer |> write("uvec4({expr.value})")
// const range
    def override preVisitExprConstRange(expr:smart_ptr<ExprConstRange>) : void
        *writer |> write("ivec2({expr.value})")
// const urnage
    def override preVisitExprConstURange(expr:smart_ptr<ExprConstURange>) : void
        *writer |> write("uvec2({expr.value})")
// const bool
    def override preVisitExprConstBool(expr:smart_ptr<ExprConstBool>) : void
        *writer |> write("{expr.value}")
// const float
    def override preVisitExprConstFloat(expr:smart_ptr<ExprConstFloat>) : void
        *writer |> write("{expr.value}")
// const float2
    def override preVisitExprConstFloat2(expr:smart_ptr<ExprConstFloat2>) : void
        *writer |> write("vec2({expr.value})")
// const float3
    def override preVisitExprConstFloat3(expr:smart_ptr<ExprConstFloat3>) : void
        *writer |> write("vec3({expr.value})")
// const float4
    def override preVisitExprConstFloat4(expr:smart_ptr<ExprConstFloat4>) : void
        *writer |> write("vec4({expr.value})")
// string
    def override preVisitExprConstString(expr:smart_ptr<ExprConstString>) : void
        self->error ("string constant is not supported", expr.at)
// const double
    def override preVisitExprConstDouble(expr:smart_ptr<ExprConstDouble>) : void
        *writer |> write("{expr.value}")
// fake context
    def override preVisitExprFakeContext(expr:smart_ptr<ExprFakeContext>) : void
        self->error ("__context__ is not supported", expr.at)
// fake line info
    def override preVisitExprFakeLineInfo(expr:smart_ptr<ExprFakeLineInfo>) : void
        self->error ("__lineinfo__ is not supported", expr.at)
// reader
    def override preVisitExprReader(expr:smart_ptr<ExprReader>) : void
        self->error ("call macro is not supported", expr.at)
// call macro
    def override preVisitExprCallMacro(expr:smart_ptr<ExprCallMacro>) : void
        self->error ("call macro is not supported", expr.at)


def generate_glsl(fnMain:FunctionPtr; var errors:array<string>; shaderType:ShaderType; version:int )
    var st = build_string() <| $ (var writer)
        var astVisitor = new GlslExport(writer,shaderType,version)
        unsafe
            astVisitor.astVisitorAdapter <- make_visitor(*astVisitor)
        collect_dependencies(fnMain) <| $ ( vfun, vvar )
            for f in vfun
                astVisitor.depFun[intptr(f)] = true
            for v in vvar
                astVisitor.depVar[intptr(v)] = true
            visit(compiling_program(), astVisitor.astVisitorAdapter)
        errors <- astVisitor.errors
        astVisitor.astVisitorAdapter := null
        unsafe
            delete astVisitor
    return st

def bind_uniform_function_name(fnMain:FunctionPtr)
    return "{fnMain.name}_bind_uniform"

def generate_bind_uniform_dummy(fnMain:FunctionPtr)
    var fn <- new [[Function() at = fnMain.at, atDecl = fnMain.at, name := bind_uniform_function_name(fnMain)]]
    fn.flags |= FunctionFlags generated
    fn.flags |= FunctionFlags exports   // note: this is temporary, until we are done with dependency collecting etc
    fn.result <- new [[TypeDecl() baseType=Type tVoid, at=fnMain.at]]
    fn.arguments |> emplace_new() <| new [[Variable() at=fnMain.at,
        name := "__program",
        _type <- new [[TypeDecl() at=fnMain.at, baseType=Type tUInt]]
    ]]
    fn.body <- new [[ExprBlock() at=fnMain.at]]
    if !(compiling_module() |> add_function(fn))
        panic("can't setup")
    return true

def generate_bind_uniform(fnMain:FunctionPtr; var fn:FunctionPtr)
    var blk <- new [[ExprBlock() at=fn.at]]
    collect_dependencies(fnMain) <| $ ( vfun, vvar )
        for vv in vvar
            if find_arg("uniform", vv.annotation) is tBool
                var cll_gul <- new [[ExprCall() at=vv.at, name:="glGetUniformLocation"]]
                cll_gul.arguments |> emplace_new() <| new [[ExprVar() at=vv.at, name:="__program"]]
                cll_gul.arguments |> emplace_new() <| new [[ExprConstString() at=vv.at, value:=vv.name]]
                var cll_uni <- new [[ExprCall() at=vv.at, name:="glUniformAny"]]
                cll_uni.arguments |> emplace(cll_gul)
                cll_uni.arguments |> emplace_new() <| new [[ExprVar() at=vv.at, name:=vv.name]]
                blk.list |>emplace(cll_uni)
    fn.body := blk
