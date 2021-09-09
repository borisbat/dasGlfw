#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "module_opengl_include.h"

IMPLEMENT_EXTERNAL_TYPE_FACTORY(__GLsync,__GLsync);
IMPLEMENT_EXTERNAL_TYPE_FACTORY(_cl_context,_cl_context);
IMPLEMENT_EXTERNAL_TYPE_FACTORY(_cl_event,_cl_event);

using namespace das;

#include "need_opengl.h"

#if USE_GENERATED
#define GLOBAL_NAMESPACE
// #include "aot_opengl.h"
#include "module_opengl.h"
#include "module_opengl.enum.cpp_inc"
#endif


Module_opengl::~Module_opengl() {
}

Module_opengl::Module_opengl() : Module("opengl") {
    // make basic module
    lib.addModule(this);
    lib.addBuiltInModule();
    // dummies
    addAnnotation(make_smart<DummyTypeAnnotation>("__GLsync", "__GLsync",1,1));
    addAnnotation(make_smart<DummyTypeAnnotation>("_cl_context", "_cl_context",1,1));
    addAnnotation(make_smart<DummyTypeAnnotation>("_cl_event", "_cl_event",1,1));
}

bool Module_opengl::initDependencies()  {
        if ( initialized ) return true;
        initialized = true;
        initConst();
        initAnnotations();
        initFunctions();
#if USE_GENERATED
#include "module_opengl.enum.inc"
#include "module_opengl.method.inc"
#endif
        return true;
    }

ModuleAotType Module_opengl::aotRequire ( TextWriter & tw ) const {
    // add your stuff here
    // tw << "#include <GLFW/glfw3.h>\n";
    // tw << "#include \"../modules/dasGlfw/src/aot_opengl.h\"\n";
    // specifying AOT type, in this case direct cpp mode (and not hybrid mode)
    return ModuleAotType::cpp;
}

// registering module, so that its available via 'NEED_MODULE' macro
REGISTER_MODULE(Module_opengl);
