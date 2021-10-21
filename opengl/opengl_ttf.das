options indenting = 4
options no_unused_block_arguments = false
options no_unused_function_arguments = false

module opengl_ttf shared private

require opengl/opengl_boost
require daslib/safe_addr
require daslib/math_boost

require stbtruetype

require math
require fio
require strings

var [[in, location=0]] v_position : float2
var [[in, location=1]] v_texcoord : float2
var [[uniform]] v_mvp : float4x4
var [[inout]] f_texcoord : float2
var [[out]] f_outputColor : float4
var [[uniform]] f_tex : sampler2D
var [[uniform]] f_tint : float3

[vertex_program(name="VERTEX_SRC",version=330)]
def vs_main
    f_texcoord = v_texcoord
    gl_Position = v_mvp * float4(v_position.x, v_position.y, 0.0, 1.0)

[fragment_program(name="FRAGMENT_SRC",version=330)]
def ps_main
    let tex = texture(f_tex,f_texcoord)
    f_outputColor = float4(f_tint.x,f_tint.y,f_tint.z,tex.w)

[vertex_buffer]
struct public FontVertex
    [[type=GL_FLOAT, size=2, normalized=false] ]xy : float2
    [[type=GL_FLOAT, size=2, normalized=false]] uv : float2

struct public Font
    ttf_buffer : array<uint8>
    cdata : array<stbtt_bakedchar>
    dim : int2
    pixel_height : float
    pwh : int2
    tex : uint

def public finalize ( var self:Font )
    glDeleteTextures(1, safe_addr(self.tex))

def public load_ttf(fname:string; dim:int2 = int2(512,512); pixel_height:float=32.0; pwh:int2 = int2(32,96); canfail:bool=false)
    var font : Font
    fopen(fname,"rb") <| $ ( fr )
        if fr!=null
            fmap(fr) <| $(data)
                font.ttf_buffer := data
        elif canfail
            panic("can't open {fname}")
    if !empty(font.ttf_buffer)
        font.dim = dim
        font.pixel_height = pixel_height
        font.pwh = pwh
        font.cdata |> resize(pwh.y-pwh.x+1)
        var temp : array<uint8>
        resize(temp, dim.x*dim.y)
        unsafe
            stbtt_BakeFontBitmap(
                addr(font.ttf_buffer[0]), 0,
                pixel_height,
                addr(temp[0]),
                dim.x, dim.y,
                pwh.x, pwh.y,
                addr(font.cdata[0]))
        glGenTextures(1, safe_addr(font.tex))
        glBindTexture(GL_TEXTURE_2D,font.tex)
        unsafe
            glTexImage2D(GL_TEXTURE_2D, 0, int(GL_ALPHA), dim.x, dim.y, 0, GL_ALPHA, GL_UNSIGNED_BYTE, addr(temp[0]))
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR)
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR)
        delete temp
    return <- font

def public create_quads ( font:Font; text:string; at:float2 = float2(0.) )
    var quads : array<FontVertex>
    quads |> reserve(length(text)*4)
    var q : stbtt_aligned_quad
    var x = at.x
    var y = at.y
    for Ch in text
        unsafe
            stbtt_GetBakedQuad(
                addr(font.cdata[0]),
                font.dim.x,font.dim.y,
                Ch-font.pwh.x,
                safe_addr(x),safe_addr(y),
                safe_addr(q),1)
        quads |> push <| [[FontVertex xy=float2(q.x0,q.y0), uv=float2(q.s0, q.t0)]]
        quads |> push <| [[FontVertex xy=float2(q.x1,q.y0), uv=float2(q.s1, q.t0)]]
        quads |> push <| [[FontVertex xy=float2(q.x1,q.y1), uv=float2(q.s1, q.t1)]]
        quads |> push <| [[FontVertex xy=float2(q.x0,q.y1), uv=float2(q.s0, q.t1)]]
    return <- quads

var private program : uint

def public create_ttf_objects
    program = create_shader_program(VERTEX_SRC,FRAGMENT_SRC)
    return program

def public get_ttf_program : tuple<vtx:string;frag:string>
    return [[auto VERTEX_SRC, FRAGMENT_SRC]]

def public set_ttf_objects(prog:uint)
    program = prog

def public draw_quads_2d ( font:Font; quads : array<FontVertex>; w,h,x,y:int; tint:float3 = float3(1.) )
    let view = translation(float3(x, y, 0))
    let projection = ortho_rh(0., float(w), float(h), 0., -1., 1.)
    let mvp = projection * view
    font |> draw_quads(quads, mvp, tint)

def public draw_quads ( font:Font; quads : array<FontVertex>; mvp:float4x4; tint:float3 = float3(1.) )
    assert(program!=0u,"missing create_ttf_objects or cache_ttf_objects somewhere in the initialization")
    if empty(quads)
        return
    glEnable(GL_BLEND)
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)
    glUseProgram(program)
    f_tex.texture2D = font.tex
    f_tint = tint
    v_mvp = mvp
    vs_main_bind_uniform(program)
    ps_main_bind_uniform(program)
    glBindVertexArray(0u)
    glBindBuffer(GL_ARRAY_BUFFER, 0u)
    unsafe
        bind_vertex_buffer(addr(quads[0]), type<FontVertex>)
    glDrawArrays(GL_QUADS, 0, length(quads))
    glUseProgram(0u)
    glDisable(GL_BLEND)


def public quads_dim ( quads : array<FontVertex> ) : tuple<vmin:float2;vmax:float2>
    if empty(quads)
        return [[auto float2(0.), float2(0.)]]
    var vmin = float2(FLT_MAX,FLT_MAX)
    var vmax = float2(-FLT_MAX,-FLT_MAX)
    for q in quads
        vmin = min(vmin, q.xy)
        vmax = max(vmax, q.xy)
    return [[auto vmin, vmax]]

enum public HJust
    left
    center
    right

enum public VJust
    top
    center
    bottom

def public quads_view ( quads : array<FontVertex>; scale:float2; h:HJust = HJust center; v:VJust = VJust center )
    if empty(quads)
        return [[float4x4]]
    let d = quads_dim(quads)
    var o : float2
    if h==HJust left
        o.x = -(d.vmax.x-d.vmin.x)*scale.x
    elif h==HJust center
        o.x = -(d.vmax.x+d.vmin.x)*0.5*scale.x
    else
        o.x = 0.
    if v==VJust bottom
        o.y = -(d.vmax.y-d.vmin.y)*scale.y
    elif v==VJust center
        o.y = -(d.vmax.y+d.vmin.y)*0.5*scale.y
    else
        o.y = 0.
    return compose(
        float4(o.x,o.y,0.,0.),
        float4(1,0,0,0),
        float4(scale.x,scale.y,0.,1.))



