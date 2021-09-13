options indenting = 4

module opengl_state shared private

require opengl
require glfw
require debugapi
require rtti

require daslib/safe_addr

let opengl_cmp_func <- {{
    GL_NEVER => "GL_NEVER";
    GL_LESS => "GL_LESS";
    GL_EQUAL => "GL_EQUAL";
    GL_LEQUAL => "GL_LEQUAL";
    GL_GREATER => "GL_GREATER";
    GL_NOTEQUAL => "GL_NOTEQUAL";
    GL_GEQUAL => "GL_GEQUAL";
    GL_ALWAYS => "GL_ALWAYS"
}}

let opengl_cull_face_mode <- {{
    GL_FRONT => "GL_FRONT";
    GL_BACK => "GL_BACK";
    GL_FRONT_AND_BACK => "GL_FRONT_AND_BACK"
}}

let opengl_texture <- {{
    GL_TEXTURE0 => "GL_TEXTURE0";
    GL_TEXTURE1 => "GL_TEXTURE1";
    GL_TEXTURE2 => "GL_TEXTURE2";
    GL_TEXTURE3 => "GL_TEXTURE3";
    GL_TEXTURE4 => "GL_TEXTURE4";
    GL_TEXTURE5 => "GL_TEXTURE5";
    GL_TEXTURE6 => "GL_TEXTURE6";
    GL_TEXTURE7 => "GL_TEXTURE7";
    GL_TEXTURE8 => "GL_TEXTURE8";
    GL_TEXTURE9 => "GL_TEXTURE9";
    GL_TEXTURE10 => "GL_TEXTURE10";
    GL_TEXTURE11 => "GL_TEXTURE11";
    GL_TEXTURE12 => "GL_TEXTURE12";
    GL_TEXTURE13 => "GL_TEXTURE13";
    GL_TEXTURE14 => "GL_TEXTURE14";
    GL_TEXTURE15 => "GL_TEXTURE15";
    GL_TEXTURE16 => "GL_TEXTURE16";
    GL_TEXTURE17 => "GL_TEXTURE17";
    GL_TEXTURE18 => "GL_TEXTURE18";
    GL_TEXTURE19 => "GL_TEXTURE19";
    GL_TEXTURE20 => "GL_TEXTURE20";
    GL_TEXTURE21 => "GL_TEXTURE21";
    GL_TEXTURE22 => "GL_TEXTURE22";
    GL_TEXTURE23 => "GL_TEXTURE23";
    GL_TEXTURE24 => "GL_TEXTURE24";
    GL_TEXTURE25 => "GL_TEXTURE25";
    GL_TEXTURE26 => "GL_TEXTURE26";
    GL_TEXTURE27 => "GL_TEXTURE27";
    GL_TEXTURE28 => "GL_TEXTURE28";
    GL_TEXTURE29 => "GL_TEXTURE29";
    GL_TEXTURE30 => "GL_TEXTURE30";
    GL_TEXTURE31 => "GL_TEXTURE31"
}}

let opengl_blend_factor <- {{
    uint(GL_ZERO) => "GL_ZERO";
    uint(GL_ONE) => "GL_ONE";
    GL_SRC_COLOR => "GL_SRC_COLOR";
    GL_ONE_MINUS_SRC_COLOR => "GL_ONE_MINUS_SRC_COLOR";
    GL_SRC_ALPHA => "GL_SRC_ALPHA";
    GL_ONE_MINUS_SRC_ALPHA => "GL_ONE_MINUS_SRC_ALPHA";
    GL_DST_ALPHA => "GL_DST_ALPHA";
    GL_ONE_MINUS_DST_ALPHA => "GL_ONE_MINUS_DST_ALPHA";
    GL_DST_COLOR => "GL_DST_COLOR";
    GL_ONE_MINUS_DST_COLOR => "GL_ONE_MINUS_DST_COLOR";
    GL_SRC_ALPHA_SATURATE => "GL_SRC_ALPHA_SATURATE"
}}

let opengl_blend_equation <- {{
    GL_FUNC_ADD => "GL_FUNC_ADD";
    GL_FUNC_SUBTRACT => "GL_FUNC_SUBTRACT";
    GL_FUNC_REVERSE_SUBTRACT => "GL_FUNC_REVERSE_SUBTRACT";
    GL_MIN => "GL_MIN";
    GL_MAX => "GL_MAX"
}}

let opengl_logic_op <- {{
    GL_CLEAR => "GL_CLEAR";
    GL_SET => "GL_SET";
    GL_COPY => "GL_COPY";
    GL_COPY_INVERTED => "GL_COPY_INVERTED";
    GL_NOOP => "GL_NOOP";
    GL_INVERT => "GL_INVERT";
    GL_AND => "GL_AND";
    GL_NAND => "GL_NAND";
    GL_OR => "GL_OR";
    GL_NOR => "GL_NOR";
    GL_XOR => "GL_XOR";
    GL_EQUIV => "GL_EQUIV";
    GL_AND_REVERSE => "GL_AND_REVERSE";
    GL_AND_INVERTED => "GL_AND_INVERTED";
    GL_OR_REVERSE => "GL_OR_REVERSE";
    GL_OR_INVERTED => "GL_OR_INVERTED"
}}

let opengl_last_error <- {{
    uint(GL_NO_ERROR) => "GL_NO_ERROR";
    GL_INVALID_ENUM => "GL_INVALID_ENUM";
    GL_INVALID_VALUE => "GL_INVALID_VALUE";
    GL_INVALID_OPERATION => "GL_INVALID_OPERATION";
    GL_INVALID_FRAMEBUFFER_OPERATION => "GL_INVALID_FRAMEBUFFER_OPERATION";
    GL_OUT_OF_MEMORY => "GL_OUT_OF_MEMORY";
    GL_STACK_UNDERFLOW => "GL_STACK_UNDERFLOW";
    GL_STACK_OVERFLOW => "GL_STACK_OVERFLOW"
}}

def report_to_debugger ( var ctx:Context; category,name:string; value:auto(TT) )
    unsafe
        let tinfo = typeinfo(rtti_typeinfo value)
        let pdata = addr(value)
        report_context_state(ctx, category, name, addr(tinfo), pdata)

def report_bool ( var ctx:Context; what:uint; category,name:string )
    var any_test = false
    var d8 : uint8
    glGetBooleanv(what, safe_addr(d8))
    any_test = uint(d8)!=0u
    report_to_debugger(ctx, category, name, any_test)
    return any_test

def report_bool4 ( var ctx:Context; what:uint; category,name:string )
    var any_test : bool[4]
    var d8 : uint8[4]
    glGetBooleanv(what, safe_addr(d8))
    for a,d in any_test, d8
        a = int(d)!=0
    report_to_debugger(ctx, category, name, any_test)
    return <- any_test

def report_uint ( var ctx:Context; what:uint; category,name:string )
    var f : int
    glGetIntegerv(what, safe_addr(f))
    report_to_debugger(ctx, category, name, uint(f))
    return uint(f)

def report_float ( var ctx:Context; what:uint; category,name:string )
    var f : float
    glGetFloatv(what, safe_addr(f))
    report_to_debugger(ctx, category, name, f)
    return f

def report_float2 ( var ctx:Context; what:uint; category,name:string )
    var f : float2
    glGetFloatv(what, safe_addr(f.x))
    report_to_debugger(ctx, category, name, f)
    return f

def report_float4 ( var ctx:Context; what:uint; category,name:string )
    var f : float4
    glGetFloatv(what, safe_addr(f.x))
    report_to_debugger(ctx, category, name, f)
    return f

def report_enum ( var ctx:Context; what:uint; category,name:string; en:table<uint;string> )
    var d32 : int
    glGetIntegerv(what, safe_addr(d32))
    en |> find(uint(d32)) <| $ ( pname )
        if pname!=null
            report_to_debugger(ctx, category, name, *pname)
        else
            report_to_debugger(ctx, category, name, uint(d32))

class ContextStateAgent : DapiDebugAgent
    def override onCollect(var ctx:Context)
        if !ctx.category.opengl
            return
        // error
        var err = glGetLastError()
        opengl_last_error |> find(err) <| $ ( pname )
            if pname!=null
                report_to_debugger(ctx, "OPENGL", "last error", *pname)
            else
                report_to_debugger(ctx, "OPENGL", "last error", err)
        var state = glSetBreakOnOpenGLError(false)
        // program
        report_uint(ctx, GL_CURRENT_PROGRAM, "OPENGL program", "GL_CURRENT_PROGRAM")
        // array
        report_uint(ctx, GL_ARRAY_BUFFER_BINDING, "OPENGL arrays", "GL_ARRAY_BUFFER_BINDING")
        report_uint(ctx, GL_ELEMENT_ARRAY_BUFFER_BINDING, "OPENGL arrays","GL_ELEMENT_ARRAY_BUFFER_BINDING");
        // framebuffer
        report_uint(ctx, GL_DRAW_FRAMEBUFFER_BINDING, "OPENGL framebuffer", "GL_DRAW_FRAMEBUFFER_BINDING")
        report_uint(ctx, GL_READ_FRAMEBUFFER_BINDING, "OPENGL framebuffer", "GL_READ_FRAMEBUFFER_BINDING")
        // color test
        report_bool4(ctx, GL_COLOR_WRITEMASK, "OPENGL color buffer", "GL_COLOR_WRITEMASK")
        report_bool(ctx, GL_COLOR_LOGIC_OP, "OPENGL color buffer", "GL_COLOR_LOGIC_OP")
        report_enum(ctx, GL_LOGIC_OP_MODE, "OPENGL color buffer", "GL_LOGIC_OP_MODE", opengl_logic_op)
        // depth test
        report_bool(ctx, GL_DEPTH_TEST, "OPENGL depth/stenci", "GL_DEPTH_TEST")
        report_enum(ctx, GL_DEPTH_FUNC, "OPENGL depth/stenci", "GL_DEPTH_FUNC", opengl_cmp_func)
        report_bool(ctx, GL_DEPTH_WRITEMASK, "OPENGL depth/stenci", "GL_DEPTH_WRITE_MASK")
        report_float2(ctx, GL_DEPTH_RANGE, "OPENGL depth/stenci", "GL_DEPTH_RANGE")
        // cull face
        report_bool(ctx, GL_CULL_FACE, "OPENGL cull", "GL_CULL_FACE")
        report_enum(ctx, GL_CULL_FACE_MODE, "OPENGL cull", "GL_CULL_FACE_MODE", opengl_cull_face_mode)
        // blend
        report_bool(ctx, GL_BLEND, "OPENGL blend", "GL_BLEND")
        report_float4(ctx, GL_BLEND_COLOR, "OPENGL blend", "GL_BLEND_COLOR")
        report_enum(ctx, GL_BLEND_DST_ALPHA, "OPENGL blend", "GL_BLEND_DST_ALPHA", opengl_blend_factor)
        report_enum(ctx, GL_BLEND_DST_RGB, "OPENGL blend", "GL_BLEND_DST_RGB", opengl_blend_factor)
        report_enum(ctx, GL_BLEND_SRC_ALPHA, "OPENGL blend", "GL_BLEND_SRC_ALPHA", opengl_blend_factor)
        report_enum(ctx, GL_BLEND_SRC_RGB, "OPENGL blend", "GL_BLEND_SRC_RGB", opengl_blend_factor)
        report_enum(ctx, GL_BLEND_EQUATION_RGB, "OPENGL blend", "GL_BLEND_EQUATION_RGB", opengl_blend_equation)
        report_enum(ctx, GL_BLEND_EQUATION_ALPHA, "OPENGL blend", "GL_BLEND_EQUATION_ALPHA", opengl_blend_equation)
        // clear
        report_float4(ctx, GL_COLOR_CLEAR_VALUE, "OPENGL clear", "GL_COLOR_CLEAR_VALUE")
        report_float(ctx, GL_DEPTH_CLEAR_VALUE, "OPENGL clear", "GL_DEPTH_CLEAR_VALUE")
        report_uint(ctx, GL_STENCIL_CLEAR_VALUE, "OPENGL clear", "GL_STENCIL_CLEAR_VALUE")
        // texture
        report_enum(ctx, GL_ACTIVE_TEXTURE, "OPENGL texture", "GL_ACTIVE_TEXTURE", opengl_texture)
        report_uint(ctx, GL_TEXTURE_BINDING_1D, "OPENGL texture", "GL_TEXTURE_BINDING_1D")
        report_uint(ctx, GL_TEXTURE_BINDING_1D_ARRAY, "OPENGL texture", "GL_TEXTURE_BINDING_1D_ARRAY")
        report_uint(ctx, GL_TEXTURE_BINDING_2D, "OPENGL texture", "GL_TEXTURE_BINDING_2D")
        report_uint(ctx, GL_TEXTURE_BINDING_2D_ARRAY, "OPENGL texture", "GL_TEXTURE_BINDING_2D_ARRAY")
        report_uint(ctx, GL_TEXTURE_BINDING_2D_MULTISAMPLE, "OPENGL texture", "GL_TEXTURE_BINDING_2D_MULTISAMPLE")
        report_uint(ctx, GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY, "OPENGL texture", "GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY")
        report_uint(ctx, GL_TEXTURE_BINDING_3D, "OPENGL texture", "GL_TEXTURE_BINDING_3D")
        report_uint(ctx, GL_TEXTURE_BINDING_BUFFER, "OPENGL texture", "GL_TEXTURE_BINDING_BUFFER")
        report_uint(ctx, GL_TEXTURE_BINDING_CUBE_MAP, "OPENGL texture", "GL_TEXTURE_BINDING_CUBE_MAP")
        report_uint(ctx, GL_TEXTURE_BINDING_RECTANGLE, "OPENGL texture", "GL_TEXTURE_BINDING_RECTANGLE")
        report_uint(ctx, GL_TEXTURE_BINDING_BUFFER, "OPENGL texture", "GL_TEXTURE_BINDING_BUFFER")
        // restore state
        glSetBreakOnOpenGLError(state)



[export]
def opengl_state_agent ( ctx : Context )
    install_new_debug_agent(new ContextStateAgent(), "opengl")

[init,export]
def private auto_start_opengl_state()
    if !is_in_debug_agent_creation()
        if !has_debug_agent_context("opengl")
            fork_debug_agent_context(@@opengl_state_agent)
