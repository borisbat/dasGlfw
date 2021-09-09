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

#include "opengl_win32.inc"
}

using namespace das;
#endif

void Module_opengl::initFunctions ( ) {
#if USE_GENERATED
#include "module_opengl.inc"
#endif
}
