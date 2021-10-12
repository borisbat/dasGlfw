options persistent_heap
options persistent_string_heap
options gc

require glfw/glfw_boost
require glfw/glfw_live
require opengl/opengl_boost
require opengl/opengl_gen
require daslib/defer
require daslib/safe_addr
require daslib/decs_boost
require daslib/static_let
require daslib/random

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
var [[uniform, binding=0]] f_tex : sampler2D
var [[uniform]] f_Color : float3
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
    let light_dir = normalize(float3(-1,-4,-3))
    let camera_dir = normalize(f_position)
    let normal = normalize(f_normal)
    // blinn-phong
    let k = -dot(light_dir,normal)
    let diffuse = float3(saturate(k))
    f_outputColor.xyz = f_Color *  diffuse
    f_outputColor.w = 1.

var program : uint
var cube, sphere, cylinder : Fragment
var ground : Fragment
var tex : uint

[export]
def initialize(full_restart:bool)
    cube <- gen_cube()
    sphere <- gen_sphere(32,16,false)
    ground <- gen_plane(GenDirection xz)
    cylinder <- gen_cylinder(GenDirection xz, 32)
    tex = gen_tex_checkerboard(16, 16, 0xff404040 , 0xff808080)
    glBindTexture(GL_TEXTURE_2D, tex)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST)
    glBindTexture(GL_TEXTURE_2D, 0u)
    program = create_shader_program(PBR_VERTEX_SRC,LIT_FRAGMENT_SRC)
    if length(decsState.allArchetypes)==0 || full_restart
        print("create all new ecs objects\n")
        restart()
        var seed = random_seed(13)
        // walls
        for x in range(-10,10)
            for z in range(-10,10)
                if x==-10 || x==9 || z==-10 || z==9 || random_float(seed)<0.1
                    create_entity <| @ ( eid, cmp )
                        cmp |> set ( "eid", eid )
                        cmp |> set ( "pos", float3(x, 0, z))
                        cmp |> set ( "scale", 0.45)
                        // cmp |> set ( "pulse", -0.25)
                        cmp |> set ( "color", float3(1.,0.2,0.2))
                        cmp |> set ( "solid", true )
        // tank
        var tank_id = create_entity <| @ ( eid, cmp )
            cmp |> set ( "eid", eid )
            cmp |> set ( "pos", float3(-8, 0, -8))
            cmp |> set ( "vel", float3(0.))
            cmp |> set ( "scale", 0.45)
            cmp |> set ( "pulse", -0.25)
            cmp |> set ( "color", float3(1.,1.0,0.2))
            cmp |> set ( "tank", true )
        // tank tower
        create_entity <| @ ( eid, cmp )
            cmp |> set ( "eid", eid )
            cmp |> set ( "pos", float3(0.) )
            cmp |> set ( "col", float3(.5,.5,0.1))
            cmp |> set ( "tower_base",tank_id)
        commit()
    else
        print("continue with live ecs...\n")

[export]
def shutdown
    glDeleteProgram(program)
    glDeleteTextures(1,safe_addr(tex))
    delete cube
    delete sphere
    delete ground
    delete cylinder

def draw_cube ( pos:float3; scale:float; color:float3 )
    glUseProgram(program)
    v_model = compose(float4(pos.x,pos.y,pos.z,0.0), float4(0.0), float4(scale))
    f_Color = color
    f_tex.texture2D = tex
    vs_preview_bind_uniform(program)
    ps_preview_bind_uniform(program)
    cube |> draw_fragment()
    glUseProgram(0u)

def draw_ground_plane ( pos:float3; scale:float; color:float3 )
    glUseProgram(program)
    v_model = compose(float4(pos.x,pos.y,pos.z,0.0), float4(0.0), float4(scale))
    f_Color = color
    f_tex.texture2D = tex
    vs_preview_bind_uniform(program)
    ps_preview_bind_uniform(program)
    ground |> draw_fragment()
    glUseProgram(0u)

def draw_cylinder ( pos:float3; scale:float3; color:float3 )
    glUseProgram(program)
    v_model = compose(float4(pos.x,pos.y,pos.z,0.0), float4(0.0), float4(scale.x, scale.y, scale.z, 1.))
    f_Color = color
    f_tex.texture2D = tex
    vs_preview_bind_uniform(program)
    ps_preview_bind_uniform(program)
    // glPolygonMode( GL_FRONT_AND_BACK, GL_LINE )
    cylinder |> draw_fragment()
    // glPolygonMode( GL_FRONT_AND_BACK, GL_FILL )
    glUseProgram(0u)

var tick_dt = 1.0
var key_up = false
var key_down = false
var key_left = false
var key_right = false
var display_w = 0
var display_h = 0

[decs(stage="update")]
def update_tank ( eid:EntityId; var pos,vel:float3& )
    // drive tank
    let TANK_VEL = 2.
    if key_up
        vel = vel.z!=0. ? float3(0.) : float3(0.,0., TANK_VEL)
        key_up = false
    if key_down
        vel = vel.z!=0. ? float3(0.) : float3(0.,0.,-TANK_VEL)
        key_down = false
    if key_left
        vel = vel.x!=0. ? float3(0.) : float3(-TANK_VEL,0.,0.)
        key_left = false
    if key_right
        vel = vel.x!=0. ? float3(0.) : float3( TANK_VEL,0.,0.)
        key_right = false
    // clup and update pos
    var new_pos = pos + vel * tick_dt
    var old_pos = pos
    query <| $ [decs_require(solid)] ( pos : float3 )
        let dist = max(abs(pos.x-new_pos.x),abs(pos.z-new_pos.z))
        if dist < .9
            new_pos = old_pos
            vel = float3(0.)
    pos = new_pos
    // bounds of arena
    pos.x = clamp(pos.x, -10., 9.)
    pos.z = clamp(pos.z, -10., 9.)

[decs(stage="update")]
def update_cubes ( var scale,pulse:float& )
    let MIN_SCALE = 0.40
    let MAX_SCALE = 0.45
    scale += pulse * tick_dt
    if scale < MIN_SCALE
        scale = MIN_SCALE + (MIN_SCALE - scale)
        pulse = -pulse
    elif scale > MAX_SCALE
        scale = MAX_SCALE - (scale - MAX_SCALE)
        pulse = -pulse

[decs(stage="update_attachments")]
def update_towers ( eid:EntityId; var pos:float3&; tower_base:EntityId )
    var tower_pos & = pos
    let upd = query(tower_base) <| $ ( pos : float3 )
        tower_pos = pos
    if !upd
        delete_entity(eid)


[decs(stage="draw")]
def draw_cubes ( var pos:float3; scale:float; color:float3 )
    draw_cube(pos, scale, color)

[decs(stage="draw")]
def draw_towers ( pos:float3; col:float3 )
    draw_cylinder(pos + float3(0.,0.5,0.), float3(0.25,0.25,0.25), col)

[export]
def update ( dt : float )
    tick_dt = min(dt,1./30.)
    decs_stage("update")
    decs_stage("update_attachments")

def draw
    draw_ground_plane(float3(0.,-.5,0.), 12.0, float3(.3,.2,0.0))
    decs_stage("draw")

[export]
def display ( _display_w, _display_h : int )
    display_w = _display_w
    display_h = _display_h
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
    draw()
    glDisable(GL_DEPTH_TEST)
    bind_ffp()

[export]
def keypressed ( keycode, scancode, action, mods : int )
    print("[keypressed] {keycode} {scancode} {action} {mods}\n")
    if action==1
        key_up    = scancode==328
        key_down  = scancode==336
        key_left  = scancode==331
        key_right = scancode==333

[export]
def charpressed ( charcode : uint )
    pass // print("[charpressed] {charcode}\n")

[export]
def mousemoved ( x, y : double )
    pass // print("[mousemoved] {x} {y}\n")

[export]
def mouseenter ( yes : bool )
    pass // print("mouseenter {yes}\n")

[export]
def mousebutton ( button, action, mods : int )
    pass // print("mousebutton {button} {action} {mods}\n" )

[export]
def mousescroll ( x, y : double )
    pass // print("mousescroll {x} {y}\n" )

[export]
def main
    glfw_app("GLFW demo in app mode")

options debugger
require daslib/debug
