void glProgramUniformMatrix3fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) dasGetProcAddress("glProgramUniformMatrix3fv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glShaderSource ( GLuint shader, GLsizei count, const GLchar *const * string, const GLint * length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADERSOURCEPROC fptr = (PFNGLSHADERSOURCEPROC) dasGetProcAddress("glShaderSource",__context__,__at__);
    (*fptr)(shader, count, string, length);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3DVPROC fptr = (PFNGLVERTEXATTRIB3DVPROC) dasGetProcAddress("glVertexAttrib3dv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4DVPROC fptr = (PFNGLUNIFORMMATRIX4DVPROC) dasGetProcAddress("glUniformMatrix4dv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGenProgramPipelines ( GLsizei n, GLuint * pipelines, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENPROGRAMPIPELINESPROC fptr = (PFNGLGENPROGRAMPIPELINESPROC) dasGetProcAddress("glGenProgramPipelines",__context__,__at__);
    (*fptr)(n, pipelines);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) dasGetProcAddress("glProgramUniformMatrix3dv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureLevelParameteriv ( GLuint texture, GLint level, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURELEVELPARAMETERIVPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) dasGetProcAddress("glGetTextureLevelParameteriv",__context__,__at__);
    (*fptr)(texture, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4iv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4IVPROC fptr = (PFNGLVERTEXATTRIBI4IVPROC) dasGetProcAddress("glVertexAttribI4iv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4sv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4SVPROC fptr = (PFNGLVERTEXATTRIBI4SVPROC) dasGetProcAddress("glVertexAttribI4sv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformi64vARB ( GLuint program, GLint location, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMI64VARBPROC fptr = (PFNGLGETUNIFORMI64VARBPROC) dasGetProcAddress("glGetUniformi64vARB",__context__,__at__);
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glMatrixMultfEXT ( GLenum mode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULTFEXTPROC fptr = (PFNGLMATRIXMULTFEXTPROC) dasGetProcAddress("glMatrixMultfEXT",__context__,__at__);
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glMakeImageHandleNonResidentARB ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC fptr = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) dasGetProcAddress("glMakeImageHandleNonResidentARB",__context__,__at__);
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstanced ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDPROC) dasGetProcAddress("glDrawElementsInstanced",__context__,__at__);
    (*fptr)(mode, count, type, indices, instancecount);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) dasGetProcAddress("glProgramUniformMatrix3dvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glMatrixOrthoEXT ( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXORTHOEXTPROC fptr = (PFNGLMATRIXORTHOEXTPROC) dasGetProcAddress("glMatrixOrthoEXT",__context__,__at__);
    (*fptr)(mode, left, right, bottom, top, zNear, zFar);
    checkOpenGLError(__context__,__at__);
}

void glUniform3i64NV ( GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3I64NVPROC fptr = (PFNGLUNIFORM3I64NVPROC) dasGetProcAddress("glUniform3i64NV",__context__,__at__);
    (*fptr)(location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2i64NV ( GLuint program, GLint location, GLint64EXT x, GLint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2I64NVPROC fptr = (PFNGLPROGRAMUNIFORM2I64NVPROC) dasGetProcAddress("glProgramUniform2i64NV",__context__,__at__);
    (*fptr)(program, location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glUniform4uiv ( GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UIVPROC fptr = (PFNGLUNIFORM4UIVPROC) dasGetProcAddress("glUniform4uiv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameterI4uivEXT ( GLuint program, GLenum target, GLuint index, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) dasGetProcAddress("glNamedProgramLocalParameterI4uivEXT",__context__,__at__);
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glDisableVertexArrayAttrib ( GLuint vaobj, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEVERTEXARRAYATTRIBPROC fptr = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) dasGetProcAddress("glDisableVertexArrayAttrib",__context__,__at__);
    (*fptr)(vaobj, index);
    checkOpenGLError(__context__,__at__);
}

void glTexStorage2DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSTORAGE2DMULTISAMPLEPROC fptr = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) dasGetProcAddress("glTexStorage2DMultisample",__context__,__at__);
    (*fptr)(target, samples, internalformat, width, height, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayAttribFormat ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, bool normalized, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYATTRIBFORMATPROC fptr = (PFNGLVERTEXARRAYATTRIBFORMATPROC) dasGetProcAddress("glVertexArrayAttribFormat",__context__,__at__);
    (*fptr)(vaobj, attribindex, size, type, normalized, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4bv ( GLuint index, const GLbyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4BVPROC fptr = (PFNGLVERTEXATTRIBI4BVPROC) dasGetProcAddress("glVertexAttribI4bv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glUniform3ui64vARB ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UI64VARBPROC fptr = (PFNGLUNIFORM3UI64VARBPROC) dasGetProcAddress("glUniform3ui64vARB",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glCompileShader ( GLuint shader, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPILESHADERPROC fptr = (PFNGLCOMPILESHADERPROC) dasGetProcAddress("glCompileShader",__context__,__at__);
    (*fptr)(shader);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4ui ( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4UIPROC fptr = (PFNGLVERTEXATTRIBI4UIPROC) dasGetProcAddress("glVertexAttribI4ui",__context__,__at__);
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribLui64vARB ( GLuint index, GLenum pname, GLuint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBLUI64VARBPROC fptr = (PFNGLGETVERTEXATTRIBLUI64VARBPROC) dasGetProcAddress("glGetVertexAttribLui64vARB",__context__,__at__);
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureBarrierNV ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBARRIERNVPROC fptr = (PFNGLTEXTUREBARRIERNVPROC) dasGetProcAddress("glTextureBarrierNV",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

GLenum glCheckNamedFramebufferStatusEXT ( GLuint framebuffer, GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC fptr = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) dasGetProcAddress("glCheckNamedFramebufferStatusEXT",__context__,__at__);
    auto result = (*fptr)(framebuffer, target);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLuint glGenPathsNV ( GLsizei range, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENPATHSNVPROC fptr = (PFNGLGENPATHSNVPROC) dasGetProcAddress("glGenPathsNV",__context__,__at__);
    auto result = (*fptr)(range);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniform1ui64vARB ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UI64VARBPROC fptr = (PFNGLUNIFORM1UI64VARBPROC) dasGetProcAddress("glUniform1ui64vARB",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribIiv ( GLuint index, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBIIVPROC fptr = (PFNGLGETVERTEXATTRIBIIVPROC) dasGetProcAddress("glGetVertexAttribIiv",__context__,__at__);
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glStencilMask ( GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILMASKPROC fptr = (PFNGLSTENCILMASKPROC) dasGetProcAddress("glStencilMask",__context__,__at__);
    (*fptr)(mask);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferData ( GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERDATAPROC fptr = (PFNGLCLEARBUFFERDATAPROC) dasGetProcAddress("glClearBufferData",__context__,__at__);
    (*fptr)(target, internalformat, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glSamplerParameteriv ( GLuint sampler, GLenum pname, const GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERIVPROC fptr = (PFNGLSAMPLERPARAMETERIVPROC) dasGetProcAddress("glSamplerParameteriv",__context__,__at__);
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferSubData ( GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERSUBDATAPROC fptr = (PFNGLCLEARBUFFERSUBDATAPROC) dasGetProcAddress("glClearBufferSubData",__context__,__at__);
    (*fptr)(target, internalformat, offset, size, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorGroupsAMD ( GLint * numGroups, GLsizei groupsSize, GLuint * groups, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORGROUPSAMDPROC fptr = (PFNGLGETPERFMONITORGROUPSAMDPROC) dasGetProcAddress("glGetPerfMonitorGroupsAMD",__context__,__at__);
    (*fptr)(numGroups, groupsSize, groups);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP2uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP2UIVPROC fptr = (PFNGLVERTEXATTRIBP2UIVPROC) dasGetProcAddress("glVertexAttribP2uiv",__context__,__at__);
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glCreateRenderbuffers ( GLsizei n, GLuint * renderbuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATERENDERBUFFERSPROC fptr = (PFNGLCREATERENDERBUFFERSPROC) dasGetProcAddress("glCreateRenderbuffers",__context__,__at__);
    (*fptr)(n, renderbuffers);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterfEXT ( GLuint texture, GLenum target, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERFEXTPROC fptr = (PFNGLTEXTUREPARAMETERFEXTPROC) dasGetProcAddress("glTextureParameterfEXT",__context__,__at__);
    (*fptr)(texture, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glDisableClientStateiEXT ( GLenum array, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLECLIENTSTATEIEXTPROC fptr = (PFNGLDISABLECLIENTSTATEIEXTPROC) dasGetProcAddress("glDisableClientStateiEXT",__context__,__at__);
    (*fptr)(array, index);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedFramebufferAttachmentParameteriv ( GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) dasGetProcAddress("glGetNamedFramebufferAttachmentParameteriv",__context__,__at__);
    (*fptr)(framebuffer, attachment, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayColorOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYCOLOROFFSETEXTPROC fptr = (PFNGLVERTEXARRAYCOLOROFFSETEXTPROC) dasGetProcAddress("glVertexArrayColorOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glMinSampleShadingARB ( GLfloat value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMINSAMPLESHADINGARBPROC fptr = (PFNGLMINSAMPLESHADINGARBPROC) dasGetProcAddress("glMinSampleShadingARB",__context__,__at__);
    (*fptr)(value);
    checkOpenGLError(__context__,__at__);
}

void glPathParameterfNV ( GLuint path, GLenum pname, GLfloat value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHPARAMETERFNVPROC fptr = (PFNGLPATHPARAMETERFNVPROC) dasGetProcAddress("glPathParameterfNV",__context__,__at__);
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTextureLayer ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) dasGetProcAddress("glNamedFramebufferTextureLayer",__context__,__at__);
    (*fptr)(framebuffer, attachment, texture, level, layer);
    checkOpenGLError(__context__,__at__);
}

void glUniform3i64ARB ( GLint location, GLint64 x, GLint64 y, GLint64 z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3I64ARBPROC fptr = (PFNGLUNIFORM3I64ARBPROC) dasGetProcAddress("glUniform3i64ARB",__context__,__at__);
    (*fptr)(location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexGenfvEXT ( GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENFVEXTPROC fptr = (PFNGLMULTITEXGENFVEXTPROC) dasGetProcAddress("glMultiTexGenfvEXT",__context__,__at__);
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glDisablei ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEIPROC fptr = (PFNGLDISABLEIPROC) dasGetProcAddress("glDisablei",__context__,__at__);
    (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
}

void glUniform2uiv ( GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UIVPROC fptr = (PFNGLUNIFORM2UIVPROC) dasGetProcAddress("glUniform2uiv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glCreatePerfQueryINTEL ( GLuint queryId, GLuint * queryHandle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEPERFQUERYINTELPROC fptr = (PFNGLCREATEPERFQUERYINTELPROC) dasGetProcAddress("glCreatePerfQueryINTEL",__context__,__at__);
    (*fptr)(queryId, queryHandle);
    checkOpenGLError(__context__,__at__);
}

GLint glGetProgramResourceLocation ( GLuint program, GLenum programInterface, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCELOCATIONPROC fptr = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) dasGetProcAddress("glGetProgramResourceLocation",__context__,__at__);
    auto result = (*fptr)(program, programInterface, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniformMatrix3x2dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) dasGetProcAddress("glProgramUniformMatrix3x2dv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glConservativeRasterParameteriNV ( GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCONSERVATIVERASTERPARAMETERINVPROC fptr = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC) dasGetProcAddress("glConservativeRasterParameteriNV",__context__,__at__);
    (*fptr)(pname, param);
    checkOpenGLError(__context__,__at__);
}

void glVertexBindingDivisor ( GLuint bindingindex, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXBINDINGDIVISORPROC fptr = (PFNGLVERTEXBINDINGDIVISORPROC) dasGetProcAddress("glVertexBindingDivisor",__context__,__at__);
    (*fptr)(bindingindex, divisor);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x3dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) dasGetProcAddress("glProgramUniformMatrix4x3dv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage2D ( GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE2DPROC fptr = (PFNGLTEXTURESTORAGE2DPROC) dasGetProcAddress("glTextureStorage2D",__context__,__at__);
    (*fptr)(texture, levels, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage2D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) dasGetProcAddress("glCompressedTextureSubImage2D",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM1I64VARBPROC) dasGetProcAddress("glProgramUniform1i64vARB",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayMultiTexCoordOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC) dasGetProcAddress("glVertexArrayMultiTexCoordOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, texunit, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexImageEXT ( GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXIMAGEEXTPROC fptr = (PFNGLGETMULTITEXIMAGEEXTPROC) dasGetProcAddress("glGetMultiTexImageEXT",__context__,__at__);
    (*fptr)(texunit, target, level, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3ui64NV ( GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM3UI64NVPROC) dasGetProcAddress("glProgramUniform3ui64NV",__context__,__at__);
    (*fptr)(program, location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glGetPathParameterivNV ( GLuint path, GLenum pname, GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHPARAMETERIVNVPROC fptr = (PFNGLGETPATHPARAMETERIVNVPROC) dasGetProcAddress("glGetPathParameterivNV",__context__,__at__);
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2x3fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2X3FVPROC fptr = (PFNGLUNIFORMMATRIX2X3FVPROC) dasGetProcAddress("glUniformMatrix2x3fv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glDrawArraysInstancedARB ( GLenum mode, GLint first, GLsizei count, GLsizei primcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSINSTANCEDARBPROC fptr = (PFNGLDRAWARRAYSINSTANCEDARBPROC) dasGetProcAddress("glDrawArraysInstancedARB",__context__,__at__);
    (*fptr)(mode, first, count, primcount);
    checkOpenGLError(__context__,__at__);
}

void glTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSUBIMAGE1DPROC fptr = (PFNGLTEXSUBIMAGE1DPROC) dasGetProcAddress("glTexSubImage1D",__context__,__at__);
    (*fptr)(target, level, xoffset, width, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3i64NV ( GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3I64NVPROC fptr = (PFNGLPROGRAMUNIFORM3I64NVPROC) dasGetProcAddress("glProgramUniform3i64NV",__context__,__at__);
    (*fptr)(program, location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP3ui ( GLuint index, GLenum type, bool normalized, GLuint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP3UIPROC fptr = (PFNGLVERTEXATTRIBP3UIPROC) dasGetProcAddress("glVertexAttribP3ui",__context__,__at__);
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glBindTexture ( GLenum target, GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDTEXTUREPROC fptr = (PFNGLBINDTEXTUREPROC) dasGetProcAddress("glBindTexture",__context__,__at__);
    (*fptr)(target, texture);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferfv ( GLenum buffer, GLint drawbuffer, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERFVPROC fptr = (PFNGLCLEARBUFFERFVPROC) dasGetProcAddress("glClearBufferfv",__context__,__at__);
    (*fptr)(buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nuiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NUIVPROC fptr = (PFNGLVERTEXATTRIB4NUIVPROC) dasGetProcAddress("glVertexAttrib4Nuiv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformHandleui64NV ( GLuint program, GLint location, GLuint64 value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) dasGetProcAddress("glProgramUniformHandleui64NV",__context__,__at__);
    (*fptr)(program, location, value);
    checkOpenGLError(__context__,__at__);
}

void glObjectPtrLabel ( const void * ptr, GLsizei length, const GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLOBJECTPTRLABELPROC fptr = (PFNGLOBJECTPTRLABELPROC) dasGetProcAddress("glObjectPtrLabel",__context__,__at__);
    (*fptr)(ptr, length, label);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3sv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3SVPROC fptr = (PFNGLVERTEXATTRIB3SVPROC) dasGetProcAddress("glVertexAttrib3sv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGenPerfMonitorsAMD ( GLsizei n, GLuint * monitors, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENPERFMONITORSAMDPROC fptr = (PFNGLGENPERFMONITORSAMDPROC) dasGetProcAddress("glGenPerfMonitorsAMD",__context__,__at__);
    (*fptr)(n, monitors);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferfi ( GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERFIPROC fptr = (PFNGLCLEARBUFFERFIPROC) dasGetProcAddress("glClearBufferfi",__context__,__at__);
    (*fptr)(buffer, drawbuffer, depth, stencil);
    checkOpenGLError(__context__,__at__);
}

void glProgramPathFragmentInputGenNV ( GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC fptr = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) dasGetProcAddress("glProgramPathFragmentInputGenNV",__context__,__at__);
    (*fptr)(program, location, genMode, components, coeffs);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nubv ( GLuint index, const GLubyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NUBVPROC fptr = (PFNGLVERTEXATTRIB4NUBVPROC) dasGetProcAddress("glVertexAttrib4Nubv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformiv ( GLuint program, GLint location, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMIVPROC fptr = (PFNGLGETUNIFORMIVPROC) dasGetProcAddress("glGetUniformiv",__context__,__at__);
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glBindBufferRange ( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDBUFFERRANGEPROC fptr = (PFNGLBINDBUFFERRANGEPROC) dasGetProcAddress("glBindBufferRange",__context__,__at__);
    (*fptr)(target, index, buffer, offset, size);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP1ui ( GLuint index, GLenum type, bool normalized, GLuint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP1UIPROC fptr = (PFNGLVERTEXATTRIBP1UIPROC) dasGetProcAddress("glVertexAttribP1ui",__context__,__at__);
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3fv ( GLuint index, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3FVPROC fptr = (PFNGLVERTEXATTRIB3FVPROC) dasGetProcAddress("glVertexAttrib3fv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateFramebuffer ( GLenum target, GLsizei numAttachments, const GLenum * attachments, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATEFRAMEBUFFERPROC fptr = (PFNGLINVALIDATEFRAMEBUFFERPROC) dasGetProcAddress("glInvalidateFramebuffer",__context__,__at__);
    (*fptr)(target, numAttachments, attachments);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4FVPROC fptr = (PFNGLUNIFORMMATRIX4FVPROC) dasGetProcAddress("glUniformMatrix4fv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateBufferSubData ( GLuint buffer, GLintptr offset, GLsizeiptr length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATEBUFFERSUBDATAPROC fptr = (PFNGLINVALIDATEBUFFERSUBDATAPROC) dasGetProcAddress("glInvalidateBufferSubData",__context__,__at__);
    (*fptr)(buffer, offset, length);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorGroupStringAMD ( GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORGROUPSTRINGAMDPROC fptr = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) dasGetProcAddress("glGetPerfMonitorGroupStringAMD",__context__,__at__);
    (*fptr)(group, bufSize, length, groupString);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsImageHandleResidentNV ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISIMAGEHANDLERESIDENTNVPROC fptr = (PFNGLISIMAGEHANDLERESIDENTNVPROC) dasGetProcAddress("glIsImageHandleResidentNV",__context__,__at__);
    auto result = (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniform2ui64NV ( GLint location, GLuint64EXT x, GLuint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UI64NVPROC fptr = (PFNGLUNIFORM2UI64NVPROC) dasGetProcAddress("glUniform2ui64NV",__context__,__at__);
    (*fptr)(location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM1UI64VNVPROC) dasGetProcAddress("glProgramUniform1ui64vNV",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glPathStencilFuncNV ( GLenum func, GLint ref, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHSTENCILFUNCNVPROC fptr = (PFNGLPATHSTENCILFUNCNVPROC) dasGetProcAddress("glPathStencilFuncNV",__context__,__at__);
    (*fptr)(func, ref, mask);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM3I64VARBPROC) dasGetProcAddress("glProgramUniform3i64vARB",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glPathStringNV ( GLuint path, GLenum format, GLsizei length, const void * pathString, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHSTRINGNVPROC fptr = (PFNGLPATHSTRINGNVPROC) dasGetProcAddress("glPathStringNV",__context__,__at__);
    (*fptr)(path, format, length, pathString);
    checkOpenGLError(__context__,__at__);
}

void glTexImage3DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXIMAGE3DMULTISAMPLEPROC fptr = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) dasGetProcAddress("glTexImage3DMultisample",__context__,__at__);
    (*fptr)(target, samples, internalformat, width, height, depth, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glIndexFormatNV ( GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINDEXFORMATNVPROC fptr = (PFNGLINDEXFORMATNVPROC) dasGetProcAddress("glIndexFormatNV",__context__,__at__);
    (*fptr)(type, stride);
    checkOpenGLError(__context__,__at__);
}

void glLinkProgram ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLLINKPROGRAMPROC fptr = (PFNGLLINKPROGRAMPROC) dasGetProcAddress("glLinkProgram",__context__,__at__);
    (*fptr)(program);
    checkOpenGLError(__context__,__at__);
}

void glDrawBuffer ( GLenum buf, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWBUFFERPROC fptr = (PFNGLDRAWBUFFERPROC) dasGetProcAddress("glDrawBuffer",__context__,__at__);
    (*fptr)(buf);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexGenivEXT ( GLenum texunit, GLenum coord, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXGENIVEXTPROC fptr = (PFNGLGETMULTITEXGENIVEXTPROC) dasGetProcAddress("glGetMultiTexGenivEXT",__context__,__at__);
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramPipelineInfoLog ( GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMPIPELINEINFOLOGPROC fptr = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) dasGetProcAddress("glGetProgramPipelineInfoLog",__context__,__at__);
    (*fptr)(pipeline, bufSize, length, infoLog);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM3I64VNVPROC) dasGetProcAddress("glProgramUniform3i64vNV",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferParameterivEXT ( GLuint buffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) dasGetProcAddress("glGetNamedBufferParameterivEXT",__context__,__at__);
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureSubImage2D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE2DPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) dasGetProcAddress("glCopyTextureSubImage2D",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI3ui ( GLuint index, GLuint x, GLuint y, GLuint z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI3UIPROC fptr = (PFNGLVERTEXATTRIBI3UIPROC) dasGetProcAddress("glVertexAttribI3ui",__context__,__at__);
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glUniformHandleui64NV ( GLint location, GLuint64 value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMHANDLEUI64NVPROC fptr = (PFNGLUNIFORMHANDLEUI64NVPROC) dasGetProcAddress("glUniformHandleui64NV",__context__,__at__);
    (*fptr)(location, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3ui64ARB ( GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM3UI64ARBPROC) dasGetProcAddress("glProgramUniform3ui64ARB",__context__,__at__);
    (*fptr)(program, location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1iEXT ( GLuint program, GLint location, GLint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1IEXTPROC fptr = (PFNGLPROGRAMUNIFORM1IEXTPROC) dasGetProcAddress("glProgramUniform1iEXT",__context__,__at__);
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribLPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBLPOINTERPROC fptr = (PFNGLVERTEXATTRIBLPOINTERPROC) dasGetProcAddress("glVertexAttribLPointer",__context__,__at__);
    (*fptr)(index, size, type, stride, pointer);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nub ( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NUBPROC fptr = (PFNGLVERTEXATTRIB4NUBPROC) dasGetProcAddress("glVertexAttrib4Nub",__context__,__at__);
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferStorage ( GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERSTORAGEPROC fptr = (PFNGLNAMEDBUFFERSTORAGEPROC) dasGetProcAddress("glNamedBufferStorage",__context__,__at__);
    (*fptr)(buffer, size, data, flags);
    checkOpenGLError(__context__,__at__);
}

void glUniformSubroutinesuiv ( GLenum shadertype, GLsizei count, const GLuint * indices, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMSUBROUTINESUIVPROC fptr = (PFNGLUNIFORMSUBROUTINESUIVPROC) dasGetProcAddress("glUniformSubroutinesuiv",__context__,__at__);
    (*fptr)(shadertype, count, indices);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferDrawBuffers ( GLuint framebuffer, GLsizei n, const GLenum * bufs, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC fptr = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) dasGetProcAddress("glNamedFramebufferDrawBuffers",__context__,__at__);
    (*fptr)(framebuffer, n, bufs);
    checkOpenGLError(__context__,__at__);
}

void glUniform4ui64NV ( GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UI64NVPROC fptr = (PFNGLUNIFORM4UI64NVPROC) dasGetProcAddress("glUniform4ui64NV",__context__,__at__);
    (*fptr)(location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glCopyImageSubData ( GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYIMAGESUBDATAPROC fptr = (PFNGLCOPYIMAGESUBDATAPROC) dasGetProcAddress("glCopyImageSubData",__context__,__at__);
    (*fptr)(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
    checkOpenGLError(__context__,__at__);
}

void glPixelStorei ( GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPIXELSTOREIPROC fptr = (PFNGLPIXELSTOREIPROC) dasGetProcAddress("glPixelStorei",__context__,__at__);
    (*fptr)(pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM1I64VNVPROC) dasGetProcAddress("glProgramUniform1i64vNV",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage1D ( GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) dasGetProcAddress("glCompressedTextureSubImage1D",__context__,__at__);
    (*fptr)(texture, level, xoffset, width, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) dasGetProcAddress("glProgramUniformMatrix4fvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTexImage3D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXIMAGE3DPROC fptr = (PFNGLTEXIMAGE3DPROC) dasGetProcAddress("glTexImage3D",__context__,__at__);
    (*fptr)(target, level, internalformat, width, height, depth, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTextureFaceARB ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTUREFACEARBPROC fptr = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) dasGetProcAddress("glFramebufferTextureFaceARB",__context__,__at__);
    (*fptr)(target, attachment, texture, level, face);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4FVEXTPROC) dasGetProcAddress("glProgramUniform4fvEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glStencilMaskSeparate ( GLenum face, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILMASKSEPARATEPROC fptr = (PFNGLSTENCILMASKSEPARATEPROC) dasGetProcAddress("glStencilMaskSeparate",__context__,__at__);
    (*fptr)(face, mask);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterIivEXT ( GLuint texture, GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIIVEXTPROC fptr = (PFNGLTEXTUREPARAMETERIIVEXTPROC) dasGetProcAddress("glTextureParameterIivEXT",__context__,__at__);
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexSubImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXSUBIMAGE1DEXTPROC fptr = (PFNGLMULTITEXSUBIMAGE1DEXTPROC) dasGetProcAddress("glMultiTexSubImage1DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, xoffset, width, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameterI4uiEXT ( GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) dasGetProcAddress("glNamedProgramLocalParameterI4uiEXT",__context__,__at__);
    (*fptr)(program, target, index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glActiveTexture ( GLenum texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLACTIVETEXTUREPROC fptr = (PFNGLACTIVETEXTUREPROC) dasGetProcAddress("glActiveTexture",__context__,__at__);
    (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
}

void glUniform1i64vARB ( GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1I64VARBPROC fptr = (PFNGLUNIFORM1I64VARBPROC) dasGetProcAddress("glUniform1i64vARB",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedProgramLocalParameterIivEXT ( GLuint program, GLenum target, GLuint index, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) dasGetProcAddress("glGetNamedProgramLocalParameterIivEXT",__context__,__at__);
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glGetPathCommandsNV ( GLuint path, GLubyte * commands, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHCOMMANDSNVPROC fptr = (PFNGLGETPATHCOMMANDSNVPROC) dasGetProcAddress("glGetPathCommandsNV",__context__,__at__);
    (*fptr)(path, commands);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2f ( GLuint index, GLfloat x, GLfloat y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2FPROC fptr = (PFNGLVERTEXATTRIB2FPROC) dasGetProcAddress("glVertexAttrib2f",__context__,__at__);
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glBindVertexArray ( GLuint array, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDVERTEXARRAYPROC fptr = (PFNGLBINDVERTEXARRAYPROC) dasGetProcAddress("glBindVertexArray",__context__,__at__);
    (*fptr)(array);
    checkOpenGLError(__context__,__at__);
}

void glEndPerfMonitorAMD ( GLuint monitor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDPERFMONITORAMDPROC fptr = (PFNGLENDPERFMONITORAMDPROC) dasGetProcAddress("glEndPerfMonitorAMD",__context__,__at__);
    (*fptr)(monitor);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameter4fvEXT ( GLuint program, GLenum target, GLuint index, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) dasGetProcAddress("glNamedProgramLocalParameter4fvEXT",__context__,__at__);
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramResourceName ( GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCENAMEPROC fptr = (PFNGLGETPROGRAMRESOURCENAMEPROC) dasGetProcAddress("glGetProgramResourceName",__context__,__at__);
    (*fptr)(program, programInterface, index, bufSize, length, name);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferSampleLocationsfvNV ( GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC fptr = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) dasGetProcAddress("glNamedFramebufferSampleLocationsfvNV",__context__,__at__);
    (*fptr)(framebuffer, start, count, v);
    checkOpenGLError(__context__,__at__);
}

void glGetPathMetricsNV ( GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHMETRICSNVPROC fptr = (PFNGLGETPATHMETRICSNVPROC) dasGetProcAddress("glGetPathMetricsNV",__context__,__at__);
    (*fptr)(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
    checkOpenGLError(__context__,__at__);
}

void glCoverStrokePathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERSTROKEPATHINSTANCEDNVPROC fptr = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) dasGetProcAddress("glCoverStrokePathInstancedNV",__context__,__at__);
    (*fptr)(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorageMultisampleCoverageEXT ( GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) dasGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT",__context__,__at__);
    (*fptr)(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribIOffsetEXT ( GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC) dasGetProcAddress("glVertexArrayVertexAttribIOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, index, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2d ( GLuint index, GLdouble x, GLdouble y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2DPROC fptr = (PFNGLVERTEXATTRIB2DPROC) dasGetProcAddress("glVertexAttrib2d",__context__,__at__);
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedFramebufferParameterivEXT ( GLuint framebuffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC) dasGetProcAddress("glGetNamedFramebufferParameterivEXT",__context__,__at__);
    (*fptr)(framebuffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nusv ( GLuint index, const GLushort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NUSVPROC fptr = (PFNGLVERTEXATTRIB4NUSVPROC) dasGetProcAddress("glVertexAttrib4Nusv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGenerateMipmap ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENERATEMIPMAPPROC fptr = (PFNGLGENERATEMIPMAPPROC) dasGetProcAddress("glGenerateMipmap",__context__,__at__);
    (*fptr)(target);
    checkOpenGLError(__context__,__at__);
}

void glMatrixPopEXT ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXPOPEXTPROC fptr = (PFNGLMATRIXPOPEXTPROC) dasGetProcAddress("glMatrixPopEXT",__context__,__at__);
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2FVEXTPROC) dasGetProcAddress("glProgramUniform2fvEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glEnable ( GLenum cap, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEPROC fptr = (PFNGLENABLEPROC) dasGetProcAddress("glEnable",__context__,__at__);
    (*fptr)(cap);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsEnabled ( GLenum cap, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISENABLEDPROC fptr = (PFNGLISENABLEDPROC) dasGetProcAddress("glIsEnabled",__context__,__at__);
    auto result = (*fptr)(cap);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glSampleMaski ( GLuint maskNumber, GLbitfield mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLEMASKIPROC fptr = (PFNGLSAMPLEMASKIPROC) dasGetProcAddress("glSampleMaski",__context__,__at__);
    (*fptr)(maskNumber, mask);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureImageEXT ( GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREIMAGEEXTPROC fptr = (PFNGLGETTEXTUREIMAGEEXTPROC) dasGetProcAddress("glGetTextureImageEXT",__context__,__at__);
    (*fptr)(texture, target, level, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glMatrixRotatefEXT ( GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXROTATEFEXTPROC fptr = (PFNGLMATRIXROTATEFEXTPROC) dasGetProcAddress("glMatrixRotatefEXT",__context__,__at__);
    (*fptr)(mode, angle, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTextureLayerEXT ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) dasGetProcAddress("glNamedFramebufferTextureLayerEXT",__context__,__at__);
    (*fptr)(framebuffer, attachment, texture, level, layer);
    checkOpenGLError(__context__,__at__);
}

void glUniform1d ( GLint location, GLdouble x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1DPROC fptr = (PFNGLUNIFORM1DPROC) dasGetProcAddress("glUniform1d",__context__,__at__);
    (*fptr)(location, x);
    checkOpenGLError(__context__,__at__);
}

void glUniform1fv ( GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1FVPROC fptr = (PFNGLUNIFORM1FVPROC) dasGetProcAddress("glUniform1fv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glUniform1ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UI64VNVPROC fptr = (PFNGLUNIFORM1UI64VNVPROC) dasGetProcAddress("glUniform1ui64vNV",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstancedARB ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDARBPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDARBPROC) dasGetProcAddress("glDrawElementsInstancedARB",__context__,__at__);
    (*fptr)(mode, count, type, indices, primcount);
    checkOpenGLError(__context__,__at__);
}

void glHint ( GLenum target, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLHINTPROC fptr = (PFNGLHINTPROC) dasGetProcAddress("glHint",__context__,__at__);
    (*fptr)(target, mode);
    checkOpenGLError(__context__,__at__);
}

void glGetIntegeri_v ( GLenum target, GLuint index, GLint * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGERI_VPROC fptr = (PFNGLGETINTEGERI_VPROC) dasGetProcAddress("glGetIntegeri_v",__context__,__at__);
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glBlendFuncSeparatei ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCSEPARATEIPROC fptr = (PFNGLBLENDFUNCSEPARATEIPROC) dasGetProcAddress("glBlendFuncSeparatei",__context__,__at__);
    (*fptr)(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsBuffer ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISBUFFERPROC fptr = (PFNGLISBUFFERPROC) dasGetProcAddress("glIsBuffer",__context__,__at__);
    auto result = (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glDrawTransformFeedback ( GLenum mode, GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWTRANSFORMFEEDBACKPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKPROC) dasGetProcAddress("glDrawTransformFeedback",__context__,__at__);
    (*fptr)(mode, id);
    checkOpenGLError(__context__,__at__);
}

GLenum glClientWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLIENTWAITSYNCPROC fptr = (PFNGLCLIENTWAITSYNCPROC) dasGetProcAddress("glClientWaitSync",__context__,__at__);
    auto result = (*fptr)(sync, flags, timeout);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniform1f ( GLint location, GLfloat v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1FPROC fptr = (PFNGLUNIFORM1FPROC) dasGetProcAddress("glUniform1f",__context__,__at__);
    (*fptr)(location, v0);
    checkOpenGLError(__context__,__at__);
}

void glDrawRangeElements ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWRANGEELEMENTSPROC fptr = (PFNGLDRAWRANGEELEMENTSPROC) dasGetProcAddress("glDrawRangeElements",__context__,__at__);
    (*fptr)(mode, start, end, count, type, indices);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ui ( GLuint program, GLint location, GLuint v0, GLuint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UIPROC fptr = (PFNGLPROGRAMUNIFORM2UIPROC) dasGetProcAddress("glProgramUniform2ui",__context__,__at__);
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glCopyTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXSUBIMAGE3DPROC fptr = (PFNGLCOPYTEXSUBIMAGE3DPROC) dasGetProcAddress("glCopyTexSubImage3D",__context__,__at__);
    (*fptr)(target, level, xoffset, yoffset, zoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glCreateSamplers ( GLsizei n, GLuint * samplers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESAMPLERSPROC fptr = (PFNGLCREATESAMPLERSPROC) dasGetProcAddress("glCreateSamplers",__context__,__at__);
    (*fptr)(n, samplers);
    checkOpenGLError(__context__,__at__);
}

void glUniform3i64vARB ( GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3I64VARBPROC fptr = (PFNGLUNIFORM3I64VARBPROC) dasGetProcAddress("glUniform3i64vARB",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayPointeri_vEXT ( GLuint vaobj, GLuint index, GLenum pname, void ** param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC fptr = (PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC) dasGetProcAddress("glGetVertexArrayPointeri_vEXT",__context__,__at__);
    (*fptr)(vaobj, index, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glUniform1i ( GLint location, GLint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1IPROC fptr = (PFNGLUNIFORM1IPROC) dasGetProcAddress("glUniform1i",__context__,__at__);
    (*fptr)(location, v0);
    checkOpenGLError(__context__,__at__);
}

void glUniform2i ( GLint location, GLint v0, GLint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2IPROC fptr = (PFNGLUNIFORM2IPROC) dasGetProcAddress("glUniform2i",__context__,__at__);
    (*fptr)(location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2DVPROC fptr = (PFNGLPROGRAMUNIFORM2DVPROC) dasGetProcAddress("glProgramUniform2dv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glPixelStoref ( GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPIXELSTOREFPROC fptr = (PFNGLPIXELSTOREFPROC) dasGetProcAddress("glPixelStoref",__context__,__at__);
    (*fptr)(pname, param);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureSubImage1D ( GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE1DPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) dasGetProcAddress("glCopyTextureSubImage1D",__context__,__at__);
    (*fptr)(texture, level, xoffset, x, y, width);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureImage3DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) dasGetProcAddress("glCompressedTextureImage3DEXT",__context__,__at__);
    (*fptr)(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformui64vARB ( GLuint program, GLint location, GLsizei bufSize, GLuint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMUI64VARBPROC fptr = (PFNGLGETNUNIFORMUI64VARBPROC) dasGetProcAddress("glGetnUniformui64vARB",__context__,__at__);
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayFogCoordOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC) dasGetProcAddress("glVertexArrayFogCoordOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glGetBooleanv ( GLenum pname, GLboolean * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBOOLEANVPROC fptr = (PFNGLGETBOOLEANVPROC) dasGetProcAddress("glGetBooleanv",__context__,__at__);
    (*fptr)(pname, data);
    checkOpenGLError(__context__,__at__);
}

void glStencilThenCoverFillPathNV ( GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILTHENCOVERFILLPATHNVPROC fptr = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC) dasGetProcAddress("glStencilThenCoverFillPathNV",__context__,__at__);
    (*fptr)(path, fillMode, mask, coverMode);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2iv ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2IVPROC fptr = (PFNGLPROGRAMUNIFORM2IVPROC) dasGetProcAddress("glProgramUniform2iv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetnCompressedTexImage ( GLenum target, GLint lod, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNCOMPRESSEDTEXIMAGEPROC fptr = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC) dasGetProcAddress("glGetnCompressedTexImage",__context__,__at__);
    (*fptr)(target, lod, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1sv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1SVPROC fptr = (PFNGLVERTEXATTRIB1SVPROC) dasGetProcAddress("glVertexAttrib1sv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureLevelParameterfvEXT ( GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) dasGetProcAddress("glGetTextureLevelParameterfvEXT",__context__,__at__);
    (*fptr)(texture, target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLenum glGetError ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETERRORPROC fptr = (PFNGLGETERRORPROC) dasGetProcAddress("glGetError",__context__,__at__);
    auto result = (*fptr)();
    return result;
}

void glPolygonOffsetClamp ( GLfloat factor, GLfloat units, GLfloat clamp, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOLYGONOFFSETCLAMPPROC fptr = (PFNGLPOLYGONOFFSETCLAMPPROC) dasGetProcAddress("glPolygonOffsetClamp",__context__,__at__);
    (*fptr)(factor, units, clamp);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformHandleui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64 * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) dasGetProcAddress("glProgramUniformHandleui64vNV",__context__,__at__);
    (*fptr)(program, location, count, values);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramStageiv ( GLuint program, GLenum shadertype, GLenum pname, GLint * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMSTAGEIVPROC fptr = (PFNGLGETPROGRAMSTAGEIVPROC) dasGetProcAddress("glGetProgramStageiv",__context__,__at__);
    (*fptr)(program, shadertype, pname, values);
    checkOpenGLError(__context__,__at__);
}

void glUniform3ui64ARB ( GLint location, GLuint64 x, GLuint64 y, GLuint64 z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UI64ARBPROC fptr = (PFNGLUNIFORM3UI64ARBPROC) dasGetProcAddress("glUniform3ui64ARB",__context__,__at__);
    (*fptr)(location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix3x2fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3X2FVPROC fptr = (PFNGLUNIFORMMATRIX3X2FVPROC) dasGetProcAddress("glUniformMatrix3x2fv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetShaderiv ( GLuint shader, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADERIVPROC fptr = (PFNGLGETSHADERIVPROC) dasGetProcAddress("glGetShaderiv",__context__,__at__);
    (*fptr)(shader, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCreateTransformFeedbacks ( GLsizei n, GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATETRANSFORMFEEDBACKSPROC fptr = (PFNGLCREATETRANSFORMFEEDBACKSPROC) dasGetProcAddress("glCreateTransformFeedbacks",__context__,__at__);
    (*fptr)(n, ids);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4x3fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4X3FVPROC fptr = (PFNGLUNIFORMMATRIX4X3FVPROC) dasGetProcAddress("glUniformMatrix4x3fv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBindImageTexture ( GLuint unit, GLuint texture, GLint level, bool layered, GLint layer, GLenum access, GLenum format, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDIMAGETEXTUREPROC fptr = (PFNGLBINDIMAGETEXTUREPROC) dasGetProcAddress("glBindImageTexture",__context__,__at__);
    (*fptr)(unit, texture, level, layered, layer, access, format);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI2i ( GLuint index, GLint x, GLint y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI2IPROC fptr = (PFNGLVERTEXATTRIBI2IPROC) dasGetProcAddress("glVertexAttribI2i",__context__,__at__);
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferPointerv ( GLuint buffer, GLenum pname, void ** params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPOINTERVPROC fptr = (PFNGLGETNAMEDBUFFERPOINTERVPROC) dasGetProcAddress("glGetNamedBufferPointerv",__context__,__at__);
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1DVPROC fptr = (PFNGLVERTEXATTRIB1DVPROC) dasGetProcAddress("glVertexAttrib1dv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glDisableVertexArrayAttribEXT ( GLuint vaobj, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC fptr = (PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC) dasGetProcAddress("glDisableVertexArrayAttribEXT",__context__,__at__);
    (*fptr)(vaobj, index);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM3UI64VNVPROC) dasGetProcAddress("glProgramUniform3ui64vNV",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glTexPageCommitmentMemNV ( GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPAGECOMMITMENTMEMNVPROC fptr = (PFNGLTEXPAGECOMMITMENTMEMNVPROC) dasGetProcAddress("glTexPageCommitmentMemNV",__context__,__at__);
    (*fptr)(target, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorageMultisample ( GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) dasGetProcAddress("glNamedRenderbufferStorageMultisample",__context__,__at__);
    (*fptr)(renderbuffer, samples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameters4fvEXT ( GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) dasGetProcAddress("glNamedProgramLocalParameters4fvEXT",__context__,__at__);
    (*fptr)(program, target, index, count, params);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayIntegervEXT ( GLuint vaobj, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYINTEGERVEXTPROC fptr = (PFNGLGETVERTEXARRAYINTEGERVEXTPROC) dasGetProcAddress("glGetVertexArrayIntegervEXT",__context__,__at__);
    (*fptr)(vaobj, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glPathCoverDepthFuncNV ( GLenum func, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHCOVERDEPTHFUNCNVPROC fptr = (PFNGLPATHCOVERDEPTHFUNCNVPROC) dasGetProcAddress("glPathCoverDepthFuncNV",__context__,__at__);
    (*fptr)(func);
    checkOpenGLError(__context__,__at__);
}

void glGetPathCoordsNV ( GLuint path, GLfloat * coords, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHCOORDSNVPROC fptr = (PFNGLGETPATHCOORDSNVPROC) dasGetProcAddress("glGetPathCoordsNV",__context__,__at__);
    (*fptr)(path, coords);
    checkOpenGLError(__context__,__at__);
}

void glEdgeFlagFormatNV ( GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLEDGEFLAGFORMATNVPROC fptr = (PFNGLEDGEFLAGFORMATNVPROC) dasGetProcAddress("glEdgeFlagFormatNV",__context__,__at__);
    (*fptr)(stride);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI3uiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI3UIVPROC fptr = (PFNGLVERTEXATTRIBI3UIVPROC) dasGetProcAddress("glVertexAttribI3uiv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glCopyMultiTexSubImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC fptr = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) dasGetProcAddress("glCopyMultiTexSubImage1DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, xoffset, x, y, width);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1s ( GLuint index, GLshort x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1SPROC fptr = (PFNGLVERTEXATTRIB1SPROC) dasGetProcAddress("glVertexAttrib1s",__context__,__at__);
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nbv ( GLuint index, const GLbyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NBVPROC fptr = (PFNGLVERTEXATTRIB4NBVPROC) dasGetProcAddress("glVertexAttrib4Nbv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UIVPROC fptr = (PFNGLPROGRAMUNIFORM3UIVPROC) dasGetProcAddress("glProgramUniform3uiv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM4UI64VNVPROC) dasGetProcAddress("glProgramUniform4ui64vNV",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformivARB ( GLuint program, GLint location, GLsizei bufSize, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMIVARBPROC fptr = (PFNGLGETNUNIFORMIVARBPROC) dasGetProcAddress("glGetnUniformivARB",__context__,__at__);
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4DPROC fptr = (PFNGLVERTEXATTRIB4DPROC) dasGetProcAddress("glVertexAttrib4d",__context__,__at__);
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glObjectLabel ( GLenum identifier, GLuint name, GLsizei length, const GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLOBJECTLABELPROC fptr = (PFNGLOBJECTLABELPROC) dasGetProcAddress("glObjectLabel",__context__,__at__);
    (*fptr)(identifier, name, length, label);
    checkOpenGLError(__context__,__at__);
}

void glUseProgramStages ( GLuint pipeline, GLbitfield stages, GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUSEPROGRAMSTAGESPROC fptr = (PFNGLUSEPROGRAMSTAGESPROC) dasGetProcAddress("glUseProgramStages",__context__,__at__);
    (*fptr)(pipeline, stages, program);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureImage2DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) dasGetProcAddress("glCompressedTextureImage2DEXT",__context__,__at__);
    (*fptr)(texture, target, level, internalformat, width, height, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParametersI4uivEXT ( GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) dasGetProcAddress("glNamedProgramLocalParametersI4uivEXT",__context__,__at__);
    (*fptr)(program, target, index, count, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Niv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NIVPROC fptr = (PFNGLVERTEXATTRIB4NIVPROC) dasGetProcAddress("glVertexAttrib4Niv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nsv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NSVPROC fptr = (PFNGLVERTEXATTRIB4NSVPROC) dasGetProcAddress("glVertexAttrib4Nsv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexParameteriEXT ( GLenum texunit, GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERIEXTPROC fptr = (PFNGLMULTITEXPARAMETERIEXTPROC) dasGetProcAddress("glMultiTexParameteriEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsSync ( GLsync sync, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISSYNCPROC fptr = (PFNGLISSYNCPROC) dasGetProcAddress("glIsSync",__context__,__at__);
    auto result = (*fptr)(sync);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glVertexAttribL4i64NV ( GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4I64NVPROC fptr = (PFNGLVERTEXATTRIBL4I64NVPROC) dasGetProcAddress("glVertexAttribL4i64NV",__context__,__at__);
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayIntegeri_vEXT ( GLuint vaobj, GLuint index, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC fptr = (PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC) dasGetProcAddress("glGetVertexArrayIntegeri_vEXT",__context__,__at__);
    (*fptr)(vaobj, index, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glScissorExclusiveNV ( GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSOREXCLUSIVENVPROC fptr = (PFNGLSCISSOREXCLUSIVENVPROC) dasGetProcAddress("glScissorExclusiveNV",__context__,__at__);
    (*fptr)(x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4FPROC fptr = (PFNGLVERTEXATTRIB4FPROC) dasGetProcAddress("glVertexAttrib4f",__context__,__at__);
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsPointInStrokePathNV ( GLuint path, GLfloat x, GLfloat y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISPOINTINSTROKEPATHNVPROC fptr = (PFNGLISPOINTINSTROKEPATHNVPROC) dasGetProcAddress("glIsPointInStrokePathNV",__context__,__at__);
    auto result = (*fptr)(path, x, y);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMultiTexGenfEXT ( GLenum texunit, GLenum coord, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENFEXTPROC fptr = (PFNGLMULTITEXGENFEXTPROC) dasGetProcAddress("glMultiTexGenfEXT",__context__,__at__);
    (*fptr)(texunit, coord, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM2UI64VARBPROC) dasGetProcAddress("glProgramUniform2ui64vARB",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glShaderStorageBlockBinding ( GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADERSTORAGEBLOCKBINDINGPROC fptr = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) dasGetProcAddress("glShaderStorageBlockBinding",__context__,__at__);
    (*fptr)(program, storageBlockIndex, storageBlockBinding);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfQueryDataINTEL ( GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint * bytesWritten, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFQUERYDATAINTELPROC fptr = (PFNGLGETPERFQUERYDATAINTELPROC) dasGetProcAddress("glGetPerfQueryDataINTEL",__context__,__at__);
    (*fptr)(queryHandle, flags, dataSize, data, bytesWritten);
    checkOpenGLError(__context__,__at__);
}

void glUniform2d ( GLint location, GLdouble x, GLdouble y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2DPROC fptr = (PFNGLUNIFORM2DPROC) dasGetProcAddress("glUniform2d",__context__,__at__);
    (*fptr)(location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glBindProgramPipeline ( GLuint pipeline, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDPROGRAMPIPELINEPROC fptr = (PFNGLBINDPROGRAMPIPELINEPROC) dasGetProcAddress("glBindProgramPipeline",__context__,__at__);
    (*fptr)(pipeline);
    checkOpenGLError(__context__,__at__);
}

void glPolygonMode ( GLenum face, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOLYGONMODEPROC fptr = (PFNGLPOLYGONMODEPROC) dasGetProcAddress("glPolygonMode",__context__,__at__);
    (*fptr)(face, mode);
    checkOpenGLError(__context__,__at__);
}

void glUniform1iv ( GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1IVPROC fptr = (PFNGLUNIFORM1IVPROC) dasGetProcAddress("glUniform1iv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformui64vARB ( GLuint program, GLint location, GLuint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMUI64VARBPROC fptr = (PFNGLGETUNIFORMUI64VARBPROC) dasGetProcAddress("glGetUniformui64vARB",__context__,__at__);
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glClearColor ( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARCOLORPROC fptr = (PFNGLCLEARCOLORPROC) dasGetProcAddress("glClearColor",__context__,__at__);
    (*fptr)(red, green, blue, alpha);
    checkOpenGLError(__context__,__at__);
}

void glCopyTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXIMAGE2DPROC fptr = (PFNGLCOPYTEXIMAGE2DPROC) dasGetProcAddress("glCopyTexImage2D",__context__,__at__);
    (*fptr)(target, level, internalformat, x, y, width, height, border);
    checkOpenGLError(__context__,__at__);
}

const GLubyte * glGetStringi ( GLenum name, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSTRINGIPROC fptr = (PFNGLGETSTRINGIPROC) dasGetProcAddress("glGetStringi",__context__,__at__);
    auto result = (*fptr)(name, index);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetActiveUniformBlockiv ( GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEUNIFORMBLOCKIVPROC fptr = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) dasGetProcAddress("glGetActiveUniformBlockiv",__context__,__at__);
    (*fptr)(program, uniformBlockIndex, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterfv ( GLuint texture, GLenum pname, const GLfloat * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERFVPROC fptr = (PFNGLTEXTUREPARAMETERFVPROC) dasGetProcAddress("glTextureParameterfv",__context__,__at__);
    (*fptr)(texture, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x2dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) dasGetProcAddress("glProgramUniformMatrix4x2dvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM2I64VNVPROC) dasGetProcAddress("glProgramUniform2i64vNV",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glStencilStrokePathNV ( GLuint path, GLint reference, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILSTROKEPATHNVPROC fptr = (PFNGLSTENCILSTROKEPATHNVPROC) dasGetProcAddress("glStencilStrokePathNV",__context__,__at__);
    (*fptr)(path, reference, mask);
    checkOpenGLError(__context__,__at__);
}

void glUniform2f ( GLint location, GLfloat v0, GLfloat v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2FPROC fptr = (PFNGLUNIFORM2FPROC) dasGetProcAddress("glUniform2f",__context__,__at__);
    (*fptr)(location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glUniform1dv ( GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1DVPROC fptr = (PFNGLUNIFORM1DVPROC) dasGetProcAddress("glUniform1dv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glStateCaptureNV ( GLuint state, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTATECAPTURENVPROC fptr = (PFNGLSTATECAPTURENVPROC) dasGetProcAddress("glStateCaptureNV",__context__,__at__);
    (*fptr)(state, mode);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2s ( GLuint index, GLshort x, GLshort y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2SPROC fptr = (PFNGLVERTEXATTRIB2SPROC) dasGetProcAddress("glVertexAttrib2s",__context__,__at__);
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetCommandHeaderNV ( GLenum tokenID, GLuint size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMMANDHEADERNVPROC fptr = (PFNGLGETCOMMANDHEADERNVPROC) dasGetProcAddress("glGetCommandHeaderNV",__context__,__at__);
    auto result = (*fptr)(tokenID, size);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glTextureStorage3D ( GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE3DPROC fptr = (PFNGLTEXTURESTORAGE3DPROC) dasGetProcAddress("glTextureStorage3D",__context__,__at__);
    (*fptr)(texture, levels, internalformat, width, height, depth);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameteriv ( GLuint texture, GLenum pname, const GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIVPROC fptr = (PFNGLTEXTUREPARAMETERIVPROC) dasGetProcAddress("glTextureParameteriv",__context__,__at__);
    (*fptr)(texture, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3ui64vNV ( GLuint index, const GLuint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL3UI64VNVPROC) dasGetProcAddress("glVertexAttribL3ui64vNV",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsQuery ( GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISQUERYPROC fptr = (PFNGLISQUERYPROC) dasGetProcAddress("glIsQuery",__context__,__at__);
    auto result = (*fptr)(id);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform2fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2FVPROC fptr = (PFNGLPROGRAMUNIFORM2FVPROC) dasGetProcAddress("glProgramUniform2fv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetTransformFeedbacki64_v ( GLuint xfb, GLenum pname, GLuint index, GLint64 * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTRANSFORMFEEDBACKI64_VPROC fptr = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) dasGetProcAddress("glGetTransformFeedbacki64_v",__context__,__at__);
    (*fptr)(xfb, pname, index, param);
    checkOpenGLError(__context__,__at__);
}

void glEGLImageTargetTextureStorageEXT ( GLuint texture, GLeglImageOES image, const GLint * attrib_list, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC fptr = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) dasGetProcAddress("glEGLImageTargetTextureStorageEXT",__context__,__at__);
    (*fptr)(texture, image, attrib_list);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageCallbackARB ( GLDEBUGPROCARB callback, const void * userParam, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGECALLBACKARBPROC fptr = (PFNGLDEBUGMESSAGECALLBACKARBPROC) dasGetProcAddress("glDebugMessageCallbackARB",__context__,__at__);
    (*fptr)(callback, userParam);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexParameterIivEXT ( GLenum texunit, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXPARAMETERIIVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC) dasGetProcAddress("glGetMultiTexParameterIivEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glDrawTransformFeedbackStreamInstanced ( GLenum mode, GLuint id, GLuint stream, GLsizei instancecount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) dasGetProcAddress("glDrawTransformFeedbackStreamInstanced",__context__,__at__);
    (*fptr)(mode, id, stream, instancecount);
    checkOpenGLError(__context__,__at__);
}

void glMakeTextureHandleNonResidentNV ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC fptr = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) dasGetProcAddress("glMakeTextureHandleNonResidentNV",__context__,__at__);
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE2DEXTPROC fptr = (PFNGLTEXTURESUBIMAGE2DEXTPROC) dasGetProcAddress("glTextureSubImage2DEXT",__context__,__at__);
    (*fptr)(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureImage1DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTUREIMAGE1DEXTPROC fptr = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC) dasGetProcAddress("glCopyTextureImage1DEXT",__context__,__at__);
    (*fptr)(texture, target, level, internalformat, x, y, width, border);
    checkOpenGLError(__context__,__at__);
}

void glProgramParameteri ( GLuint program, GLenum pname, GLint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMPARAMETERIPROC fptr = (PFNGLPROGRAMPARAMETERIPROC) dasGetProcAddress("glProgramParameteri",__context__,__at__);
    (*fptr)(program, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glDepthFunc ( GLenum func, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHFUNCPROC fptr = (PFNGLDEPTHFUNCPROC) dasGetProcAddress("glDepthFunc",__context__,__at__);
    (*fptr)(func);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayIndexediv ( GLuint vaobj, GLuint index, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYINDEXEDIVPROC fptr = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) dasGetProcAddress("glGetVertexArrayIndexediv",__context__,__at__);
    (*fptr)(vaobj, index, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramResourcefvNV ( GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCEFVNVPROC fptr = (PFNGLGETPROGRAMRESOURCEFVNVPROC) dasGetProcAddress("glGetProgramResourcefvNV",__context__,__at__);
    (*fptr)(program, programInterface, index, propCount, props, count, length, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexArraySecondaryColorOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC fptr = (PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC) dasGetProcAddress("glVertexArraySecondaryColorOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glGetFirstPerfQueryIdINTEL ( GLuint * queryId, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFIRSTPERFQUERYIDINTELPROC fptr = (PFNGLGETFIRSTPERFQUERYIDINTELPROC) dasGetProcAddress("glGetFirstPerfQueryIdINTEL",__context__,__at__);
    (*fptr)(queryId);
    checkOpenGLError(__context__,__at__);
}

void glReadnPixelsARB ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLREADNPIXELSARBPROC fptr = (PFNGLREADNPIXELSARBPROC) dasGetProcAddress("glReadnPixelsARB",__context__,__at__);
    (*fptr)(x, y, width, height, format, type, bufSize, data);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix3x2dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3X2DVPROC fptr = (PFNGLUNIFORMMATRIX3X2DVPROC) dasGetProcAddress("glUniformMatrix3x2dv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetTexParameterIuiv ( GLenum target, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXPARAMETERIUIVPROC fptr = (PFNGLGETTEXPARAMETERIUIVPROC) dasGetProcAddress("glGetTexParameterIuiv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniform3ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UI64VNVPROC fptr = (PFNGLUNIFORM3UI64VNVPROC) dasGetProcAddress("glUniform3ui64vNV",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4x3dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4X3DVPROC fptr = (PFNGLUNIFORMMATRIX4X3DVPROC) dasGetProcAddress("glUniformMatrix4x3dv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedFramebufferParameteriv ( GLuint framebuffer, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) dasGetProcAddress("glGetNamedFramebufferParameteriv",__context__,__at__);
    (*fptr)(framebuffer, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstancedBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) dasGetProcAddress("glDrawElementsInstancedBaseInstance",__context__,__at__);
    (*fptr)(mode, count, type, indices, instancecount, baseinstance);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterIiv ( GLuint texture, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIIVPROC fptr = (PFNGLGETTEXTUREPARAMETERIIVPROC) dasGetProcAddress("glGetTextureParameterIiv",__context__,__at__);
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1fv ( GLuint index, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1FVPROC fptr = (PFNGLVERTEXATTRIB1FVPROC) dasGetProcAddress("glVertexAttrib1fv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glPopDebugGroup ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOPDEBUGGROUPPROC fptr = (PFNGLPOPDEBUGGROUPPROC) dasGetProcAddress("glPopDebugGroup",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsTextureHandleResidentARB ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISTEXTUREHANDLERESIDENTARBPROC fptr = (PFNGLISTEXTUREHANDLERESIDENTARBPROC) dasGetProcAddress("glIsTextureHandleResidentARB",__context__,__at__);
    auto result = (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetNamedStringARB ( GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDSTRINGARBPROC fptr = (PFNGLGETNAMEDSTRINGARBPROC) dasGetProcAddress("glGetNamedStringARB",__context__,__at__);
    (*fptr)(namelen, name, bufSize, stringlen, string);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryObjectui64v ( GLuint id, GLenum pname, GLuint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYOBJECTUI64VPROC fptr = (PFNGLGETQUERYOBJECTUI64VPROC) dasGetProcAddress("glGetQueryObjectui64v",__context__,__at__);
    (*fptr)(id, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glBlendBarrierKHR ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDBARRIERKHRPROC fptr = (PFNGLBLENDBARRIERKHRPROC) dasGetProcAddress("glBlendBarrierKHR",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glGetPointerIndexedvEXT ( GLenum target, GLuint index, void ** data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPOINTERINDEXEDVEXTPROC fptr = (PFNGLGETPOINTERINDEXEDVEXTPROC) dasGetProcAddress("glGetPointerIndexedvEXT",__context__,__at__);
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexSubImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) dasGetProcAddress("glCompressedMultiTexSubImage2DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramPipelineiv ( GLuint pipeline, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMPIPELINEIVPROC fptr = (PFNGLGETPROGRAMPIPELINEIVPROC) dasGetProcAddress("glGetProgramPipelineiv",__context__,__at__);
    (*fptr)(pipeline, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGenerateTextureMipmapEXT ( GLuint texture, GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENERATETEXTUREMIPMAPEXTPROC fptr = (PFNGLGENERATETEXTUREMIPMAPEXTPROC) dasGetProcAddress("glGenerateTextureMipmapEXT",__context__,__at__);
    (*fptr)(texture, target);
    checkOpenGLError(__context__,__at__);
}

void glDeleteSync ( GLsync sync, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETESYNCPROC fptr = (PFNGLDELETESYNCPROC) dasGetProcAddress("glDeleteSync",__context__,__at__);
    (*fptr)(sync);
    checkOpenGLError(__context__,__at__);
}

void glGetDoublei_v ( GLenum target, GLuint index, GLdouble * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDOUBLEI_VPROC fptr = (PFNGLGETDOUBLEI_VPROC) dasGetProcAddress("glGetDoublei_v",__context__,__at__);
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glDeleteQueries ( GLsizei n, const GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEQUERIESPROC fptr = (PFNGLDELETEQUERIESPROC) dasGetProcAddress("glDeleteQueries",__context__,__at__);
    (*fptr)(n, ids);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3s ( GLuint index, GLshort x, GLshort y, GLshort z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3SPROC fptr = (PFNGLVERTEXATTRIB3SPROC) dasGetProcAddress("glVertexAttrib3s",__context__,__at__);
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3uiEXT ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM3UIEXTPROC) dasGetProcAddress("glProgramUniform3uiEXT",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage2DMultisampleEXT ( GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC fptr = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC) dasGetProcAddress("glTextureStorage2DMultisampleEXT",__context__,__at__);
    (*fptr)(texture, target, samples, internalformat, width, height, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glGetAttachedShaders ( GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETATTACHEDSHADERSPROC fptr = (PFNGLGETATTACHEDSHADERSPROC) dasGetProcAddress("glGetAttachedShaders",__context__,__at__);
    (*fptr)(program, maxCount, count, shaders);
    checkOpenGLError(__context__,__at__);
}

void glUniform1ui ( GLint location, GLuint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UIPROC fptr = (PFNGLUNIFORM1UIPROC) dasGetProcAddress("glUniform1ui",__context__,__at__);
    (*fptr)(location, v0);
    checkOpenGLError(__context__,__at__);
}

void glWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLWAITSYNCPROC fptr = (PFNGLWAITSYNCPROC) dasGetProcAddress("glWaitSync",__context__,__at__);
    (*fptr)(sync, flags, timeout);
    checkOpenGLError(__context__,__at__);
}

void glEnableVertexArrayAttrib ( GLuint vaobj, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEVERTEXARRAYATTRIBPROC fptr = (PFNGLENABLEVERTEXARRAYATTRIBPROC) dasGetProcAddress("glEnableVertexArrayAttrib",__context__,__at__);
    (*fptr)(vaobj, index);
    checkOpenGLError(__context__,__at__);
}

void glCompileCommandListNV ( GLuint list, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPILECOMMANDLISTNVPROC fptr = (PFNGLCOMPILECOMMANDLISTNVPROC) dasGetProcAddress("glCompileCommandListNV",__context__,__at__);
    (*fptr)(list);
    checkOpenGLError(__context__,__at__);
}

void glUniform4ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UI64VNVPROC fptr = (PFNGLUNIFORM4UI64VNVPROC) dasGetProcAddress("glUniform4ui64vNV",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glClampColor ( GLenum target, GLenum clamp, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLAMPCOLORPROC fptr = (PFNGLCLAMPCOLORPROC) dasGetProcAddress("glClampColor",__context__,__at__);
    (*fptr)(target, clamp);
    checkOpenGLError(__context__,__at__);
}

void glUniform3ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UIPROC fptr = (PFNGLUNIFORM3UIPROC) dasGetProcAddress("glUniform3ui",__context__,__at__);
    (*fptr)(location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2UIVEXTPROC) dasGetProcAddress("glProgramUniform2uivEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glBufferPageCommitmentMemNV ( GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERPAGECOMMITMENTMEMNVPROC fptr = (PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) dasGetProcAddress("glBufferPageCommitmentMemNV",__context__,__at__);
    (*fptr)(target, offset, size, memory, memOffset, commit);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArraysIndirect ( GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) dasGetProcAddress("glMultiDrawArraysIndirect",__context__,__at__);
    (*fptr)(mode, indirect, drawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glDeletePathsNV ( GLuint path, GLsizei range, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEPATHSNVPROC fptr = (PFNGLDELETEPATHSNVPROC) dasGetProcAddress("glDeletePathsNV",__context__,__at__);
    (*fptr)(path, range);
    checkOpenGLError(__context__,__at__);
}

void glInterpolatePathsNV ( GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINTERPOLATEPATHSNVPROC fptr = (PFNGLINTERPOLATEPATHSNVPROC) dasGetProcAddress("glInterpolatePathsNV",__context__,__at__);
    (*fptr)(resultPath, pathA, pathB, weight);
    checkOpenGLError(__context__,__at__);
}

void glDeleteTransformFeedbacks ( GLsizei n, const GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETETRANSFORMFEEDBACKSPROC fptr = (PFNGLDELETETRANSFORMFEEDBACKSPROC) dasGetProcAddress("glDeleteTransformFeedbacks",__context__,__at__);
    (*fptr)(n, ids);
    checkOpenGLError(__context__,__at__);
}

void glPopGroupMarkerEXT ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOPGROUPMARKEREXTPROC fptr = (PFNGLPOPGROUPMARKEREXTPROC) dasGetProcAddress("glPopGroupMarkerEXT",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSUBIMAGE2DPROC fptr = (PFNGLTEXSUBIMAGE2DPROC) dasGetProcAddress("glTexSubImage2D",__context__,__at__);
    (*fptr)(target, level, xoffset, yoffset, width, height, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGenSamplers ( GLsizei count, GLuint * samplers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENSAMPLERSPROC fptr = (PFNGLGENSAMPLERSPROC) dasGetProcAddress("glGenSamplers",__context__,__at__);
    (*fptr)(count, samplers);
    checkOpenGLError(__context__,__at__);
}

void glPolygonOffset ( GLfloat factor, GLfloat units, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOLYGONOFFSETPROC fptr = (PFNGLPOLYGONOFFSETPROC) dasGetProcAddress("glPolygonOffset",__context__,__at__);
    (*fptr)(factor, units);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedProgramLocalParameterfvEXT ( GLuint program, GLenum target, GLuint index, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) dasGetProcAddress("glGetNamedProgramLocalParameterfvEXT",__context__,__at__);
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glTexParameterf ( GLenum target, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERFPROC fptr = (PFNGLTEXPARAMETERFPROC) dasGetProcAddress("glTexParameterf",__context__,__at__);
    (*fptr)(target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3FVEXTPROC) dasGetProcAddress("glProgramUniform3fvEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glMinSampleShading ( GLfloat value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMINSAMPLESHADINGPROC fptr = (PFNGLMINSAMPLESHADINGPROC) dasGetProcAddress("glMinSampleShading",__context__,__at__);
    (*fptr)(value);
    checkOpenGLError(__context__,__at__);
}

void glDrawVkImageNV ( GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWVKIMAGENVPROC fptr = (PFNGLDRAWVKIMAGENVPROC) dasGetProcAddress("glDrawVkImageNV",__context__,__at__);
    (*fptr)(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
    checkOpenGLError(__context__,__at__);
}

void glCopyTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXIMAGE1DPROC fptr = (PFNGLCOPYTEXIMAGE1DPROC) dasGetProcAddress("glCopyTexImage1D",__context__,__at__);
    (*fptr)(target, level, internalformat, x, y, width, border);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryBufferObjectuiv ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYBUFFEROBJECTUIVPROC fptr = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) dasGetProcAddress("glGetQueryBufferObjectuiv",__context__,__at__);
    (*fptr)(id, buffer, pname, offset);
    checkOpenGLError(__context__,__at__);
}

void glUseProgram ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUSEPROGRAMPROC fptr = (PFNGLUSEPROGRAMPROC) dasGetProcAddress("glUseProgram",__context__,__at__);
    (*fptr)(program);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayBindingDivisor ( GLuint vaobj, GLuint bindingindex, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYBINDINGDIVISORPROC fptr = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) dasGetProcAddress("glVertexArrayBindingDivisor",__context__,__at__);
    (*fptr)(vaobj, bindingindex, divisor);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryBufferObjecti64v ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYBUFFEROBJECTI64VPROC fptr = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) dasGetProcAddress("glGetQueryBufferObjecti64v",__context__,__at__);
    (*fptr)(id, buffer, pname, offset);
    checkOpenGLError(__context__,__at__);
}

void glFrontFace ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRONTFACEPROC fptr = (PFNGLFRONTFACEPROC) dasGetProcAddress("glFrontFace",__context__,__at__);
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1f ( GLuint index, GLfloat x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1FPROC fptr = (PFNGLVERTEXATTRIB1FPROC) dasGetProcAddress("glVertexAttrib1f",__context__,__at__);
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glBindRenderbuffer ( GLenum target, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDRENDERBUFFERPROC fptr = (PFNGLBINDRENDERBUFFERPROC) dasGetProcAddress("glBindRenderbuffer",__context__,__at__);
    (*fptr)(target, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glCreateQueries ( GLenum target, GLsizei n, GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEQUERIESPROC fptr = (PFNGLCREATEQUERIESPROC) dasGetProcAddress("glCreateQueries",__context__,__at__);
    (*fptr)(target, n, ids);
    checkOpenGLError(__context__,__at__);
}

void glGetBufferPointerv ( GLenum target, GLenum pname, void ** params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBUFFERPOINTERVPROC fptr = (PFNGLGETBUFFERPOINTERVPROC) dasGetProcAddress("glGetBufferPointerv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glScissor ( GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSORPROC fptr = (PFNGLSCISSORPROC) dasGetProcAddress("glScissor",__context__,__at__);
    (*fptr)(x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glBindVertexBuffers ( GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDVERTEXBUFFERSPROC fptr = (PFNGLBINDVERTEXBUFFERSPROC) dasGetProcAddress("glBindVertexBuffers",__context__,__at__);
    (*fptr)(first, count, buffers, offsets, strides);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageControlARB ( GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, bool enabled, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGECONTROLARBPROC fptr = (PFNGLDEBUGMESSAGECONTROLARBPROC) dasGetProcAddress("glDebugMessageControlARB",__context__,__at__);
    (*fptr)(source, type, severity, count, ids, enabled);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferAttachMemoryNV ( GLuint buffer, GLuint memory, GLuint64 offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERATTACHMEMORYNVPROC fptr = (PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) dasGetProcAddress("glNamedBufferAttachMemoryNV",__context__,__at__);
    (*fptr)(buffer, memory, offset);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1d ( GLuint index, GLdouble x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1DPROC fptr = (PFNGLVERTEXATTRIB1DPROC) dasGetProcAddress("glVertexAttrib1d",__context__,__at__);
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glRenderbufferStorageMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC fptr = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) dasGetProcAddress("glRenderbufferStorageMultisample",__context__,__at__);
    (*fptr)(target, samples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glUniform1i64ARB ( GLint location, GLint64 x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1I64ARBPROC fptr = (PFNGLUNIFORM1I64ARBPROC) dasGetProcAddress("glUniform1i64ARB",__context__,__at__);
    (*fptr)(location, x);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP4uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP4UIVPROC fptr = (PFNGLVERTEXATTRIBP4UIVPROC) dasGetProcAddress("glVertexAttribP4uiv",__context__,__at__);
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterivEXT ( GLuint texture, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERIVEXTPROC) dasGetProcAddress("glGetTextureParameterivEXT",__context__,__at__);
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4s ( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4SPROC fptr = (PFNGLVERTEXATTRIB4SPROC) dasGetProcAddress("glVertexAttrib4s",__context__,__at__);
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsTextureHandleResidentNV ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISTEXTUREHANDLERESIDENTNVPROC fptr = (PFNGLISTEXTUREHANDLERESIDENTNVPROC) dasGetProcAddress("glIsTextureHandleResidentNV",__context__,__at__);
    auto result = (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glNamedProgramLocalParameterI4iEXT ( GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) dasGetProcAddress("glNamedProgramLocalParameterI4iEXT",__context__,__at__);
    (*fptr)(program, target, index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glShadingRateSampleOrderNV ( GLenum order, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADINGRATESAMPLEORDERNVPROC fptr = (PFNGLSHADINGRATESAMPLEORDERNVPROC) dasGetProcAddress("glShadingRateSampleOrderNV",__context__,__at__);
    (*fptr)(order);
    checkOpenGLError(__context__,__at__);
}

void glBindAttribLocation ( GLuint program, GLuint index, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDATTRIBLOCATIONPROC fptr = (PFNGLBINDATTRIBLOCATIONPROC) dasGetProcAddress("glBindAttribLocation",__context__,__at__);
    (*fptr)(program, index, name);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetProgramResourceIndex ( GLuint program, GLenum programInterface, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCEINDEXPROC fptr = (PFNGLGETPROGRAMRESOURCEINDEXPROC) dasGetProcAddress("glGetProgramResourceIndex",__context__,__at__);
    auto result = (*fptr)(program, programInterface, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMultiDrawElements ( GLenum mode, const GLsizei * count, GLenum type, const void *const * indices, GLsizei drawcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSPROC fptr = (PFNGLMULTIDRAWELEMENTSPROC) dasGetProcAddress("glMultiDrawElements",__context__,__at__);
    (*fptr)(mode, count, type, indices, drawcount);
    checkOpenGLError(__context__,__at__);
}

void glUniform3iv ( GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3IVPROC fptr = (PFNGLUNIFORM3IVPROC) dasGetProcAddress("glUniform3iv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glTexParameteri ( GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERIPROC fptr = (PFNGLTEXPARAMETERIPROC) dasGetProcAddress("glTexParameteri",__context__,__at__);
    (*fptr)(target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI3i ( GLuint index, GLint x, GLint y, GLint z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI3IPROC fptr = (PFNGLVERTEXATTRIBI3IPROC) dasGetProcAddress("glVertexAttribI3i",__context__,__at__);
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glDrawRangeElementsBaseVertex ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC fptr = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) dasGetProcAddress("glDrawRangeElementsBaseVertex",__context__,__at__);
    (*fptr)(mode, start, end, count, type, indices, basevertex);
    checkOpenGLError(__context__,__at__);
}

void glTexBufferRange ( GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXBUFFERRANGEPROC fptr = (PFNGLTEXBUFFERRANGEPROC) dasGetProcAddress("glTexBufferRange",__context__,__at__);
    (*fptr)(target, internalformat, buffer, offset, size);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferData ( GLuint buffer, GLsizeiptr size, const void * data, GLenum usage, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERDATAPROC fptr = (PFNGLNAMEDBUFFERDATAPROC) dasGetProcAddress("glNamedBufferData",__context__,__at__);
    (*fptr)(buffer, size, data, usage);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureImage2DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTUREIMAGE2DEXTPROC fptr = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC) dasGetProcAddress("glCopyTextureImage2DEXT",__context__,__at__);
    (*fptr)(texture, target, level, internalformat, x, y, width, height, border);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1DVEXTPROC) dasGetProcAddress("glProgramUniform1dvEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glBlitNamedFramebuffer ( GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLITNAMEDFRAMEBUFFERPROC fptr = (PFNGLBLITNAMEDFRAMEBUFFERPROC) dasGetProcAddress("glBlitNamedFramebuffer",__context__,__at__);
    (*fptr)(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1ui64ARB ( GLuint index, GLuint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1UI64ARBPROC fptr = (PFNGLVERTEXATTRIBL1UI64ARBPROC) dasGetProcAddress("glVertexAttribL1ui64ARB",__context__,__at__);
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribFormatEXT ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, bool normalized, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC) dasGetProcAddress("glVertexArrayVertexAttribFormatEXT",__context__,__at__);
    (*fptr)(vaobj, attribindex, size, type, normalized, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glApplyFramebufferAttachmentCMAAINTEL ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC fptr = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) dasGetProcAddress("glApplyFramebufferAttachmentCMAAINTEL",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glMultiTexParameterfvEXT ( GLenum texunit, GLenum target, GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERFVEXTPROC fptr = (PFNGLMULTITEXPARAMETERFVEXTPROC) dasGetProcAddress("glMultiTexParameterfvEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniform3fv ( GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3FVPROC fptr = (PFNGLUNIFORM3FVPROC) dasGetProcAddress("glUniform3fv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameter4dEXT ( GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) dasGetProcAddress("glNamedProgramLocalParameter4dEXT",__context__,__at__);
    (*fptr)(program, target, index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2DVPROC fptr = (PFNGLVERTEXATTRIBL2DVPROC) dasGetProcAddress("glVertexAttribL2dv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glUniform4i64ARB ( GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4I64ARBPROC fptr = (PFNGLUNIFORM4I64ARBPROC) dasGetProcAddress("glUniform4i64ARB",__context__,__at__);
    (*fptr)(location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferSampleLocationsfvNV ( GLenum target, GLuint start, GLsizei count, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC fptr = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) dasGetProcAddress("glFramebufferSampleLocationsfvNV",__context__,__at__);
    (*fptr)(target, start, count, v);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquationSeparateiARB ( GLuint buf, GLenum modeRGB, GLenum modeAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONSEPARATEIARBPROC fptr = (PFNGLBLENDEQUATIONSEPARATEIARBPROC) dasGetProcAddress("glBlendEquationSeparateiARB",__context__,__at__);
    (*fptr)(buf, modeRGB, modeAlpha);
    checkOpenGLError(__context__,__at__);
}

void glGenBuffers ( GLsizei n, GLuint * buffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENBUFFERSPROC fptr = (PFNGLGENBUFFERSPROC) dasGetProcAddress("glGenBuffers",__context__,__at__);
    (*fptr)(n, buffers);
    checkOpenGLError(__context__,__at__);
}

void glUniform3i ( GLint location, GLint v0, GLint v1, GLint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3IPROC fptr = (PFNGLUNIFORM3IPROC) dasGetProcAddress("glUniform3i",__context__,__at__);
    (*fptr)(location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glUniform4i ( GLint location, GLint v0, GLint v1, GLint v2, GLint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4IPROC fptr = (PFNGLUNIFORM4IPROC) dasGetProcAddress("glUniform4i",__context__,__at__);
    (*fptr)(location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateTexImage ( GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATETEXIMAGEPROC fptr = (PFNGLINVALIDATETEXIMAGEPROC) dasGetProcAddress("glInvalidateTexImage",__context__,__at__);
    (*fptr)(texture, level);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribLui64vNV ( GLuint index, GLenum pname, GLuint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBLUI64VNVPROC fptr = (PFNGLGETVERTEXATTRIBLUI64VNVPROC) dasGetProcAddress("glGetVertexAttribLui64vNV",__context__,__at__);
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetFloati_v ( GLenum target, GLuint index, GLfloat * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFLOATI_VPROC fptr = (PFNGLGETFLOATI_VPROC) dasGetProcAddress("glGetFloati_v",__context__,__at__);
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glCopyMultiTexSubImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC fptr = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) dasGetProcAddress("glCopyMultiTexSubImage2DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, xoffset, yoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArrays ( GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSPROC fptr = (PFNGLMULTIDRAWARRAYSPROC) dasGetProcAddress("glMultiDrawArrays",__context__,__at__);
    (*fptr)(mode, first, count, drawcount);
    checkOpenGLError(__context__,__at__);
}

void * glMapNamedBufferEXT ( GLuint buffer, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPNAMEDBUFFEREXTPROC fptr = (PFNGLMAPNAMEDBUFFEREXTPROC) dasGetProcAddress("glMapNamedBufferEXT",__context__,__at__);
    auto result = (*fptr)(buffer, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLuint64 glGetImageHandleARB ( GLuint texture, GLint level, bool layered, GLint layer, GLenum format, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETIMAGEHANDLEARBPROC fptr = (PFNGLGETIMAGEHANDLEARBPROC) dasGetProcAddress("glGetImageHandleARB",__context__,__at__);
    auto result = (*fptr)(texture, level, layered, layer, format);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniform2i64ARB ( GLint location, GLint64 x, GLint64 y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2I64ARBPROC fptr = (PFNGLUNIFORM2I64ARBPROC) dasGetProcAddress("glUniform2i64ARB",__context__,__at__);
    (*fptr)(location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glCopyTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXSUBIMAGE2DPROC fptr = (PFNGLCOPYTEXSUBIMAGE2DPROC) dasGetProcAddress("glCopyTexSubImage2D",__context__,__at__);
    (*fptr)(target, level, xoffset, yoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glUseShaderProgramEXT ( GLenum type, GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUSESHADERPROGRAMEXTPROC fptr = (PFNGLUSESHADERPROGRAMEXTPROC) dasGetProcAddress("glUseShaderProgramEXT",__context__,__at__);
    (*fptr)(type, program);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribIFormat ( GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBIFORMATPROC fptr = (PFNGLVERTEXATTRIBIFORMATPROC) dasGetProcAddress("glVertexAttribIFormat",__context__,__at__);
    (*fptr)(attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfQueryInfoINTEL ( GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFQUERYINFOINTELPROC fptr = (PFNGLGETPERFQUERYINFOINTELPROC) dasGetProcAddress("glGetPerfQueryInfoINTEL",__context__,__at__);
    (*fptr)(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterIivEXT ( GLuint texture, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIIVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC) dasGetProcAddress("glGetTextureParameterIivEXT",__context__,__at__);
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateNamedFramebufferSubData ( GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC fptr = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) dasGetProcAddress("glInvalidateNamedFramebufferSubData",__context__,__at__);
    (*fptr)(framebuffer, numAttachments, attachments, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glGetInternalformati64v ( GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTERNALFORMATI64VPROC fptr = (PFNGLGETINTERNALFORMATI64VPROC) dasGetProcAddress("glGetInternalformati64v",__context__,__at__);
    (*fptr)(target, internalformat, pname, count, params);
    checkOpenGLError(__context__,__at__);
}

void glTexBufferARB ( GLenum target, GLenum internalformat, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXBUFFERARBPROC fptr = (PFNGLTEXBUFFERARBPROC) dasGetProcAddress("glTexBufferARB",__context__,__at__);
    (*fptr)(target, internalformat, buffer);
    checkOpenGLError(__context__,__at__);
}

void glGetTexParameterIiv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXPARAMETERIIVPROC fptr = (PFNGLGETTEXPARAMETERIIVPROC) dasGetProcAddress("glGetTexParameterIiv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4DVEXTPROC) dasGetProcAddress("glProgramUniform4dvEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glWeightPathsNV ( GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLWEIGHTPATHSNVPROC fptr = (PFNGLWEIGHTPATHSNVPROC) dasGetProcAddress("glWeightPathsNV",__context__,__at__);
    (*fptr)(resultPath, numPaths, paths, weights);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribLi64vNV ( GLuint index, GLenum pname, GLint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBLI64VNVPROC fptr = (PFNGLGETVERTEXATTRIBLI64VNVPROC) dasGetProcAddress("glGetVertexAttribLi64vNV",__context__,__at__);
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4i ( GLuint index, GLint x, GLint y, GLint z, GLint w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4IPROC fptr = (PFNGLVERTEXATTRIBI4IPROC) dasGetProcAddress("glVertexAttribI4i",__context__,__at__);
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayiv ( GLuint vaobj, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYIVPROC fptr = (PFNGLGETVERTEXARRAYIVPROC) dasGetProcAddress("glGetVertexArrayiv",__context__,__at__);
    (*fptr)(vaobj, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL4i64vNV ( GLuint index, const GLint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4I64VNVPROC fptr = (PFNGLVERTEXATTRIBL4I64VNVPROC) dasGetProcAddress("glVertexAttribL4i64vNV",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTexture2D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTURE2DPROC fptr = (PFNGLFRAMEBUFFERTEXTURE2DPROC) dasGetProcAddress("glFramebufferTexture2D",__context__,__at__);
    (*fptr)(target, attachment, textarget, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3DPROC fptr = (PFNGLVERTEXATTRIB3DPROC) dasGetProcAddress("glVertexAttrib3d",__context__,__at__);
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoaddEXT ( GLenum mode, const GLdouble * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADDEXTPROC fptr = (PFNGLMATRIXLOADDEXTPROC) dasGetProcAddress("glMatrixLoaddEXT",__context__,__at__);
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexRenderbufferEXT ( GLenum texunit, GLenum target, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXRENDERBUFFEREXTPROC fptr = (PFNGLMULTITEXRENDERBUFFEREXTPROC) dasGetProcAddress("glMultiTexRenderbufferEXT",__context__,__at__);
    (*fptr)(texunit, target, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferParameteriMESA ( GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERPARAMETERIMESAPROC fptr = (PFNGLFRAMEBUFFERPARAMETERIMESAPROC) dasGetProcAddress("glFramebufferParameteriMESA",__context__,__at__);
    (*fptr)(target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glPushGroupMarkerEXT ( GLsizei length, const GLchar * marker, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPUSHGROUPMARKEREXTPROC fptr = (PFNGLPUSHGROUPMARKEREXTPROC) dasGetProcAddress("glPushGroupMarkerEXT",__context__,__at__);
    (*fptr)(length, marker);
    checkOpenGLError(__context__,__at__);
}

void glTextureBufferRange ( GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBUFFERRANGEPROC fptr = (PFNGLTEXTUREBUFFERRANGEPROC) dasGetProcAddress("glTextureBufferRange",__context__,__at__);
    (*fptr)(texture, internalformat, buffer, offset, size);
    checkOpenGLError(__context__,__at__);
}

void glGetFloati_vEXT ( GLenum pname, GLuint index, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFLOATI_VEXTPROC fptr = (PFNGLGETFLOATI_VEXTPROC) dasGetProcAddress("glGetFloati_vEXT",__context__,__at__);
    (*fptr)(pname, index, params);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) dasGetProcAddress("glCompressedTextureSubImage3DEXT",__context__,__at__);
    (*fptr)(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glReadBuffer ( GLenum src, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLREADBUFFERPROC fptr = (PFNGLREADBUFFERPROC) dasGetProcAddress("glReadBuffer",__context__,__at__);
    (*fptr)(src);
    checkOpenGLError(__context__,__at__);
}

void glUniform3uiv ( GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UIVPROC fptr = (PFNGLUNIFORM3UIVPROC) dasGetProcAddress("glUniform3uiv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3FPROC fptr = (PFNGLVERTEXATTRIB3FPROC) dasGetProcAddress("glVertexAttrib3f",__context__,__at__);
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3UIVEXTPROC) dasGetProcAddress("glProgramUniform3uivEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsRenderbuffer ( GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISRENDERBUFFERPROC fptr = (PFNGLISRENDERBUFFERPROC) dasGetProcAddress("glIsRenderbuffer",__context__,__at__);
    auto result = (*fptr)(renderbuffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLenum glCheckNamedFramebufferStatus ( GLuint framebuffer, GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC fptr = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) dasGetProcAddress("glCheckNamedFramebufferStatus",__context__,__at__);
    auto result = (*fptr)(framebuffer, target);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glBindShadingRateImageNV ( GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDSHADINGRATEIMAGENVPROC fptr = (PFNGLBINDSHADINGRATEIMAGENVPROC) dasGetProcAddress("glBindShadingRateImageNV",__context__,__at__);
    (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
}

void glTexAttachMemoryNV ( GLenum target, GLuint memory, GLuint64 offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXATTACHMEMORYNVPROC fptr = (PFNGLTEXATTACHMEMORYNVPROC) dasGetProcAddress("glTexAttachMemoryNV",__context__,__at__);
    (*fptr)(target, memory, offset);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI1i ( GLuint index, GLint x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI1IPROC fptr = (PFNGLVERTEXATTRIBI1IPROC) dasGetProcAddress("glVertexAttribI1i",__context__,__at__);
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glDrawArrays ( GLenum mode, GLint first, GLsizei count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSPROC fptr = (PFNGLDRAWARRAYSPROC) dasGetProcAddress("glDrawArrays",__context__,__at__);
    (*fptr)(mode, first, count);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1d ( GLuint program, GLint location, GLdouble v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1DPROC fptr = (PFNGLPROGRAMUNIFORM1DPROC) dasGetProcAddress("glProgramUniform1d",__context__,__at__);
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glUniform4f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4FPROC fptr = (PFNGLUNIFORM4FPROC) dasGetProcAddress("glUniform4f",__context__,__at__);
    (*fptr)(location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glBufferPageCommitmentARB ( GLenum target, GLintptr offset, GLsizeiptr size, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERPAGECOMMITMENTARBPROC fptr = (PFNGLBUFFERPAGECOMMITMENTARBPROC) dasGetProcAddress("glBufferPageCommitmentARB",__context__,__at__);
    (*fptr)(target, offset, size, commit);
    checkOpenGLError(__context__,__at__);
}

void glBlendFuncSeparateiARB ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCSEPARATEIARBPROC fptr = (PFNGLBLENDFUNCSEPARATEIARBPROC) dasGetProcAddress("glBlendFuncSeparateiARB",__context__,__at__);
    (*fptr)(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
    checkOpenGLError(__context__,__at__);
}

void glMaxShaderCompilerThreadsARB ( GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAXSHADERCOMPILERTHREADSARBPROC fptr = (PFNGLMAXSHADERCOMPILERTHREADSARBPROC) dasGetProcAddress("glMaxShaderCompilerThreadsARB",__context__,__at__);
    (*fptr)(count);
    checkOpenGLError(__context__,__at__);
}

void glMakeTextureHandleNonResidentARB ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC fptr = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) dasGetProcAddress("glMakeTextureHandleNonResidentARB",__context__,__at__);
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glPatchParameteri ( GLenum pname, GLint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATCHPARAMETERIPROC fptr = (PFNGLPATCHPARAMETERIPROC) dasGetProcAddress("glPatchParameteri",__context__,__at__);
    (*fptr)(pname, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayEdgeFlagOffsetEXT ( GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC) dasGetProcAddress("glVertexArrayEdgeFlagOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, stride, offset);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetDebugMessageLog ( GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDEBUGMESSAGELOGPROC fptr = (PFNGLGETDEBUGMESSAGELOGPROC) dasGetProcAddress("glGetDebugMessageLog",__context__,__at__);
    auto result = (*fptr)(count, bufSize, sources, types, ids, severities, lengths, messageLog);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform1f ( GLuint program, GLint location, GLfloat v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1FPROC fptr = (PFNGLPROGRAMUNIFORM1FPROC) dasGetProcAddress("glProgramUniform1f",__context__,__at__);
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glTexStorage3DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSTORAGE3DMULTISAMPLEPROC fptr = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) dasGetProcAddress("glTexStorage3DMultisample",__context__,__at__);
    (*fptr)(target, samples, internalformat, width, height, depth, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsIndirectCountARB ( GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) dasGetProcAddress("glMultiDrawElementsIndirectCountARB",__context__,__at__);
    (*fptr)(mode, type, indirect, drawcount, maxdrawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glCopyMultiTexSubImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC fptr = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) dasGetProcAddress("glCopyMultiTexSubImage3DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glUniform3f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3FPROC fptr = (PFNGLUNIFORM3FPROC) dasGetProcAddress("glUniform3f",__context__,__at__);
    (*fptr)(location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glUniform4d ( GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4DPROC fptr = (PFNGLUNIFORM4DPROC) dasGetProcAddress("glUniform4d",__context__,__at__);
    (*fptr)(location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1i ( GLuint program, GLint location, GLint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1IPROC fptr = (PFNGLPROGRAMUNIFORM1IPROC) dasGetProcAddress("glProgramUniform1i",__context__,__at__);
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2i ( GLuint program, GLint location, GLint v0, GLint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2IPROC fptr = (PFNGLPROGRAMUNIFORM2IPROC) dasGetProcAddress("glProgramUniform2i",__context__,__at__);
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

const GLubyte * glGetString ( GLenum name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSTRINGPROC fptr = (PFNGLGETSTRINGPROC) dasGetProcAddress("glGetString",__context__,__at__);
    auto result = (*fptr)(name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniformBlockBinding ( GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMBLOCKBINDINGPROC fptr = (PFNGLUNIFORMBLOCKBINDINGPROC) dasGetProcAddress("glUniformBlockBinding",__context__,__at__);
    (*fptr)(program, uniformBlockIndex, uniformBlockBinding);
    checkOpenGLError(__context__,__at__);
}

void glGetSamplerParameterIuiv ( GLuint sampler, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSAMPLERPARAMETERIUIVPROC fptr = (PFNGLGETSAMPLERPARAMETERIUIVPROC) dasGetProcAddress("glGetSamplerParameterIuiv",__context__,__at__);
    (*fptr)(sampler, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4IVEXTPROC) dasGetProcAddress("glProgramUniform4ivEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameter4fEXT ( GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) dasGetProcAddress("glNamedProgramLocalParameter4fEXT",__context__,__at__);
    (*fptr)(program, target, index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glTextureBufferRangeEXT ( GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBUFFERRANGEEXTPROC fptr = (PFNGLTEXTUREBUFFERRANGEEXTPROC) dasGetProcAddress("glTextureBufferRangeEXT",__context__,__at__);
    (*fptr)(texture, target, internalformat, buffer, offset, size);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage1DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE1DEXTPROC fptr = (PFNGLTEXTURESTORAGE1DEXTPROC) dasGetProcAddress("glTextureStorage1DEXT",__context__,__at__);
    (*fptr)(texture, target, levels, internalformat, width);
    checkOpenGLError(__context__,__at__);
}

void glSpecializeShaderARB ( GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSPECIALIZESHADERARBPROC fptr = (PFNGLSPECIALIZESHADERARBPROC) dasGetProcAddress("glSpecializeShaderARB",__context__,__at__);
    (*fptr)(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
    checkOpenGLError(__context__,__at__);
}

void glMakeTextureHandleResidentARB ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKETEXTUREHANDLERESIDENTARBPROC fptr = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) dasGetProcAddress("glMakeTextureHandleResidentARB",__context__,__at__);
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glUniformui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMUI64VNVPROC fptr = (PFNGLUNIFORMUI64VNVPROC) dasGetProcAddress("glUniformui64vNV",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glUniform3d ( GLint location, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3DPROC fptr = (PFNGLUNIFORM3DPROC) dasGetProcAddress("glUniform3d",__context__,__at__);
    (*fptr)(location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glViewportArrayv ( GLuint first, GLsizei count, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTARRAYVPROC fptr = (PFNGLVIEWPORTARRAYVPROC) dasGetProcAddress("glViewportArrayv",__context__,__at__);
    (*fptr)(first, count, v);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTextureLayer ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTURELAYERPROC fptr = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) dasGetProcAddress("glFramebufferTextureLayer",__context__,__at__);
    (*fptr)(target, attachment, texture, level, layer);
    checkOpenGLError(__context__,__at__);
}

void glGetShaderPrecisionFormat ( GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADERPRECISIONFORMATPROC fptr = (PFNGLGETSHADERPRECISIONFORMATPROC) dasGetProcAddress("glGetShaderPrecisionFormat",__context__,__at__);
    (*fptr)(shadertype, precisiontype, range, precision);
    checkOpenGLError(__context__,__at__);
}

void glUniform3dv ( GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3DVPROC fptr = (PFNGLUNIFORM3DVPROC) dasGetProcAddress("glUniform3dv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexEnvfvEXT ( GLenum texunit, GLenum target, GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXENVFVEXTPROC fptr = (PFNGLMULTITEXENVFVEXTPROC) dasGetProcAddress("glMultiTexEnvfvEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP4ui ( GLuint index, GLenum type, bool normalized, GLuint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP4UIPROC fptr = (PFNGLVERTEXATTRIBP4UIPROC) dasGetProcAddress("glVertexAttribP4ui",__context__,__at__);
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

GLfloat glGetPathLengthNV ( GLuint path, GLsizei startSegment, GLsizei numSegments, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHLENGTHNVPROC fptr = (PFNGLGETPATHLENGTHNVPROC) dasGetProcAddress("glGetPathLengthNV",__context__,__at__);
    auto result = (*fptr)(path, startSegment, numSegments);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glCompressedTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXIMAGE2DPROC fptr = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) dasGetProcAddress("glCompressedTexImage2D",__context__,__at__);
    (*fptr)(target, level, internalformat, width, height, border, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferRenderbufferEXT ( GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) dasGetProcAddress("glNamedFramebufferRenderbufferEXT",__context__,__at__);
    (*fptr)(framebuffer, attachment, renderbuffertarget, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferRenderbuffer ( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERRENDERBUFFERPROC fptr = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) dasGetProcAddress("glFramebufferRenderbuffer",__context__,__at__);
    (*fptr)(target, attachment, renderbuffertarget, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glBlendBarrierNV ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDBARRIERNVPROC fptr = (PFNGLBLENDBARRIERNVPROC) dasGetProcAddress("glBlendBarrierNV",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glGetQueryObjectiv ( GLuint id, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYOBJECTIVPROC fptr = (PFNGLGETQUERYOBJECTIVPROC) dasGetProcAddress("glGetQueryObjectiv",__context__,__at__);
    (*fptr)(id, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferSubData ( GLuint buffer, GLintptr offset, GLsizeiptr size, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERSUBDATAPROC fptr = (PFNGLGETNAMEDBUFFERSUBDATAPROC) dasGetProcAddress("glGetNamedBufferSubData",__context__,__at__);
    (*fptr)(buffer, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glBufferStorage ( GLenum target, GLsizeiptr size, const void * data, GLbitfield flags, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERSTORAGEPROC fptr = (PFNGLBUFFERSTORAGEPROC) dasGetProcAddress("glBufferStorage",__context__,__at__);
    (*fptr)(target, size, data, flags);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferReadBuffer ( GLuint framebuffer, GLenum src, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC fptr = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) dasGetProcAddress("glNamedFramebufferReadBuffer",__context__,__at__);
    (*fptr)(framebuffer, src);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangeIndexeddNV ( GLuint index, GLdouble n, GLdouble f, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEINDEXEDDNVPROC fptr = (PFNGLDEPTHRANGEINDEXEDDNVPROC) dasGetProcAddress("glDepthRangeIndexeddNV",__context__,__at__);
    (*fptr)(index, n, f);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexSubImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXSUBIMAGE3DEXTPROC fptr = (PFNGLMULTITEXSUBIMAGE3DEXTPROC) dasGetProcAddress("glMultiTexSubImage3DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexParameterIuivEXT ( GLenum texunit, GLenum target, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXPARAMETERIUIVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) dasGetProcAddress("glGetMultiTexParameterIuivEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedFramebufferfi ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERFIPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) dasGetProcAddress("glClearNamedFramebufferfi",__context__,__at__);
    (*fptr)(framebuffer, buffer, drawbuffer, depth, stencil);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2i64vNV ( GLuint index, const GLint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2I64VNVPROC fptr = (PFNGLVERTEXATTRIBL2I64VNVPROC) dasGetProcAddress("glVertexAttribL2i64vNV",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetShaderInfoLog ( GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADERINFOLOGPROC fptr = (PFNGLGETSHADERINFOLOGPROC) dasGetProcAddress("glGetShaderInfoLog",__context__,__at__);
    (*fptr)(shader, bufSize, length, infoLog);
    checkOpenGLError(__context__,__at__);
}

void glGetBooleanIndexedvEXT ( GLenum target, GLuint index, GLboolean * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBOOLEANINDEXEDVEXTPROC fptr = (PFNGLGETBOOLEANINDEXEDVEXTPROC) dasGetProcAddress("glGetBooleanIndexedvEXT",__context__,__at__);
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedFramebufferiv ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERIVPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) dasGetProcAddress("glClearNamedFramebufferiv",__context__,__at__);
    (*fptr)(framebuffer, buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

void glGenerateTextureMipmap ( GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENERATETEXTUREMIPMAPPROC fptr = (PFNGLGENERATETEXTUREMIPMAPPROC) dasGetProcAddress("glGenerateTextureMipmap",__context__,__at__);
    (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
}

void glTextureAttachMemoryNV ( GLuint texture, GLuint memory, GLuint64 offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREATTACHMEMORYNVPROC fptr = (PFNGLTEXTUREATTACHMEMORYNVPROC) dasGetProcAddress("glTextureAttachMemoryNV",__context__,__at__);
    (*fptr)(texture, memory, offset);
    checkOpenGLError(__context__,__at__);
}

void glSpecializeShader ( GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSPECIALIZESHADERPROC fptr = (PFNGLSPECIALIZESHADERPROC) dasGetProcAddress("glSpecializeShader",__context__,__at__);
    (*fptr)(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2iEXT ( GLuint program, GLint location, GLint v0, GLint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2IEXTPROC fptr = (PFNGLPROGRAMUNIFORM2IEXTPROC) dasGetProcAddress("glProgramUniform2iEXT",__context__,__at__);
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage3DMultisampleEXT ( GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC fptr = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC) dasGetProcAddress("glTextureStorage3DMultisampleEXT",__context__,__at__);
    (*fptr)(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstancedBaseVertex ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) dasGetProcAddress("glDrawElementsInstancedBaseVertex",__context__,__at__);
    (*fptr)(mode, count, type, indices, instancecount, basevertex);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1fEXT ( GLuint program, GLint location, GLfloat v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1FEXTPROC fptr = (PFNGLPROGRAMUNIFORM1FEXTPROC) dasGetProcAddress("glProgramUniform1fEXT",__context__,__at__);
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glGenRenderbuffers ( GLsizei n, GLuint * renderbuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENRENDERBUFFERSPROC fptr = (PFNGLGENRENDERBUFFERSPROC) dasGetProcAddress("glGenRenderbuffers",__context__,__at__);
    (*fptr)(n, renderbuffers);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedProgramivEXT ( GLuint program, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMIVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMIVEXTPROC) dasGetProcAddress("glGetNamedProgramivEXT",__context__,__at__);
    (*fptr)(program, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexLevelParameterfvEXT ( GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC fptr = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) dasGetProcAddress("glGetMultiTexLevelParameterfvEXT",__context__,__at__);
    (*fptr)(texunit, target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstancedEXT ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDEXTPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) dasGetProcAddress("glDrawElementsInstancedEXT",__context__,__at__);
    (*fptr)(mode, count, type, indices, primcount);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedFramebufferfv ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERFVPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) dasGetProcAddress("glClearNamedFramebufferfv",__context__,__at__);
    (*fptr)(framebuffer, buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ui64ARB ( GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM4UI64ARBPROC) dasGetProcAddress("glProgramUniform4ui64ARB",__context__,__at__);
    (*fptr)(program, location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void * glMapBuffer ( GLenum target, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPBUFFERPROC fptr = (PFNGLMAPBUFFERPROC) dasGetProcAddress("glMapBuffer",__context__,__at__);
    auto result = (*fptr)(target, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glSamplerParameterIuiv ( GLuint sampler, GLenum pname, const GLuint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERIUIVPROC fptr = (PFNGLSAMPLERPARAMETERIUIVPROC) dasGetProcAddress("glSamplerParameterIuiv",__context__,__at__);
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glEndConditionalRender ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDCONDITIONALRENDERPROC fptr = (PFNGLENDCONDITIONALRENDERPROC) dasGetProcAddress("glEndConditionalRender",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glBlendFunc ( GLenum sfactor, GLenum dfactor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCPROC fptr = (PFNGLBLENDFUNCPROC) dasGetProcAddress("glBlendFunc",__context__,__at__);
    (*fptr)(sfactor, dfactor);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2DPROC fptr = (PFNGLPROGRAMUNIFORM2DPROC) dasGetProcAddress("glProgramUniform2d",__context__,__at__);
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void * glMapNamedBufferRangeEXT ( GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPNAMEDBUFFERRANGEEXTPROC fptr = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC) dasGetProcAddress("glMapNamedBufferRangeEXT",__context__,__at__);
    auto result = (*fptr)(buffer, offset, length, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glBindBuffer ( GLenum target, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDBUFFERPROC fptr = (PFNGLBINDBUFFERPROC) dasGetProcAddress("glBindBuffer",__context__,__at__);
    (*fptr)(target, buffer);
    checkOpenGLError(__context__,__at__);
}

void glDeleteSamplers ( GLsizei count, const GLuint * samplers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETESAMPLERSPROC fptr = (PFNGLDELETESAMPLERSPROC) dasGetProcAddress("glDeleteSamplers",__context__,__at__);
    (*fptr)(count, samplers);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) dasGetProcAddress("glProgramUniformMatrix2dv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedBufferSubData ( GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDBUFFERSUBDATAPROC fptr = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) dasGetProcAddress("glClearNamedBufferSubData",__context__,__at__);
    (*fptr)(buffer, internalformat, offset, size, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glUniform4i64vNV ( GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4I64VNVPROC fptr = (PFNGLUNIFORM4I64VNVPROC) dasGetProcAddress("glUniform4i64vNV",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2FPROC fptr = (PFNGLPROGRAMUNIFORM2FPROC) dasGetProcAddress("glProgramUniform2f",__context__,__at__);
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsPointInFillPathNV ( GLuint path, GLuint mask, GLfloat x, GLfloat y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISPOINTINFILLPATHNVPROC fptr = (PFNGLISPOINTINFILLPATHNVPROC) dasGetProcAddress("glIsPointInFillPathNV",__context__,__at__);
    auto result = (*fptr)(path, mask, x, y);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform3ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3IVEXTPROC) dasGetProcAddress("glProgramUniform3ivEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformdv ( GLuint program, GLint location, GLsizei bufSize, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMDVPROC fptr = (PFNGLGETNUNIFORMDVPROC) dasGetProcAddress("glGetnUniformdv",__context__,__at__);
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformfv ( GLuint program, GLint location, GLsizei bufSize, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMFVPROC fptr = (PFNGLGETNUNIFORMFVPROC) dasGetProcAddress("glGetnUniformfv",__context__,__at__);
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glPathParameteriNV ( GLuint path, GLenum pname, GLint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHPARAMETERINVPROC fptr = (PFNGLPATHPARAMETERINVPROC) dasGetProcAddress("glPathParameteriNV",__context__,__at__);
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glClientAttribDefaultEXT ( GLbitfield mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLIENTATTRIBDEFAULTEXTPROC fptr = (PFNGLCLIENTATTRIBDEFAULTEXTPROC) dasGetProcAddress("glClientAttribDefaultEXT",__context__,__at__);
    (*fptr)(mask);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedBufferSubDataEXT ( GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC fptr = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) dasGetProcAddress("glClearNamedBufferSubDataEXT",__context__,__at__);
    (*fptr)(buffer, internalformat, offset, size, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glTexStorage3D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSTORAGE3DPROC fptr = (PFNGLTEXSTORAGE3DPROC) dasGetProcAddress("glTexStorage3D",__context__,__at__);
    (*fptr)(target, levels, internalformat, width, height, depth);
    checkOpenGLError(__context__,__at__);
}

void glGetnTexImage ( GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNTEXIMAGEPROC fptr = (PFNGLGETNTEXIMAGEPROC) dasGetProcAddress("glGetnTexImage",__context__,__at__);
    (*fptr)(target, level, format, type, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveUniform ( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEUNIFORMPROC fptr = (PFNGLGETACTIVEUNIFORMPROC) dasGetProcAddress("glGetActiveUniform",__context__,__at__);
    (*fptr)(program, index, bufSize, length, size, type, name);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateBufferData ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATEBUFFERDATAPROC fptr = (PFNGLINVALIDATEBUFFERDATAPROC) dasGetProcAddress("glInvalidateBufferData",__context__,__at__);
    (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferParameteriv ( GLuint buffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPARAMETERIVPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) dasGetProcAddress("glGetNamedBufferParameteriv",__context__,__at__);
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformiv ( GLuint program, GLint location, GLsizei bufSize, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMIVPROC fptr = (PFNGLGETNUNIFORMIVPROC) dasGetProcAddress("glGetnUniformiv",__context__,__at__);
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexGeniEXT ( GLenum texunit, GLenum coord, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENIEXTPROC fptr = (PFNGLMULTITEXGENIEXTPROC) dasGetProcAddress("glMultiTexGeniEXT",__context__,__at__);
    (*fptr)(texunit, coord, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4uiEXT ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM4UIEXTPROC) dasGetProcAddress("glProgramUniform4uiEXT",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glPathDashArrayNV ( GLuint path, GLsizei dashCount, const GLfloat * dashArray, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHDASHARRAYNVPROC fptr = (PFNGLPATHDASHARRAYNVPROC) dasGetProcAddress("glPathDashArrayNV",__context__,__at__);
    (*fptr)(path, dashCount, dashArray);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC fptr = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) dasGetProcAddress("glCompressedTexSubImage3D",__context__,__at__);
    (*fptr)(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsShader ( GLuint shader, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISSHADERPROC fptr = (PFNGLISSHADERPROC) dasGetProcAddress("glIsShader",__context__,__at__);
    auto result = (*fptr)(shader);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glVertexAttribI2iv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI2IVPROC fptr = (PFNGLVERTEXATTRIBI2IVPROC) dasGetProcAddress("glVertexAttribI2iv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterIuivEXT ( GLuint texture, GLenum target, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIUIVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) dasGetProcAddress("glGetTextureParameterIuivEXT",__context__,__at__);
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorage ( GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) dasGetProcAddress("glNamedRenderbufferStorage",__context__,__at__);
    (*fptr)(renderbuffer, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterf ( GLuint texture, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERFPROC fptr = (PFNGLTEXTUREPARAMETERFPROC) dasGetProcAddress("glTextureParameterf",__context__,__at__);
    (*fptr)(texture, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glDrawCommandsNV ( GLenum primitiveMode, GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWCOMMANDSNVPROC fptr = (PFNGLDRAWCOMMANDSNVPROC) dasGetProcAddress("glDrawCommandsNV",__context__,__at__);
    (*fptr)(primitiveMode, buffer, indirects, sizes, count);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) dasGetProcAddress("glProgramUniformMatrix2dvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBlendColor ( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDCOLORPROC fptr = (PFNGLBLENDCOLORPROC) dasGetProcAddress("glBlendColor",__context__,__at__);
    (*fptr)(red, green, blue, alpha);
    checkOpenGLError(__context__,__at__);
}

void glUniform4fv ( GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4FVPROC fptr = (PFNGLUNIFORM4FVPROC) dasGetProcAddress("glUniform4fv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL4ui64vNV ( GLuint index, const GLuint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL4UI64VNVPROC) dasGetProcAddress("glVertexAttribL4ui64vNV",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXIMAGE1DPROC fptr = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) dasGetProcAddress("glCompressedTexImage1D",__context__,__at__);
    (*fptr)(target, level, internalformat, width, border, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glClearStencil ( GLint s, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARSTENCILPROC fptr = (PFNGLCLEARSTENCILPROC) dasGetProcAddress("glClearStencil",__context__,__at__);
    (*fptr)(s);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4DPROC fptr = (PFNGLVERTEXATTRIBL4DPROC) dasGetProcAddress("glVertexAttribL4d",__context__,__at__);
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1dEXT ( GLuint program, GLint location, GLdouble x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1DEXTPROC fptr = (PFNGLPROGRAMUNIFORM1DEXTPROC) dasGetProcAddress("glProgramUniform1dEXT",__context__,__at__);
    (*fptr)(program, location, x);
    checkOpenGLError(__context__,__at__);
}

void glPrimitiveRestartIndex ( GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPRIMITIVERESTARTINDEXPROC fptr = (PFNGLPRIMITIVERESTARTINDEXPROC) dasGetProcAddress("glPrimitiveRestartIndex",__context__,__at__);
    (*fptr)(index);
    checkOpenGLError(__context__,__at__);
}

void glTransformFeedbackBufferRange ( GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC fptr = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) dasGetProcAddress("glTransformFeedbackBufferRange",__context__,__at__);
    (*fptr)(xfb, index, buffer, offset, size);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3DPROC fptr = (PFNGLVERTEXATTRIBL3DPROC) dasGetProcAddress("glVertexAttribL3d",__context__,__at__);
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

GLuint64 glGetTextureSamplerHandleARB ( GLuint texture, GLuint sampler, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURESAMPLERHANDLEARBPROC fptr = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC) dasGetProcAddress("glGetTextureSamplerHandleARB",__context__,__at__);
    auto result = (*fptr)(texture, sampler);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glDetachShader ( GLuint program, GLuint shader, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDETACHSHADERPROC fptr = (PFNGLDETACHSHADERPROC) dasGetProcAddress("glDetachShader",__context__,__at__);
    (*fptr)(program, shader);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawMeshTasksIndirectCountNV ( GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC fptr = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) dasGetProcAddress("glMultiDrawMeshTasksIndirectCountNV",__context__,__at__);
    (*fptr)(indirect, drawcount, maxdrawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryIndexediv ( GLenum target, GLuint index, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYINDEXEDIVPROC fptr = (PFNGLGETQUERYINDEXEDIVPROC) dasGetProcAddress("glGetQueryIndexediv",__context__,__at__);
    (*fptr)(target, index, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glPointAlongPathNV ( GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTALONGPATHNVPROC fptr = (PFNGLPOINTALONGPATHNVPROC) dasGetProcAddress("glPointAlongPathNV",__context__,__at__);
    auto result = (*fptr)(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glEnableClientStateIndexedEXT ( GLenum array, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLECLIENTSTATEINDEXEDEXTPROC fptr = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) dasGetProcAddress("glEnableClientStateIndexedEXT",__context__,__at__);
    (*fptr)(array, index);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveUniformBlockName ( GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC fptr = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) dasGetProcAddress("glGetActiveUniformBlockName",__context__,__at__);
    (*fptr)(program, uniformBlockIndex, bufSize, length, uniformBlockName);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTexture3D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTURE3DPROC fptr = (PFNGLFRAMEBUFFERTEXTURE3DPROC) dasGetProcAddress("glFramebufferTexture3D",__context__,__at__);
    (*fptr)(target, attachment, textarget, texture, level, zoffset);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateTexSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATETEXSUBIMAGEPROC fptr = (PFNGLINVALIDATETEXSUBIMAGEPROC) dasGetProcAddress("glInvalidateTexSubImage",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth);
    checkOpenGLError(__context__,__at__);
}

void glCopyNamedBufferSubData ( GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYNAMEDBUFFERSUBDATAPROC fptr = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) dasGetProcAddress("glCopyNamedBufferSubData",__context__,__at__);
    (*fptr)(readBuffer, writeBuffer, readOffset, writeOffset, size);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorageMultisampleEXT ( GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) dasGetProcAddress("glNamedRenderbufferStorageMultisampleEXT",__context__,__at__);
    (*fptr)(renderbuffer, samples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangeArraydvNV ( GLuint first, GLsizei count, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEARRAYDVNVPROC fptr = (PFNGLDEPTHRANGEARRAYDVNVPROC) dasGetProcAddress("glDepthRangeArraydvNV",__context__,__at__);
    (*fptr)(first, count, v);
    checkOpenGLError(__context__,__at__);
}

void glEnableVertexAttribArray ( GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEVERTEXATTRIBARRAYPROC fptr = (PFNGLENABLEVERTEXATTRIBARRAYPROC) dasGetProcAddress("glEnableVertexAttribArray",__context__,__at__);
    (*fptr)(index);
    checkOpenGLError(__context__,__at__);
}

void glDeleteShader ( GLuint shader, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETESHADERPROC fptr = (PFNGLDELETESHADERPROC) dasGetProcAddress("glDeleteShader",__context__,__at__);
    (*fptr)(shader);
    checkOpenGLError(__context__,__at__);
}

void glEndConditionalRenderNV ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDCONDITIONALRENDERNVPROC fptr = (PFNGLENDCONDITIONALRENDERNVPROC) dasGetProcAddress("glEndConditionalRenderNV",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribPointer ( GLuint index, GLint size, GLenum type, bool normalized, GLsizei stride, const void * pointer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBPOINTERPROC fptr = (PFNGLVERTEXATTRIBPOINTERPROC) dasGetProcAddress("glVertexAttribPointer",__context__,__at__);
    (*fptr)(index, size, type, normalized, stride, pointer);
    checkOpenGLError(__context__,__at__);
}

void glUniform4ui64ARB ( GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UI64ARBPROC fptr = (PFNGLUNIFORM4UI64ARBPROC) dasGetProcAddress("glUniform4ui64ARB",__context__,__at__);
    (*fptr)(location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glGetInternalformatSampleivNV ( GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTERNALFORMATSAMPLEIVNVPROC fptr = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) dasGetProcAddress("glGetInternalformatSampleivNV",__context__,__at__);
    (*fptr)(target, internalformat, samples, pname, count, params);
    checkOpenGLError(__context__,__at__);
}

void glDrawArraysIndirect ( GLenum mode, const void * indirect, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSINDIRECTPROC fptr = (PFNGLDRAWARRAYSINDIRECTPROC) dasGetProcAddress("glDrawArraysIndirect",__context__,__at__);
    (*fptr)(mode, indirect);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedProgramLocalParameterdvEXT ( GLuint program, GLenum target, GLuint index, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) dasGetProcAddress("glGetNamedProgramLocalParameterdvEXT",__context__,__at__);
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glDeleteVertexArrays ( GLsizei n, const GLuint * arrays, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEVERTEXARRAYSPROC fptr = (PFNGLDELETEVERTEXARRAYSPROC) dasGetProcAddress("glDeleteVertexArrays",__context__,__at__);
    (*fptr)(n, arrays);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x2dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) dasGetProcAddress("glProgramUniformMatrix4x2dv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexSubImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) dasGetProcAddress("glCompressedMultiTexSubImage1DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, xoffset, width, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4fEXT ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4FEXTPROC fptr = (PFNGLPROGRAMUNIFORM4FEXTPROC) dasGetProcAddress("glProgramUniform4fEXT",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glDeletePerfQueryINTEL ( GLuint queryHandle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEPERFQUERYINTELPROC fptr = (PFNGLDELETEPERFQUERYINTELPROC) dasGetProcAddress("glDeletePerfQueryINTEL",__context__,__at__);
    (*fptr)(queryHandle);
    checkOpenGLError(__context__,__at__);
}

void glDrawCommandsAddressNV ( GLenum primitiveMode, const GLuint64 * indirects, const GLsizei * sizes, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWCOMMANDSADDRESSNVPROC fptr = (PFNGLDRAWCOMMANDSADDRESSNVPROC) dasGetProcAddress("glDrawCommandsAddressNV",__context__,__at__);
    (*fptr)(primitiveMode, indirects, sizes, count);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1FVPROC fptr = (PFNGLPROGRAMUNIFORM1FVPROC) dasGetProcAddress("glProgramUniform1fv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glShadingRateSampleOrderCustomNV ( GLenum rate, GLuint samples, const GLint * locations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC fptr = (PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) dasGetProcAddress("glShadingRateSampleOrderCustomNV",__context__,__at__);
    (*fptr)(rate, samples, locations);
    checkOpenGLError(__context__,__at__);
}

void glGetSynciv ( GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSYNCIVPROC fptr = (PFNGLGETSYNCIVPROC) dasGetProcAddress("glGetSynciv",__context__,__at__);
    (*fptr)(sync, pname, count, length, values);
    checkOpenGLError(__context__,__at__);
}

void glDrawArraysInstancedEXT ( GLenum mode, GLint start, GLsizei count, GLsizei primcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSINSTANCEDEXTPROC fptr = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) dasGetProcAddress("glDrawArraysInstancedEXT",__context__,__at__);
    (*fptr)(mode, start, count, primcount);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquationi ( GLuint buf, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONIPROC fptr = (PFNGLBLENDEQUATIONIPROC) dasGetProcAddress("glBlendEquationi",__context__,__at__);
    (*fptr)(buf, mode);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribPointerv ( GLuint index, GLenum pname, void ** pointer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBPOINTERVPROC fptr = (PFNGLGETVERTEXATTRIBPOINTERVPROC) dasGetProcAddress("glGetVertexAttribPointerv",__context__,__at__);
    (*fptr)(index, pname, pointer);
    checkOpenGLError(__context__,__at__);
}

void glUniform1ui64NV ( GLint location, GLuint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UI64NVPROC fptr = (PFNGLUNIFORM1UI64NVPROC) dasGetProcAddress("glUniform1ui64NV",__context__,__at__);
    (*fptr)(location, x);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameteriEXT ( GLuint texture, GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIEXTPROC fptr = (PFNGLTEXTUREPARAMETERIEXTPROC) dasGetProcAddress("glTextureParameteriEXT",__context__,__at__);
    (*fptr)(texture, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexLevelParameterivEXT ( GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC fptr = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) dasGetProcAddress("glGetMultiTexLevelParameterivEXT",__context__,__at__);
    (*fptr)(texunit, target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferDataEXT ( GLuint buffer, GLsizeiptr size, const void * data, GLenum usage, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERDATAEXTPROC fptr = (PFNGLNAMEDBUFFERDATAEXTPROC) dasGetProcAddress("glNamedBufferDataEXT",__context__,__at__);
    (*fptr)(buffer, size, data, usage);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribIFormatNV ( GLuint index, GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBIFORMATNVPROC fptr = (PFNGLVERTEXATTRIBIFORMATNVPROC) dasGetProcAddress("glVertexAttribIFormatNV",__context__,__at__);
    (*fptr)(index, size, type, stride);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI2uiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI2UIVPROC fptr = (PFNGLVERTEXATTRIBI2UIVPROC) dasGetProcAddress("glVertexAttribI2uiv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glTexImage2DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXIMAGE2DMULTISAMPLEPROC fptr = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) dasGetProcAddress("glTexImage2DMultisample",__context__,__at__);
    (*fptr)(target, samples, internalformat, width, height, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) dasGetProcAddress("glProgramUniformMatrix2fv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameteri ( GLuint texture, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIPROC fptr = (PFNGLTEXTUREPARAMETERIPROC) dasGetProcAddress("glTextureParameteri",__context__,__at__);
    (*fptr)(texture, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glMatrixTranslatedEXT ( GLenum mode, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXTRANSLATEDEXTPROC fptr = (PFNGLMATRIXTRANSLATEDEXTPROC) dasGetProcAddress("glMatrixTranslatedEXT",__context__,__at__);
    (*fptr)(mode, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1UIVEXTPROC) dasGetProcAddress("glProgramUniform1uivEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x4dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) dasGetProcAddress("glProgramUniformMatrix3x4dv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x4dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) dasGetProcAddress("glProgramUniformMatrix2x4dvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTextureEXT ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) dasGetProcAddress("glNamedFramebufferTextureEXT",__context__,__at__);
    (*fptr)(framebuffer, attachment, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glMatrixFrustumEXT ( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXFRUSTUMEXTPROC fptr = (PFNGLMATRIXFRUSTUMEXTPROC) dasGetProcAddress("glMatrixFrustumEXT",__context__,__at__);
    (*fptr)(mode, left, right, bottom, top, zNear, zFar);
    checkOpenGLError(__context__,__at__);
}

void glMatrixMultTransposedEXT ( GLenum mode, const GLdouble * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULTTRANSPOSEDEXTPROC fptr = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) dasGetProcAddress("glMatrixMultTransposedEXT",__context__,__at__);
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glGetTransformFeedbackVarying ( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTRANSFORMFEEDBACKVARYINGPROC fptr = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) dasGetProcAddress("glGetTransformFeedbackVarying",__context__,__at__);
    (*fptr)(program, index, bufSize, length, size, type, name);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferDrawBuffersEXT ( GLuint framebuffer, GLsizei n, const GLenum * bufs, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC fptr = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) dasGetProcAddress("glFramebufferDrawBuffersEXT",__context__,__at__);
    (*fptr)(framebuffer, n, bufs);
    checkOpenGLError(__context__,__at__);
}

GLenum glPathGlyphIndexRangeNV ( GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint * baseAndCount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHGLYPHINDEXRANGENVPROC fptr = (PFNGLPATHGLYPHINDEXRANGENVPROC) dasGetProcAddress("glPathGlyphIndexRangeNV",__context__,__at__);
    auto result = (*fptr)(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glShaderBinary ( GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADERBINARYPROC fptr = (PFNGLSHADERBINARYPROC) dasGetProcAddress("glShaderBinary",__context__,__at__);
    (*fptr)(count, shaders, binaryFormat, binary, length);
    checkOpenGLError(__context__,__at__);
}

void glDisableClientStateIndexedEXT ( GLenum array, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC fptr = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) dasGetProcAddress("glDisableClientStateIndexedEXT",__context__,__at__);
    (*fptr)(array, index);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangeIndexed ( GLuint index, GLdouble n, GLdouble f, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEINDEXEDPROC fptr = (PFNGLDEPTHRANGEINDEXEDPROC) dasGetProcAddress("glDepthRangeIndexed",__context__,__at__);
    (*fptr)(index, n, f);
    checkOpenGLError(__context__,__at__);
}

void glPointParameteriv ( GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTPARAMETERIVPROC fptr = (PFNGLPOINTPARAMETERIVPROC) dasGetProcAddress("glPointParameteriv",__context__,__at__);
    (*fptr)(pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorCounterDataAMD ( GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORCOUNTERDATAAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) dasGetProcAddress("glGetPerfMonitorCounterDataAMD",__context__,__at__);
    (*fptr)(monitor, pname, dataSize, data, bytesWritten);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoadTransposedEXT ( GLenum mode, const GLdouble * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADTRANSPOSEDEXTPROC fptr = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) dasGetProcAddress("glMatrixLoadTransposedEXT",__context__,__at__);
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

GLuint glCreateShaderProgramEXT ( GLenum type, const GLchar * string, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESHADERPROGRAMEXTPROC fptr = (PFNGLCREATESHADERPROGRAMEXTPROC) dasGetProcAddress("glCreateShaderProgramEXT",__context__,__at__);
    auto result = (*fptr)(type, string);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glPathCommandsNV ( GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHCOMMANDSNVPROC fptr = (PFNGLPATHCOMMANDSNVPROC) dasGetProcAddress("glPathCommandsNV",__context__,__at__);
    (*fptr)(path, numCommands, commands, numCoords, coordType, coords);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveSubroutineUniformName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC fptr = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) dasGetProcAddress("glGetActiveSubroutineUniformName",__context__,__at__);
    (*fptr)(program, shadertype, index, bufSize, length, name);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexBuffer ( GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXBUFFERPROC fptr = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) dasGetProcAddress("glVertexArrayVertexBuffer",__context__,__at__);
    (*fptr)(vaobj, bindingindex, buffer, offset, stride);
    checkOpenGLError(__context__,__at__);
}

void glShadingRateImageBarrierNV ( bool synchronize, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADINGRATEIMAGEBARRIERNVPROC fptr = (PFNGLSHADINGRATEIMAGEBARRIERNVPROC) dasGetProcAddress("glShadingRateImageBarrierNV",__context__,__at__);
    (*fptr)(synchronize);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArraysIndirectBindlessCountNV ( GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC) dasGetProcAddress("glMultiDrawArraysIndirectBindlessCountNV",__context__,__at__);
    (*fptr)(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
    checkOpenGLError(__context__,__at__);
}

void glSignalVkFenceNV ( GLuint64 vkFence, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSIGNALVKFENCENVPROC fptr = (PFNGLSIGNALVKFENCENVPROC) dasGetProcAddress("glSignalVkFenceNV",__context__,__at__);
    (*fptr)(vkFence);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsBaseVertex ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSBASEVERTEXPROC fptr = (PFNGLDRAWELEMENTSBASEVERTEXPROC) dasGetProcAddress("glDrawElementsBaseVertex",__context__,__at__);
    (*fptr)(mode, count, type, indices, basevertex);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetDebugMessageLogARB ( GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDEBUGMESSAGELOGARBPROC fptr = (PFNGLGETDEBUGMESSAGELOGARBPROC) dasGetProcAddress("glGetDebugMessageLogARB",__context__,__at__);
    auto result = (*fptr)(count, bufSize, sources, types, ids, severities, lengths, messageLog);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glInvalidateNamedFramebufferData ( GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC fptr = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) dasGetProcAddress("glInvalidateNamedFramebufferData",__context__,__at__);
    (*fptr)(framebuffer, numAttachments, attachments);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterivEXT ( GLuint texture, GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIVEXTPROC fptr = (PFNGLTEXTUREPARAMETERIVEXTPROC) dasGetProcAddress("glTextureParameterivEXT",__context__,__at__);
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetFramebufferParameterivMESA ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC fptr = (PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) dasGetProcAddress("glGetFramebufferParameterivMESA",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferParameterui64vNV ( GLuint buffer, GLenum pname, GLuint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC) dasGetProcAddress("glGetNamedBufferParameterui64vNV",__context__,__at__);
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2ui64vNV ( GLuint index, const GLuint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL2UI64VNVPROC) dasGetProcAddress("glVertexAttribL2ui64vNV",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArraysIndirectCount ( GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC) dasGetProcAddress("glMultiDrawArraysIndirectCount",__context__,__at__);
    (*fptr)(mode, indirect, drawcount, maxdrawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glBindFragDataLocationIndexed ( GLuint program, GLuint colorNumber, GLuint index, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDFRAGDATALOCATIONINDEXEDPROC fptr = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) dasGetProcAddress("glBindFragDataLocationIndexed",__context__,__at__);
    (*fptr)(program, colorNumber, index, name);
    checkOpenGLError(__context__,__at__);
}

void glGetBufferParameteriv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBUFFERPARAMETERIVPROC fptr = (PFNGLGETBUFFERPARAMETERIVPROC) dasGetProcAddress("glGetBufferParameteriv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniform4dv ( GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4DVPROC fptr = (PFNGLUNIFORM4DVPROC) dasGetProcAddress("glUniform4dv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformfvARB ( GLuint program, GLint location, GLsizei bufSize, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMFVARBPROC fptr = (PFNGLGETNUNIFORMFVARBPROC) dasGetProcAddress("glGetnUniformfvARB",__context__,__at__);
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glEndQuery ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDQUERYPROC fptr = (PFNGLENDQUERYPROC) dasGetProcAddress("glEndQuery",__context__,__at__);
    (*fptr)(target);
    checkOpenGLError(__context__,__at__);
}

void glGetTexImage ( GLenum target, GLint level, GLenum format, GLenum type, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXIMAGEPROC fptr = (PFNGLGETTEXIMAGEPROC) dasGetProcAddress("glGetTexImage",__context__,__at__);
    (*fptr)(target, level, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGetInternalformativ ( GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTERNALFORMATIVPROC fptr = (PFNGLGETINTERNALFORMATIVPROC) dasGetProcAddress("glGetInternalformativ",__context__,__at__);
    (*fptr)(target, internalformat, pname, count, params);
    checkOpenGLError(__context__,__at__);
}

void glEnableVertexArrayAttribEXT ( GLuint vaobj, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEVERTEXARRAYATTRIBEXTPROC fptr = (PFNGLENABLEVERTEXARRAYATTRIBEXTPROC) dasGetProcAddress("glEnableVertexArrayAttribEXT",__context__,__at__);
    (*fptr)(vaobj, index);
    checkOpenGLError(__context__,__at__);
}

void glDepthRange ( GLdouble n, GLdouble f, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEPROC fptr = (PFNGLDEPTHRANGEPROC) dasGetProcAddress("glDepthRange",__context__,__at__);
    (*fptr)(n, f);
    checkOpenGLError(__context__,__at__);
}

void glGetTexLevelParameteriv ( GLenum target, GLint level, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXLEVELPARAMETERIVPROC fptr = (PFNGLGETTEXLEVELPARAMETERIVPROC) dasGetProcAddress("glGetTexLevelParameteriv",__context__,__at__);
    (*fptr)(target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsStateNV ( GLuint state, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISSTATENVPROC fptr = (PFNGLISSTATENVPROC) dasGetProcAddress("glIsStateNV",__context__,__at__);
    auto result = (*fptr)(state);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glCopyTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXSUBIMAGE1DPROC fptr = (PFNGLCOPYTEXSUBIMAGE1DPROC) dasGetProcAddress("glCopyTexSubImage1D",__context__,__at__);
    (*fptr)(target, level, xoffset, x, y, width);
    checkOpenGLError(__context__,__at__);
}

void glUniform4iv ( GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4IVPROC fptr = (PFNGLUNIFORM4IVPROC) dasGetProcAddress("glUniform4iv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3IPROC fptr = (PFNGLPROGRAMUNIFORM3IPROC) dasGetProcAddress("glProgramUniform3i",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4IPROC fptr = (PFNGLPROGRAMUNIFORM4IPROC) dasGetProcAddress("glProgramUniform4i",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3dEXT ( GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3DEXTPROC fptr = (PFNGLPROGRAMUNIFORM3DEXTPROC) dasGetProcAddress("glProgramUniform3dEXT",__context__,__at__);
    (*fptr)(program, location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) dasGetProcAddress("glProgramUniformMatrix4dvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetPathMetricRangeNV ( GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHMETRICRANGENVPROC fptr = (PFNGLGETPATHMETRICRANGENVPROC) dasGetProcAddress("glGetPathMetricRangeNV",__context__,__at__);
    (*fptr)(metricQueryMask, firstPathName, numPaths, stride, metrics);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3i64vNV ( GLuint index, const GLint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3I64VNVPROC fptr = (PFNGLVERTEXATTRIBL3I64VNVPROC) dasGetProcAddress("glVertexAttribL3i64vNV",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glViewportSwizzleNV ( GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTSWIZZLENVPROC fptr = (PFNGLVIEWPORTSWIZZLENVPROC) dasGetProcAddress("glViewportSwizzleNV",__context__,__at__);
    (*fptr)(index, swizzlex, swizzley, swizzlez, swizzlew);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveUniformName ( GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEUNIFORMNAMEPROC fptr = (PFNGLGETACTIVEUNIFORMNAMEPROC) dasGetProcAddress("glGetActiveUniformName",__context__,__at__);
    (*fptr)(program, uniformIndex, bufSize, length, uniformName);
    checkOpenGLError(__context__,__at__);
}

void glCreateStatesNV ( GLsizei n, GLuint * states, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESTATESNVPROC fptr = (PFNGLCREATESTATESNVPROC) dasGetProcAddress("glCreateStatesNV",__context__,__at__);
    (*fptr)(n, states);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribDivisor ( GLuint index, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBDIVISORPROC fptr = (PFNGLVERTEXATTRIBDIVISORPROC) dasGetProcAddress("glVertexAttribDivisor",__context__,__at__);
    (*fptr)(index, divisor);
    checkOpenGLError(__context__,__at__);
}

void glEnablei ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEIPROC fptr = (PFNGLENABLEIPROC) dasGetProcAddress("glEnablei",__context__,__at__);
    (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
}

void glGetNextPerfQueryIdINTEL ( GLuint queryId, GLuint * nextQueryId, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNEXTPERFQUERYIDINTELPROC fptr = (PFNGLGETNEXTPERFQUERYIDINTELPROC) dasGetProcAddress("glGetNextPerfQueryIdINTEL",__context__,__at__);
    (*fptr)(queryId, nextQueryId);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP1uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP1UIVPROC fptr = (PFNGLVERTEXATTRIBP1UIVPROC) dasGetProcAddress("glVertexAttribP1uiv",__context__,__at__);
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glGetPathDashArrayNV ( GLuint path, GLfloat * dashArray, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHDASHARRAYNVPROC fptr = (PFNGLGETPATHDASHARRAYNVPROC) dasGetProcAddress("glGetPathDashArrayNV",__context__,__at__);
    (*fptr)(path, dashArray);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryObjecti64v ( GLuint id, GLenum pname, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYOBJECTI64VPROC fptr = (PFNGLGETQUERYOBJECTI64VPROC) dasGetProcAddress("glGetQueryObjecti64v",__context__,__at__);
    (*fptr)(id, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetIntegerui64vNV ( GLenum value, GLuint64EXT * result, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGERUI64VNVPROC fptr = (PFNGLGETINTEGERUI64VNVPROC) dasGetProcAddress("glGetIntegerui64vNV",__context__,__at__);
    (*fptr)(value, result);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribBinding ( GLuint attribindex, GLuint bindingindex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBBINDINGPROC fptr = (PFNGLVERTEXATTRIBBINDINGPROC) dasGetProcAddress("glVertexAttribBinding",__context__,__at__);
    (*fptr)(attribindex, bindingindex);
    checkOpenGLError(__context__,__at__);
}

void glDrawBuffers ( GLsizei n, const GLenum * bufs, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWBUFFERSPROC fptr = (PFNGLDRAWBUFFERSPROC) dasGetProcAddress("glDrawBuffers",__context__,__at__);
    (*fptr)(n, bufs);
    checkOpenGLError(__context__,__at__);
}

void glFlushMappedNamedBufferRange ( GLuint buffer, GLintptr offset, GLsizeiptr length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC fptr = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) dasGetProcAddress("glFlushMappedNamedBufferRange",__context__,__at__);
    (*fptr)(buffer, offset, length);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedBufferData ( GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDBUFFERDATAPROC fptr = (PFNGLCLEARNAMEDBUFFERDATAPROC) dasGetProcAddress("glClearNamedBufferData",__context__,__at__);
    (*fptr)(buffer, internalformat, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glRenderbufferStorage ( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRENDERBUFFERSTORAGEPROC fptr = (PFNGLRENDERBUFFERSTORAGEPROC) dasGetProcAddress("glRenderbufferStorage",__context__,__at__);
    (*fptr)(target, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ui64ARB ( GLuint program, GLint location, GLuint64 x, GLuint64 y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM2UI64ARBPROC) dasGetProcAddress("glProgramUniform2ui64ARB",__context__,__at__);
    (*fptr)(program, location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI2ui ( GLuint index, GLuint x, GLuint y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI2UIPROC fptr = (PFNGLVERTEXATTRIBI2UIPROC) dasGetProcAddress("glVertexAttribI2ui",__context__,__at__);
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4DVPROC fptr = (PFNGLVERTEXATTRIB4DVPROC) dasGetProcAddress("glVertexAttrib4dv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4bv ( GLuint index, const GLbyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4BVPROC fptr = (PFNGLVERTEXATTRIB4BVPROC) dasGetProcAddress("glVertexAttrib4bv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4fv ( GLuint index, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4FVPROC fptr = (PFNGLVERTEXATTRIB4FVPROC) dasGetProcAddress("glVertexAttrib4fv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1iv ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1IVPROC fptr = (PFNGLPROGRAMUNIFORM1IVPROC) dasGetProcAddress("glProgramUniform1iv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glDisable ( GLenum cap, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEPROC fptr = (PFNGLDISABLEPROC) dasGetProcAddress("glDisable",__context__,__at__);
    (*fptr)(cap);
    checkOpenGLError(__context__,__at__);
}

void glSamplerParameterIiv ( GLuint sampler, GLenum pname, const GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERIIVPROC fptr = (PFNGLSAMPLERPARAMETERIIVPROC) dasGetProcAddress("glSamplerParameterIiv",__context__,__at__);
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquationiARB ( GLuint buf, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONIARBPROC fptr = (PFNGLBLENDEQUATIONIARBPROC) dasGetProcAddress("glBlendEquationiARB",__context__,__at__);
    (*fptr)(buf, mode);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTexture ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTUREPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) dasGetProcAddress("glNamedFramebufferTexture",__context__,__at__);
    (*fptr)(framebuffer, attachment, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glDrawElements ( GLenum mode, GLsizei count, GLenum type, const void * indices, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSPROC fptr = (PFNGLDRAWELEMENTSPROC) dasGetProcAddress("glDrawElements",__context__,__at__);
    (*fptr)(mode, count, type, indices);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix3fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3FVPROC fptr = (PFNGLUNIFORMMATRIX3FVPROC) dasGetProcAddress("glUniformMatrix3fv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix3dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3DVPROC fptr = (PFNGLUNIFORMMATRIX3DVPROC) dasGetProcAddress("glUniformMatrix3dv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBufferData ( GLenum target, GLsizeiptr size, const void * data, GLenum usage, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERDATAPROC fptr = (PFNGLBUFFERDATAPROC) dasGetProcAddress("glBufferData",__context__,__at__);
    (*fptr)(target, size, data, usage);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x2fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) dasGetProcAddress("glProgramUniformMatrix4x2fv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBlendFuncSeparate ( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCSEPARATEPROC fptr = (PFNGLBLENDFUNCSEPARATEPROC) dasGetProcAddress("glBlendFuncSeparate",__context__,__at__);
    (*fptr)(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformHandleui64ARB ( GLuint program, GLint location, GLuint64 value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) dasGetProcAddress("glProgramUniformHandleui64ARB",__context__,__at__);
    (*fptr)(program, location, value);
    checkOpenGLError(__context__,__at__);
}

void glUniform4ui64vARB ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UI64VARBPROC fptr = (PFNGLUNIFORM4UI64VARBPROC) dasGetProcAddress("glUniform4ui64vARB",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4iv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4IVPROC fptr = (PFNGLVERTEXATTRIB4IVPROC) dasGetProcAddress("glVertexAttrib4iv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1DVPROC fptr = (PFNGLPROGRAMUNIFORM1DVPROC) dasGetProcAddress("glProgramUniform1dv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4sv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4SVPROC fptr = (PFNGLVERTEXATTRIB4SVPROC) dasGetProcAddress("glVertexAttrib4sv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glSelectPerfMonitorCountersAMD ( GLuint monitor, bool enable, GLuint group, GLint numCounters, GLuint * counterList, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSELECTPERFMONITORCOUNTERSAMDPROC fptr = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) dasGetProcAddress("glSelectPerfMonitorCountersAMD",__context__,__at__);
    (*fptr)(monitor, enable, group, numCounters, counterList);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE3DEXTPROC fptr = (PFNGLTEXTURESUBIMAGE3DEXTPROC) dasGetProcAddress("glTextureSubImage3DEXT",__context__,__at__);
    (*fptr)(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

GLsync glFenceSync ( GLenum condition, GLbitfield flags, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFENCESYNCPROC fptr = (PFNGLFENCESYNCPROC) dasGetProcAddress("glFenceSync",__context__,__at__);
    auto result = (*fptr)(condition, flags);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMultiTexImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXIMAGE2DEXTPROC fptr = (PFNGLMULTITEXIMAGE2DEXTPROC) dasGetProcAddress("glMultiTexImage2DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, internalformat, width, height, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGetObjectLabel ( GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETOBJECTLABELPROC fptr = (PFNGLGETOBJECTLABELPROC) dasGetProcAddress("glGetObjectLabel",__context__,__at__);
    (*fptr)(identifier, name, bufSize, length, label);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) dasGetProcAddress("glCompressedTextureSubImage1DEXT",__context__,__at__);
    (*fptr)(texture, target, level, xoffset, width, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) dasGetProcAddress("glCompressedMultiTexImage3DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) dasGetProcAddress("glCompressedMultiTexImage1DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, internalformat, width, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) dasGetProcAddress("glProgramUniformMatrix3fvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2dEXT ( GLuint program, GLint location, GLdouble x, GLdouble y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2DEXTPROC fptr = (PFNGLPROGRAMUNIFORM2DEXTPROC) dasGetProcAddress("glProgramUniform2dEXT",__context__,__at__);
    (*fptr)(program, location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4uiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4UIVPROC fptr = (PFNGLVERTEXATTRIB4UIVPROC) dasGetProcAddress("glVertexAttrib4uiv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2DVEXTPROC) dasGetProcAddress("glProgramUniform2dvEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribIFormatEXT ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC) dasGetProcAddress("glVertexArrayVertexAttribIFormatEXT",__context__,__at__);
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArraysIndirectBindlessNV ( GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC) dasGetProcAddress("glMultiDrawArraysIndirectBindlessNV",__context__,__at__);
    (*fptr)(mode, indirect, drawCount, stride, vertexBufferCount);
    checkOpenGLError(__context__,__at__);
}

void glCreateProgramPipelines ( GLsizei n, GLuint * pipelines, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEPROGRAMPIPELINESPROC fptr = (PFNGLCREATEPROGRAMPIPELINESPROC) dasGetProcAddress("glCreateProgramPipelines",__context__,__at__);
    (*fptr)(n, pipelines);
    checkOpenGLError(__context__,__at__);
}

void glFragmentCoverageColorNV ( GLuint color, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAGMENTCOVERAGECOLORNVPROC fptr = (PFNGLFRAGMENTCOVERAGECOLORNVPROC) dasGetProcAddress("glFragmentCoverageColorNV",__context__,__at__);
    (*fptr)(color);
    checkOpenGLError(__context__,__at__);
}

void glDisableIndexedEXT ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEINDEXEDEXTPROC fptr = (PFNGLDISABLEINDEXEDEXTPROC) dasGetProcAddress("glDisableIndexedEXT",__context__,__at__);
    (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
}

void glValidateProgram ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVALIDATEPROGRAMPROC fptr = (PFNGLVALIDATEPROGRAMPROC) dasGetProcAddress("glValidateProgram",__context__,__at__);
    (*fptr)(program);
    checkOpenGLError(__context__,__at__);
}

void glUniform4ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UIPROC fptr = (PFNGLUNIFORM4UIPROC) dasGetProcAddress("glUniform4ui",__context__,__at__);
    (*fptr)(location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4FPROC fptr = (PFNGLPROGRAMUNIFORM4FPROC) dasGetProcAddress("glProgramUniform4f",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x4fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) dasGetProcAddress("glProgramUniformMatrix3x4fv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameter4dvEXT ( GLuint program, GLenum target, GLuint index, const GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) dasGetProcAddress("glNamedProgramLocalParameter4dvEXT",__context__,__at__);
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glDrawCommandsStatesAddressNV ( const GLuint64 * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC fptr = (PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC) dasGetProcAddress("glDrawCommandsStatesAddressNV",__context__,__at__);
    (*fptr)(indirects, sizes, states, fbos, count);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorCountersAMD ( GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORCOUNTERSAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERSAMDPROC) dasGetProcAddress("glGetPerfMonitorCountersAMD",__context__,__at__);
    (*fptr)(group, numCounters, maxActiveCounters, counterSize, counters);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM2UI64VNVPROC) dasGetProcAddress("glProgramUniform2ui64vNV",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glResolveDepthValuesNV ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRESOLVEDEPTHVALUESNVPROC fptr = (PFNGLRESOLVEDEPTHVALUESNVPROC) dasGetProcAddress("glResolveDepthValuesNV",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glUniformui64NV ( GLint location, GLuint64EXT value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMUI64NVPROC fptr = (PFNGLUNIFORMUI64NVPROC) dasGetProcAddress("glUniformui64NV",__context__,__at__);
    (*fptr)(location, value);
    checkOpenGLError(__context__,__at__);
}

void glDrawArraysInstanced ( GLenum mode, GLint first, GLsizei count, GLsizei instancecount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSINSTANCEDPROC fptr = (PFNGLDRAWARRAYSINSTANCEDPROC) dasGetProcAddress("glDrawArraysInstanced",__context__,__at__);
    (*fptr)(mode, first, count, instancecount);
    checkOpenGLError(__context__,__at__);
}

void glUniformHandleui64vNV ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMHANDLEUI64VNVPROC fptr = (PFNGLUNIFORMHANDLEUI64VNVPROC) dasGetProcAddress("glUniformHandleui64vNV",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetRenderbufferParameteriv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETRENDERBUFFERPARAMETERIVPROC fptr = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) dasGetProcAddress("glGetRenderbufferParameteriv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3FPROC fptr = (PFNGLPROGRAMUNIFORM3FPROC) dasGetProcAddress("glProgramUniform3f",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4DPROC fptr = (PFNGLPROGRAMUNIFORM4DPROC) dasGetProcAddress("glProgramUniform4d",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstancedBaseVertexBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) dasGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance",__context__,__at__);
    (*fptr)(mode, count, type, indices, instancecount, basevertex, baseinstance);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramInfoLog ( GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMINFOLOGPROC fptr = (PFNGLGETPROGRAMINFOLOGPROC) dasGetProcAddress("glGetProgramInfoLog",__context__,__at__);
    (*fptr)(program, bufSize, length, infoLog);
    checkOpenGLError(__context__,__at__);
}

void glMemoryBarrier ( GLbitfield barriers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMEMORYBARRIERPROC fptr = (PFNGLMEMORYBARRIERPROC) dasGetProcAddress("glMemoryBarrier",__context__,__at__);
    (*fptr)(barriers);
    checkOpenGLError(__context__,__at__);
}

void glRenderbufferStorageMultisampleAdvancedAMD ( GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC fptr = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) dasGetProcAddress("glRenderbufferStorageMultisampleAdvancedAMD",__context__,__at__);
    (*fptr)(target, samples, storageSamples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexEnvivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXENVIVEXTPROC fptr = (PFNGLMULTITEXENVIVEXTPROC) dasGetProcAddress("glMultiTexEnvivEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameteriv ( GLuint texture, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIVPROC fptr = (PFNGLGETTEXTUREPARAMETERIVPROC) dasGetProcAddress("glGetTextureParameteriv",__context__,__at__);
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glUnmapNamedBufferEXT ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNMAPNAMEDBUFFEREXTPROC fptr = (PFNGLUNMAPNAMEDBUFFEREXTPROC) dasGetProcAddress("glUnmapNamedBufferEXT",__context__,__at__);
    auto result = (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLVULKANPROCNV glGetVkProcAddrNV ( const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVKPROCADDRNVPROC fptr = (PFNGLGETVKPROCADDRNVPROC) dasGetProcAddress("glGetVkProcAddrNV",__context__,__at__);
    auto result = (*fptr)(name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMatrixMultdEXT ( GLenum mode, const GLdouble * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULTDEXTPROC fptr = (PFNGLMATRIXMULTDEXTPROC) dasGetProcAddress("glMatrixMultdEXT",__context__,__at__);
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glPathParameterfvNV ( GLuint path, GLenum pname, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHPARAMETERFVNVPROC fptr = (PFNGLPATHPARAMETERFVNVPROC) dasGetProcAddress("glPathParameterfvNV",__context__,__at__);
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexEnvivEXT ( GLenum texunit, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXENVIVEXTPROC fptr = (PFNGLGETMULTITEXENVIVEXTPROC) dasGetProcAddress("glGetMultiTexEnvivEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribLFormatNV ( GLuint index, GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBLFORMATNVPROC fptr = (PFNGLVERTEXATTRIBLFORMATNVPROC) dasGetProcAddress("glVertexAttribLFormatNV",__context__,__at__);
    (*fptr)(index, size, type, stride);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferRenderbuffer ( GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC fptr = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) dasGetProcAddress("glNamedFramebufferRenderbuffer",__context__,__at__);
    (*fptr)(framebuffer, attachment, renderbuffertarget, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3DPROC fptr = (PFNGLPROGRAMUNIFORM3DPROC) dasGetProcAddress("glProgramUniform3d",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glGetnCompressedTexImageARB ( GLenum target, GLint lod, GLsizei bufSize, void * img, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC fptr = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) dasGetProcAddress("glGetnCompressedTexImageARB",__context__,__at__);
    (*fptr)(target, lod, bufSize, img);
    checkOpenGLError(__context__,__at__);
}

void glProvokingVertex ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROVOKINGVERTEXPROC fptr = (PFNGLPROVOKINGVERTEXPROC) dasGetProcAddress("glProvokingVertex",__context__,__at__);
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glPointParameterfv ( GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTPARAMETERFVPROC fptr = (PFNGLPOINTPARAMETERFVPROC) dasGetProcAddress("glPointParameterfv",__context__,__at__);
    (*fptr)(pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniform3ui64NV ( GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UI64NVPROC fptr = (PFNGLUNIFORM3UI64NVPROC) dasGetProcAddress("glUniform3ui64NV",__context__,__at__);
    (*fptr)(location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glGetTexLevelParameterfv ( GLenum target, GLint level, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXLEVELPARAMETERFVPROC fptr = (PFNGLGETTEXLEVELPARAMETERFVPROC) dasGetProcAddress("glGetTexLevelParameterfv",__context__,__at__);
    (*fptr)(target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glColorMask ( bool red, bool green, bool blue, bool alpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOLORMASKPROC fptr = (PFNGLCOLORMASKPROC) dasGetProcAddress("glColorMask",__context__,__at__);
    (*fptr)(red, green, blue, alpha);
    checkOpenGLError(__context__,__at__);
}

void glBeginQuery ( GLenum target, GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINQUERYPROC fptr = (PFNGLBEGINQUERYPROC) dasGetProcAddress("glBeginQuery",__context__,__at__);
    (*fptr)(target, id);
    checkOpenGLError(__context__,__at__);
}

void glTexturePageCommitmentMemNV ( GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC fptr = (PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) dasGetProcAddress("glTexturePageCommitmentMemNV",__context__,__at__);
    (*fptr)(texture, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferuiv ( GLenum buffer, GLint drawbuffer, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERUIVPROC fptr = (PFNGLCLEARBUFFERUIVPROC) dasGetProcAddress("glClearBufferuiv",__context__,__at__);
    (*fptr)(buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) dasGetProcAddress("glProgramUniformMatrix4dv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1ui ( GLuint program, GLint location, GLuint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UIPROC fptr = (PFNGLPROGRAMUNIFORM1UIPROC) dasGetProcAddress("glProgramUniform1ui",__context__,__at__);
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferStorageEXT ( GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERSTORAGEEXTPROC fptr = (PFNGLNAMEDBUFFERSTORAGEEXTPROC) dasGetProcAddress("glNamedBufferStorageEXT",__context__,__at__);
    (*fptr)(buffer, size, data, flags);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UIPROC fptr = (PFNGLPROGRAMUNIFORM3UIPROC) dasGetProcAddress("glProgramUniform3ui",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsBufferResidentNV ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISBUFFERRESIDENTNVPROC fptr = (PFNGLISBUFFERRESIDENTNVPROC) dasGetProcAddress("glIsBufferResidentNV",__context__,__at__);
    auto result = (*fptr)(target);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetTransformFeedbackiv ( GLuint xfb, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTRANSFORMFEEDBACKIVPROC fptr = (PFNGLGETTRANSFORMFEEDBACKIVPROC) dasGetProcAddress("glGetTransformFeedbackiv",__context__,__at__);
    (*fptr)(xfb, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorCounterInfoAMD ( GLuint group, GLuint counter, GLenum pname, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORCOUNTERINFOAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) dasGetProcAddress("glGetPerfMonitorCounterInfoAMD",__context__,__at__);
    (*fptr)(group, counter, pname, data);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTexture3DEXT ( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) dasGetProcAddress("glNamedFramebufferTexture3DEXT",__context__,__at__);
    (*fptr)(framebuffer, attachment, textarget, texture, level, zoffset);
    checkOpenGLError(__context__,__at__);
}

GLushort glGetStageIndexNV ( GLenum shadertype, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSTAGEINDEXNVPROC fptr = (PFNGLGETSTAGEINDEXNVPROC) dasGetProcAddress("glGetStageIndexNV",__context__,__at__);
    auto result = (*fptr)(shadertype);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glColorFormatNV ( GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOLORFORMATNVPROC fptr = (PFNGLCOLORFORMATNVPROC) dasGetProcAddress("glColorFormatNV",__context__,__at__);
    (*fptr)(size, type, stride);
    checkOpenGLError(__context__,__at__);
}

GLint glGetFragDataLocation ( GLuint program, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAGDATALOCATIONPROC fptr = (PFNGLGETFRAGDATALOCATIONPROC) dasGetProcAddress("glGetFragDataLocation",__context__,__at__);
    auto result = (*fptr)(program, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMultiTexParameterivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERIVEXTPROC fptr = (PFNGLMULTITEXPARAMETERIVEXTPROC) dasGetProcAddress("glMultiTexParameterivEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterIuivEXT ( GLuint texture, GLenum target, GLenum pname, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIUIVEXTPROC fptr = (PFNGLTEXTUREPARAMETERIUIVEXTPROC) dasGetProcAddress("glTextureParameterIuivEXT",__context__,__at__);
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM3UI64VARBPROC) dasGetProcAddress("glProgramUniform3ui64vARB",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexEnvfvEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXENVFVEXTPROC fptr = (PFNGLGETMULTITEXENVFVEXTPROC) dasGetProcAddress("glGetMultiTexEnvfvEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMakeImageHandleResidentARB ( GLuint64 handle, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEIMAGEHANDLERESIDENTARBPROC fptr = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) dasGetProcAddress("glMakeImageHandleResidentARB",__context__,__at__);
    (*fptr)(handle, access);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2d ( GLuint index, GLdouble x, GLdouble y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2DPROC fptr = (PFNGLVERTEXATTRIBL2DPROC) dasGetProcAddress("glVertexAttribL2d",__context__,__at__);
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC fptr = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) dasGetProcAddress("glCompressedTexSubImage2D",__context__,__at__);
    (*fptr)(target, level, xoffset, yoffset, width, height, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glPointSize ( GLfloat size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTSIZEPROC fptr = (PFNGLPOINTSIZEPROC) dasGetProcAddress("glPointSize",__context__,__at__);
    (*fptr)(size);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformui64NV ( GLuint program, GLint location, GLuint64EXT value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMUI64NVPROC fptr = (PFNGLPROGRAMUNIFORMUI64NVPROC) dasGetProcAddress("glProgramUniformui64NV",__context__,__at__);
    (*fptr)(program, location, value);
    checkOpenGLError(__context__,__at__);
}

void glEndTransformFeedback ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDTRANSFORMFEEDBACKPROC fptr = (PFNGLENDTRANSFORMFEEDBACKPROC) dasGetProcAddress("glEndTransformFeedback",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glActiveShaderProgram ( GLuint pipeline, GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLACTIVESHADERPROGRAMPROC fptr = (PFNGLACTIVESHADERPROGRAMPROC) dasGetProcAddress("glActiveShaderProgram",__context__,__at__);
    (*fptr)(pipeline, program);
    checkOpenGLError(__context__,__at__);
}

void glUniform2ui64ARB ( GLint location, GLuint64 x, GLuint64 y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UI64ARBPROC fptr = (PFNGLUNIFORM2UI64ARBPROC) dasGetProcAddress("glUniform2ui64ARB",__context__,__at__);
    (*fptr)(location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM1UI64VARBPROC) dasGetProcAddress("glProgramUniform1ui64vARB",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glBeginPerfMonitorAMD ( GLuint monitor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINPERFMONITORAMDPROC fptr = (PFNGLBEGINPERFMONITORAMDPROC) dasGetProcAddress("glBeginPerfMonitorAMD",__context__,__at__);
    (*fptr)(monitor);
    checkOpenGLError(__context__,__at__);
}

GLboolean glUnmapBuffer ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNMAPBUFFERPROC fptr = (PFNGLUNMAPBUFFERPROC) dasGetProcAddress("glUnmapBuffer",__context__,__at__);
    auto result = (*fptr)(target);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glCopyTextureSubImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) dasGetProcAddress("glCopyTextureSubImage2DEXT",__context__,__at__);
    (*fptr)(texture, target, level, xoffset, yoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1uiEXT ( GLuint program, GLint location, GLuint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM1UIEXTPROC) dasGetProcAddress("glProgramUniform1uiEXT",__context__,__at__);
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayIndexOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYINDEXOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYINDEXOFFSETEXTPROC) dasGetProcAddress("glVertexArrayIndexOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glGetInteger64i_v ( GLenum target, GLuint index, GLint64 * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGER64I_VPROC fptr = (PFNGLGETINTEGER64I_VPROC) dasGetProcAddress("glGetInteger64i_v",__context__,__at__);
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramStringEXT ( GLuint program, GLenum target, GLenum format, GLsizei len, const void * string, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMSTRINGEXTPROC fptr = (PFNGLNAMEDPROGRAMSTRINGEXTPROC) dasGetProcAddress("glNamedProgramStringEXT",__context__,__at__);
    (*fptr)(program, target, format, len, string);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexSubImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXSUBIMAGE2DEXTPROC fptr = (PFNGLMULTITEXSUBIMAGE2DEXTPROC) dasGetProcAddress("glMultiTexSubImage2DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glBeginConditionalRenderNV ( GLuint id, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINCONDITIONALRENDERNVPROC fptr = (PFNGLBEGINCONDITIONALRENDERNVPROC) dasGetProcAddress("glBeginConditionalRenderNV",__context__,__at__);
    (*fptr)(id, mode);
    checkOpenGLError(__context__,__at__);
}

void glDepthBoundsdNV ( GLdouble zmin, GLdouble zmax, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHBOUNDSDNVPROC fptr = (PFNGLDEPTHBOUNDSDNVPROC) dasGetProcAddress("glDepthBoundsdNV",__context__,__at__);
    (*fptr)(zmin, zmax);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferParameteri64v ( GLuint buffer, GLenum pname, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPARAMETERI64VPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) dasGetProcAddress("glGetNamedBufferParameteri64v",__context__,__at__);
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniform3i64vNV ( GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3I64VNVPROC fptr = (PFNGLUNIFORM3I64VNVPROC) dasGetProcAddress("glUniform3i64vNV",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformi64vARB ( GLuint program, GLint location, GLsizei bufSize, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMI64VARBPROC fptr = (PFNGLGETNUNIFORMI64VARBPROC) dasGetProcAddress("glGetnUniformi64vARB",__context__,__at__);
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM2I64VARBPROC) dasGetProcAddress("glProgramUniform2i64vARB",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetDoubleIndexedvEXT ( GLenum target, GLuint index, GLdouble * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDOUBLEINDEXEDVEXTPROC fptr = (PFNGLGETDOUBLEINDEXEDVEXTPROC) dasGetProcAddress("glGetDoubleIndexedvEXT",__context__,__at__);
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTextureARB ( GLenum target, GLenum attachment, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTUREARBPROC fptr = (PFNGLFRAMEBUFFERTEXTUREARBPROC) dasGetProcAddress("glFramebufferTextureARB",__context__,__at__);
    (*fptr)(target, attachment, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glGetPointeri_vEXT ( GLenum pname, GLuint index, void ** params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPOINTERI_VEXTPROC fptr = (PFNGLGETPOINTERI_VEXTPROC) dasGetProcAddress("glGetPointeri_vEXT",__context__,__at__);
    (*fptr)(pname, index, params);
    checkOpenGLError(__context__,__at__);
}

void glSecondaryColorFormatNV ( GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSECONDARYCOLORFORMATNVPROC fptr = (PFNGLSECONDARYCOLORFORMATNVPROC) dasGetProcAddress("glSecondaryColorFormatNV",__context__,__at__);
    (*fptr)(size, type, stride);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsIndirectBindlessCountNV ( GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC) dasGetProcAddress("glMultiDrawElementsIndirectBindlessCountNV",__context__,__at__);
    (*fptr)(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage3DMultisample ( GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC fptr = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) dasGetProcAddress("glTextureStorage3DMultisample",__context__,__at__);
    (*fptr)(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glScissorArrayv ( GLuint first, GLsizei count, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSORARRAYVPROC fptr = (PFNGLSCISSORARRAYVPROC) dasGetProcAddress("glScissorArrayv",__context__,__at__);
    (*fptr)(first, count, v);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoad3x2fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOAD3X2FNVPROC fptr = (PFNGLMATRIXLOAD3X2FNVPROC) dasGetProcAddress("glMatrixLoad3x2fNV",__context__,__at__);
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1FVEXTPROC) dasGetProcAddress("glProgramUniform1fvEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glTransformFeedbackVaryings ( GLuint program, GLsizei count, const GLchar *const * varyings, GLenum bufferMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTRANSFORMFEEDBACKVARYINGSPROC fptr = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) dasGetProcAddress("glTransformFeedbackVaryings",__context__,__at__);
    (*fptr)(program, count, varyings, bufferMode);
    checkOpenGLError(__context__,__at__);
}

void glBufferAddressRangeNV ( GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERADDRESSRANGENVPROC fptr = (PFNGLBUFFERADDRESSRANGENVPROC) dasGetProcAddress("glBufferAddressRangeNV",__context__,__at__);
    (*fptr)(pname, index, address, length);
    checkOpenGLError(__context__,__at__);
}

GLint glGetAttribLocation ( GLuint program, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETATTRIBLOCATIONPROC fptr = (PFNGLGETATTRIBLOCATIONPROC) dasGetProcAddress("glGetAttribLocation",__context__,__at__);
    auto result = (*fptr)(program, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glVertexAttrib4usv ( GLuint index, const GLushort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4USVPROC fptr = (PFNGLVERTEXATTRIB4USVPROC) dasGetProcAddress("glVertexAttrib4usv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glEnableClientStateiEXT ( GLenum array, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLECLIENTSTATEIEXTPROC fptr = (PFNGLENABLECLIENTSTATEIEXTPROC) dasGetProcAddress("glEnableClientStateiEXT",__context__,__at__);
    (*fptr)(array, index);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsProgram ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISPROGRAMPROC fptr = (PFNGLISPROGRAMPROC) dasGetProcAddress("glIsProgram",__context__,__at__);
    auto result = (*fptr)(program);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniform1i64vNV ( GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1I64VNVPROC fptr = (PFNGLUNIFORM1I64VNVPROC) dasGetProcAddress("glUniform1i64vNV",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glStencilFunc ( GLenum func, GLint ref, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILFUNCPROC fptr = (PFNGLSTENCILFUNCPROC) dasGetProcAddress("glStencilFunc",__context__,__at__);
    (*fptr)(func, ref, mask);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3iv ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3IVPROC fptr = (PFNGLPROGRAMUNIFORM3IVPROC) dasGetProcAddress("glProgramUniform3iv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glUniform2ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UI64VNVPROC fptr = (PFNGLUNIFORM2UI64VNVPROC) dasGetProcAddress("glUniform2ui64vNV",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorageEXT ( GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) dasGetProcAddress("glNamedRenderbufferStorageEXT",__context__,__at__);
    (*fptr)(renderbuffer, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glBeginPerfQueryINTEL ( GLuint queryHandle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINPERFQUERYINTELPROC fptr = (PFNGLBEGINPERFQUERYINTELPROC) dasGetProcAddress("glBeginPerfQueryINTEL",__context__,__at__);
    (*fptr)(queryHandle);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4ubv ( GLuint index, const GLubyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4UBVPROC fptr = (PFNGLVERTEXATTRIB4UBVPROC) dasGetProcAddress("glVertexAttrib4ubv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterfv ( GLuint texture, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERFVPROC fptr = (PFNGLGETTEXTUREPARAMETERFVPROC) dasGetProcAddress("glGetTextureParameterfv",__context__,__at__);
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedBufferDataEXT ( GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDBUFFERDATAEXTPROC fptr = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC) dasGetProcAddress("glClearNamedBufferDataEXT",__context__,__at__);
    (*fptr)(buffer, internalformat, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribBindingEXT ( GLuint vaobj, GLuint attribindex, GLuint bindingindex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC) dasGetProcAddress("glVertexArrayVertexAttribBindingEXT",__context__,__at__);
    (*fptr)(vaobj, attribindex, bindingindex);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXIMAGE3DEXTPROC fptr = (PFNGLMULTITEXIMAGE3DEXTPROC) dasGetProcAddress("glMultiTexImage3DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glBindVertexBuffer ( GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDVERTEXBUFFERPROC fptr = (PFNGLBINDVERTEXBUFFERPROC) dasGetProcAddress("glBindVertexBuffer",__context__,__at__);
    (*fptr)(bindingindex, buffer, offset, stride);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedRenderbufferParameteriv ( GLuint renderbuffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC fptr = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) dasGetProcAddress("glGetNamedRenderbufferParameteriv",__context__,__at__);
    (*fptr)(renderbuffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x4fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) dasGetProcAddress("glProgramUniformMatrix3x4fvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage2DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE2DEXTPROC fptr = (PFNGLTEXTURESTORAGE2DEXTPROC) dasGetProcAddress("glTextureStorage2DEXT",__context__,__at__);
    (*fptr)(texture, target, levels, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2DVPROC fptr = (PFNGLVERTEXATTRIB2DVPROC) dasGetProcAddress("glVertexAttrib2dv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2fv ( GLuint index, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2FVPROC fptr = (PFNGLVERTEXATTRIB2FVPROC) dasGetProcAddress("glVertexAttrib2fv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3FVPROC fptr = (PFNGLPROGRAMUNIFORM3FVPROC) dasGetProcAddress("glProgramUniform3fv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexBuffers ( GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXBUFFERSPROC fptr = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) dasGetProcAddress("glVertexArrayVertexBuffers",__context__,__at__);
    (*fptr)(vaobj, first, count, buffers, offsets, strides);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformHandleui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) dasGetProcAddress("glProgramUniformHandleui64vARB",__context__,__at__);
    (*fptr)(program, location, count, values);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE1DEXTPROC fptr = (PFNGLTEXTURESUBIMAGE1DEXTPROC) dasGetProcAddress("glTextureSubImage1DEXT",__context__,__at__);
    (*fptr)(texture, target, level, xoffset, width, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC) dasGetProcAddress("glVertexArrayVertexOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3i64ARB ( GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM3I64ARBPROC) dasGetProcAddress("glProgramUniform3i64ARB",__context__,__at__);
    (*fptr)(program, location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryBufferObjectui64v ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYBUFFEROBJECTUI64VPROC fptr = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) dasGetProcAddress("glGetQueryBufferObjectui64v",__context__,__at__);
    (*fptr)(id, buffer, pname, offset);
    checkOpenGLError(__context__,__at__);
}

GLuint64 glGetTextureSamplerHandleNV ( GLuint texture, GLuint sampler, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURESAMPLERHANDLENVPROC fptr = (PFNGLGETTEXTURESAMPLERHANDLENVPROC) dasGetProcAddress("glGetTextureSamplerHandleNV",__context__,__at__);
    auto result = (*fptr)(texture, sampler);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetnUniformuiv ( GLuint program, GLint location, GLsizei bufSize, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMUIVPROC fptr = (PFNGLGETNUNIFORMUIVPROC) dasGetProcAddress("glGetnUniformuiv",__context__,__at__);
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glBlendParameteriNV ( GLenum pname, GLint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDPARAMETERINVPROC fptr = (PFNGLBLENDPARAMETERINVPROC) dasGetProcAddress("glBlendParameteriNV",__context__,__at__);
    (*fptr)(pname, value);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorCounterStringAMD ( GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) dasGetProcAddress("glGetPerfMonitorCounterStringAMD",__context__,__at__);
    (*fptr)(group, counter, bufSize, length, counterString);
    checkOpenGLError(__context__,__at__);
}

void glTexStorage1D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSTORAGE1DPROC fptr = (PFNGLTEXSTORAGE1DPROC) dasGetProcAddress("glTexStorage1D",__context__,__at__);
    (*fptr)(target, levels, internalformat, width);
    checkOpenGLError(__context__,__at__);
}

void glTextureImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREIMAGE1DEXTPROC fptr = (PFNGLTEXTUREIMAGE1DEXTPROC) dasGetProcAddress("glTextureImage1DEXT",__context__,__at__);
    (*fptr)(texture, target, level, internalformat, width, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) dasGetProcAddress("glProgramUniformMatrix4fv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glDeleteBuffers ( GLsizei n, const GLuint * buffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEBUFFERSPROC fptr = (PFNGLDELETEBUFFERSPROC) dasGetProcAddress("glDeleteBuffers",__context__,__at__);
    (*fptr)(n, buffers);
    checkOpenGLError(__context__,__at__);
}

void * glMapBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPBUFFERRANGEPROC fptr = (PFNGLMAPBUFFERRANGEPROC) dasGetProcAddress("glMapBufferRange",__context__,__at__);
    auto result = (*fptr)(target, offset, length, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetMultisamplefv ( GLenum pname, GLuint index, GLfloat * val, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTISAMPLEFVPROC fptr = (PFNGLGETMULTISAMPLEFVPROC) dasGetProcAddress("glGetMultisamplefv",__context__,__at__);
    (*fptr)(pname, index, val);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageInsert ( GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGEINSERTPROC fptr = (PFNGLDEBUGMESSAGEINSERTPROC) dasGetProcAddress("glDebugMessageInsert",__context__,__at__);
    (*fptr)(source, type, id, severity, length, buf);
    checkOpenGLError(__context__,__at__);
}

void glFlushMappedBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFLUSHMAPPEDBUFFERRANGEPROC fptr = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) dasGetProcAddress("glFlushMappedBufferRange",__context__,__at__);
    (*fptr)(target, offset, length);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsTransformFeedback ( GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISTRANSFORMFEEDBACKPROC fptr = (PFNGLISTRANSFORMFEEDBACKPROC) dasGetProcAddress("glIsTransformFeedback",__context__,__at__);
    auto result = (*fptr)(id);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetFloatIndexedvEXT ( GLenum target, GLuint index, GLfloat * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFLOATINDEXEDVEXTPROC fptr = (PFNGLGETFLOATINDEXEDVEXTPROC) dasGetProcAddress("glGetFloatIndexedvEXT",__context__,__at__);
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glMakeImageHandleNonResidentNV ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC fptr = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) dasGetProcAddress("glMakeImageHandleNonResidentNV",__context__,__at__);
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glUniform1i64NV ( GLint location, GLint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1I64NVPROC fptr = (PFNGLUNIFORM1I64NVPROC) dasGetProcAddress("glUniform1i64NV",__context__,__at__);
    (*fptr)(location, x);
    checkOpenGLError(__context__,__at__);
}

void glFlushMappedNamedBufferRangeEXT ( GLuint buffer, GLintptr offset, GLsizeiptr length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC fptr = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) dasGetProcAddress("glFlushMappedNamedBufferRangeEXT",__context__,__at__);
    (*fptr)(buffer, offset, length);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterIuiv ( GLuint texture, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIUIVPROC fptr = (PFNGLGETTEXTUREPARAMETERIUIVPROC) dasGetProcAddress("glGetTextureParameterIuiv",__context__,__at__);
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4x2dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4X2DVPROC fptr = (PFNGLUNIFORMMATRIX4X2DVPROC) dasGetProcAddress("glUniformMatrix4x2dv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glEndPerfQueryINTEL ( GLuint queryHandle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDPERFQUERYINTELPROC fptr = (PFNGLENDPERFQUERYINTELPROC) dasGetProcAddress("glEndPerfQueryINTEL",__context__,__at__);
    (*fptr)(queryHandle);
    checkOpenGLError(__context__,__at__);
}

void glDrawMeshTasksNV ( GLuint first, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWMESHTASKSNVPROC fptr = (PFNGLDRAWMESHTASKSNVPROC) dasGetProcAddress("glDrawMeshTasksNV",__context__,__at__);
    (*fptr)(first, count);
    checkOpenGLError(__context__,__at__);
}

GLenum glPathGlyphIndexArrayNV ( GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHGLYPHINDEXARRAYNVPROC fptr = (PFNGLPATHGLYPHINDEXARRAYNVPROC) dasGetProcAddress("glPathGlyphIndexArrayNV",__context__,__at__);
    auto result = (*fptr)(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glSampleCoverage ( GLfloat value, bool invert, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLECOVERAGEPROC fptr = (PFNGLSAMPLECOVERAGEPROC) dasGetProcAddress("glSampleCoverage",__context__,__at__);
    (*fptr)(value, invert);
    checkOpenGLError(__context__,__at__);
}

void glBlendFunci ( GLuint buf, GLenum src, GLenum dst, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCIPROC fptr = (PFNGLBLENDFUNCIPROC) dasGetProcAddress("glBlendFunci",__context__,__at__);
    (*fptr)(buf, src, dst);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexParameterIuivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERIUIVEXTPROC fptr = (PFNGLMULTITEXPARAMETERIUIVEXTPROC) dasGetProcAddress("glMultiTexParameterIuivEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glStencilThenCoverFillPathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) dasGetProcAddress("glStencilThenCoverFillPathInstancedNV",__context__,__at__);
    (*fptr)(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glStencilThenCoverStrokePathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) dasGetProcAddress("glStencilThenCoverStrokePathInstancedNV",__context__,__at__);
    (*fptr)(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP2ui ( GLuint index, GLenum type, bool normalized, GLuint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP2UIPROC fptr = (PFNGLVERTEXATTRIBP2UIPROC) dasGetProcAddress("glVertexAttribP2ui",__context__,__at__);
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquationSeparate ( GLenum modeRGB, GLenum modeAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONSEPARATEPROC fptr = (PFNGLBLENDEQUATIONSEPARATEPROC) dasGetProcAddress("glBlendEquationSeparate",__context__,__at__);
    (*fptr)(modeRGB, modeAlpha);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageInsertARB ( GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGEINSERTARBPROC fptr = (PFNGLDEBUGMESSAGEINSERTARBPROC) dasGetProcAddress("glDebugMessageInsertARB",__context__,__at__);
    (*fptr)(source, type, id, severity, length, buf);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribDivisorEXT ( GLuint vaobj, GLuint index, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC) dasGetProcAddress("glVertexArrayVertexAttribDivisorEXT",__context__,__at__);
    (*fptr)(vaobj, index, divisor);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXIMAGE1DEXTPROC fptr = (PFNGLMULTITEXIMAGE1DEXTPROC) dasGetProcAddress("glMultiTexImage1DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, internalformat, width, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ui64NV ( GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM2UI64NVPROC) dasGetProcAddress("glProgramUniform2ui64NV",__context__,__at__);
    (*fptr)(program, location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glNormalFormatNV ( GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNORMALFORMATNVPROC fptr = (PFNGLNORMALFORMATNVPROC) dasGetProcAddress("glNormalFormatNV",__context__,__at__);
    (*fptr)(type, stride);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveSubroutineUniformiv ( GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC fptr = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) dasGetProcAddress("glGetActiveSubroutineUniformiv",__context__,__at__);
    (*fptr)(program, shadertype, index, pname, values);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1d ( GLuint index, GLdouble x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1DPROC fptr = (PFNGLVERTEXATTRIBL1DPROC) dasGetProcAddress("glVertexAttribL1d",__context__,__at__);
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix3x4dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3X4DVPROC fptr = (PFNGLUNIFORMMATRIX3X4DVPROC) dasGetProcAddress("glUniformMatrix3x4dv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glPathStencilDepthOffsetNV ( GLfloat factor, GLfloat units, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHSTENCILDEPTHOFFSETNVPROC fptr = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC) dasGetProcAddress("glPathStencilDepthOffsetNV",__context__,__at__);
    (*fptr)(factor, units);
    checkOpenGLError(__context__,__at__);
}

void glTextureImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREIMAGE2DEXTPROC fptr = (PFNGLTEXTUREIMAGE2DEXTPROC) dasGetProcAddress("glTextureImage2DEXT",__context__,__at__);
    (*fptr)(texture, target, level, internalformat, width, height, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoadTranspose3x3fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC fptr = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) dasGetProcAddress("glMatrixLoadTranspose3x3fNV",__context__,__at__);
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquationSeparatei ( GLuint buf, GLenum modeRGB, GLenum modeAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONSEPARATEIPROC fptr = (PFNGLBLENDEQUATIONSEPARATEIPROC) dasGetProcAddress("glBlendEquationSeparatei",__context__,__at__);
    (*fptr)(buf, modeRGB, modeAlpha);
    checkOpenGLError(__context__,__at__);
}

void glCoverageModulationTableNV ( GLsizei n, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERAGEMODULATIONTABLENVPROC fptr = (PFNGLCOVERAGEMODULATIONTABLENVPROC) dasGetProcAddress("glCoverageModulationTableNV",__context__,__at__);
    (*fptr)(n, v);
    checkOpenGLError(__context__,__at__);
}

void glUniform2i64vARB ( GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2I64VARBPROC fptr = (PFNGLUNIFORM2I64VARBPROC) dasGetProcAddress("glUniform2i64vARB",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferSampleLocationsfvARB ( GLenum target, GLuint start, GLsizei count, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC fptr = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) dasGetProcAddress("glFramebufferSampleLocationsfvARB",__context__,__at__);
    (*fptr)(target, start, count, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x3fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) dasGetProcAddress("glProgramUniformMatrix2x3fvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4dEXT ( GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4DEXTPROC fptr = (PFNGLPROGRAMUNIFORM4DEXTPROC) dasGetProcAddress("glProgramUniform4dEXT",__context__,__at__);
    (*fptr)(program, location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfQueryIdByNameINTEL ( GLchar * queryName, GLuint * queryId, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFQUERYIDBYNAMEINTELPROC fptr = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC) dasGetProcAddress("glGetPerfQueryIdByNameINTEL",__context__,__at__);
    (*fptr)(queryName, queryId);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayPointervEXT ( GLuint vaobj, GLenum pname, void ** param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYPOINTERVEXTPROC fptr = (PFNGLGETVERTEXARRAYPOINTERVEXTPROC) dasGetProcAddress("glGetVertexArrayPointervEXT",__context__,__at__);
    (*fptr)(vaobj, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTexture1D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTURE1DPROC fptr = (PFNGLFRAMEBUFFERTEXTURE1DPROC) dasGetProcAddress("glFramebufferTexture1D",__context__,__at__);
    (*fptr)(target, attachment, textarget, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayIndexed64iv ( GLuint vaobj, GLuint index, GLenum pname, GLint64 * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYINDEXED64IVPROC fptr = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) dasGetProcAddress("glGetVertexArrayIndexed64iv",__context__,__at__);
    (*fptr)(vaobj, index, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glBindTransformFeedback ( GLenum target, GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDTRANSFORMFEEDBACKPROC fptr = (PFNGLBINDTRANSFORMFEEDBACKPROC) dasGetProcAddress("glBindTransformFeedback",__context__,__at__);
    (*fptr)(target, id);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureImage ( GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREIMAGEPROC fptr = (PFNGLGETTEXTUREIMAGEPROC) dasGetProcAddress("glGetTextureImage",__context__,__at__);
    (*fptr)(texture, level, format, type, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetSubroutineIndex ( GLuint program, GLenum shadertype, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSUBROUTINEINDEXPROC fptr = (PFNGLGETSUBROUTINEINDEXPROC) dasGetProcAddress("glGetSubroutineIndex",__context__,__at__);
    auto result = (*fptr)(program, shadertype, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glBindSamplers ( GLuint first, GLsizei count, const GLuint * samplers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDSAMPLERSPROC fptr = (PFNGLBINDSAMPLERSPROC) dasGetProcAddress("glBindSamplers",__context__,__at__);
    (*fptr)(first, count, samplers);
    checkOpenGLError(__context__,__at__);
}

void glTexCoordFormatNV ( GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXCOORDFORMATNVPROC fptr = (PFNGLTEXCOORDFORMATNVPROC) dasGetProcAddress("glTexCoordFormatNV",__context__,__at__);
    (*fptr)(size, type, stride);
    checkOpenGLError(__context__,__at__);
}

void glDisableVertexAttribArray ( GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEVERTEXATTRIBARRAYPROC fptr = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) dasGetProcAddress("glDisableVertexAttribArray",__context__,__at__);
    (*fptr)(index);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2uiEXT ( GLuint program, GLint location, GLuint v0, GLuint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM2UIEXTPROC) dasGetProcAddress("glProgramUniform2uiEXT",__context__,__at__);
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glStencilThenCoverStrokePathNV ( GLuint path, GLint reference, GLuint mask, GLenum coverMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC fptr = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) dasGetProcAddress("glStencilThenCoverStrokePathNV",__context__,__at__);
    (*fptr)(path, reference, mask, coverMode);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribIuiv ( GLuint index, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBIUIVPROC fptr = (PFNGLGETVERTEXATTRIBIUIVPROC) dasGetProcAddress("glGetVertexAttribIuiv",__context__,__at__);
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glBindTextureUnit ( GLuint unit, GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDTEXTUREUNITPROC fptr = (PFNGLBINDTEXTUREUNITPROC) dasGetProcAddress("glBindTextureUnit",__context__,__at__);
    (*fptr)(unit, texture);
    checkOpenGLError(__context__,__at__);
}

void glSubpixelPrecisionBiasNV ( GLuint xbits, GLuint ybits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSUBPIXELPRECISIONBIASNVPROC fptr = (PFNGLSUBPIXELPRECISIONBIASNVPROC) dasGetProcAddress("glSubpixelPrecisionBiasNV",__context__,__at__);
    (*fptr)(xbits, ybits);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsFramebuffer ( GLuint framebuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISFRAMEBUFFERPROC fptr = (PFNGLISFRAMEBUFFERPROC) dasGetProcAddress("glIsFramebuffer",__context__,__at__);
    auto result = (*fptr)(framebuffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMatrixMultTransposefEXT ( GLenum mode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULTTRANSPOSEFEXTPROC fptr = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) dasGetProcAddress("glMatrixMultTransposefEXT",__context__,__at__);
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glPushClientAttribDefaultEXT ( GLbitfield mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC fptr = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) dasGetProcAddress("glPushClientAttribDefaultEXT",__context__,__at__);
    (*fptr)(mask);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ui64NV ( GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM4UI64NVPROC) dasGetProcAddress("glProgramUniform4ui64NV",__context__,__at__);
    (*fptr)(program, location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glDeleteNamedStringARB ( GLint namelen, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETENAMEDSTRINGARBPROC fptr = (PFNGLDELETENAMEDSTRINGARBPROC) dasGetProcAddress("glDeleteNamedStringARB",__context__,__at__);
    (*fptr)(namelen, name);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3DVPROC fptr = (PFNGLPROGRAMUNIFORM3DVPROC) dasGetProcAddress("glProgramUniform3dv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glPathSubCoordsNV ( GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHSUBCOORDSNVPROC fptr = (PFNGLPATHSUBCOORDSNVPROC) dasGetProcAddress("glPathSubCoordsNV",__context__,__at__);
    (*fptr)(path, coordStart, numCoords, coordType, coords);
    checkOpenGLError(__context__,__at__);
}

void glBindBufferBase ( GLenum target, GLuint index, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDBUFFERBASEPROC fptr = (PFNGLBINDBUFFERBASEPROC) dasGetProcAddress("glBindBufferBase",__context__,__at__);
    (*fptr)(target, index, buffer);
    checkOpenGLError(__context__,__at__);
}

void glGenTextures ( GLsizei n, GLuint * textures, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENTEXTURESPROC fptr = (PFNGLGENTEXTURESPROC) dasGetProcAddress("glGenTextures",__context__,__at__);
    (*fptr)(n, textures);
    checkOpenGLError(__context__,__at__);
}

void glMemoryBarrierByRegion ( GLbitfield barriers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMEMORYBARRIERBYREGIONPROC fptr = (PFNGLMEMORYBARRIERBYREGIONPROC) dasGetProcAddress("glMemoryBarrierByRegion",__context__,__at__);
    (*fptr)(barriers);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3iEXT ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3IEXTPROC fptr = (PFNGLPROGRAMUNIFORM3IEXTPROC) dasGetProcAddress("glProgramUniform3iEXT",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferParameteri ( GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERPARAMETERIPROC fptr = (PFNGLFRAMEBUFFERPARAMETERIPROC) dasGetProcAddress("glFramebufferParameteri",__context__,__at__);
    (*fptr)(target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glEGLImageTargetTexStorageEXT ( GLenum target, GLeglImageOES image, const GLint * attrib_list, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC fptr = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) dasGetProcAddress("glEGLImageTargetTexStorageEXT",__context__,__at__);
    (*fptr)(target, image, attrib_list);
    checkOpenGLError(__context__,__at__);
}

void glMakeTextureHandleResidentNV ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKETEXTUREHANDLERESIDENTNVPROC fptr = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) dasGetProcAddress("glMakeTextureHandleResidentNV",__context__,__at__);
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glClearTexSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARTEXSUBIMAGEPROC fptr = (PFNGLCLEARTEXSUBIMAGEPROC) dasGetProcAddress("glClearTexSubImage",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1ui64NV ( GLuint index, GLuint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1UI64NVPROC fptr = (PFNGLVERTEXATTRIBL1UI64NVPROC) dasGetProcAddress("glVertexAttribL1ui64NV",__context__,__at__);
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferParameteri ( GLuint framebuffer, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC fptr = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) dasGetProcAddress("glNamedFramebufferParameteri",__context__,__at__);
    (*fptr)(framebuffer, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1i64NV ( GLuint program, GLint location, GLint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1I64NVPROC fptr = (PFNGLPROGRAMUNIFORM1I64NVPROC) dasGetProcAddress("glProgramUniform1i64NV",__context__,__at__);
    (*fptr)(program, location, x);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2sv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2SVPROC fptr = (PFNGLVERTEXATTRIB2SVPROC) dasGetProcAddress("glVertexAttrib2sv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glMatrixMultTranspose3x3fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC fptr = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) dasGetProcAddress("glMatrixMultTranspose3x3fNV",__context__,__at__);
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

void glPathSubCommandsNV ( GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHSUBCOMMANDSNVPROC fptr = (PFNGLPATHSUBCOMMANDSNVPROC) dasGetProcAddress("glPathSubCommandsNV",__context__,__at__);
    (*fptr)(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
    checkOpenGLError(__context__,__at__);
}

void glCoverageModulationNV ( GLenum components, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERAGEMODULATIONNVPROC fptr = (PFNGLCOVERAGEMODULATIONNVPROC) dasGetProcAddress("glCoverageModulationNV",__context__,__at__);
    (*fptr)(components);
    checkOpenGLError(__context__,__at__);
}

void glBufferAttachMemoryNV ( GLenum target, GLuint memory, GLuint64 offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERATTACHMEMORYNVPROC fptr = (PFNGLBUFFERATTACHMEMORYNVPROC) dasGetProcAddress("glBufferAttachMemoryNV",__context__,__at__);
    (*fptr)(target, memory, offset);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramInterfaceiv ( GLuint program, GLenum programInterface, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMINTERFACEIVPROC fptr = (PFNGLGETPROGRAMINTERFACEIVPROC) dasGetProcAddress("glGetProgramInterfaceiv",__context__,__at__);
    (*fptr)(program, programInterface, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsNamedBufferResidentNV ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISNAMEDBUFFERRESIDENTNVPROC fptr = (PFNGLISNAMEDBUFFERRESIDENTNVPROC) dasGetProcAddress("glIsNamedBufferResidentNV",__context__,__at__);
    auto result = (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glDispatchCompute ( GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISPATCHCOMPUTEPROC fptr = (PFNGLDISPATCHCOMPUTEPROC) dasGetProcAddress("glDispatchCompute",__context__,__at__);
    (*fptr)(num_groups_x, num_groups_y, num_groups_z);
    checkOpenGLError(__context__,__at__);
}

void glGetnTexImageARB ( GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNTEXIMAGEARBPROC fptr = (PFNGLGETNTEXIMAGEARBPROC) dasGetProcAddress("glGetnTexImageARB",__context__,__at__);
    (*fptr)(target, level, format, type, bufSize, img);
    checkOpenGLError(__context__,__at__);
}

void glTexBuffer ( GLenum target, GLenum internalformat, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXBUFFERPROC fptr = (PFNGLTEXBUFFERPROC) dasGetProcAddress("glTexBuffer",__context__,__at__);
    (*fptr)(target, internalformat, buffer);
    checkOpenGLError(__context__,__at__);
}

void glViewport ( GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTPROC fptr = (PFNGLVIEWPORTPROC) dasGetProcAddress("glViewport",__context__,__at__);
    (*fptr)(x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glGetPointerv ( GLenum pname, void ** params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPOINTERVPROC fptr = (PFNGLGETPOINTERVPROC) dasGetProcAddress("glGetPointerv",__context__,__at__);
    (*fptr)(pname, params);
    checkOpenGLError(__context__,__at__);
}

void glClipControl ( GLenum origin, GLenum depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLIPCONTROLPROC fptr = (PFNGLCLIPCONTROLPROC) dasGetProcAddress("glClipControl",__context__,__at__);
    (*fptr)(origin, depth);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribDivisorARB ( GLuint index, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBDIVISORARBPROC fptr = (PFNGLVERTEXATTRIBDIVISORARBPROC) dasGetProcAddress("glVertexAttribDivisorARB",__context__,__at__);
    (*fptr)(index, divisor);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x4fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) dasGetProcAddress("glProgramUniformMatrix2x4fvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBeginConditionalRender ( GLuint id, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINCONDITIONALRENDERPROC fptr = (PFNGLBEGINCONDITIONALRENDERPROC) dasGetProcAddress("glBeginConditionalRender",__context__,__at__);
    (*fptr)(id, mode);
    checkOpenGLError(__context__,__at__);
}

void glInsertEventMarkerEXT ( GLsizei length, const GLchar * marker, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINSERTEVENTMARKEREXTPROC fptr = (PFNGLINSERTEVENTMARKEREXTPROC) dasGetProcAddress("glInsertEventMarkerEXT",__context__,__at__);
    (*fptr)(length, marker);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferFetchBarrierEXT ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC fptr = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) dasGetProcAddress("glFramebufferFetchBarrierEXT",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glUniform2i64vNV ( GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2I64VNVPROC fptr = (PFNGLUNIFORM2I64VNVPROC) dasGetProcAddress("glUniform2i64vNV",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage3DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE3DEXTPROC fptr = (PFNGLTEXTURESTORAGE3DEXTPROC) dasGetProcAddress("glTextureStorage3DEXT",__context__,__at__);
    (*fptr)(texture, target, levels, internalformat, width, height, depth);
    checkOpenGLError(__context__,__at__);
}

void glCreateFramebuffers ( GLsizei n, GLuint * framebuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEFRAMEBUFFERSPROC fptr = (PFNGLCREATEFRAMEBUFFERSPROC) dasGetProcAddress("glCreateFramebuffers",__context__,__at__);
    (*fptr)(n, framebuffers);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC fptr = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) dasGetProcAddress("glCompressedTexSubImage1D",__context__,__at__);
    (*fptr)(target, level, xoffset, width, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

GLenum glGetGraphicsResetStatusARB ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETGRAPHICSRESETSTATUSARBPROC fptr = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) dasGetProcAddress("glGetGraphicsResetStatusARB",__context__,__at__);
    auto result = (*fptr)();
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetNamedProgramStringEXT ( GLuint program, GLenum target, GLenum pname, void * string, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMSTRINGEXTPROC fptr = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) dasGetProcAddress("glGetNamedProgramStringEXT",__context__,__at__);
    (*fptr)(program, target, pname, string);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoad3x3fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOAD3X3FNVPROC fptr = (PFNGLMATRIXLOAD3X3FNVPROC) dasGetProcAddress("glMatrixLoad3x3fNV",__context__,__at__);
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4x2fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4X2FVPROC fptr = (PFNGLUNIFORMMATRIX4X2FVPROC) dasGetProcAddress("glUniformMatrix4x2fv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glCommandListSegmentsNV ( GLuint list, GLuint segments, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMMANDLISTSEGMENTSNVPROC fptr = (PFNGLCOMMANDLISTSEGMENTSNVPROC) dasGetProcAddress("glCommandListSegmentsNV",__context__,__at__);
    (*fptr)(list, segments);
    checkOpenGLError(__context__,__at__);
}

void glEnableIndexedEXT ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEINDEXEDEXTPROC fptr = (PFNGLENABLEINDEXEDEXTPROC) dasGetProcAddress("glEnableIndexedEXT",__context__,__at__);
    (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
}

void glUniform2ui64vARB ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UI64VARBPROC fptr = (PFNGLUNIFORM2UI64VARBPROC) dasGetProcAddress("glUniform2ui64vARB",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glViewportIndexedfv ( GLuint index, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTINDEXEDFVPROC fptr = (PFNGLVIEWPORTINDEXEDFVPROC) dasGetProcAddress("glViewportIndexedfv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetObjectLabelEXT ( GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETOBJECTLABELEXTPROC fptr = (PFNGLGETOBJECTLABELEXTPROC) dasGetProcAddress("glGetObjectLabelEXT",__context__,__at__);
    (*fptr)(type, object, bufSize, length, label);
    checkOpenGLError(__context__,__at__);
}

void glColorMaski ( GLuint index, bool r, bool g, bool b, bool a, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOLORMASKIPROC fptr = (PFNGLCOLORMASKIPROC) dasGetProcAddress("glColorMaski",__context__,__at__);
    (*fptr)(index, r, g, b, a);
    checkOpenGLError(__context__,__at__);
}

void glDrawTransformFeedbackStream ( GLenum mode, GLuint id, GLuint stream, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) dasGetProcAddress("glDrawTransformFeedbackStream",__context__,__at__);
    (*fptr)(mode, id, stream);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTexImage3D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXIMAGE3DPROC fptr = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) dasGetProcAddress("glCompressedTexImage3D",__context__,__at__);
    (*fptr)(target, level, internalformat, width, height, depth, border, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glCreateVertexArrays ( GLsizei n, GLuint * arrays, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEVERTEXARRAYSPROC fptr = (PFNGLCREATEVERTEXARRAYSPROC) dasGetProcAddress("glCreateVertexArrays",__context__,__at__);
    (*fptr)(n, arrays);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) dasGetProcAddress("glCompressedMultiTexImage2DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, internalformat, width, height, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsIndirect ( GLenum mode, GLenum type, const void * indirect, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINDIRECTPROC fptr = (PFNGLDRAWELEMENTSINDIRECTPROC) dasGetProcAddress("glDrawElementsIndirect",__context__,__at__);
    (*fptr)(mode, type, indirect);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveAtomicCounterBufferiv ( GLuint program, GLuint bufferIndex, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC fptr = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) dasGetProcAddress("glGetActiveAtomicCounterBufferiv",__context__,__at__);
    (*fptr)(program, bufferIndex, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveUniformsiv ( GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEUNIFORMSIVPROC fptr = (PFNGLGETACTIVEUNIFORMSIVPROC) dasGetProcAddress("glGetActiveUniformsiv",__context__,__at__);
    (*fptr)(program, uniformCount, uniformIndices, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glBindTextures ( GLuint first, GLsizei count, const GLuint * textures, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDTEXTURESPROC fptr = (PFNGLBINDTEXTURESPROC) dasGetProcAddress("glBindTextures",__context__,__at__);
    (*fptr)(first, count, textures);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferSubDataEXT ( GLuint buffer, GLintptr offset, GLsizeiptr size, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERSUBDATAEXTPROC fptr = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) dasGetProcAddress("glGetNamedBufferSubDataEXT",__context__,__at__);
    (*fptr)(buffer, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2fEXT ( GLuint program, GLint location, GLfloat v0, GLfloat v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2FEXTPROC fptr = (PFNGLPROGRAMUNIFORM2FEXTPROC) dasGetProcAddress("glProgramUniform2fEXT",__context__,__at__);
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x3dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) dasGetProcAddress("glProgramUniformMatrix4x3dvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glPolygonOffsetClampEXT ( GLfloat factor, GLfloat units, GLfloat clamp, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOLYGONOFFSETCLAMPEXTPROC fptr = (PFNGLPOLYGONOFFSETCLAMPEXTPROC) dasGetProcAddress("glPolygonOffsetClampEXT",__context__,__at__);
    (*fptr)(factor, units, clamp);
    checkOpenGLError(__context__,__at__);
}

void glMatrixMult3x2fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULT3X2FNVPROC fptr = (PFNGLMATRIXMULT3X2FNVPROC) dasGetProcAddress("glMatrixMult3x2fNV",__context__,__at__);
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsEnabledIndexedEXT ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISENABLEDINDEXEDEXTPROC fptr = (PFNGLISENABLEDINDEXEDEXTPROC) dasGetProcAddress("glIsEnabledIndexedEXT",__context__,__at__);
    auto result = (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLboolean glIsPathNV ( GLuint path, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISPATHNVPROC fptr = (PFNGLISPATHNVPROC) dasGetProcAddress("glIsPathNV",__context__,__at__);
    auto result = (*fptr)(path);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLuint glCreateShaderProgramv ( GLenum type, GLsizei count, const GLchar *const * strings, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESHADERPROGRAMVPROC fptr = (PFNGLCREATESHADERPROGRAMVPROC) dasGetProcAddress("glCreateShaderProgramv",__context__,__at__);
    auto result = (*fptr)(type, count, strings);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniformMatrix3x4fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3X4FVPROC fptr = (PFNGLUNIFORMMATRIX3X4FVPROC) dasGetProcAddress("glUniformMatrix3x4fv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glViewportIndexedf ( GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTINDEXEDFPROC fptr = (PFNGLVIEWPORTINDEXEDFPROC) dasGetProcAddress("glViewportIndexedf",__context__,__at__);
    (*fptr)(index, x, y, w, h);
    checkOpenGLError(__context__,__at__);
}

void glBindImageTextures ( GLuint first, GLsizei count, const GLuint * textures, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDIMAGETEXTURESPROC fptr = (PFNGLBINDIMAGETEXTURESPROC) dasGetProcAddress("glBindImageTextures",__context__,__at__);
    (*fptr)(first, count, textures);
    checkOpenGLError(__context__,__at__);
}

GLenum glCheckFramebufferStatus ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCHECKFRAMEBUFFERSTATUSPROC fptr = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) dasGetProcAddress("glCheckFramebufferStatus",__context__,__at__);
    auto result = (*fptr)(target);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glTextureParameterIiv ( GLuint texture, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIIVPROC fptr = (PFNGLTEXTUREPARAMETERIIVPROC) dasGetProcAddress("glTextureParameterIiv",__context__,__at__);
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureSubImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) dasGetProcAddress("glCopyTextureSubImage1DEXT",__context__,__at__);
    (*fptr)(texture, target, level, xoffset, x, y, width);
    checkOpenGLError(__context__,__at__);
}

void glPathParameterivNV ( GLuint path, GLenum pname, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHPARAMETERIVNVPROC fptr = (PFNGLPATHPARAMETERIVNVPROC) dasGetProcAddress("glPathParameterivNV",__context__,__at__);
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

GLint glGetUniformLocation ( GLuint program, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMLOCATIONPROC fptr = (PFNGLGETUNIFORMLOCATIONPROC) dasGetProcAddress("glGetUniformLocation",__context__,__at__);
    auto result = (*fptr)(program, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniformHandleui64vARB ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMHANDLEUI64VARBPROC fptr = (PFNGLUNIFORMHANDLEUI64VARBPROC) dasGetProcAddress("glUniformHandleui64vARB",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoadTransposefEXT ( GLenum mode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADTRANSPOSEFEXTPROC fptr = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) dasGetProcAddress("glMatrixLoadTransposefEXT",__context__,__at__);
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexCoordPointerEXT ( GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXCOORDPOINTEREXTPROC fptr = (PFNGLMULTITEXCOORDPOINTEREXTPROC) dasGetProcAddress("glMultiTexCoordPointerEXT",__context__,__at__);
    (*fptr)(texunit, size, type, stride, pointer);
    checkOpenGLError(__context__,__at__);
}

void glGetFramebufferParameterivEXT ( GLuint framebuffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) dasGetProcAddress("glGetFramebufferParameterivEXT",__context__,__at__);
    (*fptr)(framebuffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMakeNamedBufferNonResidentNV ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC fptr = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC) dasGetProcAddress("glMakeNamedBufferNonResidentNV",__context__,__at__);
    (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3i64NV ( GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3I64NVPROC fptr = (PFNGLVERTEXATTRIBL3I64NVPROC) dasGetProcAddress("glVertexAttribL3i64NV",__context__,__at__);
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage2DMultisample ( GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC fptr = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) dasGetProcAddress("glTextureStorage2DMultisample",__context__,__at__);
    (*fptr)(texture, samples, internalformat, width, height, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquation ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONPROC fptr = (PFNGLBLENDEQUATIONPROC) dasGetProcAddress("glBlendEquation",__context__,__at__);
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

GLuint64 glGetTextureHandleNV ( GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREHANDLENVPROC fptr = (PFNGLGETTEXTUREHANDLENVPROC) dasGetProcAddress("glGetTextureHandleNV",__context__,__at__);
    auto result = (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glFramebufferTexture ( GLenum target, GLenum attachment, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTUREPROC fptr = (PFNGLFRAMEBUFFERTEXTUREPROC) dasGetProcAddress("glFramebufferTexture",__context__,__at__);
    (*fptr)(target, attachment, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glFlush ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFLUSHPROC fptr = (PFNGLFLUSHPROC) dasGetProcAddress("glFlush",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glProgramBinary ( GLuint program, GLenum binaryFormat, const void * binary, GLsizei length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMBINARYPROC fptr = (PFNGLPROGRAMBINARYPROC) dasGetProcAddress("glProgramBinary",__context__,__at__);
    (*fptr)(program, binaryFormat, binary, length);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterfvEXT ( GLuint texture, GLenum target, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERFVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERFVEXTPROC) dasGetProcAddress("glGetTextureParameterfvEXT",__context__,__at__);
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glClear ( GLbitfield mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARPROC fptr = (PFNGLCLEARPROC) dasGetProcAddress("glClear",__context__,__at__);
    (*fptr)(mask);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangef ( GLfloat n, GLfloat f, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEFPROC fptr = (PFNGLDEPTHRANGEFPROC) dasGetProcAddress("glDepthRangef",__context__,__at__);
    (*fptr)(n, f);
    checkOpenGLError(__context__,__at__);
}

void glUniform4i64NV ( GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4I64NVPROC fptr = (PFNGLUNIFORM4I64NVPROC) dasGetProcAddress("glUniform4i64NV",__context__,__at__);
    (*fptr)(location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTexture2DEXT ( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) dasGetProcAddress("glNamedFramebufferTexture2DEXT",__context__,__at__);
    (*fptr)(framebuffer, attachment, textarget, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferPageCommitmentEXT ( GLuint buffer, GLintptr offset, GLsizeiptr size, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC fptr = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) dasGetProcAddress("glNamedBufferPageCommitmentEXT",__context__,__at__);
    (*fptr)(buffer, offset, size, commit);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UIVPROC fptr = (PFNGLPROGRAMUNIFORM1UIVPROC) dasGetProcAddress("glProgramUniform1uiv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2IVEXTPROC) dasGetProcAddress("glProgramUniform2ivEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedProgramLocalParameterIuivEXT ( GLuint program, GLenum target, GLuint index, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) dasGetProcAddress("glGetNamedProgramLocalParameterIuivEXT",__context__,__at__);
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glCoverFillPathNV ( GLuint path, GLenum coverMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERFILLPATHNVPROC fptr = (PFNGLCOVERFILLPATHNVPROC) dasGetProcAddress("glCoverFillPathNV",__context__,__at__);
    (*fptr)(path, coverMode);
    checkOpenGLError(__context__,__at__);
}

void glGetShadingRateImagePaletteNV ( GLuint viewport, GLuint entry, GLenum * rate, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADINGRATEIMAGEPALETTENVPROC fptr = (PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) dasGetProcAddress("glGetShadingRateImagePaletteNV",__context__,__at__);
    (*fptr)(viewport, entry, rate);
    checkOpenGLError(__context__,__at__);
}

void * glMapNamedBufferRange ( GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPNAMEDBUFFERRANGEPROC fptr = (PFNGLMAPNAMEDBUFFERRANGEPROC) dasGetProcAddress("glMapNamedBufferRange",__context__,__at__);
    auto result = (*fptr)(buffer, offset, length, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform4fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4FVPROC fptr = (PFNGLPROGRAMUNIFORM4FVPROC) dasGetProcAddress("glProgramUniform4fv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureSubImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) dasGetProcAddress("glCopyTextureSubImage3DEXT",__context__,__at__);
    (*fptr)(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformSubroutineuiv ( GLenum shadertype, GLint location, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMSUBROUTINEUIVPROC fptr = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) dasGetProcAddress("glGetUniformSubroutineuiv",__context__,__at__);
    (*fptr)(shadertype, location, params);
    checkOpenGLError(__context__,__at__);
}

void glGetBufferParameteri64v ( GLenum target, GLenum pname, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBUFFERPARAMETERI64VPROC fptr = (PFNGLGETBUFFERPARAMETERI64VPROC) dasGetProcAddress("glGetBufferParameteri64v",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetCompressedTextureSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC fptr = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) dasGetProcAddress("glGetCompressedTextureSubImage",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribLOffsetEXT ( GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) dasGetProcAddress("glVertexArrayVertexAttribLOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, index, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glTextureBufferEXT ( GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBUFFEREXTPROC fptr = (PFNGLTEXTUREBUFFEREXTPROC) dasGetProcAddress("glTextureBufferEXT",__context__,__at__);
    (*fptr)(texture, target, internalformat, buffer);
    checkOpenGLError(__context__,__at__);
}

void glClearDepthf ( GLfloat d, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARDEPTHFPROC fptr = (PFNGLCLEARDEPTHFPROC) dasGetProcAddress("glClearDepthf",__context__,__at__);
    (*fptr)(d);
    checkOpenGLError(__context__,__at__);
}

void glGetDoublei_vEXT ( GLenum pname, GLuint index, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDOUBLEI_VEXTPROC fptr = (PFNGLGETDOUBLEI_VEXTPROC) dasGetProcAddress("glGetDoublei_vEXT",__context__,__at__);
    (*fptr)(pname, index, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x4dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) dasGetProcAddress("glProgramUniformMatrix2x4dv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTexStorage2D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSTORAGE2DPROC fptr = (PFNGLTEXSTORAGE2DPROC) dasGetProcAddress("glTexStorage2D",__context__,__at__);
    (*fptr)(target, levels, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP3uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP3UIVPROC fptr = (PFNGLVERTEXATTRIBP3UIVPROC) dasGetProcAddress("glVertexAttribP3uiv",__context__,__at__);
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glGetPathSpacingNV ( GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHSPACINGNVPROC fptr = (PFNGLGETPATHSPACINGNVPROC) dasGetProcAddress("glGetPathSpacingNV",__context__,__at__);
    (*fptr)(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribIPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBIPOINTERPROC fptr = (PFNGLVERTEXATTRIBIPOINTERPROC) dasGetProcAddress("glVertexAttribIPointer",__context__,__at__);
    (*fptr)(index, size, type, stride, pointer);
    checkOpenGLError(__context__,__at__);
}

void glProgramParameteriARB ( GLuint program, GLenum pname, GLint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMPARAMETERIARBPROC fptr = (PFNGLPROGRAMPARAMETERIARBPROC) dasGetProcAddress("glProgramParameteriARB",__context__,__at__);
    (*fptr)(program, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsBaseVertex ( GLenum mode, const GLsizei * count, GLenum type, const void *const * indices, GLsizei drawcount, const GLint * basevertex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC fptr = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) dasGetProcAddress("glMultiDrawElementsBaseVertex",__context__,__at__);
    (*fptr)(mode, count, type, indices, drawcount, basevertex);
    checkOpenGLError(__context__,__at__);
}

void glBindFramebuffer ( GLenum target, GLuint framebuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDFRAMEBUFFERPROC fptr = (PFNGLBINDFRAMEBUFFERPROC) dasGetProcAddress("glBindFramebuffer",__context__,__at__);
    (*fptr)(target, framebuffer);
    checkOpenGLError(__context__,__at__);
}

void glGetFramebufferParameteriv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAMEBUFFERPARAMETERIVPROC fptr = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) dasGetProcAddress("glGetFramebufferParameteriv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformuiv ( GLuint program, GLint location, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMUIVPROC fptr = (PFNGLGETUNIFORMUIVPROC) dasGetProcAddress("glGetUniformuiv",__context__,__at__);
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3DVPROC fptr = (PFNGLVERTEXATTRIBL3DVPROC) dasGetProcAddress("glVertexAttribL3dv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glPathGlyphRangeNV ( GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHGLYPHRANGENVPROC fptr = (PFNGLPATHGLYPHRANGENVPROC) dasGetProcAddress("glPathGlyphRangeNV",__context__,__at__);
    (*fptr)(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
    checkOpenGLError(__context__,__at__);
}

void glSamplerParameteri ( GLuint sampler, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERIPROC fptr = (PFNGLSAMPLERPARAMETERIPROC) dasGetProcAddress("glSamplerParameteri",__context__,__at__);
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glTextureView ( GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREVIEWPROC fptr = (PFNGLTEXTUREVIEWPROC) dasGetProcAddress("glTextureView",__context__,__at__);
    (*fptr)(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
    checkOpenGLError(__context__,__at__);
}

void glDeleteStatesNV ( GLsizei n, const GLuint * states, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETESTATESNVPROC fptr = (PFNGLDELETESTATESNVPROC) dasGetProcAddress("glDeleteStatesNV",__context__,__at__);
    (*fptr)(n, states);
    checkOpenGLError(__context__,__at__);
}

void glCallCommandListNV ( GLuint list, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCALLCOMMANDLISTNVPROC fptr = (PFNGLCALLCOMMANDLISTNVPROC) dasGetProcAddress("glCallCommandListNV",__context__,__at__);
    (*fptr)(list);
    checkOpenGLError(__context__,__at__);
}

void glTextureBarrier ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBARRIERPROC fptr = (PFNGLTEXTUREBARRIERPROC) dasGetProcAddress("glTextureBarrier",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsSampler ( GLuint sampler, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISSAMPLERPROC fptr = (PFNGLISSAMPLERPROC) dasGetProcAddress("glIsSampler",__context__,__at__);
    auto result = (*fptr)(sampler);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLsync glCreateSyncFromCLeventARB ( struct _cl_context * context, struct _cl_event * event, GLbitfield flags, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESYNCFROMCLEVENTARBPROC fptr = (PFNGLCREATESYNCFROMCLEVENTARBPROC) dasGetProcAddress("glCreateSyncFromCLeventARB",__context__,__at__);
    auto result = (*fptr)(context, event, flags);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetQueryiv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYIVPROC fptr = (PFNGLGETQUERYIVPROC) dasGetProcAddress("glGetQueryiv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) dasGetProcAddress("glCompressedTextureSubImage2DEXT",__context__,__at__);
    (*fptr)(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glNamedCopyBufferSubDataEXT ( GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC fptr = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) dasGetProcAddress("glNamedCopyBufferSubDataEXT",__context__,__at__);
    (*fptr)(readBuffer, writeBuffer, readOffset, writeOffset, size);
    checkOpenGLError(__context__,__at__);
}

void glMatrixPushEXT ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXPUSHEXTPROC fptr = (PFNGLMATRIXPUSHEXTPROC) dasGetProcAddress("glMatrixPushEXT",__context__,__at__);
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM4I64VARBPROC) dasGetProcAddress("glProgramUniform4i64vARB",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

GLint glGetFragDataIndex ( GLuint program, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAGDATAINDEXPROC fptr = (PFNGLGETFRAGDATAINDEXPROC) dasGetProcAddress("glGetFragDataIndex",__context__,__at__);
    auto result = (*fptr)(program, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetTexParameteriv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXPARAMETERIVPROC fptr = (PFNGLGETTEXPARAMETERIVPROC) dasGetProcAddress("glGetTexParameteriv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTexParameterIiv ( GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERIIVPROC fptr = (PFNGLTEXPARAMETERIIVPROC) dasGetProcAddress("glTexParameterIiv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1IVEXTPROC) dasGetProcAddress("glProgramUniform1ivEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glQueryCounter ( GLuint id, GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLQUERYCOUNTERPROC fptr = (PFNGLQUERYCOUNTERPROC) dasGetProcAddress("glQueryCounter",__context__,__at__);
    (*fptr)(id, target);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsTexture ( GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISTEXTUREPROC fptr = (PFNGLISTEXTUREPROC) dasGetProcAddress("glIsTexture",__context__,__at__);
    auto result = (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glStencilOp ( GLenum fail, GLenum zfail, GLenum zpass, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILOPPROC fptr = (PFNGLSTENCILOPPROC) dasGetProcAddress("glStencilOp",__context__,__at__);
    (*fptr)(fail, zfail, zpass);
    checkOpenGLError(__context__,__at__);
}

GLint glGetSubroutineUniformLocation ( GLuint program, GLenum shadertype, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC fptr = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) dasGetProcAddress("glGetSubroutineUniformLocation",__context__,__at__);
    auto result = (*fptr)(program, shadertype, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGenerateMultiTexMipmapEXT ( GLenum texunit, GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENERATEMULTITEXMIPMAPEXTPROC fptr = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC) dasGetProcAddress("glGenerateMultiTexMipmapEXT",__context__,__at__);
    (*fptr)(texunit, target);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x3dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) dasGetProcAddress("glProgramUniformMatrix2x3dvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4i64NV ( GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4I64NVPROC fptr = (PFNGLPROGRAMUNIFORM4I64NVPROC) dasGetProcAddress("glProgramUniform4i64NV",__context__,__at__);
    (*fptr)(program, location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glNamedStringARB ( GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDSTRINGARBPROC fptr = (PFNGLNAMEDSTRINGARBPROC) dasGetProcAddress("glNamedStringARB",__context__,__at__);
    (*fptr)(type, namelen, name, stringlen, string);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformuivARB ( GLuint program, GLint location, GLsizei bufSize, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMUIVARBPROC fptr = (PFNGLGETNUNIFORMUIVARBPROC) dasGetProcAddress("glGetnUniformuivARB",__context__,__at__);
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glGenFramebuffers ( GLsizei n, GLuint * framebuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENFRAMEBUFFERSPROC fptr = (PFNGLGENFRAMEBUFFERSPROC) dasGetProcAddress("glGenFramebuffers",__context__,__at__);
    (*fptr)(n, framebuffers);
    checkOpenGLError(__context__,__at__);
}

void glPathGlyphsNV ( GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHGLYPHSNVPROC fptr = (PFNGLPATHGLYPHSNVPROC) dasGetProcAddress("glPathGlyphsNV",__context__,__at__);
    (*fptr)(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
    checkOpenGLError(__context__,__at__);
}

void glDispatchComputeIndirect ( GLintptr indirect, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISPATCHCOMPUTEINDIRECTPROC fptr = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) dasGetProcAddress("glDispatchComputeIndirect",__context__,__at__);
    (*fptr)(indirect);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformIndices ( GLuint program, GLsizei uniformCount, const GLchar *const * uniformNames, GLuint * uniformIndices, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMINDICESPROC fptr = (PFNGLGETUNIFORMINDICESPROC) dasGetProcAddress("glGetUniformIndices",__context__,__at__);
    (*fptr)(program, uniformCount, uniformNames, uniformIndices);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribLFormatEXT ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC) dasGetProcAddress("glVertexArrayVertexAttribLFormatEXT",__context__,__at__);
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateSubFramebuffer ( GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATESUBFRAMEBUFFERPROC fptr = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) dasGetProcAddress("glInvalidateSubFramebuffer",__context__,__at__);
    (*fptr)(target, numAttachments, attachments, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glPushDebugGroup ( GLenum source, GLuint id, GLsizei length, const GLchar * message, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPUSHDEBUGGROUPPROC fptr = (PFNGLPUSHDEBUGGROUPPROC) dasGetProcAddress("glPushDebugGroup",__context__,__at__);
    (*fptr)(source, id, length, message);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferReadBufferEXT ( GLuint framebuffer, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERREADBUFFEREXTPROC fptr = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC) dasGetProcAddress("glFramebufferReadBufferEXT",__context__,__at__);
    (*fptr)(framebuffer, mode);
    checkOpenGLError(__context__,__at__);
}

void glSamplerParameterf ( GLuint sampler, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERFPROC fptr = (PFNGLSAMPLERPARAMETERFPROC) dasGetProcAddress("glSamplerParameterf",__context__,__at__);
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glFinish ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFINISHPROC fptr = (PFNGLFINISHPROC) dasGetProcAddress("glFinish",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glDeleteTextures ( GLsizei n, const GLuint * textures, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETETEXTURESPROC fptr = (PFNGLDELETETEXTURESPROC) dasGetProcAddress("glDeleteTextures",__context__,__at__);
    (*fptr)(n, textures);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2i64NV ( GLuint index, GLint64EXT x, GLint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2I64NVPROC fptr = (PFNGLVERTEXATTRIBL2I64NVPROC) dasGetProcAddress("glVertexAttribL2i64NV",__context__,__at__);
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glReadnPixels ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLREADNPIXELSPROC fptr = (PFNGLREADNPIXELSPROC) dasGetProcAddress("glReadnPixels",__context__,__at__);
    (*fptr)(x, y, width, height, format, type, bufSize, data);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveAttrib ( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEATTRIBPROC fptr = (PFNGLGETACTIVEATTRIBPROC) dasGetProcAddress("glGetActiveAttrib",__context__,__at__);
    (*fptr)(program, index, bufSize, length, size, type, name);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramBinary ( GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMBINARYPROC fptr = (PFNGLGETPROGRAMBINARYPROC) dasGetProcAddress("glGetProgramBinary",__context__,__at__);
    (*fptr)(program, bufSize, length, binaryFormat, binary);
    checkOpenGLError(__context__,__at__);
}

void glTexPageCommitmentARB ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPAGECOMMITMENTARBPROC fptr = (PFNGLTEXPAGECOMMITMENTARBPROC) dasGetProcAddress("glTexPageCommitmentARB",__context__,__at__);
    (*fptr)(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3ui64NV ( GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3UI64NVPROC fptr = (PFNGLVERTEXATTRIBL3UI64NVPROC) dasGetProcAddress("glVertexAttribL3ui64NV",__context__,__at__);
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glTexParameteriv ( GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERIVPROC fptr = (PFNGLTEXPARAMETERIVPROC) dasGetProcAddress("glTexParameteriv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArraysIndirectCountARB ( GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) dasGetProcAddress("glMultiDrawArraysIndirectCountARB",__context__,__at__);
    (*fptr)(mode, indirect, drawcount, maxdrawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glGetIntegerv ( GLenum pname, GLint * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGERVPROC fptr = (PFNGLGETINTEGERVPROC) dasGetProcAddress("glGetIntegerv",__context__,__at__);
    (*fptr)(pname, data);
    checkOpenGLError(__context__,__at__);
}

void glReleaseShaderCompiler ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRELEASESHADERCOMPILERPROC fptr = (PFNGLRELEASESHADERCOMPILERPROC) dasGetProcAddress("glReleaseShaderCompiler",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glTransformFeedbackBufferBase ( GLuint xfb, GLuint index, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC fptr = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) dasGetProcAddress("glTransformFeedbackBufferBase",__context__,__at__);
    (*fptr)(xfb, index, buffer);
    checkOpenGLError(__context__,__at__);
}

void glPrimitiveBoundingBoxARB ( GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPRIMITIVEBOUNDINGBOXARBPROC fptr = (PFNGLPRIMITIVEBOUNDINGBOXARBPROC) dasGetProcAddress("glPrimitiveBoundingBoxARB",__context__,__at__);
    (*fptr)(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4DVPROC fptr = (PFNGLPROGRAMUNIFORM4DVPROC) dasGetProcAddress("glProgramUniform4dv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetCompressedMultiTexImageEXT ( GLenum texunit, GLenum target, GLint lod, void * img, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC fptr = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) dasGetProcAddress("glGetCompressedMultiTexImageEXT",__context__,__at__);
    (*fptr)(texunit, target, lod, img);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayBindVertexBufferEXT ( GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC fptr = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC) dasGetProcAddress("glVertexArrayBindVertexBufferEXT",__context__,__at__);
    (*fptr)(vaobj, bindingindex, buffer, offset, stride);
    checkOpenGLError(__context__,__at__);
}

void glGetCoverageModulationTableNV ( GLsizei bufSize, GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOVERAGEMODULATIONTABLENVPROC fptr = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC) dasGetProcAddress("glGetCoverageModulationTableNV",__context__,__at__);
    (*fptr)(bufSize, v);
    checkOpenGLError(__context__,__at__);
}

void glPointParameteri ( GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTPARAMETERIPROC fptr = (PFNGLPOINTPARAMETERIPROC) dasGetProcAddress("glPointParameteri",__context__,__at__);
    (*fptr)(pname, param);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageCallback ( GLDEBUGPROC callback, const void * userParam, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGECALLBACKPROC fptr = (PFNGLDEBUGMESSAGECALLBACKPROC) dasGetProcAddress("glDebugMessageCallback",__context__,__at__);
    (*fptr)(callback, userParam);
    checkOpenGLError(__context__,__at__);
}

void glMatrixTranslatefEXT ( GLenum mode, GLfloat x, GLfloat y, GLfloat z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXTRANSLATEFEXTPROC fptr = (PFNGLMATRIXTRANSLATEFEXTPROC) dasGetProcAddress("glMatrixTranslatefEXT",__context__,__at__);
    (*fptr)(mode, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexParameterivEXT ( GLenum texunit, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXPARAMETERIVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERIVEXTPROC) dasGetProcAddress("glGetMultiTexParameterivEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexSubImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) dasGetProcAddress("glCompressedMultiTexSubImage3DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glTextureBuffer ( GLuint texture, GLenum internalformat, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBUFFERPROC fptr = (PFNGLTEXTUREBUFFERPROC) dasGetProcAddress("glTextureBuffer",__context__,__at__);
    (*fptr)(texture, internalformat, buffer);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayTexCoordOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC) dasGetProcAddress("glVertexArrayTexCoordOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x4fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) dasGetProcAddress("glProgramUniformMatrix2x4fv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4iv ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4IVPROC fptr = (PFNGLPROGRAMUNIFORM4IVPROC) dasGetProcAddress("glProgramUniform4iv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4UIVEXTPROC) dasGetProcAddress("glProgramUniform4uivEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glReadPixels ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLREADPIXELSPROC fptr = (PFNGLREADPIXELSPROC) dasGetProcAddress("glReadPixels",__context__,__at__);
    (*fptr)(x, y, width, height, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glStencilFuncSeparate ( GLenum face, GLenum func, GLint ref, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILFUNCSEPARATEPROC fptr = (PFNGLSTENCILFUNCSEPARATEPROC) dasGetProcAddress("glStencilFuncSeparate",__context__,__at__);
    (*fptr)(face, func, ref, mask);
    checkOpenGLError(__context__,__at__);
}

void glScissorIndexedv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSORINDEXEDVPROC fptr = (PFNGLSCISSORINDEXEDVPROC) dasGetProcAddress("glScissorIndexedv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformui64vNV ( GLuint program, GLint location, GLuint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMUI64VNVPROC fptr = (PFNGLGETUNIFORMUI64VNVPROC) dasGetProcAddress("glGetUniformui64vNV",__context__,__at__);
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1ui64vARB ( GLuint index, const GLuint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1UI64VARBPROC fptr = (PFNGLVERTEXATTRIBL1UI64VARBPROC) dasGetProcAddress("glVertexAttribL1ui64vARB",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glPointParameterf ( GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTPARAMETERFPROC fptr = (PFNGLPOINTPARAMETERFPROC) dasGetProcAddress("glPointParameterf",__context__,__at__);
    (*fptr)(pname, param);
    checkOpenGLError(__context__,__at__);
}

void glDrawArraysInstancedBaseInstance ( GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC fptr = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) dasGetProcAddress("glDrawArraysInstancedBaseInstance",__context__,__at__);
    (*fptr)(mode, first, count, instancecount, baseinstance);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage1D ( GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE1DPROC fptr = (PFNGLTEXTURESUBIMAGE1DPROC) dasGetProcAddress("glTextureSubImage1D",__context__,__at__);
    (*fptr)(texture, level, xoffset, width, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTextureLayerARB ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTURELAYERARBPROC fptr = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) dasGetProcAddress("glFramebufferTextureLayerARB",__context__,__at__);
    (*fptr)(target, attachment, texture, level, layer);
    checkOpenGLError(__context__,__at__);
}

void glTexturePageCommitmentEXT ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPAGECOMMITMENTEXTPROC fptr = (PFNGLTEXTUREPAGECOMMITMENTEXTPROC) dasGetProcAddress("glTexturePageCommitmentEXT",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, commit);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameterI4ivEXT ( GLuint program, GLenum target, GLuint index, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) dasGetProcAddress("glNamedProgramLocalParameterI4ivEXT",__context__,__at__);
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glWindowRectanglesEXT ( GLenum mode, GLsizei count, const GLint * box, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLWINDOWRECTANGLESEXTPROC fptr = (PFNGLWINDOWRECTANGLESEXTPROC) dasGetProcAddress("glWindowRectanglesEXT",__context__,__at__);
    (*fptr)(mode, count, box);
    checkOpenGLError(__context__,__at__);
}

void glMatrixMult3x3fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULT3X3FNVPROC fptr = (PFNGLMATRIXMULT3X3FNVPROC) dasGetProcAddress("glMatrixMult3x3fNV",__context__,__at__);
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformi64vNV ( GLuint program, GLint location, GLint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMI64VNVPROC fptr = (PFNGLGETUNIFORMI64VNVPROC) dasGetProcAddress("glGetUniformi64vNV",__context__,__at__);
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glEnableVertexArrayEXT ( GLuint vaobj, GLenum array, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEVERTEXARRAYEXTPROC fptr = (PFNGLENABLEVERTEXARRAYEXTPROC) dasGetProcAddress("glEnableVertexArrayEXT",__context__,__at__);
    (*fptr)(vaobj, array);
    checkOpenGLError(__context__,__at__);
}

void glAttachShader ( GLuint program, GLuint shader, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLATTACHSHADERPROC fptr = (PFNGLATTACHSHADERPROC) dasGetProcAddress("glAttachShader",__context__,__at__);
    (*fptr)(program, shader);
    checkOpenGLError(__context__,__at__);
}

void glGetTexParameterfv ( GLenum target, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXPARAMETERFVPROC fptr = (PFNGLGETTEXPARAMETERFVPROC) dasGetProcAddress("glGetTexParameterfv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexGenfvEXT ( GLenum texunit, GLenum coord, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXGENFVEXTPROC fptr = (PFNGLGETMULTITEXGENFVEXTPROC) dasGetProcAddress("glGetMultiTexGenfvEXT",__context__,__at__);
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURESUBIMAGEPROC fptr = (PFNGLGETTEXTURESUBIMAGEPROC) dasGetProcAddress("glGetTextureSubImage",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

void glWaitVkSemaphoreNV ( GLuint64 vkSemaphore, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLWAITVKSEMAPHORENVPROC fptr = (PFNGLWAITVKSEMAPHORENVPROC) dasGetProcAddress("glWaitVkSemaphoreNV",__context__,__at__);
    (*fptr)(vkSemaphore);
    checkOpenGLError(__context__,__at__);
}

void glDeleteRenderbuffers ( GLsizei n, const GLuint * renderbuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETERENDERBUFFERSPROC fptr = (PFNGLDELETERENDERBUFFERSPROC) dasGetProcAddress("glDeleteRenderbuffers",__context__,__at__);
    (*fptr)(n, renderbuffers);
    checkOpenGLError(__context__,__at__);
}

void glViewportPositionWScaleNV ( GLuint index, GLfloat xcoeff, GLfloat ycoeff, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTPOSITIONWSCALENVPROC fptr = (PFNGLVIEWPORTPOSITIONWSCALENVPROC) dasGetProcAddress("glViewportPositionWScaleNV",__context__,__at__);
    (*fptr)(index, xcoeff, ycoeff);
    checkOpenGLError(__context__,__at__);
}

void glCoverStrokePathNV ( GLuint path, GLenum coverMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERSTROKEPATHNVPROC fptr = (PFNGLCOVERSTROKEPATHNVPROC) dasGetProcAddress("glCoverStrokePathNV",__context__,__at__);
    (*fptr)(path, coverMode);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoadIdentityEXT ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADIDENTITYEXTPROC fptr = (PFNGLMATRIXLOADIDENTITYEXTPROC) dasGetProcAddress("glMatrixLoadIdentityEXT",__context__,__at__);
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glUniform4i64vARB ( GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4I64VARBPROC fptr = (PFNGLUNIFORM4I64VARBPROC) dasGetProcAddress("glUniform4i64vARB",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGenVertexArrays ( GLsizei n, GLuint * arrays, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENVERTEXARRAYSPROC fptr = (PFNGLGENVERTEXARRAYSPROC) dasGetProcAddress("glGenVertexArrays",__context__,__at__);
    (*fptr)(n, arrays);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedFramebufferuiv ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) dasGetProcAddress("glClearNamedFramebufferuiv",__context__,__at__);
    (*fptr)(framebuffer, buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsEnabledi ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISENABLEDIPROC fptr = (PFNGLISENABLEDIPROC) dasGetProcAddress("glIsEnabledi",__context__,__at__);
    auto result = (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glVertexAttribL4dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4DVPROC fptr = (PFNGLVERTEXATTRIBL4DVPROC) dasGetProcAddress("glVertexAttribL4dv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1i64ARB ( GLuint program, GLint location, GLint64 x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM1I64ARBPROC) dasGetProcAddress("glProgramUniform1i64ARB",__context__,__at__);
    (*fptr)(program, location, x);
    checkOpenGLError(__context__,__at__);
}

void glClearDepthdNV ( GLdouble depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARDEPTHDNVPROC fptr = (PFNGLCLEARDEPTHDNVPROC) dasGetProcAddress("glClearDepthdNV",__context__,__at__);
    (*fptr)(depth);
    checkOpenGLError(__context__,__at__);
}

void glDeleteProgram ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEPROGRAMPROC fptr = (PFNGLDELETEPROGRAMPROC) dasGetProcAddress("glDeleteProgram",__context__,__at__);
    (*fptr)(program);
    checkOpenGLError(__context__,__at__);
}

void glClearDepth ( GLdouble depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARDEPTHPROC fptr = (PFNGLCLEARDEPTHPROC) dasGetProcAddress("glClearDepth",__context__,__at__);
    (*fptr)(depth);
    checkOpenGLError(__context__,__at__);
}

void glGetFramebufferAttachmentParameteriv ( GLenum target, GLenum attachment, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC fptr = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) dasGetProcAddress("glGetFramebufferAttachmentParameteriv",__context__,__at__);
    (*fptr)(target, attachment, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMaxShaderCompilerThreadsKHR ( GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAXSHADERCOMPILERTHREADSKHRPROC fptr = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) dasGetProcAddress("glMaxShaderCompilerThreadsKHR",__context__,__at__);
    (*fptr)(count);
    checkOpenGLError(__context__,__at__);
}

void glGenQueries ( GLsizei n, GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENQUERIESPROC fptr = (PFNGLGENQUERIESPROC) dasGetProcAddress("glGenQueries",__context__,__at__);
    (*fptr)(n, ids);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribdv ( GLuint index, GLenum pname, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBDVPROC fptr = (PFNGLGETVERTEXATTRIBDVPROC) dasGetProcAddress("glGetVertexAttribdv",__context__,__at__);
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribfv ( GLuint index, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBFVPROC fptr = (PFNGLGETVERTEXATTRIBFVPROC) dasGetProcAddress("glGetVertexAttribfv",__context__,__at__);
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glDeleteFramebuffers ( GLsizei n, const GLuint * framebuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEFRAMEBUFFERSPROC fptr = (PFNGLDELETEFRAMEBUFFERSPROC) dasGetProcAddress("glDeleteFramebuffers",__context__,__at__);
    (*fptr)(n, framebuffers);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UIPROC fptr = (PFNGLPROGRAMUNIFORM4UIPROC) dasGetProcAddress("glProgramUniform4ui",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexParameterIivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERIIVEXTPROC fptr = (PFNGLMULTITEXPARAMETERIIVEXTPROC) dasGetProcAddress("glMultiTexParameterIivEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureRenderbufferEXT ( GLuint texture, GLenum target, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURERENDERBUFFEREXTPROC fptr = (PFNGLTEXTURERENDERBUFFEREXTPROC) dasGetProcAddress("glTextureRenderbufferEXT",__context__,__at__);
    (*fptr)(texture, target, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glLineWidth ( GLfloat width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLLINEWIDTHPROC fptr = (PFNGLLINEWIDTHPROC) dasGetProcAddress("glLineWidth",__context__,__at__);
    (*fptr)(width);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribiv ( GLuint index, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBIVPROC fptr = (PFNGLGETVERTEXATTRIBIVPROC) dasGetProcAddress("glGetVertexAttribiv",__context__,__at__);
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetInteger64v ( GLenum pname, GLint64 * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGER64VPROC fptr = (PFNGLGETINTEGER64VPROC) dasGetProcAddress("glGetInteger64v",__context__,__at__);
    (*fptr)(pname, data);
    checkOpenGLError(__context__,__at__);
}

void glGetIntegerIndexedvEXT ( GLenum target, GLuint index, GLint * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGERINDEXEDVEXTPROC fptr = (PFNGLGETINTEGERINDEXEDVEXTPROC) dasGetProcAddress("glGetIntegerIndexedvEXT",__context__,__at__);
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glTexParameterfv ( GLenum target, GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERFVPROC fptr = (PFNGLTEXPARAMETERFVPROC) dasGetProcAddress("glTexParameterfv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTexImage1D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXIMAGE1DPROC fptr = (PFNGLTEXIMAGE1DPROC) dasGetProcAddress("glTexImage1D",__context__,__at__);
    (*fptr)(target, level, internalformat, width, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferDrawBufferEXT ( GLuint framebuffer, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC fptr = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) dasGetProcAddress("glFramebufferDrawBufferEXT",__context__,__at__);
    (*fptr)(framebuffer, mode);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayAttribLFormat ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYATTRIBLFORMATPROC fptr = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) dasGetProcAddress("glVertexArrayAttribLFormat",__context__,__at__);
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glGetShaderSource ( GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADERSOURCEPROC fptr = (PFNGLGETSHADERSOURCEPROC) dasGetProcAddress("glGetShaderSource",__context__,__at__);
    (*fptr)(shader, bufSize, length, source);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4i64ARB ( GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM4I64ARBPROC) dasGetProcAddress("glProgramUniform4i64ARB",__context__,__at__);
    (*fptr)(program, location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

GLint glGetProgramResourceLocationIndex ( GLuint program, GLenum programInterface, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC fptr = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) dasGetProcAddress("glGetProgramResourceLocationIndex",__context__,__at__);
    auto result = (*fptr)(program, programInterface, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniformMatrix2x3dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) dasGetProcAddress("glProgramUniformMatrix2x3dv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2i64ARB ( GLuint program, GLint location, GLint64 x, GLint64 y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM2I64ARBPROC) dasGetProcAddress("glProgramUniform2i64ARB",__context__,__at__);
    (*fptr)(program, location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glLogicOp ( GLenum opcode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLLOGICOPPROC fptr = (PFNGLLOGICOPPROC) dasGetProcAddress("glLogicOp",__context__,__at__);
    (*fptr)(opcode);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI1iv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI1IVPROC fptr = (PFNGLVERTEXATTRIBI1IVPROC) dasGetProcAddress("glVertexAttribI1iv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferDrawBuffer ( GLuint framebuffer, GLenum buf, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC fptr = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) dasGetProcAddress("glNamedFramebufferDrawBuffer",__context__,__at__);
    (*fptr)(framebuffer, buf);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferSampleLocationsfvARB ( GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC fptr = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) dasGetProcAddress("glNamedFramebufferSampleLocationsfvARB",__context__,__at__);
    (*fptr)(framebuffer, start, count, v);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramiv ( GLuint program, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMIVPROC fptr = (PFNGLGETPROGRAMIVPROC) dasGetProcAddress("glGetProgramiv",__context__,__at__);
    (*fptr)(program, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetCompressedTexImage ( GLenum target, GLint level, void * img, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMPRESSEDTEXIMAGEPROC fptr = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) dasGetProcAddress("glGetCompressedTexImage",__context__,__at__);
    (*fptr)(target, level, img);
    checkOpenGLError(__context__,__at__);
}

void glGetDoublev ( GLenum pname, GLdouble * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDOUBLEVPROC fptr = (PFNGLGETDOUBLEVPROC) dasGetProcAddress("glGetDoublev",__context__,__at__);
    (*fptr)(pname, data);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2ui64NV ( GLuint index, GLuint64EXT x, GLuint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2UI64NVPROC fptr = (PFNGLVERTEXATTRIBL2UI64NVPROC) dasGetProcAddress("glVertexAttribL2ui64NV",__context__,__at__);
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glTexParameterIuiv ( GLenum target, GLenum pname, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERIUIVPROC fptr = (PFNGLTEXPARAMETERIUIVPROC) dasGetProcAddress("glTexParameterIuiv",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage2D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE2DPROC fptr = (PFNGLTEXTURESUBIMAGE2DPROC) dasGetProcAddress("glTextureSubImage2D",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, width, height, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glUniform1uiv ( GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UIVPROC fptr = (PFNGLUNIFORM1UIVPROC) dasGetProcAddress("glUniform1uiv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayAttribIFormat ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYATTRIBIFORMATPROC fptr = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) dasGetProcAddress("glVertexArrayAttribIFormat",__context__,__at__);
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

GLenum glGetGraphicsResetStatus ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETGRAPHICSRESETSTATUSPROC fptr = (PFNGLGETGRAPHICSRESETSTATUSPROC) dasGetProcAddress("glGetGraphicsResetStatus",__context__,__at__);
    auto result = (*fptr)();
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMultiTexGendvEXT ( GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENDVEXTPROC fptr = (PFNGLMULTITEXGENDVEXTPROC) dasGetProcAddress("glMultiTexGendvEXT",__context__,__at__);
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsVertexArray ( GLuint array, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISVERTEXARRAYPROC fptr = (PFNGLISVERTEXARRAYPROC) dasGetProcAddress("glIsVertexArray",__context__,__at__);
    auto result = (*fptr)(array);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform3fEXT ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3FEXTPROC fptr = (PFNGLPROGRAMUNIFORM3FEXTPROC) dasGetProcAddress("glProgramUniform3fEXT",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glUniform2ui ( GLint location, GLuint v0, GLuint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UIPROC fptr = (PFNGLUNIFORM2UIPROC) dasGetProcAddress("glUniform2ui",__context__,__at__);
    (*fptr)(location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glGetShadingRateSampleLocationivNV ( GLenum rate, GLuint samples, GLuint index, GLint * location, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC fptr = (PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) dasGetProcAddress("glGetShadingRateSampleLocationivNV",__context__,__at__);
    (*fptr)(rate, samples, index, location);
    checkOpenGLError(__context__,__at__);
}

void glBlitFramebuffer ( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLITFRAMEBUFFERPROC fptr = (PFNGLBLITFRAMEBUFFERPROC) dasGetProcAddress("glBlitFramebuffer",__context__,__at__);
    (*fptr)(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    checkOpenGLError(__context__,__at__);
}

void glUniform2dv ( GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2DVPROC fptr = (PFNGLUNIFORM2DVPROC) dasGetProcAddress("glUniform2dv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glDisableVertexArrayEXT ( GLuint vaobj, GLenum array, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEVERTEXARRAYEXTPROC fptr = (PFNGLDISABLEVERTEXARRAYEXTPROC) dasGetProcAddress("glDisableVertexArrayEXT",__context__,__at__);
    (*fptr)(vaobj, array);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsCommandListNV ( GLuint list, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISCOMMANDLISTNVPROC fptr = (PFNGLISCOMMANDLISTNVPROC) dasGetProcAddress("glIsCommandListNV",__context__,__at__);
    auto result = (*fptr)(list);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetBufferParameterui64vNV ( GLenum target, GLenum pname, GLuint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBUFFERPARAMETERUI64VNVPROC fptr = (PFNGLGETBUFFERPARAMETERUI64VNVPROC) dasGetProcAddress("glGetBufferParameterui64vNV",__context__,__at__);
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterfvEXT ( GLuint texture, GLenum target, GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERFVEXTPROC fptr = (PFNGLTEXTUREPARAMETERFVEXTPROC) dasGetProcAddress("glTextureParameterfvEXT",__context__,__at__);
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformdvARB ( GLuint program, GLint location, GLsizei bufSize, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMDVARBPROC fptr = (PFNGLGETNUNIFORMDVARBPROC) dasGetProcAddress("glGetnUniformdvARB",__context__,__at__);
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glUniformHandleui64ARB ( GLint location, GLuint64 value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMHANDLEUI64ARBPROC fptr = (PFNGLUNIFORMHANDLEUI64ARBPROC) dasGetProcAddress("glUniformHandleui64ARB",__context__,__at__);
    (*fptr)(location, value);
    checkOpenGLError(__context__,__at__);
}

void glCullFace ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCULLFACEPROC fptr = (PFNGLCULLFACEPROC) dasGetProcAddress("glCullFace",__context__,__at__);
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glUniform2iv ( GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2IVPROC fptr = (PFNGLUNIFORM2IVPROC) dasGetProcAddress("glUniform2iv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glPathCoordsNV ( GLuint path, GLsizei numCoords, GLenum coordType, const void * coords, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHCOORDSNVPROC fptr = (PFNGLPATHCOORDSNVPROC) dasGetProcAddress("glPathCoordsNV",__context__,__at__);
    (*fptr)(path, numCoords, coordType, coords);
    checkOpenGLError(__context__,__at__);
}

void glStencilFillPathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILFILLPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC) dasGetProcAddress("glStencilFillPathInstancedNV",__context__,__at__);
    (*fptr)(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glGetPathParameterfvNV ( GLuint path, GLenum pname, GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHPARAMETERFVNVPROC fptr = (PFNGLGETPATHPARAMETERFVNVPROC) dasGetProcAddress("glGetPathParameterfvNV",__context__,__at__);
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glConservativeRasterParameterfNV ( GLenum pname, GLfloat value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCONSERVATIVERASTERPARAMETERFNVPROC fptr = (PFNGLCONSERVATIVERASTERPARAMETERFNVPROC) dasGetProcAddress("glConservativeRasterParameterfNV",__context__,__at__);
    (*fptr)(pname, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) dasGetProcAddress("glProgramUniformMatrix2fvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBindMultiTextureEXT ( GLenum texunit, GLenum target, GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDMULTITEXTUREEXTPROC fptr = (PFNGLBINDMULTITEXTUREEXTPROC) dasGetProcAddress("glBindMultiTextureEXT",__context__,__at__);
    (*fptr)(texunit, target, texture);
    checkOpenGLError(__context__,__at__);
}

void glTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSUBIMAGE3DPROC fptr = (PFNGLTEXSUBIMAGE3DPROC) dasGetProcAddress("glTexSubImage3D",__context__,__at__);
    (*fptr)(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryObjectuiv ( GLuint id, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYOBJECTUIVPROC fptr = (PFNGLGETQUERYOBJECTUIVPROC) dasGetProcAddress("glGetQueryObjectuiv",__context__,__at__);
    (*fptr)(id, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexBufferEXT ( GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXBUFFEREXTPROC fptr = (PFNGLMULTITEXBUFFEREXTPROC) dasGetProcAddress("glMultiTexBufferEXT",__context__,__at__);
    (*fptr)(texunit, target, internalformat, buffer);
    checkOpenGLError(__context__,__at__);
}

void glCreateCommandListsNV ( GLsizei n, GLuint * lists, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATECOMMANDLISTSNVPROC fptr = (PFNGLCREATECOMMANDLISTSNVPROC) dasGetProcAddress("glCreateCommandListsNV",__context__,__at__);
    (*fptr)(n, lists);
    checkOpenGLError(__context__,__at__);
}

void glPatchParameterfv ( GLenum pname, const GLfloat * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATCHPARAMETERFVPROC fptr = (PFNGLPATCHPARAMETERFVPROC) dasGetProcAddress("glPatchParameterfv",__context__,__at__);
    (*fptr)(pname, values);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2DVPROC fptr = (PFNGLUNIFORMMATRIX2DVPROC) dasGetProcAddress("glUniformMatrix2dv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetIntegerui64i_vNV ( GLenum value, GLuint index, GLuint64EXT * result, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGERUI64I_VNVPROC fptr = (PFNGLGETINTEGERUI64I_VNVPROC) dasGetProcAddress("glGetIntegerui64i_vNV",__context__,__at__);
    (*fptr)(value, index, result);
    checkOpenGLError(__context__,__at__);
}

void glMatrixScalefEXT ( GLenum mode, GLfloat x, GLfloat y, GLfloat z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXSCALEFEXTPROC fptr = (PFNGLMATRIXSCALEFEXTPROC) dasGetProcAddress("glMatrixScalefEXT",__context__,__at__);
    (*fptr)(mode, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1DVPROC fptr = (PFNGLVERTEXATTRIBL1DVPROC) dasGetProcAddress("glVertexAttribL1dv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glValidateProgramPipeline ( GLuint pipeline, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVALIDATEPROGRAMPIPELINEPROC fptr = (PFNGLVALIDATEPROGRAMPIPELINEPROC) dasGetProcAddress("glValidateProgramPipeline",__context__,__at__);
    (*fptr)(pipeline);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterIuiv ( GLuint texture, GLenum pname, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIUIVPROC fptr = (PFNGLTEXTUREPARAMETERIUIVPROC) dasGetProcAddress("glTextureParameterIuiv",__context__,__at__);
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMUI64VNVPROC fptr = (PFNGLPROGRAMUNIFORMUI64VNVPROC) dasGetProcAddress("glProgramUniformui64vNV",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsProgramPipeline ( GLuint pipeline, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISPROGRAMPIPELINEPROC fptr = (PFNGLISPROGRAMPIPELINEPROC) dasGetProcAddress("glIsProgramPipeline",__context__,__at__);
    auto result = (*fptr)(pipeline);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glResetMemoryObjectParameterNV ( GLuint memory, GLenum pname, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRESETMEMORYOBJECTPARAMETERNVPROC fptr = (PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) dasGetProcAddress("glResetMemoryObjectParameterNV",__context__,__at__);
    (*fptr)(memory, pname);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage3D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) dasGetProcAddress("glCompressedTextureSubImage3D",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribOffsetEXT ( GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, bool normalized, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC) dasGetProcAddress("glVertexArrayVertexAttribOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, index, size, type, normalized, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferPageCommitmentMemNV ( GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC fptr = (PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) dasGetProcAddress("glNamedBufferPageCommitmentMemNV",__context__,__at__);
    (*fptr)(buffer, offset, size, memory, memOffset, commit);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2x4dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2X4DVPROC fptr = (PFNGLUNIFORMMATRIX2X4DVPROC) dasGetProcAddress("glUniformMatrix2x4dv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UIVPROC fptr = (PFNGLPROGRAMUNIFORM4UIVPROC) dasGetProcAddress("glProgramUniform4uiv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsIndirect ( GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) dasGetProcAddress("glMultiDrawElementsIndirect",__context__,__at__);
    (*fptr)(mode, type, indirect, drawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glDepthMask ( bool flag, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHMASKPROC fptr = (PFNGLDEPTHMASKPROC) dasGetProcAddress("glDepthMask",__context__,__at__);
    (*fptr)(flag);
    checkOpenGLError(__context__,__at__);
}

void glScissorIndexed ( GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSORINDEXEDPROC fptr = (PFNGLSCISSORINDEXEDPROC) dasGetProcAddress("glScissorIndexed",__context__,__at__);
    (*fptr)(index, left, bottom, width, height);
    checkOpenGLError(__context__,__at__);
}

void glDispatchComputeGroupSizeARB ( GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC fptr = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) dasGetProcAddress("glDispatchComputeGroupSizeARB",__context__,__at__);
    (*fptr)(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayElementBuffer ( GLuint vaobj, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYELEMENTBUFFERPROC fptr = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) dasGetProcAddress("glVertexArrayElementBuffer",__context__,__at__);
    (*fptr)(vaobj, buffer);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3DVEXTPROC) dasGetProcAddress("glProgramUniform3dvEXT",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetMemoryObjectDetachedResourcesuivNV ( GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC fptr = (PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) dasGetProcAddress("glGetMemoryObjectDetachedResourcesuivNV",__context__,__at__);
    (*fptr)(memory, pname, first, count, params);
    checkOpenGLError(__context__,__at__);
}

void glResumeTransformFeedback ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRESUMETRANSFORMFEEDBACKPROC fptr = (PFNGLRESUMETRANSFORMFEEDBACKPROC) dasGetProcAddress("glResumeTransformFeedback",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glEndQueryIndexed ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDQUERYINDEXEDPROC fptr = (PFNGLENDQUERYINDEXEDPROC) dasGetProcAddress("glEndQueryIndexed",__context__,__at__);
    (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4iEXT ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4IEXTPROC fptr = (PFNGLPROGRAMUNIFORM4IEXTPROC) dasGetProcAddress("glProgramUniform4iEXT",__context__,__at__);
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glMakeBufferResidentNV ( GLenum target, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEBUFFERRESIDENTNVPROC fptr = (PFNGLMAKEBUFFERRESIDENTNVPROC) dasGetProcAddress("glMakeBufferResidentNV",__context__,__at__);
    (*fptr)(target, access);
    checkOpenGLError(__context__,__at__);
}

void glRasterSamplesEXT ( GLuint samples, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRASTERSAMPLESEXTPROC fptr = (PFNGLRASTERSAMPLESEXTPROC) dasGetProcAddress("glRasterSamplesEXT",__context__,__at__);
    (*fptr)(samples, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x3fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) dasGetProcAddress("glProgramUniformMatrix2x3fv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedFramebufferAttachmentParameterivEXT ( GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) dasGetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT",__context__,__at__);
    (*fptr)(framebuffer, attachment, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLuint glCreateShader ( GLenum type, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESHADERPROC fptr = (PFNGLCREATESHADERPROC) dasGetProcAddress("glCreateShader",__context__,__at__);
    auto result = (*fptr)(type);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform1ui64ARB ( GLuint program, GLint location, GLuint64 x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM1UI64ARBPROC) dasGetProcAddress("glProgramUniform1ui64ARB",__context__,__at__);
    (*fptr)(program, location, x);
    checkOpenGLError(__context__,__at__);
}

void glBindBuffersBase ( GLenum target, GLuint first, GLsizei count, const GLuint * buffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDBUFFERSBASEPROC fptr = (PFNGLBINDBUFFERSBASEPROC) dasGetProcAddress("glBindBuffersBase",__context__,__at__);
    (*fptr)(target, first, count, buffers);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferPointervEXT ( GLuint buffer, GLenum pname, void ** params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPOINTERVEXTPROC fptr = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) dasGetProcAddress("glGetNamedBufferPointervEXT",__context__,__at__);
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glActiveProgramEXT ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLACTIVEPROGRAMEXTPROC fptr = (PFNGLACTIVEPROGRAMEXTPROC) dasGetProcAddress("glActiveProgramEXT",__context__,__at__);
    (*fptr)(program);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI1ui ( GLuint index, GLuint x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI1UIPROC fptr = (PFNGLVERTEXATTRIBI1UIPROC) dasGetProcAddress("glVertexAttribI1ui",__context__,__at__);
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glMatrixRotatedEXT ( GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXROTATEDEXTPROC fptr = (PFNGLMATRIXROTATEDEXTPROC) dasGetProcAddress("glMatrixRotatedEXT",__context__,__at__);
    (*fptr)(mode, angle, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void * glMapNamedBuffer ( GLuint buffer, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPNAMEDBUFFERPROC fptr = (PFNGLMAPNAMEDBUFFERPROC) dasGetProcAddress("glMapNamedBuffer",__context__,__at__);
    auto result = (*fptr)(buffer, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetNamedRenderbufferParameterivEXT ( GLuint renderbuffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) dasGetProcAddress("glGetNamedRenderbufferParameterivEXT",__context__,__at__);
    (*fptr)(renderbuffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glFogCoordFormatNV ( GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFOGCOORDFORMATNVPROC fptr = (PFNGLFOGCOORDFORMATNVPROC) dasGetProcAddress("glFogCoordFormatNV",__context__,__at__);
    (*fptr)(type, stride);
    checkOpenGLError(__context__,__at__);
}

void glBindSampler ( GLuint unit, GLuint sampler, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDSAMPLERPROC fptr = (PFNGLBINDSAMPLERPROC) dasGetProcAddress("glBindSampler",__context__,__at__);
    (*fptr)(unit, sampler);
    checkOpenGLError(__context__,__at__);
}

void glTextureImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREIMAGE3DEXTPROC fptr = (PFNGLTEXTUREIMAGE3DEXTPROC) dasGetProcAddress("glTextureImage3DEXT",__context__,__at__);
    (*fptr)(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangedNV ( GLdouble zNear, GLdouble zFar, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEDNVPROC fptr = (PFNGLDEPTHRANGEDNVPROC) dasGetProcAddress("glDepthRangedNV",__context__,__at__);
    (*fptr)(zNear, zFar);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x2fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) dasGetProcAddress("glProgramUniformMatrix4x2fvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBUFFERSUBDATAPROC fptr = (PFNGLGETBUFFERSUBDATAPROC) dasGetProcAddress("glGetBufferSubData",__context__,__at__);
    (*fptr)(target, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UIVPROC fptr = (PFNGLPROGRAMUNIFORM2UIVPROC) dasGetProcAddress("glProgramUniform2uiv",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glCopyPathNV ( GLuint resultPath, GLuint srcPath, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYPATHNVPROC fptr = (PFNGLCOPYPATHNVPROC) dasGetProcAddress("glCopyPathNV",__context__,__at__);
    (*fptr)(resultPath, srcPath);
    checkOpenGLError(__context__,__at__);
}

void glUniform2fv ( GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2FVPROC fptr = (PFNGLUNIFORM2FVPROC) dasGetProcAddress("glUniform2fv",__context__,__at__);
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glMatrixScaledEXT ( GLenum mode, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXSCALEDEXTPROC fptr = (PFNGLMATRIXSCALEDEXTPROC) dasGetProcAddress("glMatrixScaledEXT",__context__,__at__);
    (*fptr)(mode, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glListDrawCommandsStatesClientNV ( GLuint list, GLuint segment, const void ** indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC fptr = (PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC) dasGetProcAddress("glListDrawCommandsStatesClientNV",__context__,__at__);
    (*fptr)(list, segment, indirects, sizes, states, fbos, count);
    checkOpenGLError(__context__,__at__);
}

void glCopyMultiTexImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYMULTITEXIMAGE2DEXTPROC fptr = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC) dasGetProcAddress("glCopyMultiTexImage2DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, internalformat, x, y, width, height, border);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsIndirectBindlessNV ( GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC) dasGetProcAddress("glMultiDrawElementsIndirectBindlessNV",__context__,__at__);
    (*fptr)(mode, type, indirect, drawCount, stride, vertexBufferCount);
    checkOpenGLError(__context__,__at__);
}

void glGetCompressedTextureImage ( GLuint texture, GLint level, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC fptr = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) dasGetProcAddress("glGetCompressedTextureImage",__context__,__at__);
    (*fptr)(texture, level, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM4I64VNVPROC) dasGetProcAddress("glProgramUniform4i64vNV",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glTransformPathNV ( GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTRANSFORMPATHNVPROC fptr = (PFNGLTRANSFORMPATHNVPROC) dasGetProcAddress("glTransformPathNV",__context__,__at__);
    (*fptr)(resultPath, srcPath, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glStencilFillPathNV ( GLuint path, GLenum fillMode, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILFILLPATHNVPROC fptr = (PFNGLSTENCILFILLPATHNVPROC) dasGetProcAddress("glStencilFillPathNV",__context__,__at__);
    (*fptr)(path, fillMode, mask);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x2fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) dasGetProcAddress("glProgramUniformMatrix3x2fvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramResourceiv ( GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCEIVPROC fptr = (PFNGLGETPROGRAMRESOURCEIVPROC) dasGetProcAddress("glGetProgramResourceiv",__context__,__at__);
    (*fptr)(program, programInterface, index, propCount, props, count, length, params);
    checkOpenGLError(__context__,__at__);
}

void glMakeBufferNonResidentNV ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEBUFFERNONRESIDENTNVPROC fptr = (PFNGLMAKEBUFFERNONRESIDENTNVPROC) dasGetProcAddress("glMakeBufferNonResidentNV",__context__,__at__);
    (*fptr)(target);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1ui64vNV ( GLuint index, const GLuint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL1UI64VNVPROC) dasGetProcAddress("glVertexAttribL1ui64vNV",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glLabelObjectEXT ( GLenum type, GLuint object, GLsizei length, const GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLLABELOBJECTEXTPROC fptr = (PFNGLLABELOBJECTEXTPROC) dasGetProcAddress("glLabelObjectEXT",__context__,__at__);
    (*fptr)(type, object, length, label);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsNamedStringARB ( GLint namelen, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISNAMEDSTRINGARBPROC fptr = (PFNGLISNAMEDSTRINGARBPROC) dasGetProcAddress("glIsNamedStringARB",__context__,__at__);
    auto result = (*fptr)(namelen, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetTextureLevelParameterivEXT ( GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) dasGetProcAddress("glGetTextureLevelParameterivEXT",__context__,__at__);
    (*fptr)(texture, target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2FVPROC fptr = (PFNGLUNIFORMMATRIX2FVPROC) dasGetProcAddress("glUniformMatrix2fv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetSamplerParameterfv ( GLuint sampler, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSAMPLERPARAMETERFVPROC fptr = (PFNGLGETSAMPLERPARAMETERFVPROC) dasGetProcAddress("glGetSamplerParameterfv",__context__,__at__);
    (*fptr)(sampler, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsImageHandleResidentARB ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISIMAGEHANDLERESIDENTARBPROC fptr = (PFNGLISIMAGEHANDLERESIDENTARBPROC) dasGetProcAddress("glIsImageHandleResidentARB",__context__,__at__);
    auto result = (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glCompileShaderIncludeARB ( GLuint shader, GLsizei count, const GLchar *const * path, const GLint * length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPILESHADERINCLUDEARBPROC fptr = (PFNGLCOMPILESHADERINCLUDEARBPROC) dasGetProcAddress("glCompileShaderIncludeARB",__context__,__at__);
    (*fptr)(shader, count, path, length);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoadfEXT ( GLenum mode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADFEXTPROC fptr = (PFNGLMATRIXLOADFEXTPROC) dasGetProcAddress("glMatrixLoadfEXT",__context__,__at__);
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glGetCompressedTextureImageEXT ( GLuint texture, GLenum target, GLint lod, void * img, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC fptr = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) dasGetProcAddress("glGetCompressedTextureImageEXT",__context__,__at__);
    (*fptr)(texture, target, lod, img);
    checkOpenGLError(__context__,__at__);
}

void glSignalVkSemaphoreNV ( GLuint64 vkSemaphore, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSIGNALVKSEMAPHORENVPROC fptr = (PFNGLSIGNALVKSEMAPHORENVPROC) dasGetProcAddress("glSignalVkSemaphoreNV",__context__,__at__);
    (*fptr)(vkSemaphore);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayNormalOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYNORMALOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYNORMALOFFSETEXTPROC) dasGetProcAddress("glVertexArrayNormalOffsetEXT",__context__,__at__);
    (*fptr)(vaobj, buffer, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glCreateBuffers ( GLsizei n, GLuint * buffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEBUFFERSPROC fptr = (PFNGLCREATEBUFFERSPROC) dasGetProcAddress("glCreateBuffers",__context__,__at__);
    (*fptr)(n, buffers);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetUniformBlockIndex ( GLuint program, const GLchar * uniformBlockName, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMBLOCKINDEXPROC fptr = (PFNGLGETUNIFORMBLOCKINDEXPROC) dasGetProcAddress("glGetUniformBlockIndex",__context__,__at__);
    auto result = (*fptr)(program, uniformBlockName);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glDrawCommandsStatesNV ( GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWCOMMANDSSTATESNVPROC fptr = (PFNGLDRAWCOMMANDSSTATESNVPROC) dasGetProcAddress("glDrawCommandsStatesNV",__context__,__at__);
    (*fptr)(buffer, indirects, sizes, states, fbos, count);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferPageCommitmentARB ( GLuint buffer, GLintptr offset, GLsizeiptr size, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC fptr = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) dasGetProcAddress("glNamedBufferPageCommitmentARB",__context__,__at__);
    (*fptr)(buffer, offset, size, commit);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexParameterfEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERFEXTPROC fptr = (PFNGLMULTITEXPARAMETERFEXTPROC) dasGetProcAddress("glMultiTexParameterfEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glTexImage2D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXIMAGE2DPROC fptr = (PFNGLTEXIMAGE2DPROC) dasGetProcAddress("glTexImage2D",__context__,__at__);
    (*fptr)(target, level, internalformat, width, height, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glRenderbufferStorageMultisampleCoverageNV ( GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC fptr = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) dasGetProcAddress("glRenderbufferStorageMultisampleCoverageNV",__context__,__at__);
    (*fptr)(target, coverageSamples, colorSamples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2x4fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2X4FVPROC fptr = (PFNGLUNIFORMMATRIX2X4FVPROC) dasGetProcAddress("glUniformMatrix2x4fv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glMakeImageHandleResidentNV ( GLuint64 handle, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEIMAGEHANDLERESIDENTNVPROC fptr = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) dasGetProcAddress("glMakeImageHandleResidentNV",__context__,__at__);
    (*fptr)(handle, access);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x4dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) dasGetProcAddress("glProgramUniformMatrix3x4dvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryBufferObjectiv ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYBUFFEROBJECTIVPROC fptr = (PFNGLGETQUERYBUFFEROBJECTIVPROC) dasGetProcAddress("glGetQueryBufferObjectiv",__context__,__at__);
    (*fptr)(id, buffer, pname, offset);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTextureMultiviewOVR ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC fptr = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) dasGetProcAddress("glFramebufferTextureMultiviewOVR",__context__,__at__);
    (*fptr)(target, attachment, texture, level, baseViewIndex, numViews);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureLevelParameterfv ( GLuint texture, GLint level, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURELEVELPARAMETERFVPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) dasGetProcAddress("glGetTextureLevelParameterfv",__context__,__at__);
    (*fptr)(texture, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLuint64 glGetTextureHandleARB ( GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREHANDLEARBPROC fptr = (PFNGLGETTEXTUREHANDLEARBPROC) dasGetProcAddress("glGetTextureHandleARB",__context__,__at__);
    auto result = (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glBlendFunciARB ( GLuint buf, GLenum src, GLenum dst, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCIARBPROC fptr = (PFNGLBLENDFUNCIARBPROC) dasGetProcAddress("glBlendFunciARB",__context__,__at__);
    (*fptr)(buf, src, dst);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferParameteriEXT ( GLuint framebuffer, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC) dasGetProcAddress("glNamedFramebufferParameteriEXT",__context__,__at__);
    (*fptr)(framebuffer, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glMakeNamedBufferResidentNV ( GLuint buffer, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKENAMEDBUFFERRESIDENTNVPROC fptr = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC) dasGetProcAddress("glMakeNamedBufferResidentNV",__context__,__at__);
    (*fptr)(buffer, access);
    checkOpenGLError(__context__,__at__);
}

void glCoverFillPathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERFILLPATHINSTANCEDNVPROC fptr = (PFNGLCOVERFILLPATHINSTANCEDNVPROC) dasGetProcAddress("glCoverFillPathInstancedNV",__context__,__at__);
    (*fptr)(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexBindingDivisorEXT ( GLuint vaobj, GLuint bindingindex, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC fptr = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC) dasGetProcAddress("glVertexArrayVertexBindingDivisorEXT",__context__,__at__);
    (*fptr)(vaobj, bindingindex, divisor);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4usv ( GLuint index, const GLushort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4USVPROC fptr = (PFNGLVERTEXATTRIBI4USVPROC) dasGetProcAddress("glVertexAttribI4usv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4uiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4UIVPROC fptr = (PFNGLVERTEXATTRIBI4UIVPROC) dasGetProcAddress("glVertexAttribI4uiv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x3fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) dasGetProcAddress("glProgramUniformMatrix4x3fvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferSubData ( GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERSUBDATAPROC fptr = (PFNGLNAMEDBUFFERSUBDATAPROC) dasGetProcAddress("glNamedBufferSubData",__context__,__at__);
    (*fptr)(buffer, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glBindBuffersRange ( GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDBUFFERSRANGEPROC fptr = (PFNGLBINDBUFFERSRANGEPROC) dasGetProcAddress("glBindBuffersRange",__context__,__at__);
    (*fptr)(target, first, count, buffers, offsets, sizes);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsIndirectCount ( GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC) dasGetProcAddress("glMultiDrawElementsIndirectCount",__context__,__at__);
    (*fptr)(mode, type, indirect, drawcount, maxdrawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glUniform1ui64ARB ( GLint location, GLuint64 x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UI64ARBPROC fptr = (PFNGLUNIFORM1UI64ARBPROC) dasGetProcAddress("glUniform1ui64ARB",__context__,__at__);
    (*fptr)(location, x);
    checkOpenGLError(__context__,__at__);
}

void glStencilStrokePathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) dasGetProcAddress("glStencilStrokePathInstancedNV",__context__,__at__);
    (*fptr)(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glGetFloatv ( GLenum pname, GLfloat * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFLOATVPROC fptr = (PFNGLGETFLOATVPROC) dasGetProcAddress("glGetFloatv",__context__,__at__);
    (*fptr)(pname, data);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexParameterfvEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXPARAMETERFVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERFVEXTPROC) dasGetProcAddress("glGetMultiTexParameterfvEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetBooleani_v ( GLenum target, GLuint index, GLboolean * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBOOLEANI_VPROC fptr = (PFNGLGETBOOLEANI_VPROC) dasGetProcAddress("glGetBooleani_v",__context__,__at__);
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glDrawMeshTasksIndirectNV ( GLintptr indirect, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWMESHTASKSINDIRECTNVPROC fptr = (PFNGLDRAWMESHTASKSINDIRECTNVPROC) dasGetProcAddress("glDrawMeshTasksIndirectNV",__context__,__at__);
    (*fptr)(indirect);
    checkOpenGLError(__context__,__at__);
}

void glGetSamplerParameterIiv ( GLuint sampler, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSAMPLERPARAMETERIIVPROC fptr = (PFNGLGETSAMPLERPARAMETERIIVPROC) dasGetProcAddress("glGetSamplerParameterIiv",__context__,__at__);
    (*fptr)(sampler, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribLdv ( GLuint index, GLenum pname, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBLDVPROC fptr = (PFNGLGETVERTEXATTRIBLDVPROC) dasGetProcAddress("glGetVertexAttribLdv",__context__,__at__);
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexGenivEXT ( GLenum texunit, GLenum coord, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENIVEXTPROC fptr = (PFNGLMULTITEXGENIVEXTPROC) dasGetProcAddress("glMultiTexGenivEXT",__context__,__at__);
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCopyMultiTexImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYMULTITEXIMAGE1DEXTPROC fptr = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC) dasGetProcAddress("glCopyMultiTexImage1DEXT",__context__,__at__);
    (*fptr)(texunit, target, level, internalformat, x, y, width, border);
    checkOpenGLError(__context__,__at__);
}

void glUniform2i64NV ( GLint location, GLint64EXT x, GLint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2I64NVPROC fptr = (PFNGLUNIFORM2I64NVPROC) dasGetProcAddress("glUniform2i64NV",__context__,__at__);
    (*fptr)(location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1i64NV ( GLuint index, GLint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1I64NVPROC fptr = (PFNGLVERTEXATTRIBL1I64NVPROC) dasGetProcAddress("glVertexAttribL1i64NV",__context__,__at__);
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glVertexFormatNV ( GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXFORMATNVPROC fptr = (PFNGLVERTEXFORMATNVPROC) dasGetProcAddress("glVertexFormatNV",__context__,__at__);
    (*fptr)(size, type, stride);
    checkOpenGLError(__context__,__at__);
}

void glGenTransformFeedbacks ( GLsizei n, GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENTRANSFORMFEEDBACKSPROC fptr = (PFNGLGENTRANSFORMFEEDBACKSPROC) dasGetProcAddress("glGenTransformFeedbacks",__context__,__at__);
    (*fptr)(n, ids);
    checkOpenGLError(__context__,__at__);
}

void glBeginQueryIndexed ( GLenum target, GLuint index, GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINQUERYINDEXEDPROC fptr = (PFNGLBEGINQUERYINDEXEDPROC) dasGetProcAddress("glBeginQueryIndexed",__context__,__at__);
    (*fptr)(target, index, id);
    checkOpenGLError(__context__,__at__);
}

GLenum glPathMemoryGlyphIndexArrayNV ( GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC fptr = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) dasGetProcAddress("glPathMemoryGlyphIndexArrayNV",__context__,__at__);
    auto result = (*fptr)(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glPauseTransformFeedback ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPAUSETRANSFORMFEEDBACKPROC fptr = (PFNGLPAUSETRANSFORMFEEDBACKPROC) dasGetProcAddress("glPauseTransformFeedback",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glDeleteProgramPipelines ( GLsizei n, const GLuint * pipelines, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEPROGRAMPIPELINESPROC fptr = (PFNGLDELETEPROGRAMPIPELINESPROC) dasGetProcAddress("glDeleteProgramPipelines",__context__,__at__);
    (*fptr)(n, pipelines);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayAttribBinding ( GLuint vaobj, GLuint attribindex, GLuint bindingindex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYATTRIBBINDINGPROC fptr = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) dasGetProcAddress("glVertexArrayAttribBinding",__context__,__at__);
    (*fptr)(vaobj, attribindex, bindingindex);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageControl ( GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, bool enabled, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGECONTROLPROC fptr = (PFNGLDEBUGMESSAGECONTROLPROC) dasGetProcAddress("glDebugMessageControl",__context__,__at__);
    (*fptr)(source, type, severity, count, ids, enabled);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureSubImage3D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE3DPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) dasGetProcAddress("glCopyTextureSubImage3D",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribFormat ( GLuint attribindex, GLint size, GLenum type, bool normalized, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBFORMATPROC fptr = (PFNGLVERTEXATTRIBFORMATPROC) dasGetProcAddress("glVertexAttribFormat",__context__,__at__);
    (*fptr)(attribindex, size, type, normalized, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribLFormat ( GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBLFORMATPROC fptr = (PFNGLVERTEXATTRIBLFORMATPROC) dasGetProcAddress("glVertexAttribLFormat",__context__,__at__);
    (*fptr)(attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glDeletePerfMonitorsAMD ( GLsizei n, GLuint * monitors, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEPERFMONITORSAMDPROC fptr = (PFNGLDELETEPERFMONITORSAMDPROC) dasGetProcAddress("glDeletePerfMonitorsAMD",__context__,__at__);
    (*fptr)(n, monitors);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexGendvEXT ( GLenum texunit, GLenum coord, GLenum pname, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXGENDVEXTPROC fptr = (PFNGLGETMULTITEXGENDVEXTPROC) dasGetProcAddress("glGetMultiTexGendvEXT",__context__,__at__);
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfCounterInfoINTEL ( GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFCOUNTERINFOINTELPROC fptr = (PFNGLGETPERFCOUNTERINFOINTELPROC) dasGetProcAddress("glGetPerfCounterInfoINTEL",__context__,__at__);
    (*fptr)(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1ui64NV ( GLuint program, GLint location, GLuint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM1UI64NVPROC) dasGetProcAddress("glProgramUniform1ui64NV",__context__,__at__);
    (*fptr)(program, location, x);
    checkOpenGLError(__context__,__at__);
}

void glSamplerParameterfv ( GLuint sampler, GLenum pname, const GLfloat * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERFVPROC fptr = (PFNGLSAMPLERPARAMETERFVPROC) dasGetProcAddress("glSamplerParameterfv",__context__,__at__);
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glGetSamplerParameteriv ( GLuint sampler, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSAMPLERPARAMETERIVPROC fptr = (PFNGLGETSAMPLERPARAMETERIVPROC) dasGetProcAddress("glGetSamplerParameteriv",__context__,__at__);
    (*fptr)(sampler, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferSubDataEXT ( GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERSUBDATAEXTPROC fptr = (PFNGLNAMEDBUFFERSUBDATAEXTPROC) dasGetProcAddress("glNamedBufferSubDataEXT",__context__,__at__);
    (*fptr)(buffer, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glScissorExclusiveArrayvNV ( GLuint first, GLsizei count, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSOREXCLUSIVEARRAYVNVPROC fptr = (PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) dasGetProcAddress("glScissorExclusiveArrayvNV",__context__,__at__);
    (*fptr)(first, count, v);
    checkOpenGLError(__context__,__at__);
}

void glEvaluateDepthValuesARB ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLEVALUATEDEPTHVALUESARBPROC fptr = (PFNGLEVALUATEDEPTHVALUESARBPROC) dasGetProcAddress("glEvaluateDepthValuesARB",__context__,__at__);
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glClearTexImage ( GLuint texture, GLint level, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARTEXIMAGEPROC fptr = (PFNGLCLEARTEXIMAGEPROC) dasGetProcAddress("glClearTexImage",__context__,__at__);
    (*fptr)(texture, level, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glGetTransformFeedbacki_v ( GLuint xfb, GLenum pname, GLuint index, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTRANSFORMFEEDBACKI_VPROC fptr = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) dasGetProcAddress("glGetTransformFeedbacki_v",__context__,__at__);
    (*fptr)(xfb, pname, index, param);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI3iv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI3IVPROC fptr = (PFNGLVERTEXATTRIBI3IVPROC) dasGetProcAddress("glVertexAttribI3iv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawMeshTasksIndirectNV ( GLintptr indirect, GLsizei drawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC fptr = (PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) dasGetProcAddress("glMultiDrawMeshTasksIndirectNV",__context__,__at__);
    (*fptr)(indirect, drawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangeArrayv ( GLuint first, GLsizei count, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEARRAYVPROC fptr = (PFNGLDEPTHRANGEARRAYVPROC) dasGetProcAddress("glDepthRangeArrayv",__context__,__at__);
    (*fptr)(first, count, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL4ui64NV ( GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4UI64NVPROC fptr = (PFNGLVERTEXATTRIBL4UI64NVPROC) dasGetProcAddress("glVertexAttribL4ui64NV",__context__,__at__);
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage3D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE3DPROC fptr = (PFNGLTEXTURESUBIMAGE3DPROC) dasGetProcAddress("glTextureSubImage3D",__context__,__at__);
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTextureFaceEXT ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) dasGetProcAddress("glNamedFramebufferTextureFaceEXT",__context__,__at__);
    (*fptr)(framebuffer, attachment, texture, level, face);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexEnvfEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXENVFEXTPROC fptr = (PFNGLMULTITEXENVFEXTPROC) dasGetProcAddress("glMultiTexEnvfEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

GLuint glCreateProgram ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEPROGRAMPROC fptr = (PFNGLCREATEPROGRAMPROC) dasGetProcAddress("glCreateProgram",__context__,__at__);
    auto result = (*fptr)();
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniformMatrix3x2fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) dasGetProcAddress("glProgramUniformMatrix3x2fv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERSUBDATAPROC fptr = (PFNGLBUFFERSUBDATAPROC) dasGetProcAddress("glBufferSubData",__context__,__at__);
    (*fptr)(target, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribFormatNV ( GLuint index, GLint size, GLenum type, bool normalized, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBFORMATNVPROC fptr = (PFNGLVERTEXATTRIBFORMATNVPROC) dasGetProcAddress("glVertexAttribFormatNV",__context__,__at__);
    (*fptr)(index, size, type, normalized, stride);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x3fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) dasGetProcAddress("glProgramUniformMatrix4x3fv",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexEnviEXT ( GLenum texunit, GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXENVIEXTPROC fptr = (PFNGLMULTITEXENVIEXTPROC) dasGetProcAddress("glMultiTexEnviEXT",__context__,__at__);
    (*fptr)(texunit, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureImage1DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) dasGetProcAddress("glCompressedTextureImage1DEXT",__context__,__at__);
    (*fptr)(texture, target, level, internalformat, width, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferiv ( GLenum buffer, GLint drawbuffer, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERIVPROC fptr = (PFNGLCLEARBUFFERIVPROC) dasGetProcAddress("glClearBufferiv",__context__,__at__);
    (*fptr)(buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI1uiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI1UIVPROC fptr = (PFNGLVERTEXATTRIBI1UIVPROC) dasGetProcAddress("glVertexAttribI1uiv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

GLboolean glUnmapNamedBuffer ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNMAPNAMEDBUFFERPROC fptr = (PFNGLUNMAPNAMEDBUFFERPROC) dasGetProcAddress("glUnmapNamedBuffer",__context__,__at__);
    auto result = (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glVertexAttribL1i64vNV ( GLuint index, const GLint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1I64VNVPROC fptr = (PFNGLVERTEXATTRIBL1I64VNVPROC) dasGetProcAddress("glVertexAttribL1i64vNV",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParametersI4ivEXT ( GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) dasGetProcAddress("glNamedProgramLocalParametersI4ivEXT",__context__,__at__);
    (*fptr)(program, target, index, count, params);
    checkOpenGLError(__context__,__at__);
}

void glDrawTransformFeedbackInstanced ( GLenum mode, GLuint id, GLsizei instancecount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) dasGetProcAddress("glDrawTransformFeedbackInstanced",__context__,__at__);
    (*fptr)(mode, id, instancecount);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTexture1DEXT ( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) dasGetProcAddress("glNamedFramebufferTexture1DEXT",__context__,__at__);
    (*fptr)(framebuffer, attachment, textarget, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glCopyBufferSubData ( GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYBUFFERSUBDATAPROC fptr = (PFNGLCOPYBUFFERSUBDATAPROC) dasGetProcAddress("glCopyBufferSubData",__context__,__at__);
    (*fptr)(readTarget, writeTarget, readOffset, writeOffset, size);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2x3dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2X3DVPROC fptr = (PFNGLUNIFORMMATRIX2X3DVPROC) dasGetProcAddress("glUniformMatrix2x3dv",__context__,__at__);
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage1D ( GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE1DPROC fptr = (PFNGLTEXTURESTORAGE1DPROC) dasGetProcAddress("glTextureStorage1D",__context__,__at__);
    (*fptr)(texture, levels, internalformat, width);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedStringivARB ( GLint namelen, const GLchar * name, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDSTRINGIVARBPROC fptr = (PFNGLGETNAMEDSTRINGIVARBPROC) dasGetProcAddress("glGetNamedStringivARB",__context__,__at__);
    (*fptr)(namelen, name, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorageMultisampleAdvancedAMD ( GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) dasGetProcAddress("glNamedRenderbufferStorageMultisampleAdvancedAMD",__context__,__at__);
    (*fptr)(renderbuffer, samples, storageSamples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glStencilOpSeparate ( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILOPSEPARATEPROC fptr = (PFNGLSTENCILOPSEPARATEPROC) dasGetProcAddress("glStencilOpSeparate",__context__,__at__);
    (*fptr)(face, sfail, dpfail, dppass);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformdv ( GLuint program, GLint location, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMDVPROC fptr = (PFNGLGETUNIFORMDVPROC) dasGetProcAddress("glGetUniformdv",__context__,__at__);
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformfv ( GLuint program, GLint location, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMFVPROC fptr = (PFNGLGETUNIFORMFVPROC) dasGetProcAddress("glGetUniformfv",__context__,__at__);
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4ubv ( GLuint index, const GLubyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4UBVPROC fptr = (PFNGLVERTEXATTRIBI4UBVPROC) dasGetProcAddress("glVertexAttribI4ubv",__context__,__at__);
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glBindFragDataLocation ( GLuint program, GLuint color, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDFRAGDATALOCATIONPROC fptr = (PFNGLBINDFRAGDATALOCATIONPROC) dasGetProcAddress("glBindFragDataLocation",__context__,__at__);
    (*fptr)(program, color, name);
    checkOpenGLError(__context__,__at__);
}

void glGetObjectPtrLabel ( const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETOBJECTPTRLABELPROC fptr = (PFNGLGETOBJECTPTRLABELPROC) dasGetProcAddress("glGetObjectPtrLabel",__context__,__at__);
    (*fptr)(ptr, bufSize, length, label);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexGendEXT ( GLenum texunit, GLenum coord, GLenum pname, GLdouble param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENDEXTPROC fptr = (PFNGLMULTITEXGENDEXTPROC) dasGetProcAddress("glMultiTexGendEXT",__context__,__at__);
    (*fptr)(texunit, coord, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glBeginTransformFeedback ( GLenum primitiveMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINTRANSFORMFEEDBACKPROC fptr = (PFNGLBEGINTRANSFORMFEEDBACKPROC) dasGetProcAddress("glBeginTransformFeedback",__context__,__at__);
    (*fptr)(primitiveMode);
    checkOpenGLError(__context__,__at__);
}

void glShadingRateImagePaletteNV ( GLuint viewport, GLuint first, GLsizei count, const GLenum * rates, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADINGRATEIMAGEPALETTENVPROC fptr = (PFNGLSHADINGRATEIMAGEPALETTENVPROC) dasGetProcAddress("glShadingRateImagePaletteNV",__context__,__at__);
    (*fptr)(viewport, first, count, rates);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x2dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) dasGetProcAddress("glProgramUniformMatrix3x2dvEXT",__context__,__at__);
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM4UI64VARBPROC) dasGetProcAddress("glProgramUniform4ui64vARB",__context__,__at__);
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glDeleteCommandListsNV ( GLsizei n, const GLuint * lists, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETECOMMANDLISTSNVPROC fptr = (PFNGLDELETECOMMANDLISTSNVPROC) dasGetProcAddress("glDeleteCommandListsNV",__context__,__at__);
    (*fptr)(n, lists);
    checkOpenGLError(__context__,__at__);
}

GLuint64 glGetImageHandleNV ( GLuint texture, GLint level, bool layered, GLint layer, GLenum format, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETIMAGEHANDLENVPROC fptr = (PFNGLGETIMAGEHANDLENVPROC) dasGetProcAddress("glGetImageHandleNV",__context__,__at__);
    auto result = (*fptr)(texture, level, layered, layer, format);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetActiveSubroutineName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVESUBROUTINENAMEPROC fptr = (PFNGLGETACTIVESUBROUTINENAMEPROC) dasGetProcAddress("glGetActiveSubroutineName",__context__,__at__);
    (*fptr)(program, shadertype, index, bufSize, length, name);
    checkOpenGLError(__context__,__at__);
}

void glCreateTextures ( GLenum target, GLsizei n, GLuint * textures, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATETEXTURESPROC fptr = (PFNGLCREATETEXTURESPROC) dasGetProcAddress("glCreateTextures",__context__,__at__);
    (*fptr)(target, n, textures);
    checkOpenGLError(__context__,__at__);
}

