#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "module_opengl_include.h"

using namespace das;

#include "need_opengl.h"

#if USE_GENERATED
#define GLOBAL_NAMESPACE
#include "module_opengl.h"
#endif

void Module_opengl::initFunctions ( ) {
#if USE_GENERATED
#include "module_opengl.inc"
#endif
}
