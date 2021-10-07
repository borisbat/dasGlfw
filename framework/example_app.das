require glfw/glfw_boost
require glfw/glfw_live
require opengl/opengl_boost
require daslib/defer
require daslib/safe_addr
require daslib/decs_boost

require math

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

[export]
def initialize
    program = create_shader_program(VERTEX_SRC, FRAGMENT_SRC)
    glGenVertexArrays(1, safe_addr(vao))
    glBindVertexArray(vao);
    glGenBuffers(1, safe_addr(vbo))
    glBindBuffer(GL_ARRAY_BUFFER, vbo)
    glBufferData(GL_ARRAY_BUFFER, vertices, GL_STATIC_DRAW)
    bind_vertex_buffer(null,type<Vertex>)

[export]
def shutdown
    glDeleteProgram(program)
    glDeleteBuffers(1,safe_addr(vbo))
    glDeleteVertexArrays(1,safe_addr(vao))

[export]
def display ( display_w, display_h : int )
    glViewport(0, 0, display_w, display_h)
    glClearColor(0.2, 0.2, 0.2, 1.0)
    glClearDepth(1.0lf)
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT)
    glEnable(GL_DEPTH_TEST)
    glDepthFunc(GL_LEQUAL)
    glUseProgram(program)
    glBindVertexArray(vao)
    vs_main_bind_uniform(program)
    ps_main_bind_uniform(program)
    glDrawArrays(GL_TRIANGLES, 0, 3)
    // panic("i failed")

[export]
def keypressed ( keycode, scancode, action, mods : int )
    print("[keypressed] {keycode} {scancode} {action} {mods}\n")

[export]
def charpressed ( charcode : uint )
    print("[charpressed] {charcode}\n")

[export]
def mousemoved ( x, y : double )
    print("[mousemoved] {x} {y}\n")

[export]
def mouseenter ( yes : bool )
    print("mouseenter {yes}\n")

[export]
def mousebutton ( button, action, mods : int )
    print("mousebutton {button} {action} {mods}\n" )

[export]
def mousescroll ( x, y : double )
    print("mousescroll {x} {y}\n" )

[export]
def main
    glfw_app("GLFW demo in app mode")

options debugger
