options indenting = 4

module opengl_ttf shared private

require daslib/opengl_boost
require daslib/safe_addr

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

[vertex_program(name="VERTEX_SRC",version=330)]
def vs_main
    f_texcoord = v_texcoord
    gl_Position = v_mvp * float4(v_position.x, v_position.y, 0.0, 1.0)

[fragment_program(name="FRAGMENT_SRC",version=330)]
def ps_main
    let tex = texture(f_tex,f_texcoord)
    f_outputColor = float4(1.,1.,1.,tex.w)

struct public FontVertex
    xy : float2
    uv : float2

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

def public draw_quads ( font:Font; quads : array<FontVertex>; mvp:float4x4 )
    glBindVertexArray(0u)
    glDisable(GL_CULL_FACE)
    glEnable(GL_BLEND)
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)
    glUseProgram(program)
    f_tex.texture2D = font.tex
    v_mvp = mvp
    vs_main_bind_uniform(program)
    ps_main_bind_uniform(program)
    glEnableVertexAttribArray(0u)
    unsafe
        glVertexAttribPointer(0u,2,GL_FLOAT,false,typeinfo(sizeof type<FontVertex>),addr(quads[0].xy))
    glEnableVertexAttribArray(1u)
    unsafe
        glVertexAttribPointer(1u,2,GL_FLOAT,false,typeinfo(sizeof type<FontVertex>),addr(quads[0].uv))
    glDrawArrays(GL_QUADS, 0, length(quads))
    glUseProgram(0u)
    glEnable(GL_CULL_FACE)
    glDisable(GL_BLEND)

def public quads_view ( quads : array<FontVertex> )
    var vmin = float2(FLT_MAX,FLT_MAX)
    var vmax = float2(-FLT_MAX,-FLT_MAX)
    for q in quads
        vmin = min(vmin, q.xy)
        vmax = max(vmax, q.xy)
    let scale = 1.0 / (vmax.x-vmin.x)
    let offset = -(vmax+vmin) * 0.5 * scale
    return compose(
        float4(offset.x,offset.y,0.,0.),
        float4(1,0,0,0),
        float4(scale,scale,0.,1.))



