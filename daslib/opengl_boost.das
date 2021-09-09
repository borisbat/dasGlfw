options indenting = 4

module opengl_boost shared

require opengl public

require daslib/safe_addr
require daslib/contracts
require daslib/ast_boost
require daslib/templates
require daslib/templates_boost

typedef
    GLenum = uint

// void glBufferData ( GLenum target, GLsizeiptr size, const void * data, GLenum usage ) {

[expect_any_array(arr)]
def glBufferData(target:GLenum; arr; usage:GLenum)
    unsafe
        assert(length(arr)>0)
        glBufferData(target, int64(length(arr)*typeinfo(sizeof arr[0])), reinterpret<void?> addr(arr[0]), usage)

def glVertexAttribPointer ( index:uint; size:int; tp:GLenum; normalized:bool; stride:int; offset:int )
    unsafe
        glVertexAttribPointer(index, size, tp, normalized, stride, reinterpret<void?> offset)

def create_shader ( src:string; shaderType:uint; canfail:bool = false )
    let s = glCreateShader(shaderType)
    glShaderSource(s, 1, safe_addr(src), null)
    glCompileShader(s)
    var status:int
    glGetShaderiv(s, GL_COMPILE_STATUS, safe_addr(status))
    if status==0
        if !canfail
            unsafe
                var log : uint8[512]
                var slog = reinterpret<string> addr(log[0])
                glGetShaderInfoLog(s, 512, null, slog)
                panic("FAILED TO CREATE SHADER ({status}):\n{slog}\n")
        return 0u
    else
        return s

def create_shader_program ( vertex,fragment:uint )
    let program = glCreateProgram()
    glAttachShader(program, vertex)
    glAttachShader(program, fragment)
    return program

def link_shader ( program:uint; canfail:bool = false )
    glLinkProgram(program)
    var status : int
    glGetProgramiv(program, GL_LINK_STATUS, safe_addr(status))
    if status==0
        if !canfail
            unsafe
                var log : uint8[512]
                var slog = reinterpret<string> addr(log[0])
                glGetProgramInfoLog(program, 512, null, slog)
                panic("FAILED TO LINK SHADER PROGRAM ({status}):\n{slog}\n")
        return false
    else
        return true


[structure_macro(name="vertex_buffer")]
class GlslVertexBuffer : AstStructureAnnotation
    def override apply ( var st:StructurePtr; var group:ModuleGroup; args:AnnotationArgumentList; var errors : das_string ) : bool
        var fn <- new [[Function() at = st.at, atDecl = st.at, name := "bind_vertex_buffer"]]
        fn.flags |= FunctionFlags generated
        fn.result <- new [[TypeDecl() baseType=Type tVoid, at=st.at]]
        fn.arguments |> emplace_new() <| new [[Variable() at=st.at,
            name := "self",
            _type <- new [[TypeDecl() at=st.at,
                baseType=Type tStructure,
                structType=get_ptr(st)
            ]]
        ]]
        var blk <- new [[ExprBlock() at=st.at]]
        var stype <- new [[TypeDecl() baseType=Type tStructure, structType=get_ptr(st), at=st.at]]
        for fld,attri in st.fields,range(100500)
            var cll_evaa <- new [[ExprCall() at=fld.at, name:="glEnableVertexAttribArray" ]]
            cll_evaa.arguments |> emplace_new() <| new [[ExprConstUInt() at=fld.at, value=uint(attri)]]
            blk.list |> emplace(cll_evaa)

            var num_attr = 0
            var attr_type = ""
            var is_norm = false

            var sa = find_arg("size",fld.annotation)
            if sa is tInt
                num_attr = sa as tInt

            var tp = find_arg("type",fld.annotation)
            if tp is tString
                attr_type = tp as tString

            var nm = find_arg("normalized",fld.annotation)
            if nm is tBool
                is_norm = nm as tBool

            if num_attr==0
                errors := "{fld.name} - undefined size"
                return false
            if attr_type==""
                errors := "{fld.name} = undefined argument type"
                return false

            var cll_vap <- new [[ExprCall() at=fld.at, name:="glVertexAttribPointer"]]
            cll_vap.arguments |> emplace_new() <| new [[ExprConstUInt() at=fld.at, value=uint(attri)]]
            cll_vap.arguments |> emplace_new() <| new [[ExprConstInt() at=fld.at, value=num_attr]]
            cll_vap.arguments |> emplace_new() <| new [[ExprVar() at=fld.at, name:=attr_type]]
            cll_vap.arguments |> emplace_new() <| new [[ExprConstBool() at=fld.at, value=is_norm]]
            cll_vap.arguments |> emplace_new() <| new [[ExprTypeInfo() at=fld.at, trait := "sizeof", typeexpr <- clone_type(stype)]]
            cll_vap.arguments |> emplace_new() <| new [[ExprTypeInfo() at=fld.at, trait := "offsetof",
                subtrait := fld.name, typeexpr <- clone_type(stype)]]
            blk.list |> emplace(cll_vap)
        stype := null
        fn.body <- blk
        append_annotation(fn,"templates","template",[{auto[]
            [[auto "self", [[RttiValue tBool=true]] ]]
        }])
        if !(compiling_module() |> add_function(fn))
            panic("can't setup")
        return true
