require fio
require strings
require daslib/strings_boost
require daslib/cpp_gen
require ast

def fnPtrType(fname)
    return "PFN" + to_upper(fname) + "PROC"

[export]
def main
    // configure
    blocked_type_names <- [{auto[]
        "GLFWcharfun";
        "GLFWkeyfun";
        "GLFWmonitorfun";
        "GLFWscrollfun";
        "GLFWcharmodsfun";
        "GLFWjoystickfun";
        "GLFWwindowcontentscalefun";
        "GLFWmousebuttonfun";
        "GLFWerrorfun";
        "GLFWwindowfocusfun";
        "GLFWwindowclosefun";
        "GLFWwindowsizefun";
        "GLFWdropfun";
        "GLFWglproc"
    }]

    blocked_functions <- [{auto[]
        "operator delete";
        "operator new";
        "___report_gsfailure";      // straight up not necessary
        "__security_init_cookie";
        "__security_check_cookie"
    }]

    for_each_function(get_module("glfw"),"") <| $ ( fnc )
        blocked_functions |> push("{fnc.name}")

    for_each_global(get_module("glfw")) <| $ ( gvar )
        blocked_defines |> push("{gvar.name}")

    // generate
    allow_extern_c = true
    var args <- get_command_line_arguments()

    extra_args = "\"context\", \"lineinfo\""

    fopen("opengl_win32.inc","wb") <| $ ( fw )
        gen_fn_callback <- @ <| ( fn:ClangFunc )
            let fntype = getFunRetType(fn)
            let ptrtype = fnPtrType(fn.name)
            fprint(fw, "{fntype} {fn.name} ( ")
            for at,ai in fn.args,range(100500)
                if ai!=0
                    fprint(fw, ", ")
                var art = at.atype=="GLboolean" ? "bool" : at.atype
                fprint(fw, "{art} {at.name}")
            if length(fn.args) > 0
                fprint(fw, ", ")
            fprint(fw, "Context * __context__, LineInfoArg * __at__ ) \{\n")
            fprint(fw, "    static {ptrtype} fptr = ({ptrtype}) dasWglGetProcAddress(\"{fn.name}\");\n")
            fprint(fw, "    if (!fptr) __context__->throw_error_at(*__at__,\"OpenGL: method {fn.name} is NULL\");\n")
            fprint(fw, "    ")
            if fntype!="void"
                fprint(fw, "auto result = ")
            fprint(fw, "(*fptr)(")
            for at,ai in fn.args,range(100500)
                if ai!=0
                    fprint(fw, ", ")
                fprint(fw, "{at.name}")
            fprint(fw, ");\n")
            if fn.name!="glGetError"
                fprint(fw, "    checkOpenGLError(__context__,__at__);\n")
            if fntype!="void"
                fprint(fw, "    return result;\n")
            fprint(fw, "\}\n\n")
        bindHeaders(args[3], args[4])

    print("consts headers to bind: ${args[5]}\n")
    genDefineConstants(split(args[5], ";"), args[4])
