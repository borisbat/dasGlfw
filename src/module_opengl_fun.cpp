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

void checkOpenGLError ( Context * __context__, LineInfoArg * __at__);

#include "opengl_win32.inc"

static bool g_breakOnOpenGLError = false;

static struct GlError { GLenum code; const char * name; } g_glErrors[8] = {
    GL_NO_ERROR, "GL_NO_ERROR",
    GL_INVALID_ENUM, "GL_INVALID_ENUM",
    GL_INVALID_VALUE, "GL_INVALID_VALUE",
    GL_INVALID_OPERATION, "GL_INVALID_OPERATION",
    GL_INVALID_FRAMEBUFFER_OPERATION, "GL_INVALID_FRAMEBUFFER_OPERATION",
    GL_OUT_OF_MEMORY, "GL_OUT_OF_MEMORY",
    GL_STACK_UNDERFLOW, "GL_STACK_UNDERFLOW",
    GL_STACK_OVERFLOW, "GL_STACK_OVERFLOW"
};

static GLenum g_glLastError = GL_NO_ERROR;

void checkOpenGLError ( Context * __context__, LineInfoArg * __at__) {
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
            __context__->breakPoint(*__at__,"exception", tw.str().c_str());
        }
    }
}

void glSetBreakOnOpenGLError ( bool on ) {
    g_breakOnOpenGLError = on;
}

GLenum glGetLastError ( Context * __context__, LineInfoArg * __at__) {
    if ( !g_breakOnOpenGLError ) g_glLastError = glGetError(__context__,__at__);
    return g_glLastError;
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
    #include "module_opengl.inc"
#endif
}
