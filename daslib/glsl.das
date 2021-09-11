options indenting = 4

module glsl shared public

require glsl_internal public

struct sampler2D
    texture : int

def texture(sampler:sampler2D;uv:float2)
    assert(false,"we should not be here\n")
    return float4(0.)

def textureSize(sampler:sampler2D;lod:int)
    assert(false,"we should not be here\n")
    return int2(0)

var gl_Position : float4

