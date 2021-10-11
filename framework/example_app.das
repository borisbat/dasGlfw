require glfw/glfw_boost
require glfw/glfw_live
require opengl/opengl_boost
require opengl/opengl_gen
require daslib/defer
require daslib/safe_addr
require daslib/decs_boost
require daslib/static_let

require math

var [[in, location=0]] v_position : float3
var [[in, location=1]] v_normal   : float3
var [[in, location=2]] v_texcoord : float2
var [[uniform]] v_model : float4x4
var [[uniform]] v_view : float4x4
var [[uniform]] v_projection : float4x4
var [[inout]] f_texcoord : float2
var [[inout]] f_normal : float3
var [[inout]] f_position : float3
var [[uniform]] f_kD : float
var [[uniform]] f_kS : float
var [[uniform]] f_pS : float
var [[uniform, binding=0]] f_tex : sampler2D
var [[out]] f_outputColor : float4

[vertex_program(name="PBR_VERTEX_SRC",version=330)]
def vs_preview
    f_texcoord = v_texcoord
    f_normal = normalize ( float3x3(v_model) * v_normal )
    let tpos = v_model * float4(v_position.x, v_position.y, v_position.z, 1.0)
    f_position = tpos.xyz
    gl_Position = v_projection * v_view * tpos

[fragment_program(name="LIT_FRAGMENT_SRC",version=330)]
def ps_preview
    let light_dir = normalize(float3(-1,-2,-3))
    let camera_dir = normalize(f_position)
    let normal = normalize(f_normal)
    // blinn-phong
    let k = -dot(light_dir,normal)
    let diffuse = float3(saturate(k)) * f_kD
    let refl = normalize ( reflect(camera_dir,normal) )
    let kS = saturate(dot(-light_dir,refl))
    let specular = float3(pow(kS,f_pS)*f_kS)
    f_outputColor.xyz = texture(f_tex,  f_texcoord).xyz *  diffuse + specular
    f_outputColor.w = 1.

var program : uint
var cube, sphere : Fragment
var tex : uint

[export]
def initialize
    cube <- gen_cube()
    sphere <- gen_sphere(32,16,false)
    tex = gen_tex_checkerboard(16, 16, 0xff404040 , 0xff808080)
    glBindTexture(GL_TEXTURE_2D, tex)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST)
    glBindTexture(GL_TEXTURE_2D, 0u)
    program = create_shader_program(PBR_VERTEX_SRC,LIT_FRAGMENT_SRC)

[export]
def shutdown
    glDeleteProgram(program)
    glDeleteTextures(1,safe_addr(tex))
    delete cube
    delete sphere

def draw_cube ( pos:float3; scale:float=1. )
    v_model = compose(float4(pos.x,pos.y,pos.z,0.0), float4(0.0), float4(scale))
    glUseProgram(program)
    f_kD = 1.0
    f_kS = 1.0
    f_pS = 24.0
    f_tex.texture2D = tex
    vs_preview_bind_uniform(program)
    ps_preview_bind_uniform(program)
    cube |> draw_fragment()
    glUseProgram(0u)

[export]
def display ( display_w, display_h : int )
    glViewport(0, 0, display_w, display_h)
    glClearColor(0.1, 0.1, 0.1, 1.0)
    glClearDepth(1.0lf)
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT)
    glEnable(GL_DEPTH_TEST)
    glDepthFunc(GL_LEQUAL)

    let aspect = display_h!=0 ? float(display_w)/float(display_h) : 1.
    v_view = look_at(
        float3(0.,25.,-25.),  // camera
        float3(0.,0.,0.),
        float3(0.,1.,0.)
    )
    v_projection = perspective_opengl( 45.0f*PI/180., aspect, 0.1f, 200.0f)   // bind projection

    for x in range(-10,10)
        for z in range(-10,10)
            draw_cube(float3(x, 0, z), 0.45)


    glDisable(GL_DEPTH_TEST)
    bind_ffp()
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
