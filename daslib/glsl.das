options indenting = 4

module glsl shared public

require glsl_internal public

struct sampler2D
    texture : int

struct image2D
    texture : int

def texture(sampler:sampler2D;uv:float2)
    assert(false,"we should not be here\n")
    return float4(0.)

def textureOffset(sample:sampler2D; uv:float2; ofs:int2)
    assert(false,"we should not be here\n")
    return float4(0.)

def textureSize(sampler:sampler2D;lod:int)
    assert(false,"we should not be here\n")
    return int2(0)

[sideeffects]
def imageStore(img:image2D;uv:int2;data:float4)
    assert(false,"we should not be here\n")

def imageLoad(img:image2D;uv:int2)
    assert(false,"we should not be here\n")
    return float4(0.)

def imageSize(img:image2D)
    assert(false,"we should not be here\n")
    return int2(0)

[sideeffects]
def barrier
    assert(false,"we should not be here\n")

[sideeffects]
def memoryBarrierShared
    assert(false,"we should not be here\n")

var gl_NumWorkGroups : uint3        // global work group size we gave to glDispatchCompute()
var gl_WorkGroupSize : uint3        // local work group size we defined with layout
var gl_WorkGroupID : uint3          // position of current invocation in global work group
var gl_LocalInvocationID : uint3    // of current invocation in local work group
var gl_GlobalInvocationID : uint3	// unique index of current invocation in global work group
var gl_LocalInvocationIndex	: uint  // 1d index representation of gl_LocalInvocationID

var gl_Position : float4

