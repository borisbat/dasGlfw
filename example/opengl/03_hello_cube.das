require daslib/glfw_boost
require daslib/opengl_boost
require daslib/glsl
require daslib/defer
require math

require daslib/safe_addr

var [[in, location=0]] v_position : float3
var [[in, location=1]] v_color : float3
var [[in, location=2]] v_texcoord : float2
var [[uniform]] v_model : float4x4
var [[uniform]] v_view : float4x4
var [[uniform]] v_projection : float4x4
var [[inout]] f_color : float3
var [[inout]] f_texcoord : float2
var [[out]] f_outputColor : float4
var [[uniform]] f_tex : sampler2D

[vertex_program(name="VERTEX_SRC",version=330)]
def vs_main
    f_color = v_color
    f_texcoord = v_texcoord
    gl_Position = v_projection * v_view * v_model * float4(v_position.x, v_position.y, v_position.z, 1.0)

[fragment_program(name="FRAGMENT_SRC",version=330)]
def ps_main
    f_outputColor = texture(f_tex,f_texcoord) * float4(f_color.x, f_color.y, f_color.z, 1.0)

var vertex : uint
var fragment : uint
var program : uint
var vao : uint
var vbo : uint
var texture : uint

[vertex_buffer]
struct Vertex
    [[type=GL_FLOAT, size=3, normalized=false]] xyz : float3
    [[type=GL_FLOAT, size=3, normalized=false]] rgb : float3
    [[type=GL_FLOAT, size=2, normalized=false]] uv  : float2

let vertices = [[Vertex
        xyz=float3(-0.5f, -0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 0.0f);
        xyz=float3( 0.5f, -0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 0.0f);
        xyz=float3( 0.5f,  0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 1.0f);
        xyz=float3( 0.5f,  0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 1.0f);
        xyz=float3(-0.5f,  0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 1.0f);
        xyz=float3(-0.5f, -0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 0.0f);
        xyz=float3(-0.5f, -0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 0.0f);
        xyz=float3( 0.5f, -0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 0.0f);
        xyz=float3( 0.5f,  0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 1.0f);
        xyz=float3( 0.5f,  0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 1.0f);
        xyz=float3(-0.5f,  0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 1.0f);
        xyz=float3(-0.5f, -0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 0.0f);
        xyz=float3(-0.5f,  0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 0.0f);
        xyz=float3(-0.5f,  0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 1.0f);
        xyz=float3(-0.5f, -0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 1.0f);
        xyz=float3(-0.5f, -0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 1.0f);
        xyz=float3(-0.5f, -0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 0.0f);
        xyz=float3(-0.5f,  0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 0.0f);
        xyz=float3( 0.5f,  0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 0.0f);
        xyz=float3( 0.5f,  0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 1.0f);
        xyz=float3( 0.5f, -0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 1.0f);
        xyz=float3( 0.5f, -0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 1.0f);
        xyz=float3( 0.5f, -0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 0.0f);
        xyz=float3( 0.5f,  0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 0.0f);
        xyz=float3(-0.5f, -0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 1.0f);
        xyz=float3( 0.5f, -0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 1.0f);
        xyz=float3( 0.5f, -0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 0.0f);
        xyz=float3( 0.5f, -0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 0.0f);
        xyz=float3(-0.5f, -0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 0.0f);
        xyz=float3(-0.5f, -0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 1.0f);
        xyz=float3(-0.5f,  0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 1.0f);
        xyz=float3( 0.5f,  0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 1.0f);
        xyz=float3( 0.5f,  0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 0.0f);
        xyz=float3( 0.5f,  0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(1.0f, 0.0f);
        xyz=float3(-0.5f,  0.5f,  0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 0.0f);
        xyz=float3(-0.5f,  0.5f, -0.5f), rgb=float3(1.0f, 1.0f, 1.0f), uv=float2(0.0f, 1.0f)
]]

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
    texture = load_image_from_file("{get_das_root()}/modules/dasGlfw/example/opengl/image.png")

def radians(f:float)
    return f * PI / 180.0

[export]
def main
    if glfwInit()==0
		panic("can't init glfw")
    defer <|
        glfwTerminate()
    glfwInitOpenGL(3,3)
    var window = glfwCreateWindow(1280, 720, "Hello image", null, null)
    if window==null
		panic("can't create window")
    defer <|
        glfwDestroyWindow(window)
    glfwMakeContextCurrent(window)
    create_gl_objects()
    v_view = translation(float3(0.0f, 0.0f, -4.0f))
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
        let t = glfwGetTime()
        let fps = 60.
        if t > double(PI*fps)
            glfwSetTime(t - double(PI*fps))
        let rot = un_quat_from_unit_vec_ang(normalize(float3(1.,1.,0.)), radians(fps*float(t)))
        v_model = compose(float4(0.0), rot, float4(1.0))
        v_projection = perspective_opengl( radians(45.0f), float(display_w)/float(display_h), 0.1f, 50.0f)
        glUseProgram(program)
        glBindBuffer(GL_ARRAY_BUFFER, vbo)
        bind_vertex_buffer(type<Vertex>)
        glBindTexture(GL_TEXTURE_2D, texture)
        // TODO: uniform binding
        glUniform1i(glGetUniformLocation(program, "f_tex"), 0)
        glUniformMatrix4fv(glGetUniformLocation(program, "v_model"), v_model)
        glUniformMatrix4fv(glGetUniformLocation(program, "v_view"), v_view)
        glUniformMatrix4fv(glGetUniformLocation(program, "v_projection"), v_projection)
        // end TODO
        glDrawArrays(GL_TRIANGLES, 0, 36);
        glfwMakeContextCurrent(window)
        glfwSwapBuffers(window)
