options indenting = 4

module glsl shared public

require glsl_internal public

struct sampler2D
    width, height : int

def texture(sampler:sampler2D;uv:float2)
    assert(false,"we should not be here\n")
    return float4(0.)

var gl_Position : float4
