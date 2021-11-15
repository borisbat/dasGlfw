#if __APPLE__
#define GLFW_EXPOSE_NATIVE_COCOA
#include <GLFW/glfw3.h>
#include <GLFW/glfw3native.h>
#endif

#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "module_glfw_include.h"

using namespace das;

#include "need_glfw.h"

#if USE_GENERATED
#define GLOBAL_NAMESPACE
#include "module_glfw.h"
#endif

#if defined(_MSC_VER)

#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>

namespace das {
    void * DAS_glfwGetNativeWindow(GLFWwindow* window) {
        auto wnd = glfwGetWin32Window(window);
        return (void *) wnd;
    }
}

#elif __APPLE__

namespace das {
    void * DAS_glfwGetNativeWindow(GLFWwindow* window) {
        auto wnd = glfwGetCocoaWindow(window);
        return (void *) wnd;
    }
}

#else
namespace das {
    void * DAS_glfwGetNativeWindow(GLFWwindow* window) {
        return null;
    }
}

#endif

void Module_glfw::initFunctions ( ) {
    addExtern<DAS_BIND_FUN(DAS_glfwGetNativeWindow)>(*this, lib, "glfwGetNativeWindow",SideEffects::worstDefault, "DAS_glfwGetNativeWindow")
	    ->args({"window"});

#if USE_GENERATED
#include "module_glfw.inc"
#endif
}
