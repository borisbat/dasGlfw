require fio
require strings
require daslib/strings_boost
require daslib/cpp_gen


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
        "glfwDestroyWindow";        // we overwrite with custom one
        "___report_gsfailure";      // straight up not necessary
        "__report_gsfailure";
        "__security_init_cookie";
        "__security_check_cookie"
    }]

/*
    cmres_functions <- [{auto[]
        "ImGui_ImplVulkanH_SelectSurfaceFormat"
    }]
*/

    is_function_blocked <- @ <| ( fn:string ) : bool
        if fn |> starts_with("glfw")
            return false
        if fn |> starts_with("gl")
            return true
        return false

    // generate
    allow_extern_c = true
    var args <- get_command_line_arguments()
    bindHeaders(args[3], args[4])

    is_const_blocked <- @ <| ( defn:string ) : bool
        if defn |> starts_with("GL_")
            return true
        return false

    print("consts headers to bind: ${args[5]}\n")
    genDefineConstants(split(args[5], ";"), args[4])
