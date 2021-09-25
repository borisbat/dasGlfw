options indenting = 4
options no_aot

module opengl_boost_internal shared private

require daslib/ast_boost
require daslib/templates
require daslib/templates_boost

require opengl

[structure_macro(name="vertex_buffer")]
class GlslVertexBuffer : AstStructureAnnotation
    def override apply ( var st:StructurePtr; var group:ModuleGroup; args:AnnotationArgumentList; var errors : das_string ) : bool
        // [template(self)] bind_vertex_buffer(vbo:uint; self:VertexType; vindex:uint=0u)
        var fn <- new [[Function() at = st.at, atDecl = st.at, name := "bind_vertex_buffer"]]
        fn.flags |= FunctionFlags generated
        fn.result <- new [[TypeDecl() baseType=Type tVoid, at=st.at]]
        fn.arguments |> emplace_new() <| new [[Variable() at=st.at,
            name := "ptrd",
            _type <- new [[TypeDecl() at=st.at, baseType=Type tPointer,
                flags=TypeDeclFlags _implicit | TypeDeclFlags constant]]
        ]]
        fn.arguments |> emplace_new() <| new [[Variable() at=st.at,
            name := "self",
            _type <- new [[TypeDecl() at=st.at,
                baseType=Type tStructure,
                structType=get_ptr(st)
            ]]
        ]]
        fn.arguments |> emplace_new() <| new [[Variable() at=st.at,
            name := "vindex",
            _type <- new [[TypeDecl() at=st.at, baseType=Type tUInt]],
            init <- new [[ExprConstUInt() at=st.at, value=0u]]
        ]]
        var blk <- new [[ExprBlock() at=st.at]]
        // for each field
        var stype <- new [[TypeDecl() baseType=Type tStructure, structType=get_ptr(st), at=st.at]]
        for fld,attri in st.fields,range(100500)
            // attri+vindex
            var vattr_i <- new [[ExprOp2() at=fld.at,
                op := "+",
                left <- new [[ExprConstUInt() at=fld.at, value=uint(attri)]],
                right <-  new [[ExprVar() at=fld.at, name:="vindex"]]
            ]]
            // glEnableVertexAttribArray(attri)
            var cll_evaa <- new [[ExprCall() at=fld.at, name:="glEnableVertexAttribArray" ]]
            cll_evaa.arguments |> emplace_new() <| clone_expression(vattr_i)
            blk.list |> emplace(cll_evaa)
            var num_attr = find_arg("size",fld.annotation) ?as tInt ?? 0
            var attr_type = find_arg("type",fld.annotation) ?as tString ?? ""
            var is_norm = find_arg("normalized",fld.annotation) ?as tBool ?? false
            if num_attr==0
                // TODO: determine size from attribute type
                errors := "{fld.name} - undefined size"
                return false
            if attr_type==""
                // TODO: determine type from attribute type
                errors := "{fld.name} = undefined argument type"
                return false
            // glVertexAttribPointer(attri, num_attr, attr_type, is_norm, sizeof(VertexType), offsetof(VertexType::fld))
            var cll_vap <- new [[ExprCall() at=fld.at, name:="glVertexAttribPointer"]]
            cll_vap.arguments |> emplace_new() <| clone_expression(vattr_i)
            cll_vap.arguments |> emplace_new() <| new [[ExprConstInt() at=fld.at, value=num_attr]]
            cll_vap.arguments |> emplace_new() <| new [[ExprVar() at=fld.at, name:=attr_type]]
            cll_vap.arguments |> emplace_new() <| new [[ExprConstBool() at=fld.at, value=is_norm]]
            cll_vap.arguments |> emplace_new() <| new [[ExprTypeInfo() at=fld.at, trait := "sizeof", typeexpr <- clone_type(stype)]]
            cll_vap.arguments |> emplace_new() <| new [[ExprVar() at=fld.at, name:="ptrd"]]
            cll_vap.arguments |> emplace_new() <| new [[ExprTypeInfo() at=fld.at, trait := "offsetof",
                subtrait := fld.name, typeexpr <- clone_type(stype)]]
            blk.list |> emplace(cll_vap)
            vattr_i := null
        stype := null
        fn.body <- blk
        append_annotation(fn,"templates","template",[{auto[]
            [[auto "self", [[RttiValue tBool=true]] ]]
        }])
        if !(compiling_module() |> add_function(fn))
            panic("can't setup")
        return true


