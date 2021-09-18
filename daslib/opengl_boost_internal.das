options indenting = 4
options no_aot

module opengl_boost_internal shared private

require daslib/ast_boost
require daslib/templates
require daslib/templates_boost

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


