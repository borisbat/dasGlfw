require daslib/glfw_boost
require daslib/defer
require math
require opengl

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

def createShader ( src:string; shaderType:uint )
    unsafe
        let s = glCreateShader(shaderType)
        glShaderSource(s, 1, addr(src), null)
        glCompileShader(s)
        var status:int
        glGetShaderiv(s, GL_COMPILE_STATUS, addr(status))
        if status==0
            var log : uint8[512]
            var slog = reinterpret<string> addr(log[0])
            glGetShaderInfoLog(s, 512, null, slog)
            print("FAILED TO CREATE SHADER ({status}):\n{slog}\n")
            return 0u
        return s

def createShaderProgram(vertex,fragment:uint)
    let program = glCreateProgram()
    glAttachShader(program, vertex)
    glAttachShader(program, fragment)
    return program

def linkShader(program:uint)
    unsafe
        glLinkProgram(program)
        var status : int
        glGetProgramiv(program, GL_LINK_STATUS, addr(status))
        if status==0
            var log : uint8[512]
            var slog = reinterpret<string> addr(log[0])
            glGetProgramInfoLog(program, 512, null, slog)
            print("FAILED TO LINK SHADER PROGRAM ({status}):\n{slog}\n")
            return false
        return true

var vertex : uint
var fragment : uint
var program : uint
var vao : uint
var vbo : uint

let vertices = [[float
        // x   y     r     g     b
        -0.5f; 0.5f;  0.0f; 0.0f; 0.0f;
        0.5f;  0.5f;  1.0f; 1.0f; 0.0f;
        0.5f; -0.5f;  1.0f; 0.0f; 0.0f
]]

def create_gl_objects
    vertex = createShader(VERTEX_SRC, GL_VERTEX_SHADER);
    if vertex==0u
        panic("can't create vertex shader")
    fragment = createShader(FRAGMENT_SRC, GL_FRAGMENT_SHADER)
    if fragment==0u
        panic("can't create fragment shader")
    program = createShaderProgram(vertex, fragment)
    if program==0u
        panic("can't create program")
    let result = linkShader(program)
    if !result
        panic("can't link program")
    glGenVertexArrays(1, safe_addr(vao))
    glBindVertexArray(vao);
    glGenBuffers(1, safe_addr(vbo))
    glBindBuffer(GL_ARRAY_BUFFER, vbo)
    unsafe
        glBufferData(GL_ARRAY_BUFFER, int64(length(vertices)*typeinfo(sizeof type<float>)), reinterpret<void?> addr(vertices[0]), GL_STATIC_DRAW)

def glfw_app ( title:string; blk : block<(w,h:int):void> )
    if glfwInit()==0
		panic("can't init glfw")
    defer <|
        glfwTerminate()
    // NOTE: opengl 3.3
    glfwWindowHint(int(GLFW_CONTEXT_VERSION_MAJOR), 3)
    glfwWindowHint(int(GLFW_CONTEXT_VERSION_MINOR), 3)
    glfwWindowHint(int(GLFW_OPENGL_PROFILE), int(GLFW_OPENGL_CORE_PROFILE))
    glfwWindowHint(int(GLFW_OPENGL_FORWARD_COMPAT), int(opengl::GL_TRUE))
    var window = glfwCreateWindow(1280, 720, title, null, null)
    if window==null
		panic("can't create window")
    defer <|
        glfwDestroyWindow(window)
    glfwSetKeyCallback(window) <| @ ( window, key, scancode, action, mods )
        print("keyCB:  {window} {key} {scancode} {action} {mods}\n")
    glfwSetCharCallback(window) <| @ ( window, ch )
        print("charCB: {window} {ch}\n")
    glfwSetCursorPosCallback(window) <| @ ( window, x, y )
        print("cursCB: {window} {x} {y}\n")
    glfwSetCursorEnterCallback(window) <| @ ( window, enter )
        print("centCB: {window} {enter}\n")
    glfwSetMouseButtonCallback(window) <| @ ( window, buttons, action, mods )
        print("mbutCB:  {window} {buttons} {action} {mods}\n")
    glfwSetScrollCallback(window) <| @ ( window, x, y )
        print("scrlCB: {window} {x} {y}\n")
    glfwMakeContextCurrent(window)
    create_gl_objects()
    while glfwWindowShouldClose(window)==0
        glfwPollEvents()
        var display_w, display_h : int
        glfwGetFramebufferSize(window, display_w, display_h)
        invoke(blk, display_w, display_h)
        glfwMakeContextCurrent(window)
        glfwSwapBuffers(window)

def to_ptr(offset:int)
    unsafe
        return reinterpret<void?> offset

[export]
def main
    glfw_app("Testing OpenGL 3.3") <| $(display_w, display_h)
        opengl::glViewport(0, 0, display_w, display_h)
        opengl::glClearColor(0.2, 0.2, 0.2, 1.0)
        opengl::glClearDepth(1.0lf)
        opengl::glClear(opengl::GL_COLOR_BUFFER_BIT|opengl::GL_DEPTH_BUFFER_BIT)
        opengl::glEnable(opengl::GL_DEPTH_TEST)
        opengl::glDepthFunc(opengl::GL_LEQUAL)
        glUseProgram(program)
        glBindBuffer(GL_ARRAY_BUFFER, vbo)
        glEnableVertexAttribArray(0u)
        glVertexAttribPointer(0u, 2, opengl::GL_FLOAT, uint8(opengl::GL_FALSE), 5 * typeinfo(sizeof type<float>), to_ptr(0))
        glEnableVertexAttribArray(1u)
        glVertexAttribPointer(1u, 3, opengl::GL_FLOAT, uint8(opengl::GL_FALSE), 5 * typeinfo(sizeof type<float>), to_ptr(2 * typeinfo(sizeof type<float>)))
        opengl::glDrawArrays(opengl::GL_TRIANGLES, 0, 3)
