require glfw/glfw_boost
require opengl/opengl_boost
require daslib/defer
require math

require daslib/safe_addr

var [[in, location=0]] v_position : float2
var [[in, location=1]] v_color : float3
var [[inout]] f_color : float3
var [[out]] f_outputColor : float4

[vertex_program(name="VERTEX_SRC",version=330)]
def vs_main
    f_color = v_color
    gl_Position = float4(v_position.x, v_position.y, 0.0, 1.0)

[fragment_program(name="FRAGMENT_SRC",version=330)]
def ps_main
    f_outputColor = float4(f_color.x, f_color.y, f_color.z, 1.0)

var program : uint
var vao : uint
var vbo : uint

[vertex_buffer]
struct Vertex
    [[type=GL_FLOAT, size=2, normalized=false]] xy : float2
    [[type=GL_FLOAT, size=3, normalized=false]] rgb : float3

let vertices = [[Vertex
        xy=float2(-0.5, 0.5), rgb=float3(0.0,0.0,0.0);
        xy=float2( 0.5, 0.5), rgb=float3(1.0,1.0,0.0);
        xy=float2( 0.5,-0.5), rgb=float3(1.0,0.0,0.0)
]]

def create_gl_objects
    program = create_shader_program(VERTEX_SRC,FRAGMENT_SRC)
    // vao
    glGenVertexArrays(1, safe_addr(vao))
    glBindVertexArray(vao);
    // vbo
    glGenBuffers(1, safe_addr(vbo))
    glBindBuffer(GL_ARRAY_BUFFER, vbo)
    glBufferData(GL_ARRAY_BUFFER, vertices, GL_STATIC_DRAW)
    bind_vertex_buffer(null, type<Vertex>)

[export]
def main
    if glfwInit()==0
		panic("can't init glfw")
    defer <|
        glfwTerminate()
    glfwInitOpenGL(3,3,true)
    glSetBreakOnOpenGLError(true)
    var window = glfwCreateWindow(1280, 720, "Hello triangle", null, null)
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
        // render
        glViewport(0, 0, display_w, display_h)
        glClearColor(0.2, 0.2, 0.2, 1.0)
        glClearDepth(1.0lf)
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT)
        glDepthFunc(GL_LEQUAL)
        glUseProgram(program)
        vs_main_bind_uniform(program)
        ps_main_bind_uniform(program)
        glBindVertexArray(vao)
        glDrawArrays(GL_TRIANGLES, 0, 3)
        // swap buffers
        glfwMakeContextCurrent(window)
        glfwSwapBuffers(window)
