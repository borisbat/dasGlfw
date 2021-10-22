#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "module_glfw_include.h"

using namespace das;

#include "need_glfw.h"

#if USE_GENERATED
#define GLOBAL_NAMESPACE
#include "module_glfw.h"
#endif

#ifdef _MSC_VER

#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>

namespace das {
    void * DAS_glfwGetWin32Window(GLFWwindow* window) {
        auto wnd = glfwGetWin32Window(window);
        return (void *) wnd;
    }
}

#endif

void Module_glfw::initFunctions ( ) {
#ifdef _MSC_VER
    addExtern<DAS_BIND_FUN(DAS_glfwGetWin32Window)>(*this, lib, "glfwGetWin32Window",SideEffects::worstDefault, "DAS_glfwGetWin32Window")
	    ->args({"window"});
#endif

#if USE_GENERATED
#include "module_glfw.inc"
#endif
}
