options indenting = 4
options no_unused_block_arguments = false
options no_unused_function_arguments = false

module opengl_gen public

require opengl/opengl_boost public
require daslib/safe_addr
require math

[vertex_buffer]
struct PreviewVertex
    [[type=GL_FLOAT, size=3, normalized=false]] xyz    : float3
    [[type=GL_FLOAT, size=3, normalized=true]]  normal : float3
    [[type=GL_FLOAT, size=2, normalized=false]] uv     : float2

struct Fragment
    vertices : array<PreviewVertex>
    indices : array<int>
    prim : uint
    vao : uint
    vbo : uint
    ebo : uint

def public finalize ( var frag:Fragment )
    with frag
        delete vertices
        delete indices
        if vao != 0u
            glDeleteVertexArrays(1,safe_addr(vao))
        if vbo != 0u
            glDeleteBuffers(1,safe_addr(vbo))
        if ebo != 0u
            glDeleteBuffers(1,safe_addr(ebo))

def private create_objects ( var frag : Fragment )
    with frag
        glGenVertexArrays(1, safe_addr(vao))
        glBindVertexArray(vao)
        glGenBuffers(1, safe_addr(vbo))
        glBindBuffer(GL_ARRAY_BUFFER, vbo)
        glBufferData(GL_ARRAY_BUFFER, vertices, GL_STATIC_DRAW)
        bind_vertex_buffer(null,type<PreviewVertex>)
        glGenBuffers(1, safe_addr(ebo))
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo)
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices, GL_STATIC_DRAW)

def public draw_fragment ( frag : Fragment )
    with frag
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo)
        glBindVertexArray(vao)
        glDrawElements(frag.prim, length(indices), GL_UNSIGNED_INT, null)

def private ssign ( x : float )
    return x>=0. ? 1. : -1.

def private get_uv ( xyz:float3; uv:float2; cube:bool )
    if cube
        let XYZ = abs(xyz)
        var UV : float2
        if XYZ.x >= XYZ.y && XYZ.x >= XYZ.z
            UV = xyz.yz*sign(xyz.x)
        elif XYZ.y >= XYZ.z
            UV = xyz.xz*sign(xyz.y)
        else
            UV = xyz.xy*sign(xyz.z)
        return UV*0.5 + float2(0.5)
    else
        return uv

def gen_sphere ( sectorCount,stackCount:int; cubeUV : bool )
    var frag : Fragment
    let sectorStep = 2. * PI / float(sectorCount)
    let stackStep = PI / float(stackCount)
    for i in range(stackCount+1)
        let stackAngle = PI / 2. -  float(i) * stackStep
        let xy = cos(stackAngle)
        let z  = sin(stackAngle)
        for j in range(sectorCount+1)
            let sectorAngle = float(j) * sectorStep
            let x = xy * cos(sectorAngle)
            let y = xy * sin(sectorAngle)
            let s = float(j) / float(sectorCount)
            let t = float(i) / float(stackCount)
            frag.vertices |> push <| [[PreviewVertex
                xyz=float3(x,y,z),
                normal=normalize(float3(x,y,z)),
                uv=get_uv(float3(x,y,z),float2(s,t),cubeUV)
            ]]
    var indices : array<int>
    var k1, k2 : int
    for i in range(stackCount)
        k1 = i * (sectorCount + 1)
        k2 = k1 + sectorCount + 1
        for j in range(sectorCount)
            if i != 0
                frag.indices |> push(k1)
                frag.indices |> push(k2)
                frag.indices |> push(k1 + 1)
            if i != (stackCount-1)
                frag.indices |> push(k1 + 1)
                frag.indices |> push(k2)
                frag.indices |> push(k2 + 1)
            ++k1
            ++k2
    frag.prim = GL_TRIANGLES
    frag |> create_objects()
    return <- frag

def gen_cube
    // cube ////////
    //    v6----- v5
    //   /|      /|
    //  v1------v0|
    //  | |     | |
    //  | |v7---|-|v4
    //  |/      |/
    //  v2------v3
    var frag : Fragment
    frag.vertices <- [{PreviewVertex
        xyz=float3( 1, 1, 1), normal=float3(  0, 0, 1),  uv=float2(0,0);              // v0 (front)
        xyz=float3(-1, 1, 1), normal=float3(  0, 0, 1),  uv=float2(1,0);              // v1
        xyz=float3(-1,-1, 1), normal=float3(  0, 0, 1),  uv=float2(1,1);              // v2
        xyz=float3( 1,-1, 1), normal=float3(  0, 0, 1),  uv=float2(0,1);              // v3
        xyz=float3( 1, 1, 1), normal=float3(  1, 0, 0),  uv=float2(0,0);              // v0 (right)
        xyz=float3( 1,-1, 1), normal=float3(  1, 0, 0),  uv=float2(1,0);              // v3
        xyz=float3( 1,-1,-1), normal=float3(  1, 0, 0),  uv=float2(1,1);              // v4
        xyz=float3( 1, 1,-1), normal=float3(  1, 0, 0),  uv=float2(0,1);              // v5
        xyz=float3( 1, 1, 1), normal=float3(  0, 1, 0),  uv=float2(0,0);              // v0 (top)
        xyz=float3( 1, 1,-1), normal=float3(  0, 1, 0),  uv=float2(1,0);              // v5
        xyz=float3(-1, 1,-1), normal=float3(  0, 1, 0),  uv=float2(1,1);              // v6
        xyz=float3(-1, 1, 1), normal=float3(  0, 1, 0),  uv=float2(0,1);              // v1
        xyz=float3(-1, 1, 1), normal=float3( -1, 0, 0),  uv=float2(0,0);              // v1 (left)
        xyz=float3(-1, 1,-1), normal=float3( -1, 0, 0),  uv=float2(1,0);              // v6
        xyz=float3(-1,-1,-1), normal=float3( -1, 0, 0),  uv=float2(1,1);              // v7
        xyz=float3(-1,-1, 1), normal=float3( -1, 0, 0),  uv=float2(0,1);              // v2
        xyz=float3(-1,-1,-1), normal=float3(  0,-1, 0),  uv=float2(0,0);              // v7 (bottom)
        xyz=float3( 1,-1,-1), normal=float3(  0,-1, 0),  uv=float2(1,0);              // v4
        xyz=float3( 1,-1, 1), normal=float3(  0,-1, 0),  uv=float2(1,1);              // v3
        xyz=float3(-1,-1, 1), normal=float3(  0,-1, 0),  uv=float2(0,1);              // v2
        xyz=float3( 1,-1,-1), normal=float3(  0, 0,-1),  uv=float2(0,0);              // v4 (back)
        xyz=float3(-1,-1,-1), normal=float3(  0, 0,-1),  uv=float2(1,0);              // v7
        xyz=float3(-1, 1,-1), normal=float3(  0, 0,-1),  uv=float2(1,1);              // v6
        xyz=float3( 1, 1,-1), normal=float3(  0, 0,-1),  uv=float2(0,1) }]            // v5
    frag.indices <- [{int
         0; 1; 2;   2; 3; 0;      // front
         4; 5; 6;   6; 7; 4;      // right
         8; 9;10;  10;11; 8;      // top
        12;13;14;  14;15;12;      // left
        16;17;18;  18;19;16;      // bottom
        20;21;22;  22;23;20 }]    // back
    frag.prim = GL_TRIANGLES
    frag |> create_objects()
    return <- frag

def gen_tex_checkerboard(w,h:int; c1,c2:uint)
    var cbt : array<uint>
    cbt |> resize(w*h)
    for y in range(h)
        for x in range(w)
            cbt[y*w+x] = ((x^y)&1)!=0 ? c1 : c2
    var surf : uint
    unsafe
        surf = load_image_from_bytes(w, h, addr(cbt[0]))
    delete cbt
    return surf
