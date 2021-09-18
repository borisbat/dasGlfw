#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#define NO_GL_GLEXT_PROTOTYPES

#include "module_opengl_include.h"

using namespace das;

#include "need_opengl.h"

#if USE_GENERATED
#define GLOBAL_NAMESPACE
#include "module_opengl.h"
#endif

#if USE_GENERATED

namespace das {

void * dasWglGetProcAddress ( const char * );

___noinline void * dasGetProcAddress ( const char * name, Context * __context__, LineInfoArg * __at__) {
    auto res = dasWglGetProcAddress(name);
    if ( !res ) {
        TextWriter tw;
        tw << "OpenGL: " << name << " is NULL";
        __context__->throw_error_at(*__at__,tw.str().c_str());
    }
    return res;
}

void checkOpenGLError ( Context * __context__, LineInfoArg * __at__);

#include "opengl_win32.inc"

static bool g_breakOnOpenGLError = false;

static struct GlError { uint32_t code; const char * name; } g_glErrors[8] = {
    GL_NO_ERROR, "GL_NO_ERROR",
    GL_INVALID_ENUM, "GL_INVALID_ENUM",
    GL_INVALID_VALUE, "GL_INVALID_VALUE",
    GL_INVALID_OPERATION, "GL_INVALID_OPERATION",
    GL_INVALID_FRAMEBUFFER_OPERATION, "GL_INVALID_FRAMEBUFFER_OPERATION",
    GL_OUT_OF_MEMORY, "GL_OUT_OF_MEMORY",
    GL_STACK_UNDERFLOW, "GL_STACK_UNDERFLOW",
    GL_STACK_OVERFLOW, "GL_STACK_OVERFLOW"
};

static uint32_t g_glLastError = GL_NO_ERROR;

___noinline void checkOpenGLError ( Context * __context__, LineInfoArg * __at__) {
    if ( g_breakOnOpenGLError ) {
        g_glLastError = glGetError(__context__,__at__);
        if ( g_glLastError != GL_NO_ERROR ) {
            TextWriter tw;
            tw << "OpenGL: error 0x" << HEX << g_glLastError << DEC;
            for ( auto ex : g_glErrors ) {
                if ( ex.code==g_glLastError ) {
                    tw << ", " <<  ex.name;
                    break;
                }
            }
            TextPrinter tp;
            tp << __at__->describe() << ": " << tw.str() << "\n";
            __context__->breakPoint(*__at__,"exception", tw.str().c_str());
        }
    }
}

bool glSetBreakOnOpenGLError ( bool on ) {
    auto old = g_breakOnOpenGLError;
    g_breakOnOpenGLError = on;
    return old;
}

uint32_t glGetLastError ( Context * __context__, LineInfoArg * __at__) {
    if ( !g_breakOnOpenGLError ) g_glLastError = glGetError(__context__,__at__);
    return g_glLastError;
}

void glSetLastError ( uint32_t err ) {
    g_glLastError = err;
}

}

using namespace das;
#endif

void Module_opengl::initFunctions ( ) {
#if USE_GENERATED
    addExtern<DAS_BIND_FUN(glSetBreakOnOpenGLError)>(*this, lib, "glSetBreakOnOpenGLError",
        SideEffects::modifyExternal,"glSetBreakOnOpenGLError")
            ->arg("on");
    addExtern<DAS_BIND_FUN(glGetLastError)>(*this, lib, "glGetLastError",
        SideEffects::modifyExternal,"glGetLastError")
            ->args({"context","lineinfo"});
    addExtern<DAS_BIND_FUN(glSetLastError)>(*this, lib, "glSetLastError",
        SideEffects::modifyExternal,"glSetLastError");
    #include "module_opengl.inc"
#endif
}
