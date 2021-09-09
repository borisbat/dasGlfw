#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "module_opengl_include.h"

using namespace das;

#include "need_opengl.h"

void Module_opengl::initConst ( ) {
#if USE_GENERATED
#include "module_opengl.const_inc"
#endif
}
