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

def report_to_debugger ( var ctx:Context; category,name:string; value:auto(TT) )
    unsafe
        let tinfo = typeinfo(rtti_typeinfo type<TT>)
        let pdata = addr(value)
        report_context_state(ctx, category, name, addr(tinfo), pdata)

def report_bool ( var ctx:Context; what:uint; name:string )
    var any_test = false
    var d8 : uint8
    glGetBooleanv(what, safe_addr(d8))
    any_test = uint(d8)!=0u
    report_to_debugger(ctx, "OPENGL", name, any_test)
    return any_test

def report_uint ( var ctx:Context; what:uint; name:string )
    var f : int
    glGetIntegerv(what, safe_addr(f))
    report_to_debugger(ctx, "OPENGL", name, uint(f))
    return uint(f)

def report_float ( var ctx:Context; what:uint; name:string )
    var f : float
    glGetFloatv(what, safe_addr(f))
    report_to_debugger(ctx, "OPENGL", name, f)
    return f

def report_float2 ( var ctx:Context; what:uint; name:string )
    var f : float2
    glGetFloatv(what, safe_addr(f.x))
    report_to_debugger(ctx, "OPENGL", name, f)
    return f

def report_float4 ( var ctx:Context; what:uint; name:string )
    var f : float4
    glGetFloatv(what, safe_addr(f.x))
    report_to_debugger(ctx, "OPENGL", name, f)
    return f

def report_enum ( var ctx:Context; what:uint; name:string; en:table<uint;string> )
    var d32 : int
    glGetIntegerv(what, safe_addr(d32))
    en |> find(uint(d32)) <| $ ( pname )
        if pname!=null
            report_to_debugger(ctx, "OPENGL", name, *pname)
        else
            report_to_debugger(ctx, "OPENGL", name, uint(d32))

class ContextStateAgent : DapiDebugAgent
    def override onCollect(var ctx:Context)
        if !ctx.category.opengl
            return
        // program
        report_uint(ctx, GL_CURRENT_PROGRAM, "GL_CURRENT_PROGRAM")
        // array
        report_uint(ctx, GL_ARRAY_BUFFER_BINDING, "GL_ARRAY_BUFFER_BINDING")
        report_uint(ctx, GL_ELEMENT_ARRAY_BUFFER_BINDING, "GL_ELEMENT_ARRAY_BUFFER_BINDING");
        // depth test
        if report_bool(ctx, GL_DEPTH_TEST, "GL_DEPTH_TEST")
            report_enum(ctx, GL_DEPTH_FUNC, "GL_DEPTH_FUNC", opengl_cmp_func)
        report_bool(ctx, GL_DEPTH_WRITEMASK, "GL_DEPTH_WRITE_MASK")
        report_float2(ctx, GL_DEPTH_RANGE, "GL_DEPTH_RANGE")
        // cull face
        if report_bool(ctx, GL_CULL_FACE, "GL_CULL_FACE")
            report_enum(ctx, GL_CULL_FACE_MODE, "GL_CULL_FACE_MODE", opengl_cull_face_mode)
        // clear
        report_float4(ctx, GL_COLOR_CLEAR_VALUE, "GL_COLOR_CLEAR_VALUE")
        report_float(ctx, GL_DEPTH_CLEAR_VALUE, "GL_DEPTH_CLEAR_VALUE")
        report_uint(ctx, GL_STENCIL_CLEAR_VALUE, "GL_STENCIL_CLEAR_VALUE")

[export]
def opengl_state_agent ( ctx : Context )
    install_new_debug_agent(new ContextStateAgent(), "opengl")

[init,export]
def private auto_start_opengl_state()
    if !is_in_debug_agent_creation()
        if !has_debug_agent_context("opengl")
            fork_debug_agent_context(@@opengl_state_agent)
