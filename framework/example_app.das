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
require daslib/math_boost
require math

let TANK_VEL = 2.                       // how fast tank drives
let TANK_SHELL_VELOCITY = 4.            // how fast cannon ball flys
let TANK_SHELL_COLOR = float3(1,1,0)
let TANK_TURRET_RELOAD_TIME = 0.3       // how long it takes to reload tank cannon
let TANK_SHELL_SIZE = 0.12

let TOWER_TURRET_RELOAD_TIME = 1.0      // how long it takes to reload tower cannon
let TOWER_ROT_SPEED = 25.*PI/180.       // rotation speed of a tower
let TURRET_SHELL_VELOCITY = 3.          // how fast turret cannon ball flys
let TURRET_SHELL_COLOR = float3(1,0,1)
let TURRET_SHELL_SIZE = 0.18

let KABOOM_TIME = 0.2
let KABOOM_COLOR = float3(1.,.8,.1)

var seed = random_seed(13)

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
var [[uniform]] f_Color : float4
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
    f_outputColor.xyz = f_Color.xyz *  diffuse
    f_outputColor.w = f_Color.w

var program : uint
var cube, sphere, cylinder : Fragment
var ground : Fragment
var tex : uint

[decs_template]
struct KeyControls
    key_up, key_down, key_left, key_right : bool

[decs_template]
struct MouseControls
    mouse_pos     : float2
    mouse_buttons : bitfield<left;center;right>

[decs_template]
struct Turret
    base        : EntityId
    last_target : float3
    dir         : float
    dir_vel     : float
    rot_speed   : float
    reload      : float
    reload_time : float

[decs_template]
struct Projectile
    pos        : float3
    vel        : float3
    color      : float3
    size       : float
    projectile : bool

[decs_template]
struct Kaboom
    pos        : float3
    radius     : float
    radius_vel : float
    time       : float
    time_max   : float

def make_tank ( pos:float3 )
    // tank
    var tank_id = create_entity <| @ ( eid, cmp )
        cmp |> set ( "eid", eid )
        cmp |> set ( "pos", pos)
        cmp |> set ( "vel", float3(0.))
        cmp |> set ( "scale", 0.45)
        cmp |> set ( "pulse", -0.25)
        cmp |> set ( "color", float3(1.,1.0,0.2))
        cmp |> set ( "tank", true )
        apply_decs_template(cmp, [[KeyControls]])
    // tank turret
    create_entity <| @ ( eid, cmp )
        cmp |> set ( "eid", eid )
        cmp |> set ( "pos", float3(0.) )
        cmp |> set ( "color", float3(.5,.5,0.1))
        apply_decs_template(cmp, [[Turret base=tank_id, reload_time=TANK_TURRET_RELOAD_TIME]])
        apply_decs_template(cmp, [[MouseControls]])

def make_tower ( pos:float3 )
    // tower
    var tower_id = create_entity <| @ ( eid, cmp )
        cmp |> set ( "eid", eid )
        cmp |> set ( "pos", pos)
        cmp |> set ( "scale", 0.45)
        cmp |> set ( "color", float3(1.0,0.2,1.0))
        cmp |> set ( "tower", true )
    // tower turret
    create_entity <| @ ( eid, cmp )
        cmp |> set ( "eid", eid )
        cmp |> set ( "pos", float3(0.) )
        cmp |> set ( "color", float3(.2,.2,0.5))
        apply_decs_template(cmp, [[Turret
            base=tower_id,
            reload_time=TOWER_TURRET_RELOAD_TIME,
            rot_speed=TOWER_ROT_SPEED
        ]])
        cmp |> set ( "ai_turret", true )

def make_wall( pos:float3; height : float )
    create_entity <| @ ( eid, cmp )
        cmp |> set ( "eid", eid )
        cmp |> set ( "pos", pos)
        cmp |> set ( "scale", 0.45)
        cmp |> set ( "height", height )
        // cmp |> set ( "pulse", -0.25)
        cmp |> set ( "color", float3(1.,0.2,0.2))
        cmp |> set ( "obstacle", true )

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
        // walls
        for x in range(-10,10)
            for z in range(-10,10)
                if x==-10 || x==9 || z==-10 || z==9
                    make_wall(float3(x,0,z),1.)
                elif random_float(seed)<0.1
                    make_wall(float3(x,0,z),0.7 + random_float(seed)*0.7)
        // tank
        make_tank(float3(-8, 0, -8))
        // tower
        make_tower(float3(7, 0, 7))
        make_tower(float3(0, 0,-6))
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

def draw_cube ( pos:float3; scale:float3; color:float3 )
    v_model = compose(float4(pos.x,pos.y,pos.z,0.0), float4(0.0), scale.xyzz)
    f_Color.xyz = color
    f_Color.w = 1.
    f_tex.texture2D = tex
    vs_preview_bind_uniform(program)
    ps_preview_bind_uniform(program)
    cube |> draw_fragment()

def draw_sphere ( pos:float3; scale:float; color:float3; alpha:float=1. )
    v_model = compose(float4(pos.x,pos.y,pos.z,0.0), float4(0.0), float4(scale))
    f_Color.xyz = color
    f_Color.w = alpha
    f_tex.texture2D = tex
    vs_preview_bind_uniform(program)
    ps_preview_bind_uniform(program)
    sphere |> draw_fragment()

def draw_ground_plane ( pos:float3; scale:float; color:float3 )
    v_model = compose(float4(pos.x,pos.y,pos.z,0.0), float4(0.0), float4(scale))
    f_Color.xyz = color
    f_Color.w = 1.
    f_tex.texture2D = tex
    vs_preview_bind_uniform(program)
    ps_preview_bind_uniform(program)
    ground |> draw_fragment()

def draw_cylinder ( tm:float4x4; color:float3 )
    v_model = tm
    f_Color.xyz = color
    f_Color.w = 1.
    f_tex.texture2D = tex
    vs_preview_bind_uniform(program)
    ps_preview_bind_uniform(program)
    cylinder |> draw_fragment()

def draw_cylinder ( pos:float3; scale:float; color:float3 )
    let tm = compose(float4(pos.x,pos.y,pos.z,0.0), float4(0), float4(scale, scale, scale, 1.))
    draw_cylinder(tm, color)

def draw_cylinder ( pos:float3; scale:float3; color:float3 )
    let tm = compose(float4(pos.x,pos.y,pos.z,0.0), float4(0), float4(scale.x, scale.y, scale.z, 1.))
    draw_cylinder(tm, color)

var tick_dt = 1.0
var display_w = 0
var display_h = 0

[decs(stage=update_controls)]
def update_turret_direction ( pos:float3; var turret:Turret; var ctrl:MouseControls )
    // project to 2d screen space
    var pos4d = v_projection * v_view * float4(pos.x, pos.y, pos.z, 1.0)
    pos4d = pos4d / pos4d.w
    let pos2d = (pos4d.xy * float2(0.5,-0.5) + float2(0.5)) * float2(display_w,display_h)
    // get rotation angle out of relative mouse position
    let dxy = ctrl.mouse_pos - pos2d
    let angle = atan2(dxy.y,dxy.x)
    turret.dir = angle

def fire_turret ( var turret_reload:float& implicit; turret_reload_time, turret_dir:float; pos:float3;
        velocity:float; color:float3; size:float )
    if turret_reload != 0.
        return
    turret_reload = turret_reload_time
    create_entity <| @ ( eid, cmp )
        cmp |> set ( "eid", eid )
        let qr = un_quat_from_unit_vec_ang(float3(0,1,0), turret_dir)
        let vel = quat_mul_vec(qr, float3(1.,0.,0.))
        apply_decs_template(cmp, [[Projectile
            pos = pos + float3(0.,0.625,0.) + vel*0.5,
            vel = vel * velocity,
            color = color,
            size = size
        ]])

[decs(stage=update_controls)]
def update_turret_cannon ( pos:float3; var turret:Turret; var ctrl:MouseControls )
    if ctrl.mouse_buttons.left
        fire_turret(turret.reload,turret.reload_time,turret.dir,pos,
            TANK_SHELL_VELOCITY,TANK_SHELL_COLOR,TANK_SHELL_SIZE)

def can_see ( src_pos,tgt_pos:float3 )
    let dist = distance(tgt_pos, src_pos)
    let ray = [[Ray origin=src_pos, dir=normalize(tgt_pos-src_pos)]]
    let found = find_query <| $ [REQUIRE(obstacle)] ( pos:float3 )
        let aabb = [[AABB min=pos-float3(0.5), max=pos+float3(0.5) ]]
        if is_intersecting(ray, aabb, 0.1, dist)
            return true
    return !found

[decs(stage=update_ai, REQUIRE=ai_turret)]
def update_ai ( eid:EntityId; var turret:Turret; pos:float3 )
    var target : float3
    let found = find_query <| $ [REQUIRE(tank)] ( pos:float3 )
        target = pos
        return true
    if !found
        return
    let seeTarget = can_see(pos, target)
    if seeTarget
        turret.last_target = target
        turret.base |> update_entity <| @ ( eidd, cmp )
            if !cmp |> has("pulse")
                cmp |> set("pulse",0.25)
    else
        turret.base |> update_entity <| @ ( eidd, cmp )
            cmp |> remove("pulse")
    let dxy = normalize((turret.last_target - pos).xz)
    var angle = atan2(-dxy.y,dxy.x)
    var A = angle - turret.dir
    if A > PI
        A -= 2. * PI
    if A < -PI
        A += 2. * PI
    if A > 0.
        turret.dir_vel = turret.rot_speed
    else
        turret.dir_vel = -turret.rot_speed
    if seeTarget && turret.reload==0. && abs(A) < PI/180.
        fire_turret(turret.reload,turret.reload_time,turret.dir,pos,
            TURRET_SHELL_VELOCITY,TURRET_SHELL_COLOR,TURRET_SHELL_SIZE)

[decs(stage=update)]
def update_turret_reload ( var turret:Turret )
    turret.reload = max(turret.reload - tick_dt, 0.)

[decs(stage=update)]
def update_turret_rotation ( var turret:Turret )
    turret.dir += turret.dir_vel * tick_dt
    if turret.dir < 0.
        turret.dir += 2.*PI
    if turret.dir > 2.*PI
        turret.dir -= 2.*PI

[decs(stage=update_controls)]
def update_tank_controls ( eid:EntityId; var pos,vel:float3&; var ctrl:KeyControls )
    // drive tank
    if ctrl.key_up
        vel = vel.z!=0. ? float3(0.) : float3(0.,0., TANK_VEL)
        ctrl.key_up = false
    if ctrl.key_down
        vel = vel.z!=0. ? float3(0.) : float3(0.,0.,-TANK_VEL)
        ctrl.key_down = false
    if ctrl.key_left
        vel = vel.x!=0. ? float3(0.) : float3(-TANK_VEL,0.,0.)
        ctrl.key_left = false
    if ctrl.key_right
        vel = vel.x!=0. ? float3(0.) : float3( TANK_VEL,0.,0.)
        ctrl.key_right = false

[decs(stage=update)]
def update_tank ( eid:EntityId; var pos,vel:float3& )
    // clmup and update pos
    // print("tank at {pos}, vel={vel}, dt={tick_dt}\n")
    var new_pos = pos + vel * tick_dt
    var trect = [[AABR
        min=float2(new_pos.x-0.45,new_pos.z-0.45),
        max=float2(new_pos.x+0.45,new_pos.z+0.45)
    ]]
    let collide = find_query <| $ [REQUIRE(obstacle)] ( pos : float3 )
        let wrect = [[AABR
            min=float2(pos.x-0.5,pos.z-0.5),
            max=float2(pos.x+0.5,pos.z+0.5)
        ]]
        if is_intersecting(trect,wrect)
            return true
    if !collide
        pos = new_pos
    // bounds of arena
    pos.x = clamp(pos.x, -10., 9.)
    pos.z = clamp(pos.z, -10., 9.)

[decs(stage=update)]
def update_pulses ( var scale,pulse:float& )
    let MIN_SCALE = 0.40
    let MAX_SCALE = 0.45
    scale += pulse * tick_dt
    if scale < MIN_SCALE
        scale = MIN_SCALE + (MIN_SCALE - scale)
        pulse = -pulse
    elif scale > MAX_SCALE
        scale = MAX_SCALE - (scale - MAX_SCALE)
        pulse = -pulse

[decs(stage=update)]
def update_projectile ( eid:EntityId; var proj:Projectile )
    proj.pos += proj.vel * tick_dt
    var trect = [[AABR
        min=float2(proj.pos.x-proj.size,proj.pos.z-proj.size),
        max=float2(proj.pos.x+proj.size,proj.pos.z+proj.size)
    ]]
    let collide = find_query <| $ [REQUIRE(obstacle)] ( pos : float3 )
        let wrect = [[AABR
            min=float2(pos.x-0.5,pos.z-0.5),
            max=float2(pos.x+0.5,pos.z+0.5)
        ]]
        if is_intersecting(trect,wrect)
            return true
    if collide
        create_entity <| @ ( eidd, cmp )
            cmp |> set("eid", eidd)
            apply_decs_template(cmp, [[Kaboom
                pos=proj.pos,
                radius=0.,
                radius_vel=(proj.size*proj.size)*150.,
                time=KABOOM_TIME,
                time_max=KABOOM_TIME
            ]])
    if collide || proj.pos.x< -12. || proj.pos.x > 12. || proj.pos.z < -12. || proj.pos.z > 12.
        delete_entity(eid)

[decs(stage=update)]
def update_kaboom ( eid:EntityId; var kaboom:Kaboom )
    kaboom.radius += kaboom.radius_vel*tick_dt
    kaboom.time -= tick_dt
    if kaboom.time < 0.
        delete_entity(eid)

[decs(stage=update_attachments)]
def update_turrets ( eid:EntityId; var pos:float3&; turret:Turret )
    var turret_pos & = pos
    let upd = query(turret.base) <| $ ( pos : float3 )
        turret_pos = pos
    if !upd
        delete_entity(eid)

[decs(stage=draw,REQUIRE=tower)]
def draw_towers ( var pos:float3; color:float3; scale:float )
    draw_cylinder(pos, scale, color)

[decs(stage=draw,REQUIRE=tank)]
def draw_tank ( var pos:float3; scale:float; color:float3 )
    draw_cube(pos, float3(scale), color)

[decs(stage=draw)]
def draw_walls ( var pos:float3; scale:float; height:float; color:float3 )
    v_model = compose(float4(pos.x,pos.y+height/2.,pos.z,0.0), float4(0.0),
        float4(scale,scale+height/2.,scale,1.))
    f_Color.xyz = color
    f_Color.w = 1.
    f_tex.texture2D = tex
    vs_preview_bind_uniform(program)
    ps_preview_bind_uniform(program)
    cube |> draw_fragment()

[decs(stage=draw)]
def draw_projectiles ( var proj:Projectile )
    draw_sphere(proj.pos, proj.size, proj.color)

[decs(stage=draw_transparent)]
def draw_kaboom ( var kaboom:Kaboom )
    draw_sphere(kaboom.pos, kaboom.radius, KABOOM_COLOR, kaboom.time/kaboom.time_max)

[decs(stage=draw)]
def draw_turrets ( pos:float3; color:float3; turret:Turret )
    draw_cylinder(pos + float3(0.,0.5,0.), float3(0.25,0.25,0.25), color)
    // build turret
    let cannon_recoil = 1. - turret.reload / turret.reload_time
    let rot_a = un_quat_from_unit_vec_ang(float3(0,1,0), turret.dir)
    let m_rota =compose(float4(0),rot_a,float4(1))
    let m_scale = compose(float4(0),float4(0),float4(.125,.3,.125,1.))
    let m_ofsa = compose(float4(0.3+0.2*cannon_recoil,.6,0.,0.),float4(0),float4(1))
    let rotSide = un_quat_from_unit_vec_ang(float3(0,0,1), PI/2.)
    let m_rot = compose(float4(0),rotSide,float4(1))
    let m_pos = compose(float4(pos.x,pos.y,pos.z,0.0), float4(0), float4(1))
    draw_cylinder ( m_pos * m_rota * m_ofsa * m_rot * m_scale, color )

[export]
def act ( dt : float )
    tick_dt = min(dt,1./30.)
    decs_stage("update_controls")
    decs_stage("update_ai")
    decs_stage("update")
    decs_stage("update_attachments")

def draw
    glUseProgram(program)
    draw_ground_plane(float3(0.,-.5,0.), 12.0, float3(.3,.2,0.0))
    decs_stage("draw")
    glEnable(GL_BLEND)
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)
    decs_stage("draw_transparent")
    glDisable(GL_BLEND)
    glUseProgram(0u)

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

var key_up = false
var key_down = false
var key_left = false
var key_right = false
var mouse_x = 0.
var mouse_y = 0.
var mouse_buttons : uint

[decs(stage=key_controls_changed)]
def update_key_controls(var ctr:KeyControls)
    ctr.key_up = key_up
    ctr.key_down = key_down
    ctr.key_left = key_left
    ctr.key_right = key_right

[decs(stage=mouse_controls_changed)]
def update_mouse_controls(var ctr:MouseControls)
    ctr.mouse_pos = float2(mouse_x,mouse_y)
    ctr.mouse_buttons = bitfield(mouse_buttons)

[export]
def keypressed ( keycode, scancode, action, mods : int )
    // print("[keypressed] {keycode} {scancode} {action} {mods}\n")
    if action==1
        key_up    = scancode==328 || scancode==17   // W
        key_down  = scancode==336 || scancode==31   // S
        key_left  = scancode==331 || scancode==30   // A
        key_right = scancode==333 || scancode==32   // D
        decs_stage("key_controls_changed")
        if keycode==81 && scancode==16  // letter Q
            query <| $ ( eid:EntityId; ctrl:KeyControls )
                eid |> update_entity <| @ ( eid, cmp )
                    remove_decs_template`KeyControls(cmp)

[export]
def charpressed ( charcode : uint )
    pass // print("[charpressed] {charcode}\n")

[export]
def mousemoved ( x, y : double )
    // print("[mousemoved] {x} {y}\n")
    mouse_x = float(x)
    mouse_y = float(y)
    decs_stage("mouse_controls_changed")

[export]
def mouseenter ( yes : bool )
    pass // print("mouseenter {yes}\n")

[export]
def mousebutton ( button, action, mods : int )
    if action!=0
        mouse_buttons |= uint(1<<button)
    else
        mouse_buttons &= ~ uint(1<<button)
    decs_stage("mouse_controls_changed")

[export]
def mousescroll ( x, y : double )
    pass // print("mousescroll {x} {y}\n" )

[export]
def main
    glfw_app("GLFW demo in app mode")

options debugger
require daslib/debug
