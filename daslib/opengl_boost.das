options indenting = 4

module opengl_boost shared

require opengl public

require daslib/opengl_state

require daslib/safe_addr
require daslib/contracts

require daslib/glsl public
require daslib/opengl_boost_internal public

require stbimage

require math

typedef
    GLenum = uint

def glTexParameteri ( target : uint; pname : uint; param : uint )
    glTexParameteri(target,pname,int(param))

def getTexture2DSize(tex:uint; mipLevel:int = 0)
    var w, h : int
    glBindTexture(GL_TEXTURE_2D, tex)
    glGetTexLevelParameteriv(GL_TEXTURE_2D, mipLevel, GL_TEXTURE_WIDTH, safe_addr(w))
    glGetTexLevelParameteriv(GL_TEXTURE_2D, mipLevel, GL_TEXTURE_HEIGHT, safe_addr(h))
    return int2(w,h)

def write_ssbo ( ssbo:uint; data:auto(TT) )
    glBindBuffer(GL_SHADER_STORAGE_BUFFER, ssbo)
    var p_mat = glMapBuffer(GL_SHADER_STORAGE_BUFFER, GL_WRITE_ONLY)
    unsafe
        *(reinterpret<TT - const?> p_mat) = data
    glUnmapBuffer(GL_SHADER_STORAGE_BUFFER)
    glBindBuffer(GL_SHADER_STORAGE_BUFFER, 0u)

def read_ssbo ( ssbo:uint; var data:auto(TT) )
    glBindBuffer(GL_SHADER_STORAGE_BUFFER, ssbo)
    var p_mat = glMapBuffer(GL_SHADER_STORAGE_BUFFER, GL_READ_ONLY)
    unsafe
        data = *(reinterpret<TT?> p_mat)
    glUnmapBuffer(GL_SHADER_STORAGE_BUFFER)
    glBindBuffer(GL_SHADER_STORAGE_BUFFER, 0u)

def bind_sampler_2d ( unit:int; tex:uint )
    glActiveTexture(GL_TEXTURE0 + uint(unit))
    glEnable(GL_TEXTURE_2D)
    glBindTexture(GL_TEXTURE_2D, tex)
    glActiveTexture(GL_TEXTURE0)

def bind_image_2d ( unit:int; tex:uint; format:uint; access:uint=GL_READ_WRITE )
    glBindImageTexture(uint(unit), tex, 0, false, 0, access, format)

def bind_ffp()
    glUseProgram(0u)
    glBindVertexArray(0u)
    glBindBuffer(GL_ARRAY_BUFFER, 0u)
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0u)
    glActiveTexture(GL_TEXTURE0)
    var maxAttr = 16
    glGetIntegerv(GL_MAX_VERTEX_ATTRIBS,safe_addr(maxAttr))
    for va in range(maxAttr)
        glDisableVertexAttribArray(uint(va))

def glUniformAny ( location:int; value:int )
    glUniform1i(location, value)

def glUniformAny ( location:int; value:int[] )
    glUniform1iv(location, length(value), safe_addr(value[0]))

def glUniformAny ( location:int; value:float )
    glUniform1f(location, value)

def glUniformAny ( location:int; value:float[] )
    glUniform1fv(location, length(value), safe_addr(value[0]))

def glUniformAny ( location:int; value:float2 )
    glUniform2fv(location, 1, safe_addr(value.x))

def glUniformAny ( location:int; value:float3 )
    glUniform3fv(location, 1, safe_addr(value.x))

def glUniformAny ( location:int; value:float4 )
    glUniform4fv(location, 1, safe_addr(value.x))

def glUniformAny ( location:int; value:float4x4 )
    glUniformMatrix4fv(location, value)

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

def glVertexAttribPointer ( index:uint; size:int; tp:GLenum; normalized:bool; stride:int; ptrd:void?; offset:int )
    unsafe
        var poffset = reinterpret<int8?> ptrd
        poffset += offset
        glVertexAttribPointer(index, size, tp, normalized, stride, poffset)

def create_shader ( src:string implicit; shaderType:uint; canfail:bool = false )
    let s = glCreateShader(shaderType)
    glShaderSource(s, 1, safe_addr(src), null)
    glCompileShader(s)
    var status:int
    glGetShaderiv(s, GL_COMPILE_STATUS, safe_addr(status))
    if status==0
        if !canfail
            unsafe
                var log : array<uint>
                resize(log, 4096)
                var slog = reinterpret<string> addr(log[0])
                glGetShaderInfoLog(s, 512, null, slog)
                panic("{src}\n\nFAILED TO CREATE SHADER ({status}):\n{slog}\n")
                delete log
        return 0u
    else
        return s

def create_shader_program ( vertex,fragment:uint )
    let program = glCreateProgram()
    glAttachShader(program, vertex)
    glAttachShader(program, fragment)
    return program

def create_shader_program ( compute:uint )
    let program = glCreateProgram()
    glAttachShader(program, compute)
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

def create_shader_program ( vsrc,fsrc:string implicit )
    let vertex = create_shader(vsrc, GL_VERTEX_SHADER)
    let fragment = create_shader(fsrc, GL_FRAGMENT_SHADER)
    let program = create_shader_program(vertex, fragment)
    link_shader(program)
    glDeleteShader(vertex)
    glDeleteShader(fragment)
    return program

def create_compute_shader_program ( csrc:string implicit )
    let compute = create_shader(csrc, GL_COMPUTE_SHADER)
    let program = create_shader_program(compute)
    link_shader(program)
    glDeleteShader(compute)
    return program

def create_ssbo ( var value:auto& )
    var ssbo : uint
    glGenBuffers(1, safe_addr(ssbo))
    glBindBuffer(GL_SHADER_STORAGE_BUFFER, ssbo)
    glBindBufferBase(GL_SHADER_STORAGE_BUFFER, 1u, ssbo)
    glBufferData(GL_SHADER_STORAGE_BUFFER, int64(typeinfo(sizeof value)), safe_addr(value), GL_DYNAMIC_COPY)
    glBindBuffer(GL_SHADER_STORAGE_BUFFER, 0u)
    return ssbo

def load_image_from_file ( fname:string implicit; canfail:bool=false )
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

