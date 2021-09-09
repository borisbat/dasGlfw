#pragma once

#define USE_GENERATED   1

// making custom builtin module
class Module_opengl : public Module {
    ModuleLibrary lib;
public:
    Module_opengl();
    virtual ~Module_opengl();
    bool initialized = false;
    virtual bool initDependencies() override;
    virtual ModuleAotType aotRequire ( TextWriter & tw ) const override;
    void initConst();
    void initAnnotations();
    void initFunctions();
};
