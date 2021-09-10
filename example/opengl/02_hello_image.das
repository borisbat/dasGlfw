require daslib/glfw_boost
require daslib/opengl_boost
require daslib/glsl
require daslib/defer
require math

require daslib/safe_addr

require stbimage

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

var [[in, location=0]] v_position : float2
var [[in, location=1]] v_color : float3
var [[in, location=2]] v_texcoord : float2
var [[inout]] f_color : float3
var [[inout]] f_texcoord : float2
var [[out]] f_outputColor : float4
var [[uniform]] f_tex : sampler2D

[vertex_program(name="VERTEX_SRC",version=330)]
def vs_main
    f_color = v_color
    f_texcoord = v_texcoord
    gl_Position = float4(v_position.x, v_position.y, 0.0, 1.0)

[fragment_program(name="FRAGMENT_SRC",version=330)]
def ps_main
    f_outputColor = texture(f_tex,f_texcoord) * float4(f_color.x, f_color.y, f_color.z, 1.0)

var vertex : uint
var fragment : uint
var program : uint
var vao : uint
var vbo : uint
var ebo : uint
var texture : uint

[vertex_buffer]
struct Vertex
    [[type=GL_FLOAT, size=2, normalized=false]] xy  : float2
    [[type=GL_FLOAT, size=3, normalized=false]] rgb : float3
    [[type=GL_FLOAT, size=2, normalized=false]] uv  : float2

let vertices = [[Vertex
        xy=float2(-0.5, 0.5), rgb=float3(0.0,0.0,0.0), uv=float2(0.0,0.0);
        xy=float2( 0.5, 0.5), rgb=float3(1.0,1.0,0.0), uv=float2(1.0,0.0);
        xy=float2( 0.5,-0.5), rgb=float3(1.0,0.0,0.0), uv=float2(1.0,1.0);
        xy=float2(-0.5,-0.5), rgb=float3(1.0,1.0,0.0), uv=float2(0.0,1.0)
]]

let indices = [[int 0; 1; 2; 2; 3; 0]]

def create_gl_objects
    vertex = create_shader(VERTEX_SRC, GL_VERTEX_SHADER)
    fragment = create_shader(FRAGMENT_SRC, GL_FRAGMENT_SHADER)
    program = create_shader_program(vertex, fragment)
    link_shader(program)
    glGenVertexArrays(1, safe_addr(vao))
    glBindVertexArray(vao);
    glGenBuffers(1, safe_addr(vbo))
    glBindBuffer(GL_ARRAY_BUFFER, vbo)
    glBufferData(GL_ARRAY_BUFFER, vertices, GL_STATIC_DRAW)
    glGenBuffers(1, safe_addr(ebo))
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo)
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, int64(length(indices)*typeinfo(sizeof type<int>)), safe_addr(indices[0]), GL_STATIC_DRAW)
    texture = load_image_from_file("image.png")

[export]
def main
    if glfwInit()==0
		panic("can't init glfw")
    defer <|
        glfwTerminate()
    // NOTE: opengl 3.3
    glfwWindowHint(int(GLFW_CONTEXT_VERSION_MAJOR), 3)
    glfwWindowHint(int(GLFW_CONTEXT_VERSION_MINOR), 3)
    glfwWindowHint(int(GLFW_OPENGL_PROFILE), int(GLFW_OPENGL_COMPAT_PROFILE))
    glfwWindowHint(int(GLFW_OPENGL_FORWARD_COMPAT), int(GL_TRUE))
    var window = glfwCreateWindow(1280, 720, "Hello image", null, null)
    if window==null
		panic("can't create window")
    defer <|
        glfwDestroyWindow(window)
    glfwMakeContextCurrent(window)
    create_gl_objects()
    while glfwWindowShouldClose(window)==0
        glfwPollEvents()
        var display_w, display_h : int
        glfwGetFramebufferSize(window, display_w, display_h)
        glViewport(0, 0, display_w, display_h)
        glClearColor(0.2, 0.2, 0.2, 1.0)
        glClearDepth(1.0lf)
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT)
        glEnable(GL_DEPTH_TEST)
        glDepthFunc(GL_LEQUAL)
        glUseProgram(program)
        glBindBuffer(GL_ARRAY_BUFFER, vbo)
        bind_vertex_buffer(type<Vertex>)
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo)
        glBindTexture(GL_TEXTURE_2D, texture)
        glUniform1i(glGetUniformLocation(program, "f_tex"), 0)  // TODO: uniform binding
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, null)
        glfwMakeContextCurrent(window)
        glfwSwapBuffers(window)


