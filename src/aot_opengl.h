#pragma once

#ifndef APIENTRY
#define APIENTRY	__stdcall
#endif

#include "OpenGL\glcorearb.h"

namespace das {

bool glSetBreakOnOpenGLError ( bool on );
uint32_t glGetLastError ( Context * __context__, LineInfoArg * __at__);
void glSetLastError ( uint32_t err ) ;

#include "aot_opengl.inc"
}