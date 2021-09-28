require glfw/glfw_boost
require opengl/opengl_boost
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
    program = create_shader_program(VERTEX_SRC,FRAGMENT_SRC)
    // vao
    glGenVertexArrays(1, safe_addr(vao))
    glBindVertexArray(vao)
    // vbo
    glGenBuffers(1, safe_addr(vbo))
    glBindBuffer(GL_ARRAY_BUFFER, vbo)
    glBufferData(GL_ARRAY_BUFFER, vertices, GL_STATIC_DRAW)
    bind_vertex_buffer(null,type<Vertex>)
    // texture
    texture = load_image_from_file("{get_das_root()}/modules/dasGlfw/example/opengl/image.png")

[export]
def main
    if glfwInit()==0
		panic("can't init glfw")
    defer <|
        glfwTerminate()
    glfwInitOpenGL(3,3,true)
    glSetBreakOnOpenGLError(true)
    var window = glfwCreateWindow(1280, 720, "Hello image", null, null)
    if window==null
		panic("can't create window")
    defer <|
        glfwDestroyWindow(window)
    glfwMakeContextCurrent(window)
    create_gl_objects()
    v_view = translation(float3(0.0f, 0.0f, -4.0f))             // bind view
    while glfwWindowShouldClose(window)==0
        glfwPollEvents()
        var display_w, display_h : int
        glfwGetFramebufferSize(window, display_w, display_h)
        let aspect = display_h!=0 ? float(display_w)/float(display_h) : 1.
        // render
        glViewport(0, 0, display_w, display_h)
        glClearColor(0.2, 0.2, 0.2, 1.0)
        glClearDepth(1.0lf)
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT)
        glEnable(GL_DEPTH_TEST)
        glDepthFunc(GL_LEQUAL)
        let t = glfwGetTime()
        if t > 1lf
            glfwSetTime(t - 1lf)
        let rot = un_quat_from_unit_vec_ang(normalize(float3(1.,1.,0.)), float(t)*PI*2.)
        v_model = compose(float4(0.0), rot, float4(1.0))        // bind model
        v_projection = perspective_opengl( 45.0f*PI/180., aspect, 0.1f, 50.0f)   // bind projection
        glUseProgram(program)
        f_tex.texture2D = texture
        vs_main_bind_uniform(program)
        ps_main_bind_uniform(program)
        glBindVertexArray(vao)
        glDrawArrays(GL_TRIANGLES, 0, 36);
        // swap buffers
        glfwMakeContextCurrent(window)
        glfwSwapBuffers(window)
