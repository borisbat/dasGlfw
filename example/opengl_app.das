require daslib/glfw_boost
require daslib/opengl_boost
require daslib/defer
require math


require daslib/safe_addr

let VERTEX_SRC = "
#version 330 core
layout(location=0) in vec2 position;
layout(location=1) in vec3 color;
out vec3 fColor;
void main()
\{
    fColor = color;
    gl_Position=vec4(position, 0.0, 1.0);
\}
"

let FRAGMENT_SRC = "
#version 330 core
in vec3 fColor;
out vec4 outputColor;
void main()
\{
    outputColor = vec4(fColor, 1.0);
\}
"

var vertex : uint
var fragment : uint
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
    vertex = create_shader(VERTEX_SRC, GL_VERTEX_SHADER)
    fragment = create_shader(FRAGMENT_SRC, GL_FRAGMENT_SHADER)
    program = create_shader_program(vertex, fragment)
    let result = link_shader(program)
    glGenVertexArrays(1, safe_addr(vao))
    glBindVertexArray(vao);
    glGenBuffers(1, safe_addr(vbo))
    glBindBuffer(GL_ARRAY_BUFFER, vbo)
    glBufferData(GL_ARRAY_BUFFER, vertices, GL_STATIC_DRAW)

def glfw_app ( title:string; blk : block<(w,h:int):void> )
    if glfwInit()==0
		panic("can't init glfw")
    defer <|
        glfwTerminate()
    // NOTE: opengl 3.3
    glfwWindowHint(int(GLFW_CONTEXT_VERSION_MAJOR), 3)
    glfwWindowHint(int(GLFW_CONTEXT_VERSION_MINOR), 3)
    glfwWindowHint(int(GLFW_OPENGL_PROFILE), int(GLFW_OPENGL_COMPAT_PROFILE))
    glfwWindowHint(int(GLFW_OPENGL_FORWARD_COMPAT), int(GL_TRUE))
    var window = glfwCreateWindow(1280, 720, title, null, null)
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
        invoke(blk, display_w, display_h)
        glfwMakeContextCurrent(window)
        glfwSwapBuffers(window)

[export]
def main
    glfw_app("Testing OpenGL 3.3") <| $(display_w, display_h)
        glViewport(0, 0, display_w, display_h)
        glClearColor(0.2, 0.2, 0.2, 1.0)
        glClearDepth(1.0lf)
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT)
        glEnable(GL_DEPTH_TEST)
        glDepthFunc(GL_LEQUAL)
        glUseProgram(program)
        glBindBuffer(GL_ARRAY_BUFFER, vbo)
        /*
        glEnableVertexAttribArray(0u)
        glVertexAttribPointer(0u, 2, GL_FLOAT, false, 5 * typeinfo(sizeof type<float>), 0)
        glEnableVertexAttribArray(1u)
        glVertexAttribPointer(1u, 3, GL_FLOAT, false, 5 * typeinfo(sizeof type<float>), 2 * typeinfo(sizeof type<float>))
        */
        bind_vertex_buffer(type<Vertex>)
        glDrawArrays(GL_TRIANGLES, 0, 3)
