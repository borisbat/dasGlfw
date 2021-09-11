options indenting = 4

module opengl_boost shared

require opengl public

require daslib/opengl_state

require daslib/safe_addr
require daslib/contracts
require daslib/ast_boost
require daslib/templates
require daslib/templates_boost

require daslib/glsl public

require stbimage

require daslib/glfw_boost

require math

typedef
    GLenum = uint

def glUniformAny ( location:int; value:float4x4 )
    glUniformMatrix4fv(location, value)

def glUniformAny ( location:int; smp:sampler2D )
    glUniform1i(location, smp.texture)

def glUniformMatrix4fv ( location:int; value:float4x4 )
    unsafe
        glUniformMatrix4fv(location, 1, false, addr(value[0][0]))

def perspective_opengl(fovy,aspect,zNear,zFar:float)
	let tanHalfFovy = tan(fovy / 2.0);
    var Result : float4x4
    identity(Result)
    Result[0][0] = 1.0 / (aspect * tanHalfFovy)
    Result[1][1] = 1.0 / (tanHalfFovy)
    Result[2][2] = - (zFar + zNear) / (zFar - zNear)
    Result[2][3] = - 1.0
    Result[3][2] = - ( 2.0 * zFar * zNear) / (zFar - zNear)
    return Result

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
                panic("{src}\n\nFAILED TO CREATE SHADER ({status}):\n{slog}\n")
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

def create_shader_program ( vsrc,fsrc:string )
    let vertex = create_shader(vsrc, GL_VERTEX_SHADER)
    let fragment = create_shader(fsrc, GL_FRAGMENT_SHADER)
    let program = create_shader_program(vertex, fragment)
    link_shader(program)
    glDeleteShader(vertex)
    glDeleteShader(fragment)
    return program

def load_image_from_file ( fname:string; canfail:bool=false )
    var x, y, comp : int
    let data = stbi_load(fname, safe_addr(x), safe_addr(y), safe_addr(comp), 4)
    if data == null
        if !canfail
            let reason = stbi_failure_reason();
            panic(reason)
        return 0u
    else
        var texture_id : uint
        glGenTextures(1, safe_addr(texture_id))
        glBindTexture(GL_TEXTURE_2D, texture_id)
        glTexImage2D(GL_TEXTURE_2D, 0, int(GL_RGBA), x, y, 0, GL_RGBA, GL_UNSIGNED_BYTE, data)
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR)
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR)
        stbi_image_free(data)
        return texture_id

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


