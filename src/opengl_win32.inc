void glProgramUniformMatrix3fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) dasWglGetProcAddress("glProgramUniformMatrix3fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3fv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glShaderSource ( GLuint shader, GLsizei count, const GLchar *const * string, const GLint * length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADERSOURCEPROC fptr = (PFNGLSHADERSOURCEPROC) dasWglGetProcAddress("glShaderSource");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glShaderSource is NULL");
    (*fptr)(shader, count, string, length);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3DVPROC fptr = (PFNGLVERTEXATTRIB3DVPROC) dasWglGetProcAddress("glVertexAttrib3dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib3dv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4DVPROC fptr = (PFNGLUNIFORMMATRIX4DVPROC) dasWglGetProcAddress("glUniformMatrix4dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix4dv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGenProgramPipelines ( GLsizei n, GLuint * pipelines, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENPROGRAMPIPELINESPROC fptr = (PFNGLGENPROGRAMPIPELINESPROC) dasWglGetProcAddress("glGenProgramPipelines");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenProgramPipelines is NULL");
    (*fptr)(n, pipelines);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) dasWglGetProcAddress("glProgramUniformMatrix3dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3dv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureLevelParameteriv ( GLuint texture, GLint level, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURELEVELPARAMETERIVPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) dasWglGetProcAddress("glGetTextureLevelParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureLevelParameteriv is NULL");
    (*fptr)(texture, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4iv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4IVPROC fptr = (PFNGLVERTEXATTRIBI4IVPROC) dasWglGetProcAddress("glVertexAttribI4iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI4iv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4sv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4SVPROC fptr = (PFNGLVERTEXATTRIBI4SVPROC) dasWglGetProcAddress("glVertexAttribI4sv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI4sv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformi64vARB ( GLuint program, GLint location, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMI64VARBPROC fptr = (PFNGLGETUNIFORMI64VARBPROC) dasWglGetProcAddress("glGetUniformi64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformi64vARB is NULL");
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glMatrixMultfEXT ( GLenum mode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULTFEXTPROC fptr = (PFNGLMATRIXMULTFEXTPROC) dasWglGetProcAddress("glMatrixMultfEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixMultfEXT is NULL");
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glMakeImageHandleNonResidentARB ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC fptr = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) dasWglGetProcAddress("glMakeImageHandleNonResidentARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeImageHandleNonResidentARB is NULL");
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstanced ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDPROC) dasWglGetProcAddress("glDrawElementsInstanced");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawElementsInstanced is NULL");
    (*fptr)(mode, count, type, indices, instancecount);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3dvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glMatrixOrthoEXT ( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXORTHOEXTPROC fptr = (PFNGLMATRIXORTHOEXTPROC) dasWglGetProcAddress("glMatrixOrthoEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixOrthoEXT is NULL");
    (*fptr)(mode, left, right, bottom, top, zNear, zFar);
    checkOpenGLError(__context__,__at__);
}

void glUniform3i64NV ( GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3I64NVPROC fptr = (PFNGLUNIFORM3I64NVPROC) dasWglGetProcAddress("glUniform3i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3i64NV is NULL");
    (*fptr)(location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2i64NV ( GLuint program, GLint location, GLint64EXT x, GLint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2I64NVPROC fptr = (PFNGLPROGRAMUNIFORM2I64NVPROC) dasWglGetProcAddress("glProgramUniform2i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2i64NV is NULL");
    (*fptr)(program, location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glUniform4uiv ( GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UIVPROC fptr = (PFNGLUNIFORM4UIVPROC) dasWglGetProcAddress("glUniform4uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4uiv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameterI4uivEXT ( GLuint program, GLenum target, GLuint index, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameterI4uivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParameterI4uivEXT is NULL");
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glDisableVertexArrayAttrib ( GLuint vaobj, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEVERTEXARRAYATTRIBPROC fptr = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) dasWglGetProcAddress("glDisableVertexArrayAttrib");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDisableVertexArrayAttrib is NULL");
    (*fptr)(vaobj, index);
    checkOpenGLError(__context__,__at__);
}

void glTexStorage2DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSTORAGE2DMULTISAMPLEPROC fptr = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) dasWglGetProcAddress("glTexStorage2DMultisample");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexStorage2DMultisample is NULL");
    (*fptr)(target, samples, internalformat, width, height, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayAttribFormat ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, bool normalized, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYATTRIBFORMATPROC fptr = (PFNGLVERTEXARRAYATTRIBFORMATPROC) dasWglGetProcAddress("glVertexArrayAttribFormat");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayAttribFormat is NULL");
    (*fptr)(vaobj, attribindex, size, type, normalized, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4bv ( GLuint index, const GLbyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4BVPROC fptr = (PFNGLVERTEXATTRIBI4BVPROC) dasWglGetProcAddress("glVertexAttribI4bv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI4bv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glUniform3ui64vARB ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UI64VARBPROC fptr = (PFNGLUNIFORM3UI64VARBPROC) dasWglGetProcAddress("glUniform3ui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3ui64vARB is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glCompileShader ( GLuint shader, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPILESHADERPROC fptr = (PFNGLCOMPILESHADERPROC) dasWglGetProcAddress("glCompileShader");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompileShader is NULL");
    (*fptr)(shader);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4ui ( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4UIPROC fptr = (PFNGLVERTEXATTRIBI4UIPROC) dasWglGetProcAddress("glVertexAttribI4ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI4ui is NULL");
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribLui64vARB ( GLuint index, GLenum pname, GLuint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBLUI64VARBPROC fptr = (PFNGLGETVERTEXATTRIBLUI64VARBPROC) dasWglGetProcAddress("glGetVertexAttribLui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexAttribLui64vARB is NULL");
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureBarrierNV ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBARRIERNVPROC fptr = (PFNGLTEXTUREBARRIERNVPROC) dasWglGetProcAddress("glTextureBarrierNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureBarrierNV is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

GLenum glCheckNamedFramebufferStatusEXT ( GLuint framebuffer, GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC fptr = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) dasWglGetProcAddress("glCheckNamedFramebufferStatusEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCheckNamedFramebufferStatusEXT is NULL");
    auto result = (*fptr)(framebuffer, target);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLuint glGenPathsNV ( GLsizei range, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENPATHSNVPROC fptr = (PFNGLGENPATHSNVPROC) dasWglGetProcAddress("glGenPathsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenPathsNV is NULL");
    auto result = (*fptr)(range);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniform1ui64vARB ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UI64VARBPROC fptr = (PFNGLUNIFORM1UI64VARBPROC) dasWglGetProcAddress("glUniform1ui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1ui64vARB is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribIiv ( GLuint index, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBIIVPROC fptr = (PFNGLGETVERTEXATTRIBIIVPROC) dasWglGetProcAddress("glGetVertexAttribIiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexAttribIiv is NULL");
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glStencilMask ( GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILMASKPROC fptr = (PFNGLSTENCILMASKPROC) dasWglGetProcAddress("glStencilMask");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilMask is NULL");
    (*fptr)(mask);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferData ( GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERDATAPROC fptr = (PFNGLCLEARBUFFERDATAPROC) dasWglGetProcAddress("glClearBufferData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearBufferData is NULL");
    (*fptr)(target, internalformat, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glSamplerParameteriv ( GLuint sampler, GLenum pname, const GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERIVPROC fptr = (PFNGLSAMPLERPARAMETERIVPROC) dasWglGetProcAddress("glSamplerParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSamplerParameteriv is NULL");
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferSubData ( GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERSUBDATAPROC fptr = (PFNGLCLEARBUFFERSUBDATAPROC) dasWglGetProcAddress("glClearBufferSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearBufferSubData is NULL");
    (*fptr)(target, internalformat, offset, size, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorGroupsAMD ( GLint * numGroups, GLsizei groupsSize, GLuint * groups, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORGROUPSAMDPROC fptr = (PFNGLGETPERFMONITORGROUPSAMDPROC) dasWglGetProcAddress("glGetPerfMonitorGroupsAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPerfMonitorGroupsAMD is NULL");
    (*fptr)(numGroups, groupsSize, groups);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP2uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP2UIVPROC fptr = (PFNGLVERTEXATTRIBP2UIVPROC) dasWglGetProcAddress("glVertexAttribP2uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribP2uiv is NULL");
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glCreateRenderbuffers ( GLsizei n, GLuint * renderbuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATERENDERBUFFERSPROC fptr = (PFNGLCREATERENDERBUFFERSPROC) dasWglGetProcAddress("glCreateRenderbuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateRenderbuffers is NULL");
    (*fptr)(n, renderbuffers);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterfEXT ( GLuint texture, GLenum target, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERFEXTPROC fptr = (PFNGLTEXTUREPARAMETERFEXTPROC) dasWglGetProcAddress("glTextureParameterfEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameterfEXT is NULL");
    (*fptr)(texture, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glDisableClientStateiEXT ( GLenum array, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLECLIENTSTATEIEXTPROC fptr = (PFNGLDISABLECLIENTSTATEIEXTPROC) dasWglGetProcAddress("glDisableClientStateiEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDisableClientStateiEXT is NULL");
    (*fptr)(array, index);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedFramebufferAttachmentParameteriv ( GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) dasWglGetProcAddress("glGetNamedFramebufferAttachmentParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedFramebufferAttachmentParameteriv is NULL");
    (*fptr)(framebuffer, attachment, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayColorOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYCOLOROFFSETEXTPROC fptr = (PFNGLVERTEXARRAYCOLOROFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayColorOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayColorOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glMinSampleShadingARB ( GLfloat value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMINSAMPLESHADINGARBPROC fptr = (PFNGLMINSAMPLESHADINGARBPROC) dasWglGetProcAddress("glMinSampleShadingARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMinSampleShadingARB is NULL");
    (*fptr)(value);
    checkOpenGLError(__context__,__at__);
}

void glPathParameterfNV ( GLuint path, GLenum pname, GLfloat value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHPARAMETERFNVPROC fptr = (PFNGLPATHPARAMETERFNVPROC) dasWglGetProcAddress("glPathParameterfNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathParameterfNV is NULL");
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTextureLayer ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) dasWglGetProcAddress("glNamedFramebufferTextureLayer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferTextureLayer is NULL");
    (*fptr)(framebuffer, attachment, texture, level, layer);
    checkOpenGLError(__context__,__at__);
}

void glUniform3i64ARB ( GLint location, GLint64 x, GLint64 y, GLint64 z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3I64ARBPROC fptr = (PFNGLUNIFORM3I64ARBPROC) dasWglGetProcAddress("glUniform3i64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3i64ARB is NULL");
    (*fptr)(location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexGenfvEXT ( GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENFVEXTPROC fptr = (PFNGLMULTITEXGENFVEXTPROC) dasWglGetProcAddress("glMultiTexGenfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexGenfvEXT is NULL");
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glDisablei ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEIPROC fptr = (PFNGLDISABLEIPROC) dasWglGetProcAddress("glDisablei");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDisablei is NULL");
    (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
}

void glUniform2uiv ( GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UIVPROC fptr = (PFNGLUNIFORM2UIVPROC) dasWglGetProcAddress("glUniform2uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2uiv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glCreatePerfQueryINTEL ( GLuint queryId, GLuint * queryHandle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEPERFQUERYINTELPROC fptr = (PFNGLCREATEPERFQUERYINTELPROC) dasWglGetProcAddress("glCreatePerfQueryINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreatePerfQueryINTEL is NULL");
    (*fptr)(queryId, queryHandle);
    checkOpenGLError(__context__,__at__);
}

GLint glGetProgramResourceLocation ( GLuint program, GLenum programInterface, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCELOCATIONPROC fptr = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) dasWglGetProcAddress("glGetProgramResourceLocation");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramResourceLocation is NULL");
    auto result = (*fptr)(program, programInterface, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniformMatrix3x2dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) dasWglGetProcAddress("glProgramUniformMatrix3x2dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3x2dv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glConservativeRasterParameteriNV ( GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCONSERVATIVERASTERPARAMETERINVPROC fptr = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC) dasWglGetProcAddress("glConservativeRasterParameteriNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glConservativeRasterParameteriNV is NULL");
    (*fptr)(pname, param);
    checkOpenGLError(__context__,__at__);
}

void glVertexBindingDivisor ( GLuint bindingindex, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXBINDINGDIVISORPROC fptr = (PFNGLVERTEXBINDINGDIVISORPROC) dasWglGetProcAddress("glVertexBindingDivisor");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexBindingDivisor is NULL");
    (*fptr)(bindingindex, divisor);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x3dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) dasWglGetProcAddress("glProgramUniformMatrix4x3dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4x3dv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage2D ( GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE2DPROC fptr = (PFNGLTEXTURESTORAGE2DPROC) dasWglGetProcAddress("glTextureStorage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureStorage2D is NULL");
    (*fptr)(texture, levels, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage2D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) dasWglGetProcAddress("glCompressedTextureSubImage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTextureSubImage2D is NULL");
    (*fptr)(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM1I64VARBPROC) dasWglGetProcAddress("glProgramUniform1i64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1i64vARB is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayMultiTexCoordOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayMultiTexCoordOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayMultiTexCoordOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, texunit, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexImageEXT ( GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXIMAGEEXTPROC fptr = (PFNGLGETMULTITEXIMAGEEXTPROC) dasWglGetProcAddress("glGetMultiTexImageEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexImageEXT is NULL");
    (*fptr)(texunit, target, level, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3ui64NV ( GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM3UI64NVPROC) dasWglGetProcAddress("glProgramUniform3ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3ui64NV is NULL");
    (*fptr)(program, location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glGetPathParameterivNV ( GLuint path, GLenum pname, GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHPARAMETERIVNVPROC fptr = (PFNGLGETPATHPARAMETERIVNVPROC) dasWglGetProcAddress("glGetPathParameterivNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPathParameterivNV is NULL");
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2x3fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2X3FVPROC fptr = (PFNGLUNIFORMMATRIX2X3FVPROC) dasWglGetProcAddress("glUniformMatrix2x3fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix2x3fv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glDrawArraysInstancedARB ( GLenum mode, GLint first, GLsizei count, GLsizei primcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSINSTANCEDARBPROC fptr = (PFNGLDRAWARRAYSINSTANCEDARBPROC) dasWglGetProcAddress("glDrawArraysInstancedARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawArraysInstancedARB is NULL");
    (*fptr)(mode, first, count, primcount);
    checkOpenGLError(__context__,__at__);
}

void glTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSUBIMAGE1DPROC fptr = (PFNGLTEXSUBIMAGE1DPROC) dasWglGetProcAddress("glTexSubImage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexSubImage1D is NULL");
    (*fptr)(target, level, xoffset, width, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3i64NV ( GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3I64NVPROC fptr = (PFNGLPROGRAMUNIFORM3I64NVPROC) dasWglGetProcAddress("glProgramUniform3i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3i64NV is NULL");
    (*fptr)(program, location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP3ui ( GLuint index, GLenum type, bool normalized, GLuint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP3UIPROC fptr = (PFNGLVERTEXATTRIBP3UIPROC) dasWglGetProcAddress("glVertexAttribP3ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribP3ui is NULL");
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glBindTexture ( GLenum target, GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDTEXTUREPROC fptr = (PFNGLBINDTEXTUREPROC) dasWglGetProcAddress("glBindTexture");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindTexture is NULL");
    (*fptr)(target, texture);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferfv ( GLenum buffer, GLint drawbuffer, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERFVPROC fptr = (PFNGLCLEARBUFFERFVPROC) dasWglGetProcAddress("glClearBufferfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearBufferfv is NULL");
    (*fptr)(buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nuiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NUIVPROC fptr = (PFNGLVERTEXATTRIB4NUIVPROC) dasWglGetProcAddress("glVertexAttrib4Nuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4Nuiv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformHandleui64NV ( GLuint program, GLint location, GLuint64 value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) dasWglGetProcAddress("glProgramUniformHandleui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformHandleui64NV is NULL");
    (*fptr)(program, location, value);
    checkOpenGLError(__context__,__at__);
}

void glObjectPtrLabel ( const void * ptr, GLsizei length, const GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLOBJECTPTRLABELPROC fptr = (PFNGLOBJECTPTRLABELPROC) dasWglGetProcAddress("glObjectPtrLabel");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glObjectPtrLabel is NULL");
    (*fptr)(ptr, length, label);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3sv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3SVPROC fptr = (PFNGLVERTEXATTRIB3SVPROC) dasWglGetProcAddress("glVertexAttrib3sv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib3sv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGenPerfMonitorsAMD ( GLsizei n, GLuint * monitors, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENPERFMONITORSAMDPROC fptr = (PFNGLGENPERFMONITORSAMDPROC) dasWglGetProcAddress("glGenPerfMonitorsAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenPerfMonitorsAMD is NULL");
    (*fptr)(n, monitors);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferfi ( GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERFIPROC fptr = (PFNGLCLEARBUFFERFIPROC) dasWglGetProcAddress("glClearBufferfi");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearBufferfi is NULL");
    (*fptr)(buffer, drawbuffer, depth, stencil);
    checkOpenGLError(__context__,__at__);
}

void glProgramPathFragmentInputGenNV ( GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC fptr = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) dasWglGetProcAddress("glProgramPathFragmentInputGenNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramPathFragmentInputGenNV is NULL");
    (*fptr)(program, location, genMode, components, coeffs);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nubv ( GLuint index, const GLubyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NUBVPROC fptr = (PFNGLVERTEXATTRIB4NUBVPROC) dasWglGetProcAddress("glVertexAttrib4Nubv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4Nubv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformiv ( GLuint program, GLint location, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMIVPROC fptr = (PFNGLGETUNIFORMIVPROC) dasWglGetProcAddress("glGetUniformiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformiv is NULL");
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glBindBufferRange ( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDBUFFERRANGEPROC fptr = (PFNGLBINDBUFFERRANGEPROC) dasWglGetProcAddress("glBindBufferRange");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindBufferRange is NULL");
    (*fptr)(target, index, buffer, offset, size);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP1ui ( GLuint index, GLenum type, bool normalized, GLuint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP1UIPROC fptr = (PFNGLVERTEXATTRIBP1UIPROC) dasWglGetProcAddress("glVertexAttribP1ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribP1ui is NULL");
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3fv ( GLuint index, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3FVPROC fptr = (PFNGLVERTEXATTRIB3FVPROC) dasWglGetProcAddress("glVertexAttrib3fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib3fv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateFramebuffer ( GLenum target, GLsizei numAttachments, const GLenum * attachments, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATEFRAMEBUFFERPROC fptr = (PFNGLINVALIDATEFRAMEBUFFERPROC) dasWglGetProcAddress("glInvalidateFramebuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glInvalidateFramebuffer is NULL");
    (*fptr)(target, numAttachments, attachments);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4FVPROC fptr = (PFNGLUNIFORMMATRIX4FVPROC) dasWglGetProcAddress("glUniformMatrix4fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix4fv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateBufferSubData ( GLuint buffer, GLintptr offset, GLsizeiptr length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATEBUFFERSUBDATAPROC fptr = (PFNGLINVALIDATEBUFFERSUBDATAPROC) dasWglGetProcAddress("glInvalidateBufferSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glInvalidateBufferSubData is NULL");
    (*fptr)(buffer, offset, length);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorGroupStringAMD ( GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORGROUPSTRINGAMDPROC fptr = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) dasWglGetProcAddress("glGetPerfMonitorGroupStringAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPerfMonitorGroupStringAMD is NULL");
    (*fptr)(group, bufSize, length, groupString);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsImageHandleResidentNV ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISIMAGEHANDLERESIDENTNVPROC fptr = (PFNGLISIMAGEHANDLERESIDENTNVPROC) dasWglGetProcAddress("glIsImageHandleResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsImageHandleResidentNV is NULL");
    auto result = (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniform2ui64NV ( GLint location, GLuint64EXT x, GLuint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UI64NVPROC fptr = (PFNGLUNIFORM2UI64NVPROC) dasWglGetProcAddress("glUniform2ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2ui64NV is NULL");
    (*fptr)(location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM1UI64VNVPROC) dasWglGetProcAddress("glProgramUniform1ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1ui64vNV is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glPathStencilFuncNV ( GLenum func, GLint ref, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHSTENCILFUNCNVPROC fptr = (PFNGLPATHSTENCILFUNCNVPROC) dasWglGetProcAddress("glPathStencilFuncNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathStencilFuncNV is NULL");
    (*fptr)(func, ref, mask);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM3I64VARBPROC) dasWglGetProcAddress("glProgramUniform3i64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3i64vARB is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glPathStringNV ( GLuint path, GLenum format, GLsizei length, const void * pathString, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHSTRINGNVPROC fptr = (PFNGLPATHSTRINGNVPROC) dasWglGetProcAddress("glPathStringNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathStringNV is NULL");
    (*fptr)(path, format, length, pathString);
    checkOpenGLError(__context__,__at__);
}

void glTexImage3DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXIMAGE3DMULTISAMPLEPROC fptr = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) dasWglGetProcAddress("glTexImage3DMultisample");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexImage3DMultisample is NULL");
    (*fptr)(target, samples, internalformat, width, height, depth, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glIndexFormatNV ( GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINDEXFORMATNVPROC fptr = (PFNGLINDEXFORMATNVPROC) dasWglGetProcAddress("glIndexFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIndexFormatNV is NULL");
    (*fptr)(type, stride);
    checkOpenGLError(__context__,__at__);
}

void glLinkProgram ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLLINKPROGRAMPROC fptr = (PFNGLLINKPROGRAMPROC) dasWglGetProcAddress("glLinkProgram");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glLinkProgram is NULL");
    (*fptr)(program);
    checkOpenGLError(__context__,__at__);
}

void glDrawBuffer ( GLenum buf, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWBUFFERPROC fptr = (PFNGLDRAWBUFFERPROC) dasWglGetProcAddress("glDrawBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawBuffer is NULL");
    (*fptr)(buf);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexGenivEXT ( GLenum texunit, GLenum coord, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXGENIVEXTPROC fptr = (PFNGLGETMULTITEXGENIVEXTPROC) dasWglGetProcAddress("glGetMultiTexGenivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexGenivEXT is NULL");
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramPipelineInfoLog ( GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMPIPELINEINFOLOGPROC fptr = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) dasWglGetProcAddress("glGetProgramPipelineInfoLog");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramPipelineInfoLog is NULL");
    (*fptr)(pipeline, bufSize, length, infoLog);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM3I64VNVPROC) dasWglGetProcAddress("glProgramUniform3i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3i64vNV is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferParameterivEXT ( GLuint buffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetNamedBufferParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedBufferParameterivEXT is NULL");
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureSubImage2D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE2DPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) dasWglGetProcAddress("glCopyTextureSubImage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTextureSubImage2D is NULL");
    (*fptr)(texture, level, xoffset, yoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI3ui ( GLuint index, GLuint x, GLuint y, GLuint z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI3UIPROC fptr = (PFNGLVERTEXATTRIBI3UIPROC) dasWglGetProcAddress("glVertexAttribI3ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI3ui is NULL");
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glUniformHandleui64NV ( GLint location, GLuint64 value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMHANDLEUI64NVPROC fptr = (PFNGLUNIFORMHANDLEUI64NVPROC) dasWglGetProcAddress("glUniformHandleui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformHandleui64NV is NULL");
    (*fptr)(location, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3ui64ARB ( GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM3UI64ARBPROC) dasWglGetProcAddress("glProgramUniform3ui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3ui64ARB is NULL");
    (*fptr)(program, location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1iEXT ( GLuint program, GLint location, GLint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1IEXTPROC fptr = (PFNGLPROGRAMUNIFORM1IEXTPROC) dasWglGetProcAddress("glProgramUniform1iEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1iEXT is NULL");
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribLPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBLPOINTERPROC fptr = (PFNGLVERTEXATTRIBLPOINTERPROC) dasWglGetProcAddress("glVertexAttribLPointer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribLPointer is NULL");
    (*fptr)(index, size, type, stride, pointer);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nub ( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NUBPROC fptr = (PFNGLVERTEXATTRIB4NUBPROC) dasWglGetProcAddress("glVertexAttrib4Nub");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4Nub is NULL");
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferStorage ( GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERSTORAGEPROC fptr = (PFNGLNAMEDBUFFERSTORAGEPROC) dasWglGetProcAddress("glNamedBufferStorage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedBufferStorage is NULL");
    (*fptr)(buffer, size, data, flags);
    checkOpenGLError(__context__,__at__);
}

void glUniformSubroutinesuiv ( GLenum shadertype, GLsizei count, const GLuint * indices, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMSUBROUTINESUIVPROC fptr = (PFNGLUNIFORMSUBROUTINESUIVPROC) dasWglGetProcAddress("glUniformSubroutinesuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformSubroutinesuiv is NULL");
    (*fptr)(shadertype, count, indices);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferDrawBuffers ( GLuint framebuffer, GLsizei n, const GLenum * bufs, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC fptr = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) dasWglGetProcAddress("glNamedFramebufferDrawBuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferDrawBuffers is NULL");
    (*fptr)(framebuffer, n, bufs);
    checkOpenGLError(__context__,__at__);
}

void glUniform4ui64NV ( GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UI64NVPROC fptr = (PFNGLUNIFORM4UI64NVPROC) dasWglGetProcAddress("glUniform4ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4ui64NV is NULL");
    (*fptr)(location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glCopyImageSubData ( GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYIMAGESUBDATAPROC fptr = (PFNGLCOPYIMAGESUBDATAPROC) dasWglGetProcAddress("glCopyImageSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyImageSubData is NULL");
    (*fptr)(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
    checkOpenGLError(__context__,__at__);
}

void glPixelStorei ( GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPIXELSTOREIPROC fptr = (PFNGLPIXELSTOREIPROC) dasWglGetProcAddress("glPixelStorei");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPixelStorei is NULL");
    (*fptr)(pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM1I64VNVPROC) dasWglGetProcAddress("glProgramUniform1i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1i64vNV is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage1D ( GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) dasWglGetProcAddress("glCompressedTextureSubImage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTextureSubImage1D is NULL");
    (*fptr)(texture, level, xoffset, width, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4fvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTexImage3D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXIMAGE3DPROC fptr = (PFNGLTEXIMAGE3DPROC) dasWglGetProcAddress("glTexImage3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexImage3D is NULL");
    (*fptr)(target, level, internalformat, width, height, depth, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTextureFaceARB ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTUREFACEARBPROC fptr = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) dasWglGetProcAddress("glFramebufferTextureFaceARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferTextureFaceARB is NULL");
    (*fptr)(target, attachment, texture, level, face);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4FVEXTPROC) dasWglGetProcAddress("glProgramUniform4fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4fvEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glStencilMaskSeparate ( GLenum face, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILMASKSEPARATEPROC fptr = (PFNGLSTENCILMASKSEPARATEPROC) dasWglGetProcAddress("glStencilMaskSeparate");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilMaskSeparate is NULL");
    (*fptr)(face, mask);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterIivEXT ( GLuint texture, GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIIVEXTPROC fptr = (PFNGLTEXTUREPARAMETERIIVEXTPROC) dasWglGetProcAddress("glTextureParameterIivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameterIivEXT is NULL");
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexSubImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXSUBIMAGE1DEXTPROC fptr = (PFNGLMULTITEXSUBIMAGE1DEXTPROC) dasWglGetProcAddress("glMultiTexSubImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexSubImage1DEXT is NULL");
    (*fptr)(texunit, target, level, xoffset, width, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameterI4uiEXT ( GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameterI4uiEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParameterI4uiEXT is NULL");
    (*fptr)(program, target, index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glActiveTexture ( GLenum texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLACTIVETEXTUREPROC fptr = (PFNGLACTIVETEXTUREPROC) dasWglGetProcAddress("glActiveTexture");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glActiveTexture is NULL");
    (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
}

void glUniform1i64vARB ( GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1I64VARBPROC fptr = (PFNGLUNIFORM1I64VARBPROC) dasWglGetProcAddress("glUniform1i64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1i64vARB is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedProgramLocalParameterIivEXT ( GLuint program, GLenum target, GLuint index, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) dasWglGetProcAddress("glGetNamedProgramLocalParameterIivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedProgramLocalParameterIivEXT is NULL");
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glGetPathCommandsNV ( GLuint path, GLubyte * commands, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHCOMMANDSNVPROC fptr = (PFNGLGETPATHCOMMANDSNVPROC) dasWglGetProcAddress("glGetPathCommandsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPathCommandsNV is NULL");
    (*fptr)(path, commands);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2f ( GLuint index, GLfloat x, GLfloat y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2FPROC fptr = (PFNGLVERTEXATTRIB2FPROC) dasWglGetProcAddress("glVertexAttrib2f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib2f is NULL");
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glBindVertexArray ( GLuint array, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDVERTEXARRAYPROC fptr = (PFNGLBINDVERTEXARRAYPROC) dasWglGetProcAddress("glBindVertexArray");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindVertexArray is NULL");
    (*fptr)(array);
    checkOpenGLError(__context__,__at__);
}

void glEndPerfMonitorAMD ( GLuint monitor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDPERFMONITORAMDPROC fptr = (PFNGLENDPERFMONITORAMDPROC) dasWglGetProcAddress("glEndPerfMonitorAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEndPerfMonitorAMD is NULL");
    (*fptr)(monitor);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameter4fvEXT ( GLuint program, GLenum target, GLuint index, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameter4fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParameter4fvEXT is NULL");
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramResourceName ( GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCENAMEPROC fptr = (PFNGLGETPROGRAMRESOURCENAMEPROC) dasWglGetProcAddress("glGetProgramResourceName");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramResourceName is NULL");
    (*fptr)(program, programInterface, index, bufSize, length, name);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferSampleLocationsfvNV ( GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC fptr = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) dasWglGetProcAddress("glNamedFramebufferSampleLocationsfvNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferSampleLocationsfvNV is NULL");
    (*fptr)(framebuffer, start, count, v);
    checkOpenGLError(__context__,__at__);
}

void glGetPathMetricsNV ( GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHMETRICSNVPROC fptr = (PFNGLGETPATHMETRICSNVPROC) dasWglGetProcAddress("glGetPathMetricsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPathMetricsNV is NULL");
    (*fptr)(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
    checkOpenGLError(__context__,__at__);
}

void glCoverStrokePathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERSTROKEPATHINSTANCEDNVPROC fptr = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) dasWglGetProcAddress("glCoverStrokePathInstancedNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCoverStrokePathInstancedNV is NULL");
    (*fptr)(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorageMultisampleCoverageEXT ( GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) dasWglGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedRenderbufferStorageMultisampleCoverageEXT is NULL");
    (*fptr)(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribIOffsetEXT ( GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribIOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexAttribIOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, index, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2d ( GLuint index, GLdouble x, GLdouble y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2DPROC fptr = (PFNGLVERTEXATTRIB2DPROC) dasWglGetProcAddress("glVertexAttrib2d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib2d is NULL");
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedFramebufferParameterivEXT ( GLuint framebuffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetNamedFramebufferParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedFramebufferParameterivEXT is NULL");
    (*fptr)(framebuffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nusv ( GLuint index, const GLushort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NUSVPROC fptr = (PFNGLVERTEXATTRIB4NUSVPROC) dasWglGetProcAddress("glVertexAttrib4Nusv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4Nusv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGenerateMipmap ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENERATEMIPMAPPROC fptr = (PFNGLGENERATEMIPMAPPROC) dasWglGetProcAddress("glGenerateMipmap");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenerateMipmap is NULL");
    (*fptr)(target);
    checkOpenGLError(__context__,__at__);
}

void glMatrixPopEXT ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXPOPEXTPROC fptr = (PFNGLMATRIXPOPEXTPROC) dasWglGetProcAddress("glMatrixPopEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixPopEXT is NULL");
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2FVEXTPROC) dasWglGetProcAddress("glProgramUniform2fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2fvEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glEnable ( GLenum cap, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEPROC fptr = (PFNGLENABLEPROC) dasWglGetProcAddress("glEnable");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEnable is NULL");
    (*fptr)(cap);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsEnabled ( GLenum cap, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISENABLEDPROC fptr = (PFNGLISENABLEDPROC) dasWglGetProcAddress("glIsEnabled");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsEnabled is NULL");
    auto result = (*fptr)(cap);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glSampleMaski ( GLuint maskNumber, GLbitfield mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLEMASKIPROC fptr = (PFNGLSAMPLEMASKIPROC) dasWglGetProcAddress("glSampleMaski");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSampleMaski is NULL");
    (*fptr)(maskNumber, mask);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureImageEXT ( GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREIMAGEEXTPROC fptr = (PFNGLGETTEXTUREIMAGEEXTPROC) dasWglGetProcAddress("glGetTextureImageEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureImageEXT is NULL");
    (*fptr)(texture, target, level, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glMatrixRotatefEXT ( GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXROTATEFEXTPROC fptr = (PFNGLMATRIXROTATEFEXTPROC) dasWglGetProcAddress("glMatrixRotatefEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixRotatefEXT is NULL");
    (*fptr)(mode, angle, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTextureLayerEXT ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) dasWglGetProcAddress("glNamedFramebufferTextureLayerEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferTextureLayerEXT is NULL");
    (*fptr)(framebuffer, attachment, texture, level, layer);
    checkOpenGLError(__context__,__at__);
}

void glUniform1d ( GLint location, GLdouble x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1DPROC fptr = (PFNGLUNIFORM1DPROC) dasWglGetProcAddress("glUniform1d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1d is NULL");
    (*fptr)(location, x);
    checkOpenGLError(__context__,__at__);
}

void glUniform1fv ( GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1FVPROC fptr = (PFNGLUNIFORM1FVPROC) dasWglGetProcAddress("glUniform1fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1fv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glUniform1ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UI64VNVPROC fptr = (PFNGLUNIFORM1UI64VNVPROC) dasWglGetProcAddress("glUniform1ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1ui64vNV is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstancedARB ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDARBPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDARBPROC) dasWglGetProcAddress("glDrawElementsInstancedARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawElementsInstancedARB is NULL");
    (*fptr)(mode, count, type, indices, primcount);
    checkOpenGLError(__context__,__at__);
}

void glHint ( GLenum target, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLHINTPROC fptr = (PFNGLHINTPROC) dasWglGetProcAddress("glHint");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glHint is NULL");
    (*fptr)(target, mode);
    checkOpenGLError(__context__,__at__);
}

void glGetIntegeri_v ( GLenum target, GLuint index, GLint * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGERI_VPROC fptr = (PFNGLGETINTEGERI_VPROC) dasWglGetProcAddress("glGetIntegeri_v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetIntegeri_v is NULL");
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glBlendFuncSeparatei ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCSEPARATEIPROC fptr = (PFNGLBLENDFUNCSEPARATEIPROC) dasWglGetProcAddress("glBlendFuncSeparatei");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendFuncSeparatei is NULL");
    (*fptr)(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsBuffer ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISBUFFERPROC fptr = (PFNGLISBUFFERPROC) dasWglGetProcAddress("glIsBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsBuffer is NULL");
    auto result = (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glDrawTransformFeedback ( GLenum mode, GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWTRANSFORMFEEDBACKPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glDrawTransformFeedback");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawTransformFeedback is NULL");
    (*fptr)(mode, id);
    checkOpenGLError(__context__,__at__);
}

GLenum glClientWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLIENTWAITSYNCPROC fptr = (PFNGLCLIENTWAITSYNCPROC) dasWglGetProcAddress("glClientWaitSync");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClientWaitSync is NULL");
    auto result = (*fptr)(sync, flags, timeout);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniform1f ( GLint location, GLfloat v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1FPROC fptr = (PFNGLUNIFORM1FPROC) dasWglGetProcAddress("glUniform1f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1f is NULL");
    (*fptr)(location, v0);
    checkOpenGLError(__context__,__at__);
}

void glDrawRangeElements ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWRANGEELEMENTSPROC fptr = (PFNGLDRAWRANGEELEMENTSPROC) dasWglGetProcAddress("glDrawRangeElements");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawRangeElements is NULL");
    (*fptr)(mode, start, end, count, type, indices);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ui ( GLuint program, GLint location, GLuint v0, GLuint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UIPROC fptr = (PFNGLPROGRAMUNIFORM2UIPROC) dasWglGetProcAddress("glProgramUniform2ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2ui is NULL");
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glCopyTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXSUBIMAGE3DPROC fptr = (PFNGLCOPYTEXSUBIMAGE3DPROC) dasWglGetProcAddress("glCopyTexSubImage3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTexSubImage3D is NULL");
    (*fptr)(target, level, xoffset, yoffset, zoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glCreateSamplers ( GLsizei n, GLuint * samplers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESAMPLERSPROC fptr = (PFNGLCREATESAMPLERSPROC) dasWglGetProcAddress("glCreateSamplers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateSamplers is NULL");
    (*fptr)(n, samplers);
    checkOpenGLError(__context__,__at__);
}

void glUniform3i64vARB ( GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3I64VARBPROC fptr = (PFNGLUNIFORM3I64VARBPROC) dasWglGetProcAddress("glUniform3i64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3i64vARB is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayPointeri_vEXT ( GLuint vaobj, GLuint index, GLenum pname, void ** param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC fptr = (PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC) dasWglGetProcAddress("glGetVertexArrayPointeri_vEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexArrayPointeri_vEXT is NULL");
    (*fptr)(vaobj, index, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glUniform1i ( GLint location, GLint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1IPROC fptr = (PFNGLUNIFORM1IPROC) dasWglGetProcAddress("glUniform1i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1i is NULL");
    (*fptr)(location, v0);
    checkOpenGLError(__context__,__at__);
}

void glUniform2i ( GLint location, GLint v0, GLint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2IPROC fptr = (PFNGLUNIFORM2IPROC) dasWglGetProcAddress("glUniform2i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2i is NULL");
    (*fptr)(location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2DVPROC fptr = (PFNGLPROGRAMUNIFORM2DVPROC) dasWglGetProcAddress("glProgramUniform2dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2dv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glPixelStoref ( GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPIXELSTOREFPROC fptr = (PFNGLPIXELSTOREFPROC) dasWglGetProcAddress("glPixelStoref");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPixelStoref is NULL");
    (*fptr)(pname, param);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureSubImage1D ( GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE1DPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) dasWglGetProcAddress("glCopyTextureSubImage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTextureSubImage1D is NULL");
    (*fptr)(texture, level, xoffset, x, y, width);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureImage3DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) dasWglGetProcAddress("glCompressedTextureImage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTextureImage3DEXT is NULL");
    (*fptr)(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformui64vARB ( GLuint program, GLint location, GLsizei bufSize, GLuint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMUI64VARBPROC fptr = (PFNGLGETNUNIFORMUI64VARBPROC) dasWglGetProcAddress("glGetnUniformui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnUniformui64vARB is NULL");
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayFogCoordOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayFogCoordOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayFogCoordOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glGetBooleanv ( GLenum pname, GLboolean * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBOOLEANVPROC fptr = (PFNGLGETBOOLEANVPROC) dasWglGetProcAddress("glGetBooleanv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetBooleanv is NULL");
    (*fptr)(pname, data);
    checkOpenGLError(__context__,__at__);
}

void glStencilThenCoverFillPathNV ( GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILTHENCOVERFILLPATHNVPROC fptr = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC) dasWglGetProcAddress("glStencilThenCoverFillPathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilThenCoverFillPathNV is NULL");
    (*fptr)(path, fillMode, mask, coverMode);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2iv ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2IVPROC fptr = (PFNGLPROGRAMUNIFORM2IVPROC) dasWglGetProcAddress("glProgramUniform2iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2iv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetnCompressedTexImage ( GLenum target, GLint lod, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNCOMPRESSEDTEXIMAGEPROC fptr = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC) dasWglGetProcAddress("glGetnCompressedTexImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnCompressedTexImage is NULL");
    (*fptr)(target, lod, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1sv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1SVPROC fptr = (PFNGLVERTEXATTRIB1SVPROC) dasWglGetProcAddress("glVertexAttrib1sv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib1sv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureLevelParameterfvEXT ( GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) dasWglGetProcAddress("glGetTextureLevelParameterfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureLevelParameterfvEXT is NULL");
    (*fptr)(texture, target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLenum glGetError ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETERRORPROC fptr = (PFNGLGETERRORPROC) dasWglGetProcAddress("glGetError");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetError is NULL");
    auto result = (*fptr)();
    return result;
}

void glPolygonOffsetClamp ( GLfloat factor, GLfloat units, GLfloat clamp, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOLYGONOFFSETCLAMPPROC fptr = (PFNGLPOLYGONOFFSETCLAMPPROC) dasWglGetProcAddress("glPolygonOffsetClamp");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPolygonOffsetClamp is NULL");
    (*fptr)(factor, units, clamp);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformHandleui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64 * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) dasWglGetProcAddress("glProgramUniformHandleui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformHandleui64vNV is NULL");
    (*fptr)(program, location, count, values);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramStageiv ( GLuint program, GLenum shadertype, GLenum pname, GLint * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMSTAGEIVPROC fptr = (PFNGLGETPROGRAMSTAGEIVPROC) dasWglGetProcAddress("glGetProgramStageiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramStageiv is NULL");
    (*fptr)(program, shadertype, pname, values);
    checkOpenGLError(__context__,__at__);
}

void glUniform3ui64ARB ( GLint location, GLuint64 x, GLuint64 y, GLuint64 z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UI64ARBPROC fptr = (PFNGLUNIFORM3UI64ARBPROC) dasWglGetProcAddress("glUniform3ui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3ui64ARB is NULL");
    (*fptr)(location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix3x2fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3X2FVPROC fptr = (PFNGLUNIFORMMATRIX3X2FVPROC) dasWglGetProcAddress("glUniformMatrix3x2fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix3x2fv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetShaderiv ( GLuint shader, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADERIVPROC fptr = (PFNGLGETSHADERIVPROC) dasWglGetProcAddress("glGetShaderiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetShaderiv is NULL");
    (*fptr)(shader, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCreateTransformFeedbacks ( GLsizei n, GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATETRANSFORMFEEDBACKSPROC fptr = (PFNGLCREATETRANSFORMFEEDBACKSPROC) dasWglGetProcAddress("glCreateTransformFeedbacks");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateTransformFeedbacks is NULL");
    (*fptr)(n, ids);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4x3fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4X3FVPROC fptr = (PFNGLUNIFORMMATRIX4X3FVPROC) dasWglGetProcAddress("glUniformMatrix4x3fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix4x3fv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBindImageTexture ( GLuint unit, GLuint texture, GLint level, bool layered, GLint layer, GLenum access, GLenum format, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDIMAGETEXTUREPROC fptr = (PFNGLBINDIMAGETEXTUREPROC) dasWglGetProcAddress("glBindImageTexture");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindImageTexture is NULL");
    (*fptr)(unit, texture, level, layered, layer, access, format);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI2i ( GLuint index, GLint x, GLint y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI2IPROC fptr = (PFNGLVERTEXATTRIBI2IPROC) dasWglGetProcAddress("glVertexAttribI2i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI2i is NULL");
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferPointerv ( GLuint buffer, GLenum pname, void ** params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPOINTERVPROC fptr = (PFNGLGETNAMEDBUFFERPOINTERVPROC) dasWglGetProcAddress("glGetNamedBufferPointerv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedBufferPointerv is NULL");
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1DVPROC fptr = (PFNGLVERTEXATTRIB1DVPROC) dasWglGetProcAddress("glVertexAttrib1dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib1dv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glDisableVertexArrayAttribEXT ( GLuint vaobj, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC fptr = (PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC) dasWglGetProcAddress("glDisableVertexArrayAttribEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDisableVertexArrayAttribEXT is NULL");
    (*fptr)(vaobj, index);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM3UI64VNVPROC) dasWglGetProcAddress("glProgramUniform3ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3ui64vNV is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glTexPageCommitmentMemNV ( GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPAGECOMMITMENTMEMNVPROC fptr = (PFNGLTEXPAGECOMMITMENTMEMNVPROC) dasWglGetProcAddress("glTexPageCommitmentMemNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexPageCommitmentMemNV is NULL");
    (*fptr)(target, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorageMultisample ( GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) dasWglGetProcAddress("glNamedRenderbufferStorageMultisample");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedRenderbufferStorageMultisample is NULL");
    (*fptr)(renderbuffer, samples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameters4fvEXT ( GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameters4fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParameters4fvEXT is NULL");
    (*fptr)(program, target, index, count, params);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayIntegervEXT ( GLuint vaobj, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYINTEGERVEXTPROC fptr = (PFNGLGETVERTEXARRAYINTEGERVEXTPROC) dasWglGetProcAddress("glGetVertexArrayIntegervEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexArrayIntegervEXT is NULL");
    (*fptr)(vaobj, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glPathCoverDepthFuncNV ( GLenum func, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHCOVERDEPTHFUNCNVPROC fptr = (PFNGLPATHCOVERDEPTHFUNCNVPROC) dasWglGetProcAddress("glPathCoverDepthFuncNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathCoverDepthFuncNV is NULL");
    (*fptr)(func);
    checkOpenGLError(__context__,__at__);
}

void glGetPathCoordsNV ( GLuint path, GLfloat * coords, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHCOORDSNVPROC fptr = (PFNGLGETPATHCOORDSNVPROC) dasWglGetProcAddress("glGetPathCoordsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPathCoordsNV is NULL");
    (*fptr)(path, coords);
    checkOpenGLError(__context__,__at__);
}

void glEdgeFlagFormatNV ( GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLEDGEFLAGFORMATNVPROC fptr = (PFNGLEDGEFLAGFORMATNVPROC) dasWglGetProcAddress("glEdgeFlagFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEdgeFlagFormatNV is NULL");
    (*fptr)(stride);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI3uiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI3UIVPROC fptr = (PFNGLVERTEXATTRIBI3UIVPROC) dasWglGetProcAddress("glVertexAttribI3uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI3uiv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glCopyMultiTexSubImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC fptr = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) dasWglGetProcAddress("glCopyMultiTexSubImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyMultiTexSubImage1DEXT is NULL");
    (*fptr)(texunit, target, level, xoffset, x, y, width);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1s ( GLuint index, GLshort x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1SPROC fptr = (PFNGLVERTEXATTRIB1SPROC) dasWglGetProcAddress("glVertexAttrib1s");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib1s is NULL");
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nbv ( GLuint index, const GLbyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NBVPROC fptr = (PFNGLVERTEXATTRIB4NBVPROC) dasWglGetProcAddress("glVertexAttrib4Nbv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4Nbv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UIVPROC fptr = (PFNGLPROGRAMUNIFORM3UIVPROC) dasWglGetProcAddress("glProgramUniform3uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3uiv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM4UI64VNVPROC) dasWglGetProcAddress("glProgramUniform4ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4ui64vNV is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformivARB ( GLuint program, GLint location, GLsizei bufSize, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMIVARBPROC fptr = (PFNGLGETNUNIFORMIVARBPROC) dasWglGetProcAddress("glGetnUniformivARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnUniformivARB is NULL");
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4DPROC fptr = (PFNGLVERTEXATTRIB4DPROC) dasWglGetProcAddress("glVertexAttrib4d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4d is NULL");
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glObjectLabel ( GLenum identifier, GLuint name, GLsizei length, const GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLOBJECTLABELPROC fptr = (PFNGLOBJECTLABELPROC) dasWglGetProcAddress("glObjectLabel");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glObjectLabel is NULL");
    (*fptr)(identifier, name, length, label);
    checkOpenGLError(__context__,__at__);
}

void glUseProgramStages ( GLuint pipeline, GLbitfield stages, GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUSEPROGRAMSTAGESPROC fptr = (PFNGLUSEPROGRAMSTAGESPROC) dasWglGetProcAddress("glUseProgramStages");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUseProgramStages is NULL");
    (*fptr)(pipeline, stages, program);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureImage2DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) dasWglGetProcAddress("glCompressedTextureImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTextureImage2DEXT is NULL");
    (*fptr)(texture, target, level, internalformat, width, height, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParametersI4uivEXT ( GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParametersI4uivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParametersI4uivEXT is NULL");
    (*fptr)(program, target, index, count, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Niv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NIVPROC fptr = (PFNGLVERTEXATTRIB4NIVPROC) dasWglGetProcAddress("glVertexAttrib4Niv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4Niv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4Nsv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4NSVPROC fptr = (PFNGLVERTEXATTRIB4NSVPROC) dasWglGetProcAddress("glVertexAttrib4Nsv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4Nsv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexParameteriEXT ( GLenum texunit, GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERIEXTPROC fptr = (PFNGLMULTITEXPARAMETERIEXTPROC) dasWglGetProcAddress("glMultiTexParameteriEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexParameteriEXT is NULL");
    (*fptr)(texunit, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsSync ( GLsync sync, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISSYNCPROC fptr = (PFNGLISSYNCPROC) dasWglGetProcAddress("glIsSync");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsSync is NULL");
    auto result = (*fptr)(sync);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glVertexAttribL4i64NV ( GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4I64NVPROC fptr = (PFNGLVERTEXATTRIBL4I64NVPROC) dasWglGetProcAddress("glVertexAttribL4i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL4i64NV is NULL");
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayIntegeri_vEXT ( GLuint vaobj, GLuint index, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC fptr = (PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC) dasWglGetProcAddress("glGetVertexArrayIntegeri_vEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexArrayIntegeri_vEXT is NULL");
    (*fptr)(vaobj, index, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glScissorExclusiveNV ( GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSOREXCLUSIVENVPROC fptr = (PFNGLSCISSOREXCLUSIVENVPROC) dasWglGetProcAddress("glScissorExclusiveNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glScissorExclusiveNV is NULL");
    (*fptr)(x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4FPROC fptr = (PFNGLVERTEXATTRIB4FPROC) dasWglGetProcAddress("glVertexAttrib4f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4f is NULL");
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsPointInStrokePathNV ( GLuint path, GLfloat x, GLfloat y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISPOINTINSTROKEPATHNVPROC fptr = (PFNGLISPOINTINSTROKEPATHNVPROC) dasWglGetProcAddress("glIsPointInStrokePathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsPointInStrokePathNV is NULL");
    auto result = (*fptr)(path, x, y);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMultiTexGenfEXT ( GLenum texunit, GLenum coord, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENFEXTPROC fptr = (PFNGLMULTITEXGENFEXTPROC) dasWglGetProcAddress("glMultiTexGenfEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexGenfEXT is NULL");
    (*fptr)(texunit, coord, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM2UI64VARBPROC) dasWglGetProcAddress("glProgramUniform2ui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2ui64vARB is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glShaderStorageBlockBinding ( GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADERSTORAGEBLOCKBINDINGPROC fptr = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) dasWglGetProcAddress("glShaderStorageBlockBinding");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glShaderStorageBlockBinding is NULL");
    (*fptr)(program, storageBlockIndex, storageBlockBinding);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfQueryDataINTEL ( GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint * bytesWritten, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFQUERYDATAINTELPROC fptr = (PFNGLGETPERFQUERYDATAINTELPROC) dasWglGetProcAddress("glGetPerfQueryDataINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPerfQueryDataINTEL is NULL");
    (*fptr)(queryHandle, flags, dataSize, data, bytesWritten);
    checkOpenGLError(__context__,__at__);
}

void glUniform2d ( GLint location, GLdouble x, GLdouble y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2DPROC fptr = (PFNGLUNIFORM2DPROC) dasWglGetProcAddress("glUniform2d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2d is NULL");
    (*fptr)(location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glBindProgramPipeline ( GLuint pipeline, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDPROGRAMPIPELINEPROC fptr = (PFNGLBINDPROGRAMPIPELINEPROC) dasWglGetProcAddress("glBindProgramPipeline");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindProgramPipeline is NULL");
    (*fptr)(pipeline);
    checkOpenGLError(__context__,__at__);
}

void glPolygonMode ( GLenum face, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOLYGONMODEPROC fptr = (PFNGLPOLYGONMODEPROC) dasWglGetProcAddress("glPolygonMode");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPolygonMode is NULL");
    (*fptr)(face, mode);
    checkOpenGLError(__context__,__at__);
}

void glUniform1iv ( GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1IVPROC fptr = (PFNGLUNIFORM1IVPROC) dasWglGetProcAddress("glUniform1iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1iv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformui64vARB ( GLuint program, GLint location, GLuint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMUI64VARBPROC fptr = (PFNGLGETUNIFORMUI64VARBPROC) dasWglGetProcAddress("glGetUniformui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformui64vARB is NULL");
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glClearColor ( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARCOLORPROC fptr = (PFNGLCLEARCOLORPROC) dasWglGetProcAddress("glClearColor");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearColor is NULL");
    (*fptr)(red, green, blue, alpha);
    checkOpenGLError(__context__,__at__);
}

void glCopyTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXIMAGE2DPROC fptr = (PFNGLCOPYTEXIMAGE2DPROC) dasWglGetProcAddress("glCopyTexImage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTexImage2D is NULL");
    (*fptr)(target, level, internalformat, x, y, width, height, border);
    checkOpenGLError(__context__,__at__);
}

const GLubyte * glGetStringi ( GLenum name, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSTRINGIPROC fptr = (PFNGLGETSTRINGIPROC) dasWglGetProcAddress("glGetStringi");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetStringi is NULL");
    auto result = (*fptr)(name, index);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetActiveUniformBlockiv ( GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEUNIFORMBLOCKIVPROC fptr = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) dasWglGetProcAddress("glGetActiveUniformBlockiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetActiveUniformBlockiv is NULL");
    (*fptr)(program, uniformBlockIndex, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterfv ( GLuint texture, GLenum pname, const GLfloat * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERFVPROC fptr = (PFNGLTEXTUREPARAMETERFVPROC) dasWglGetProcAddress("glTextureParameterfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameterfv is NULL");
    (*fptr)(texture, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x2dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4x2dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4x2dvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM2I64VNVPROC) dasWglGetProcAddress("glProgramUniform2i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2i64vNV is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glStencilStrokePathNV ( GLuint path, GLint reference, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILSTROKEPATHNVPROC fptr = (PFNGLSTENCILSTROKEPATHNVPROC) dasWglGetProcAddress("glStencilStrokePathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilStrokePathNV is NULL");
    (*fptr)(path, reference, mask);
    checkOpenGLError(__context__,__at__);
}

void glUniform2f ( GLint location, GLfloat v0, GLfloat v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2FPROC fptr = (PFNGLUNIFORM2FPROC) dasWglGetProcAddress("glUniform2f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2f is NULL");
    (*fptr)(location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glUniform1dv ( GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1DVPROC fptr = (PFNGLUNIFORM1DVPROC) dasWglGetProcAddress("glUniform1dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1dv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glStateCaptureNV ( GLuint state, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTATECAPTURENVPROC fptr = (PFNGLSTATECAPTURENVPROC) dasWglGetProcAddress("glStateCaptureNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStateCaptureNV is NULL");
    (*fptr)(state, mode);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2s ( GLuint index, GLshort x, GLshort y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2SPROC fptr = (PFNGLVERTEXATTRIB2SPROC) dasWglGetProcAddress("glVertexAttrib2s");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib2s is NULL");
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetCommandHeaderNV ( GLenum tokenID, GLuint size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMMANDHEADERNVPROC fptr = (PFNGLGETCOMMANDHEADERNVPROC) dasWglGetProcAddress("glGetCommandHeaderNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetCommandHeaderNV is NULL");
    auto result = (*fptr)(tokenID, size);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glTextureStorage3D ( GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE3DPROC fptr = (PFNGLTEXTURESTORAGE3DPROC) dasWglGetProcAddress("glTextureStorage3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureStorage3D is NULL");
    (*fptr)(texture, levels, internalformat, width, height, depth);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameteriv ( GLuint texture, GLenum pname, const GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIVPROC fptr = (PFNGLTEXTUREPARAMETERIVPROC) dasWglGetProcAddress("glTextureParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameteriv is NULL");
    (*fptr)(texture, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3ui64vNV ( GLuint index, const GLuint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL3UI64VNVPROC) dasWglGetProcAddress("glVertexAttribL3ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL3ui64vNV is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsQuery ( GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISQUERYPROC fptr = (PFNGLISQUERYPROC) dasWglGetProcAddress("glIsQuery");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsQuery is NULL");
    auto result = (*fptr)(id);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform2fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2FVPROC fptr = (PFNGLPROGRAMUNIFORM2FVPROC) dasWglGetProcAddress("glProgramUniform2fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2fv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetTransformFeedbacki64_v ( GLuint xfb, GLenum pname, GLuint index, GLint64 * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTRANSFORMFEEDBACKI64_VPROC fptr = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) dasWglGetProcAddress("glGetTransformFeedbacki64_v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTransformFeedbacki64_v is NULL");
    (*fptr)(xfb, pname, index, param);
    checkOpenGLError(__context__,__at__);
}

void glEGLImageTargetTextureStorageEXT ( GLuint texture, GLeglImageOES image, const GLint * attrib_list, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC fptr = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) dasWglGetProcAddress("glEGLImageTargetTextureStorageEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEGLImageTargetTextureStorageEXT is NULL");
    (*fptr)(texture, image, attrib_list);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageCallbackARB ( GLDEBUGPROCARB callback, const void * userParam, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGECALLBACKARBPROC fptr = (PFNGLDEBUGMESSAGECALLBACKARBPROC) dasWglGetProcAddress("glDebugMessageCallbackARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDebugMessageCallbackARB is NULL");
    (*fptr)(callback, userParam);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexParameterIivEXT ( GLenum texunit, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXPARAMETERIIVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC) dasWglGetProcAddress("glGetMultiTexParameterIivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexParameterIivEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glDrawTransformFeedbackStreamInstanced ( GLenum mode, GLuint id, GLuint stream, GLsizei instancecount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) dasWglGetProcAddress("glDrawTransformFeedbackStreamInstanced");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawTransformFeedbackStreamInstanced is NULL");
    (*fptr)(mode, id, stream, instancecount);
    checkOpenGLError(__context__,__at__);
}

void glMakeTextureHandleNonResidentNV ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC fptr = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) dasWglGetProcAddress("glMakeTextureHandleNonResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeTextureHandleNonResidentNV is NULL");
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE2DEXTPROC fptr = (PFNGLTEXTURESUBIMAGE2DEXTPROC) dasWglGetProcAddress("glTextureSubImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureSubImage2DEXT is NULL");
    (*fptr)(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureImage1DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTUREIMAGE1DEXTPROC fptr = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC) dasWglGetProcAddress("glCopyTextureImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTextureImage1DEXT is NULL");
    (*fptr)(texture, target, level, internalformat, x, y, width, border);
    checkOpenGLError(__context__,__at__);
}

void glProgramParameteri ( GLuint program, GLenum pname, GLint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMPARAMETERIPROC fptr = (PFNGLPROGRAMPARAMETERIPROC) dasWglGetProcAddress("glProgramParameteri");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramParameteri is NULL");
    (*fptr)(program, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glDepthFunc ( GLenum func, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHFUNCPROC fptr = (PFNGLDEPTHFUNCPROC) dasWglGetProcAddress("glDepthFunc");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDepthFunc is NULL");
    (*fptr)(func);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayIndexediv ( GLuint vaobj, GLuint index, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYINDEXEDIVPROC fptr = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) dasWglGetProcAddress("glGetVertexArrayIndexediv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexArrayIndexediv is NULL");
    (*fptr)(vaobj, index, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramResourcefvNV ( GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCEFVNVPROC fptr = (PFNGLGETPROGRAMRESOURCEFVNVPROC) dasWglGetProcAddress("glGetProgramResourcefvNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramResourcefvNV is NULL");
    (*fptr)(program, programInterface, index, propCount, props, count, length, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexArraySecondaryColorOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC fptr = (PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC) dasWglGetProcAddress("glVertexArraySecondaryColorOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArraySecondaryColorOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glGetFirstPerfQueryIdINTEL ( GLuint * queryId, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFIRSTPERFQUERYIDINTELPROC fptr = (PFNGLGETFIRSTPERFQUERYIDINTELPROC) dasWglGetProcAddress("glGetFirstPerfQueryIdINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFirstPerfQueryIdINTEL is NULL");
    (*fptr)(queryId);
    checkOpenGLError(__context__,__at__);
}

void glReadnPixelsARB ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLREADNPIXELSARBPROC fptr = (PFNGLREADNPIXELSARBPROC) dasWglGetProcAddress("glReadnPixelsARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glReadnPixelsARB is NULL");
    (*fptr)(x, y, width, height, format, type, bufSize, data);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix3x2dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3X2DVPROC fptr = (PFNGLUNIFORMMATRIX3X2DVPROC) dasWglGetProcAddress("glUniformMatrix3x2dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix3x2dv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetTexParameterIuiv ( GLenum target, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXPARAMETERIUIVPROC fptr = (PFNGLGETTEXPARAMETERIUIVPROC) dasWglGetProcAddress("glGetTexParameterIuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTexParameterIuiv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniform3ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UI64VNVPROC fptr = (PFNGLUNIFORM3UI64VNVPROC) dasWglGetProcAddress("glUniform3ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3ui64vNV is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4x3dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4X3DVPROC fptr = (PFNGLUNIFORMMATRIX4X3DVPROC) dasWglGetProcAddress("glUniformMatrix4x3dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix4x3dv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedFramebufferParameteriv ( GLuint framebuffer, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetNamedFramebufferParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedFramebufferParameteriv is NULL");
    (*fptr)(framebuffer, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstancedBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) dasWglGetProcAddress("glDrawElementsInstancedBaseInstance");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawElementsInstancedBaseInstance is NULL");
    (*fptr)(mode, count, type, indices, instancecount, baseinstance);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterIiv ( GLuint texture, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIIVPROC fptr = (PFNGLGETTEXTUREPARAMETERIIVPROC) dasWglGetProcAddress("glGetTextureParameterIiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureParameterIiv is NULL");
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1fv ( GLuint index, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1FVPROC fptr = (PFNGLVERTEXATTRIB1FVPROC) dasWglGetProcAddress("glVertexAttrib1fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib1fv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glPopDebugGroup ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOPDEBUGGROUPPROC fptr = (PFNGLPOPDEBUGGROUPPROC) dasWglGetProcAddress("glPopDebugGroup");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPopDebugGroup is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsTextureHandleResidentARB ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISTEXTUREHANDLERESIDENTARBPROC fptr = (PFNGLISTEXTUREHANDLERESIDENTARBPROC) dasWglGetProcAddress("glIsTextureHandleResidentARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsTextureHandleResidentARB is NULL");
    auto result = (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetNamedStringARB ( GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDSTRINGARBPROC fptr = (PFNGLGETNAMEDSTRINGARBPROC) dasWglGetProcAddress("glGetNamedStringARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedStringARB is NULL");
    (*fptr)(namelen, name, bufSize, stringlen, string);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryObjectui64v ( GLuint id, GLenum pname, GLuint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYOBJECTUI64VPROC fptr = (PFNGLGETQUERYOBJECTUI64VPROC) dasWglGetProcAddress("glGetQueryObjectui64v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetQueryObjectui64v is NULL");
    (*fptr)(id, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glBlendBarrierKHR ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDBARRIERKHRPROC fptr = (PFNGLBLENDBARRIERKHRPROC) dasWglGetProcAddress("glBlendBarrierKHR");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendBarrierKHR is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glGetPointerIndexedvEXT ( GLenum target, GLuint index, void ** data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPOINTERINDEXEDVEXTPROC fptr = (PFNGLGETPOINTERINDEXEDVEXTPROC) dasWglGetProcAddress("glGetPointerIndexedvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPointerIndexedvEXT is NULL");
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexSubImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexSubImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedMultiTexSubImage2DEXT is NULL");
    (*fptr)(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramPipelineiv ( GLuint pipeline, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMPIPELINEIVPROC fptr = (PFNGLGETPROGRAMPIPELINEIVPROC) dasWglGetProcAddress("glGetProgramPipelineiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramPipelineiv is NULL");
    (*fptr)(pipeline, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGenerateTextureMipmapEXT ( GLuint texture, GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENERATETEXTUREMIPMAPEXTPROC fptr = (PFNGLGENERATETEXTUREMIPMAPEXTPROC) dasWglGetProcAddress("glGenerateTextureMipmapEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenerateTextureMipmapEXT is NULL");
    (*fptr)(texture, target);
    checkOpenGLError(__context__,__at__);
}

void glDeleteSync ( GLsync sync, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETESYNCPROC fptr = (PFNGLDELETESYNCPROC) dasWglGetProcAddress("glDeleteSync");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteSync is NULL");
    (*fptr)(sync);
    checkOpenGLError(__context__,__at__);
}

void glGetDoublei_v ( GLenum target, GLuint index, GLdouble * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDOUBLEI_VPROC fptr = (PFNGLGETDOUBLEI_VPROC) dasWglGetProcAddress("glGetDoublei_v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetDoublei_v is NULL");
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glDeleteQueries ( GLsizei n, const GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEQUERIESPROC fptr = (PFNGLDELETEQUERIESPROC) dasWglGetProcAddress("glDeleteQueries");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteQueries is NULL");
    (*fptr)(n, ids);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3s ( GLuint index, GLshort x, GLshort y, GLshort z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3SPROC fptr = (PFNGLVERTEXATTRIB3SPROC) dasWglGetProcAddress("glVertexAttrib3s");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib3s is NULL");
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3uiEXT ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM3UIEXTPROC) dasWglGetProcAddress("glProgramUniform3uiEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3uiEXT is NULL");
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage2DMultisampleEXT ( GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC fptr = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC) dasWglGetProcAddress("glTextureStorage2DMultisampleEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureStorage2DMultisampleEXT is NULL");
    (*fptr)(texture, target, samples, internalformat, width, height, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glGetAttachedShaders ( GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETATTACHEDSHADERSPROC fptr = (PFNGLGETATTACHEDSHADERSPROC) dasWglGetProcAddress("glGetAttachedShaders");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetAttachedShaders is NULL");
    (*fptr)(program, maxCount, count, shaders);
    checkOpenGLError(__context__,__at__);
}

void glUniform1ui ( GLint location, GLuint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UIPROC fptr = (PFNGLUNIFORM1UIPROC) dasWglGetProcAddress("glUniform1ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1ui is NULL");
    (*fptr)(location, v0);
    checkOpenGLError(__context__,__at__);
}

void glWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLWAITSYNCPROC fptr = (PFNGLWAITSYNCPROC) dasWglGetProcAddress("glWaitSync");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glWaitSync is NULL");
    (*fptr)(sync, flags, timeout);
    checkOpenGLError(__context__,__at__);
}

void glEnableVertexArrayAttrib ( GLuint vaobj, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEVERTEXARRAYATTRIBPROC fptr = (PFNGLENABLEVERTEXARRAYATTRIBPROC) dasWglGetProcAddress("glEnableVertexArrayAttrib");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEnableVertexArrayAttrib is NULL");
    (*fptr)(vaobj, index);
    checkOpenGLError(__context__,__at__);
}

void glCompileCommandListNV ( GLuint list, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPILECOMMANDLISTNVPROC fptr = (PFNGLCOMPILECOMMANDLISTNVPROC) dasWglGetProcAddress("glCompileCommandListNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompileCommandListNV is NULL");
    (*fptr)(list);
    checkOpenGLError(__context__,__at__);
}

void glUniform4ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UI64VNVPROC fptr = (PFNGLUNIFORM4UI64VNVPROC) dasWglGetProcAddress("glUniform4ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4ui64vNV is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glClampColor ( GLenum target, GLenum clamp, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLAMPCOLORPROC fptr = (PFNGLCLAMPCOLORPROC) dasWglGetProcAddress("glClampColor");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClampColor is NULL");
    (*fptr)(target, clamp);
    checkOpenGLError(__context__,__at__);
}

void glUniform3ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UIPROC fptr = (PFNGLUNIFORM3UIPROC) dasWglGetProcAddress("glUniform3ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3ui is NULL");
    (*fptr)(location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2UIVEXTPROC) dasWglGetProcAddress("glProgramUniform2uivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2uivEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glBufferPageCommitmentMemNV ( GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERPAGECOMMITMENTMEMNVPROC fptr = (PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) dasWglGetProcAddress("glBufferPageCommitmentMemNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBufferPageCommitmentMemNV is NULL");
    (*fptr)(target, offset, size, memory, memOffset, commit);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArraysIndirect ( GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) dasWglGetProcAddress("glMultiDrawArraysIndirect");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawArraysIndirect is NULL");
    (*fptr)(mode, indirect, drawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glDeletePathsNV ( GLuint path, GLsizei range, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEPATHSNVPROC fptr = (PFNGLDELETEPATHSNVPROC) dasWglGetProcAddress("glDeletePathsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeletePathsNV is NULL");
    (*fptr)(path, range);
    checkOpenGLError(__context__,__at__);
}

void glInterpolatePathsNV ( GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINTERPOLATEPATHSNVPROC fptr = (PFNGLINTERPOLATEPATHSNVPROC) dasWglGetProcAddress("glInterpolatePathsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glInterpolatePathsNV is NULL");
    (*fptr)(resultPath, pathA, pathB, weight);
    checkOpenGLError(__context__,__at__);
}

void glDeleteTransformFeedbacks ( GLsizei n, const GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETETRANSFORMFEEDBACKSPROC fptr = (PFNGLDELETETRANSFORMFEEDBACKSPROC) dasWglGetProcAddress("glDeleteTransformFeedbacks");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteTransformFeedbacks is NULL");
    (*fptr)(n, ids);
    checkOpenGLError(__context__,__at__);
}

void glPopGroupMarkerEXT ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOPGROUPMARKEREXTPROC fptr = (PFNGLPOPGROUPMARKEREXTPROC) dasWglGetProcAddress("glPopGroupMarkerEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPopGroupMarkerEXT is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSUBIMAGE2DPROC fptr = (PFNGLTEXSUBIMAGE2DPROC) dasWglGetProcAddress("glTexSubImage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexSubImage2D is NULL");
    (*fptr)(target, level, xoffset, yoffset, width, height, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGenSamplers ( GLsizei count, GLuint * samplers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENSAMPLERSPROC fptr = (PFNGLGENSAMPLERSPROC) dasWglGetProcAddress("glGenSamplers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenSamplers is NULL");
    (*fptr)(count, samplers);
    checkOpenGLError(__context__,__at__);
}

void glPolygonOffset ( GLfloat factor, GLfloat units, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOLYGONOFFSETPROC fptr = (PFNGLPOLYGONOFFSETPROC) dasWglGetProcAddress("glPolygonOffset");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPolygonOffset is NULL");
    (*fptr)(factor, units);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedProgramLocalParameterfvEXT ( GLuint program, GLenum target, GLuint index, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) dasWglGetProcAddress("glGetNamedProgramLocalParameterfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedProgramLocalParameterfvEXT is NULL");
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glTexParameterf ( GLenum target, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERFPROC fptr = (PFNGLTEXPARAMETERFPROC) dasWglGetProcAddress("glTexParameterf");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexParameterf is NULL");
    (*fptr)(target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3FVEXTPROC) dasWglGetProcAddress("glProgramUniform3fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3fvEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glMinSampleShading ( GLfloat value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMINSAMPLESHADINGPROC fptr = (PFNGLMINSAMPLESHADINGPROC) dasWglGetProcAddress("glMinSampleShading");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMinSampleShading is NULL");
    (*fptr)(value);
    checkOpenGLError(__context__,__at__);
}

void glDrawVkImageNV ( GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWVKIMAGENVPROC fptr = (PFNGLDRAWVKIMAGENVPROC) dasWglGetProcAddress("glDrawVkImageNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawVkImageNV is NULL");
    (*fptr)(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
    checkOpenGLError(__context__,__at__);
}

void glCopyTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXIMAGE1DPROC fptr = (PFNGLCOPYTEXIMAGE1DPROC) dasWglGetProcAddress("glCopyTexImage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTexImage1D is NULL");
    (*fptr)(target, level, internalformat, x, y, width, border);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryBufferObjectuiv ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYBUFFEROBJECTUIVPROC fptr = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) dasWglGetProcAddress("glGetQueryBufferObjectuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetQueryBufferObjectuiv is NULL");
    (*fptr)(id, buffer, pname, offset);
    checkOpenGLError(__context__,__at__);
}

void glUseProgram ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUSEPROGRAMPROC fptr = (PFNGLUSEPROGRAMPROC) dasWglGetProcAddress("glUseProgram");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUseProgram is NULL");
    (*fptr)(program);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayBindingDivisor ( GLuint vaobj, GLuint bindingindex, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYBINDINGDIVISORPROC fptr = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) dasWglGetProcAddress("glVertexArrayBindingDivisor");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayBindingDivisor is NULL");
    (*fptr)(vaobj, bindingindex, divisor);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryBufferObjecti64v ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYBUFFEROBJECTI64VPROC fptr = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) dasWglGetProcAddress("glGetQueryBufferObjecti64v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetQueryBufferObjecti64v is NULL");
    (*fptr)(id, buffer, pname, offset);
    checkOpenGLError(__context__,__at__);
}

void glFrontFace ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRONTFACEPROC fptr = (PFNGLFRONTFACEPROC) dasWglGetProcAddress("glFrontFace");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFrontFace is NULL");
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1f ( GLuint index, GLfloat x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1FPROC fptr = (PFNGLVERTEXATTRIB1FPROC) dasWglGetProcAddress("glVertexAttrib1f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib1f is NULL");
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glBindRenderbuffer ( GLenum target, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDRENDERBUFFERPROC fptr = (PFNGLBINDRENDERBUFFERPROC) dasWglGetProcAddress("glBindRenderbuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindRenderbuffer is NULL");
    (*fptr)(target, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glCreateQueries ( GLenum target, GLsizei n, GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEQUERIESPROC fptr = (PFNGLCREATEQUERIESPROC) dasWglGetProcAddress("glCreateQueries");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateQueries is NULL");
    (*fptr)(target, n, ids);
    checkOpenGLError(__context__,__at__);
}

void glGetBufferPointerv ( GLenum target, GLenum pname, void ** params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBUFFERPOINTERVPROC fptr = (PFNGLGETBUFFERPOINTERVPROC) dasWglGetProcAddress("glGetBufferPointerv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetBufferPointerv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glScissor ( GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSORPROC fptr = (PFNGLSCISSORPROC) dasWglGetProcAddress("glScissor");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glScissor is NULL");
    (*fptr)(x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glBindVertexBuffers ( GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDVERTEXBUFFERSPROC fptr = (PFNGLBINDVERTEXBUFFERSPROC) dasWglGetProcAddress("glBindVertexBuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindVertexBuffers is NULL");
    (*fptr)(first, count, buffers, offsets, strides);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageControlARB ( GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, bool enabled, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGECONTROLARBPROC fptr = (PFNGLDEBUGMESSAGECONTROLARBPROC) dasWglGetProcAddress("glDebugMessageControlARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDebugMessageControlARB is NULL");
    (*fptr)(source, type, severity, count, ids, enabled);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferAttachMemoryNV ( GLuint buffer, GLuint memory, GLuint64 offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERATTACHMEMORYNVPROC fptr = (PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) dasWglGetProcAddress("glNamedBufferAttachMemoryNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedBufferAttachMemoryNV is NULL");
    (*fptr)(buffer, memory, offset);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib1d ( GLuint index, GLdouble x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB1DPROC fptr = (PFNGLVERTEXATTRIB1DPROC) dasWglGetProcAddress("glVertexAttrib1d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib1d is NULL");
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glRenderbufferStorageMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC fptr = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) dasWglGetProcAddress("glRenderbufferStorageMultisample");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glRenderbufferStorageMultisample is NULL");
    (*fptr)(target, samples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glUniform1i64ARB ( GLint location, GLint64 x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1I64ARBPROC fptr = (PFNGLUNIFORM1I64ARBPROC) dasWglGetProcAddress("glUniform1i64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1i64ARB is NULL");
    (*fptr)(location, x);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP4uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP4UIVPROC fptr = (PFNGLVERTEXATTRIBP4UIVPROC) dasWglGetProcAddress("glVertexAttribP4uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribP4uiv is NULL");
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterivEXT ( GLuint texture, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetTextureParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureParameterivEXT is NULL");
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4s ( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4SPROC fptr = (PFNGLVERTEXATTRIB4SPROC) dasWglGetProcAddress("glVertexAttrib4s");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4s is NULL");
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsTextureHandleResidentNV ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISTEXTUREHANDLERESIDENTNVPROC fptr = (PFNGLISTEXTUREHANDLERESIDENTNVPROC) dasWglGetProcAddress("glIsTextureHandleResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsTextureHandleResidentNV is NULL");
    auto result = (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glNamedProgramLocalParameterI4iEXT ( GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameterI4iEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParameterI4iEXT is NULL");
    (*fptr)(program, target, index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glShadingRateSampleOrderNV ( GLenum order, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADINGRATESAMPLEORDERNVPROC fptr = (PFNGLSHADINGRATESAMPLEORDERNVPROC) dasWglGetProcAddress("glShadingRateSampleOrderNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glShadingRateSampleOrderNV is NULL");
    (*fptr)(order);
    checkOpenGLError(__context__,__at__);
}

void glBindAttribLocation ( GLuint program, GLuint index, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDATTRIBLOCATIONPROC fptr = (PFNGLBINDATTRIBLOCATIONPROC) dasWglGetProcAddress("glBindAttribLocation");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindAttribLocation is NULL");
    (*fptr)(program, index, name);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetProgramResourceIndex ( GLuint program, GLenum programInterface, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCEINDEXPROC fptr = (PFNGLGETPROGRAMRESOURCEINDEXPROC) dasWglGetProcAddress("glGetProgramResourceIndex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramResourceIndex is NULL");
    auto result = (*fptr)(program, programInterface, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMultiDrawElements ( GLenum mode, const GLsizei * count, GLenum type, const void *const * indices, GLsizei drawcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSPROC fptr = (PFNGLMULTIDRAWELEMENTSPROC) dasWglGetProcAddress("glMultiDrawElements");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawElements is NULL");
    (*fptr)(mode, count, type, indices, drawcount);
    checkOpenGLError(__context__,__at__);
}

void glUniform3iv ( GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3IVPROC fptr = (PFNGLUNIFORM3IVPROC) dasWglGetProcAddress("glUniform3iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3iv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glTexParameteri ( GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERIPROC fptr = (PFNGLTEXPARAMETERIPROC) dasWglGetProcAddress("glTexParameteri");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexParameteri is NULL");
    (*fptr)(target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI3i ( GLuint index, GLint x, GLint y, GLint z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI3IPROC fptr = (PFNGLVERTEXATTRIBI3IPROC) dasWglGetProcAddress("glVertexAttribI3i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI3i is NULL");
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glDrawRangeElementsBaseVertex ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC fptr = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) dasWglGetProcAddress("glDrawRangeElementsBaseVertex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawRangeElementsBaseVertex is NULL");
    (*fptr)(mode, start, end, count, type, indices, basevertex);
    checkOpenGLError(__context__,__at__);
}

void glTexBufferRange ( GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXBUFFERRANGEPROC fptr = (PFNGLTEXBUFFERRANGEPROC) dasWglGetProcAddress("glTexBufferRange");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexBufferRange is NULL");
    (*fptr)(target, internalformat, buffer, offset, size);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferData ( GLuint buffer, GLsizeiptr size, const void * data, GLenum usage, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERDATAPROC fptr = (PFNGLNAMEDBUFFERDATAPROC) dasWglGetProcAddress("glNamedBufferData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedBufferData is NULL");
    (*fptr)(buffer, size, data, usage);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureImage2DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTUREIMAGE2DEXTPROC fptr = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC) dasWglGetProcAddress("glCopyTextureImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTextureImage2DEXT is NULL");
    (*fptr)(texture, target, level, internalformat, x, y, width, height, border);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1DVEXTPROC) dasWglGetProcAddress("glProgramUniform1dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1dvEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glBlitNamedFramebuffer ( GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLITNAMEDFRAMEBUFFERPROC fptr = (PFNGLBLITNAMEDFRAMEBUFFERPROC) dasWglGetProcAddress("glBlitNamedFramebuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlitNamedFramebuffer is NULL");
    (*fptr)(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1ui64ARB ( GLuint index, GLuint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1UI64ARBPROC fptr = (PFNGLVERTEXATTRIBL1UI64ARBPROC) dasWglGetProcAddress("glVertexAttribL1ui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL1ui64ARB is NULL");
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribFormatEXT ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, bool normalized, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribFormatEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexAttribFormatEXT is NULL");
    (*fptr)(vaobj, attribindex, size, type, normalized, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glApplyFramebufferAttachmentCMAAINTEL ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC fptr = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) dasWglGetProcAddress("glApplyFramebufferAttachmentCMAAINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glApplyFramebufferAttachmentCMAAINTEL is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glMultiTexParameterfvEXT ( GLenum texunit, GLenum target, GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERFVEXTPROC fptr = (PFNGLMULTITEXPARAMETERFVEXTPROC) dasWglGetProcAddress("glMultiTexParameterfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexParameterfvEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniform3fv ( GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3FVPROC fptr = (PFNGLUNIFORM3FVPROC) dasWglGetProcAddress("glUniform3fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3fv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameter4dEXT ( GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameter4dEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParameter4dEXT is NULL");
    (*fptr)(program, target, index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2DVPROC fptr = (PFNGLVERTEXATTRIBL2DVPROC) dasWglGetProcAddress("glVertexAttribL2dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL2dv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glUniform4i64ARB ( GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4I64ARBPROC fptr = (PFNGLUNIFORM4I64ARBPROC) dasWglGetProcAddress("glUniform4i64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4i64ARB is NULL");
    (*fptr)(location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferSampleLocationsfvNV ( GLenum target, GLuint start, GLsizei count, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC fptr = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) dasWglGetProcAddress("glFramebufferSampleLocationsfvNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferSampleLocationsfvNV is NULL");
    (*fptr)(target, start, count, v);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquationSeparateiARB ( GLuint buf, GLenum modeRGB, GLenum modeAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONSEPARATEIARBPROC fptr = (PFNGLBLENDEQUATIONSEPARATEIARBPROC) dasWglGetProcAddress("glBlendEquationSeparateiARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendEquationSeparateiARB is NULL");
    (*fptr)(buf, modeRGB, modeAlpha);
    checkOpenGLError(__context__,__at__);
}

void glGenBuffers ( GLsizei n, GLuint * buffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENBUFFERSPROC fptr = (PFNGLGENBUFFERSPROC) dasWglGetProcAddress("glGenBuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenBuffers is NULL");
    (*fptr)(n, buffers);
    checkOpenGLError(__context__,__at__);
}

void glUniform3i ( GLint location, GLint v0, GLint v1, GLint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3IPROC fptr = (PFNGLUNIFORM3IPROC) dasWglGetProcAddress("glUniform3i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3i is NULL");
    (*fptr)(location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glUniform4i ( GLint location, GLint v0, GLint v1, GLint v2, GLint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4IPROC fptr = (PFNGLUNIFORM4IPROC) dasWglGetProcAddress("glUniform4i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4i is NULL");
    (*fptr)(location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateTexImage ( GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATETEXIMAGEPROC fptr = (PFNGLINVALIDATETEXIMAGEPROC) dasWglGetProcAddress("glInvalidateTexImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glInvalidateTexImage is NULL");
    (*fptr)(texture, level);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribLui64vNV ( GLuint index, GLenum pname, GLuint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBLUI64VNVPROC fptr = (PFNGLGETVERTEXATTRIBLUI64VNVPROC) dasWglGetProcAddress("glGetVertexAttribLui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexAttribLui64vNV is NULL");
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetFloati_v ( GLenum target, GLuint index, GLfloat * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFLOATI_VPROC fptr = (PFNGLGETFLOATI_VPROC) dasWglGetProcAddress("glGetFloati_v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFloati_v is NULL");
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glCopyMultiTexSubImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC fptr = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) dasWglGetProcAddress("glCopyMultiTexSubImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyMultiTexSubImage2DEXT is NULL");
    (*fptr)(texunit, target, level, xoffset, yoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArrays ( GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSPROC fptr = (PFNGLMULTIDRAWARRAYSPROC) dasWglGetProcAddress("glMultiDrawArrays");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawArrays is NULL");
    (*fptr)(mode, first, count, drawcount);
    checkOpenGLError(__context__,__at__);
}

void * glMapNamedBufferEXT ( GLuint buffer, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPNAMEDBUFFEREXTPROC fptr = (PFNGLMAPNAMEDBUFFEREXTPROC) dasWglGetProcAddress("glMapNamedBufferEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMapNamedBufferEXT is NULL");
    auto result = (*fptr)(buffer, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLuint64 glGetImageHandleARB ( GLuint texture, GLint level, bool layered, GLint layer, GLenum format, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETIMAGEHANDLEARBPROC fptr = (PFNGLGETIMAGEHANDLEARBPROC) dasWglGetProcAddress("glGetImageHandleARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetImageHandleARB is NULL");
    auto result = (*fptr)(texture, level, layered, layer, format);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniform2i64ARB ( GLint location, GLint64 x, GLint64 y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2I64ARBPROC fptr = (PFNGLUNIFORM2I64ARBPROC) dasWglGetProcAddress("glUniform2i64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2i64ARB is NULL");
    (*fptr)(location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glCopyTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXSUBIMAGE2DPROC fptr = (PFNGLCOPYTEXSUBIMAGE2DPROC) dasWglGetProcAddress("glCopyTexSubImage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTexSubImage2D is NULL");
    (*fptr)(target, level, xoffset, yoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glUseShaderProgramEXT ( GLenum type, GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUSESHADERPROGRAMEXTPROC fptr = (PFNGLUSESHADERPROGRAMEXTPROC) dasWglGetProcAddress("glUseShaderProgramEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUseShaderProgramEXT is NULL");
    (*fptr)(type, program);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribIFormat ( GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBIFORMATPROC fptr = (PFNGLVERTEXATTRIBIFORMATPROC) dasWglGetProcAddress("glVertexAttribIFormat");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribIFormat is NULL");
    (*fptr)(attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfQueryInfoINTEL ( GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFQUERYINFOINTELPROC fptr = (PFNGLGETPERFQUERYINFOINTELPROC) dasWglGetProcAddress("glGetPerfQueryInfoINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPerfQueryInfoINTEL is NULL");
    (*fptr)(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterIivEXT ( GLuint texture, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIIVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC) dasWglGetProcAddress("glGetTextureParameterIivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureParameterIivEXT is NULL");
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateNamedFramebufferSubData ( GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC fptr = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) dasWglGetProcAddress("glInvalidateNamedFramebufferSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glInvalidateNamedFramebufferSubData is NULL");
    (*fptr)(framebuffer, numAttachments, attachments, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glGetInternalformati64v ( GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTERNALFORMATI64VPROC fptr = (PFNGLGETINTERNALFORMATI64VPROC) dasWglGetProcAddress("glGetInternalformati64v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetInternalformati64v is NULL");
    (*fptr)(target, internalformat, pname, count, params);
    checkOpenGLError(__context__,__at__);
}

void glTexBufferARB ( GLenum target, GLenum internalformat, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXBUFFERARBPROC fptr = (PFNGLTEXBUFFERARBPROC) dasWglGetProcAddress("glTexBufferARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexBufferARB is NULL");
    (*fptr)(target, internalformat, buffer);
    checkOpenGLError(__context__,__at__);
}

void glGetTexParameterIiv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXPARAMETERIIVPROC fptr = (PFNGLGETTEXPARAMETERIIVPROC) dasWglGetProcAddress("glGetTexParameterIiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTexParameterIiv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4DVEXTPROC) dasWglGetProcAddress("glProgramUniform4dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4dvEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glWeightPathsNV ( GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLWEIGHTPATHSNVPROC fptr = (PFNGLWEIGHTPATHSNVPROC) dasWglGetProcAddress("glWeightPathsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glWeightPathsNV is NULL");
    (*fptr)(resultPath, numPaths, paths, weights);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribLi64vNV ( GLuint index, GLenum pname, GLint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBLI64VNVPROC fptr = (PFNGLGETVERTEXATTRIBLI64VNVPROC) dasWglGetProcAddress("glGetVertexAttribLi64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexAttribLi64vNV is NULL");
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4i ( GLuint index, GLint x, GLint y, GLint z, GLint w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4IPROC fptr = (PFNGLVERTEXATTRIBI4IPROC) dasWglGetProcAddress("glVertexAttribI4i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI4i is NULL");
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayiv ( GLuint vaobj, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYIVPROC fptr = (PFNGLGETVERTEXARRAYIVPROC) dasWglGetProcAddress("glGetVertexArrayiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexArrayiv is NULL");
    (*fptr)(vaobj, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL4i64vNV ( GLuint index, const GLint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4I64VNVPROC fptr = (PFNGLVERTEXATTRIBL4I64VNVPROC) dasWglGetProcAddress("glVertexAttribL4i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL4i64vNV is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTexture2D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTURE2DPROC fptr = (PFNGLFRAMEBUFFERTEXTURE2DPROC) dasWglGetProcAddress("glFramebufferTexture2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferTexture2D is NULL");
    (*fptr)(target, attachment, textarget, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3DPROC fptr = (PFNGLVERTEXATTRIB3DPROC) dasWglGetProcAddress("glVertexAttrib3d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib3d is NULL");
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoaddEXT ( GLenum mode, const GLdouble * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADDEXTPROC fptr = (PFNGLMATRIXLOADDEXTPROC) dasWglGetProcAddress("glMatrixLoaddEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixLoaddEXT is NULL");
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexRenderbufferEXT ( GLenum texunit, GLenum target, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXRENDERBUFFEREXTPROC fptr = (PFNGLMULTITEXRENDERBUFFEREXTPROC) dasWglGetProcAddress("glMultiTexRenderbufferEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexRenderbufferEXT is NULL");
    (*fptr)(texunit, target, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferParameteriMESA ( GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERPARAMETERIMESAPROC fptr = (PFNGLFRAMEBUFFERPARAMETERIMESAPROC) dasWglGetProcAddress("glFramebufferParameteriMESA");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferParameteriMESA is NULL");
    (*fptr)(target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glPushGroupMarkerEXT ( GLsizei length, const GLchar * marker, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPUSHGROUPMARKEREXTPROC fptr = (PFNGLPUSHGROUPMARKEREXTPROC) dasWglGetProcAddress("glPushGroupMarkerEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPushGroupMarkerEXT is NULL");
    (*fptr)(length, marker);
    checkOpenGLError(__context__,__at__);
}

void glTextureBufferRange ( GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBUFFERRANGEPROC fptr = (PFNGLTEXTUREBUFFERRANGEPROC) dasWglGetProcAddress("glTextureBufferRange");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureBufferRange is NULL");
    (*fptr)(texture, internalformat, buffer, offset, size);
    checkOpenGLError(__context__,__at__);
}

void glGetFloati_vEXT ( GLenum pname, GLuint index, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFLOATI_VEXTPROC fptr = (PFNGLGETFLOATI_VEXTPROC) dasWglGetProcAddress("glGetFloati_vEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFloati_vEXT is NULL");
    (*fptr)(pname, index, params);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) dasWglGetProcAddress("glCompressedTextureSubImage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTextureSubImage3DEXT is NULL");
    (*fptr)(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glReadBuffer ( GLenum src, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLREADBUFFERPROC fptr = (PFNGLREADBUFFERPROC) dasWglGetProcAddress("glReadBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glReadBuffer is NULL");
    (*fptr)(src);
    checkOpenGLError(__context__,__at__);
}

void glUniform3uiv ( GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UIVPROC fptr = (PFNGLUNIFORM3UIVPROC) dasWglGetProcAddress("glUniform3uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3uiv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib3f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB3FPROC fptr = (PFNGLVERTEXATTRIB3FPROC) dasWglGetProcAddress("glVertexAttrib3f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib3f is NULL");
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3UIVEXTPROC) dasWglGetProcAddress("glProgramUniform3uivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3uivEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsRenderbuffer ( GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISRENDERBUFFERPROC fptr = (PFNGLISRENDERBUFFERPROC) dasWglGetProcAddress("glIsRenderbuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsRenderbuffer is NULL");
    auto result = (*fptr)(renderbuffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLenum glCheckNamedFramebufferStatus ( GLuint framebuffer, GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC fptr = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) dasWglGetProcAddress("glCheckNamedFramebufferStatus");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCheckNamedFramebufferStatus is NULL");
    auto result = (*fptr)(framebuffer, target);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glBindShadingRateImageNV ( GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDSHADINGRATEIMAGENVPROC fptr = (PFNGLBINDSHADINGRATEIMAGENVPROC) dasWglGetProcAddress("glBindShadingRateImageNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindShadingRateImageNV is NULL");
    (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
}

void glTexAttachMemoryNV ( GLenum target, GLuint memory, GLuint64 offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXATTACHMEMORYNVPROC fptr = (PFNGLTEXATTACHMEMORYNVPROC) dasWglGetProcAddress("glTexAttachMemoryNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexAttachMemoryNV is NULL");
    (*fptr)(target, memory, offset);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI1i ( GLuint index, GLint x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI1IPROC fptr = (PFNGLVERTEXATTRIBI1IPROC) dasWglGetProcAddress("glVertexAttribI1i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI1i is NULL");
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glDrawArrays ( GLenum mode, GLint first, GLsizei count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSPROC fptr = (PFNGLDRAWARRAYSPROC) dasWglGetProcAddress("glDrawArrays");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawArrays is NULL");
    (*fptr)(mode, first, count);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1d ( GLuint program, GLint location, GLdouble v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1DPROC fptr = (PFNGLPROGRAMUNIFORM1DPROC) dasWglGetProcAddress("glProgramUniform1d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1d is NULL");
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glUniform4f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4FPROC fptr = (PFNGLUNIFORM4FPROC) dasWglGetProcAddress("glUniform4f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4f is NULL");
    (*fptr)(location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glBufferPageCommitmentARB ( GLenum target, GLintptr offset, GLsizeiptr size, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERPAGECOMMITMENTARBPROC fptr = (PFNGLBUFFERPAGECOMMITMENTARBPROC) dasWglGetProcAddress("glBufferPageCommitmentARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBufferPageCommitmentARB is NULL");
    (*fptr)(target, offset, size, commit);
    checkOpenGLError(__context__,__at__);
}

void glBlendFuncSeparateiARB ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCSEPARATEIARBPROC fptr = (PFNGLBLENDFUNCSEPARATEIARBPROC) dasWglGetProcAddress("glBlendFuncSeparateiARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendFuncSeparateiARB is NULL");
    (*fptr)(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
    checkOpenGLError(__context__,__at__);
}

void glMaxShaderCompilerThreadsARB ( GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAXSHADERCOMPILERTHREADSARBPROC fptr = (PFNGLMAXSHADERCOMPILERTHREADSARBPROC) dasWglGetProcAddress("glMaxShaderCompilerThreadsARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMaxShaderCompilerThreadsARB is NULL");
    (*fptr)(count);
    checkOpenGLError(__context__,__at__);
}

void glMakeTextureHandleNonResidentARB ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC fptr = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) dasWglGetProcAddress("glMakeTextureHandleNonResidentARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeTextureHandleNonResidentARB is NULL");
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glPatchParameteri ( GLenum pname, GLint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATCHPARAMETERIPROC fptr = (PFNGLPATCHPARAMETERIPROC) dasWglGetProcAddress("glPatchParameteri");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPatchParameteri is NULL");
    (*fptr)(pname, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayEdgeFlagOffsetEXT ( GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayEdgeFlagOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayEdgeFlagOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, stride, offset);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetDebugMessageLog ( GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDEBUGMESSAGELOGPROC fptr = (PFNGLGETDEBUGMESSAGELOGPROC) dasWglGetProcAddress("glGetDebugMessageLog");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetDebugMessageLog is NULL");
    auto result = (*fptr)(count, bufSize, sources, types, ids, severities, lengths, messageLog);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform1f ( GLuint program, GLint location, GLfloat v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1FPROC fptr = (PFNGLPROGRAMUNIFORM1FPROC) dasWglGetProcAddress("glProgramUniform1f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1f is NULL");
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glTexStorage3DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSTORAGE3DMULTISAMPLEPROC fptr = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) dasWglGetProcAddress("glTexStorage3DMultisample");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexStorage3DMultisample is NULL");
    (*fptr)(target, samples, internalformat, width, height, depth, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsIndirectCountARB ( GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) dasWglGetProcAddress("glMultiDrawElementsIndirectCountARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawElementsIndirectCountARB is NULL");
    (*fptr)(mode, type, indirect, drawcount, maxdrawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glCopyMultiTexSubImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC fptr = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) dasWglGetProcAddress("glCopyMultiTexSubImage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyMultiTexSubImage3DEXT is NULL");
    (*fptr)(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glUniform3f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3FPROC fptr = (PFNGLUNIFORM3FPROC) dasWglGetProcAddress("glUniform3f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3f is NULL");
    (*fptr)(location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glUniform4d ( GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4DPROC fptr = (PFNGLUNIFORM4DPROC) dasWglGetProcAddress("glUniform4d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4d is NULL");
    (*fptr)(location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1i ( GLuint program, GLint location, GLint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1IPROC fptr = (PFNGLPROGRAMUNIFORM1IPROC) dasWglGetProcAddress("glProgramUniform1i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1i is NULL");
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2i ( GLuint program, GLint location, GLint v0, GLint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2IPROC fptr = (PFNGLPROGRAMUNIFORM2IPROC) dasWglGetProcAddress("glProgramUniform2i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2i is NULL");
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

const GLubyte * glGetString ( GLenum name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSTRINGPROC fptr = (PFNGLGETSTRINGPROC) dasWglGetProcAddress("glGetString");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetString is NULL");
    auto result = (*fptr)(name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniformBlockBinding ( GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMBLOCKBINDINGPROC fptr = (PFNGLUNIFORMBLOCKBINDINGPROC) dasWglGetProcAddress("glUniformBlockBinding");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformBlockBinding is NULL");
    (*fptr)(program, uniformBlockIndex, uniformBlockBinding);
    checkOpenGLError(__context__,__at__);
}

void glGetSamplerParameterIuiv ( GLuint sampler, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSAMPLERPARAMETERIUIVPROC fptr = (PFNGLGETSAMPLERPARAMETERIUIVPROC) dasWglGetProcAddress("glGetSamplerParameterIuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetSamplerParameterIuiv is NULL");
    (*fptr)(sampler, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4IVEXTPROC) dasWglGetProcAddress("glProgramUniform4ivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4ivEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameter4fEXT ( GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameter4fEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParameter4fEXT is NULL");
    (*fptr)(program, target, index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glTextureBufferRangeEXT ( GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBUFFERRANGEEXTPROC fptr = (PFNGLTEXTUREBUFFERRANGEEXTPROC) dasWglGetProcAddress("glTextureBufferRangeEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureBufferRangeEXT is NULL");
    (*fptr)(texture, target, internalformat, buffer, offset, size);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage1DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE1DEXTPROC fptr = (PFNGLTEXTURESTORAGE1DEXTPROC) dasWglGetProcAddress("glTextureStorage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureStorage1DEXT is NULL");
    (*fptr)(texture, target, levels, internalformat, width);
    checkOpenGLError(__context__,__at__);
}

void glSpecializeShaderARB ( GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSPECIALIZESHADERARBPROC fptr = (PFNGLSPECIALIZESHADERARBPROC) dasWglGetProcAddress("glSpecializeShaderARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSpecializeShaderARB is NULL");
    (*fptr)(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
    checkOpenGLError(__context__,__at__);
}

void glMakeTextureHandleResidentARB ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKETEXTUREHANDLERESIDENTARBPROC fptr = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) dasWglGetProcAddress("glMakeTextureHandleResidentARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeTextureHandleResidentARB is NULL");
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glUniformui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMUI64VNVPROC fptr = (PFNGLUNIFORMUI64VNVPROC) dasWglGetProcAddress("glUniformui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformui64vNV is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glUniform3d ( GLint location, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3DPROC fptr = (PFNGLUNIFORM3DPROC) dasWglGetProcAddress("glUniform3d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3d is NULL");
    (*fptr)(location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glViewportArrayv ( GLuint first, GLsizei count, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTARRAYVPROC fptr = (PFNGLVIEWPORTARRAYVPROC) dasWglGetProcAddress("glViewportArrayv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glViewportArrayv is NULL");
    (*fptr)(first, count, v);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTextureLayer ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTURELAYERPROC fptr = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) dasWglGetProcAddress("glFramebufferTextureLayer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferTextureLayer is NULL");
    (*fptr)(target, attachment, texture, level, layer);
    checkOpenGLError(__context__,__at__);
}

void glGetShaderPrecisionFormat ( GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADERPRECISIONFORMATPROC fptr = (PFNGLGETSHADERPRECISIONFORMATPROC) dasWglGetProcAddress("glGetShaderPrecisionFormat");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetShaderPrecisionFormat is NULL");
    (*fptr)(shadertype, precisiontype, range, precision);
    checkOpenGLError(__context__,__at__);
}

void glUniform3dv ( GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3DVPROC fptr = (PFNGLUNIFORM3DVPROC) dasWglGetProcAddress("glUniform3dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3dv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexEnvfvEXT ( GLenum texunit, GLenum target, GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXENVFVEXTPROC fptr = (PFNGLMULTITEXENVFVEXTPROC) dasWglGetProcAddress("glMultiTexEnvfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexEnvfvEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP4ui ( GLuint index, GLenum type, bool normalized, GLuint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP4UIPROC fptr = (PFNGLVERTEXATTRIBP4UIPROC) dasWglGetProcAddress("glVertexAttribP4ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribP4ui is NULL");
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

GLfloat glGetPathLengthNV ( GLuint path, GLsizei startSegment, GLsizei numSegments, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHLENGTHNVPROC fptr = (PFNGLGETPATHLENGTHNVPROC) dasWglGetProcAddress("glGetPathLengthNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPathLengthNV is NULL");
    auto result = (*fptr)(path, startSegment, numSegments);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glCompressedTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXIMAGE2DPROC fptr = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) dasWglGetProcAddress("glCompressedTexImage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTexImage2D is NULL");
    (*fptr)(target, level, internalformat, width, height, border, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferRenderbufferEXT ( GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) dasWglGetProcAddress("glNamedFramebufferRenderbufferEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferRenderbufferEXT is NULL");
    (*fptr)(framebuffer, attachment, renderbuffertarget, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferRenderbuffer ( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERRENDERBUFFERPROC fptr = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) dasWglGetProcAddress("glFramebufferRenderbuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferRenderbuffer is NULL");
    (*fptr)(target, attachment, renderbuffertarget, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glBlendBarrierNV ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDBARRIERNVPROC fptr = (PFNGLBLENDBARRIERNVPROC) dasWglGetProcAddress("glBlendBarrierNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendBarrierNV is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glGetQueryObjectiv ( GLuint id, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYOBJECTIVPROC fptr = (PFNGLGETQUERYOBJECTIVPROC) dasWglGetProcAddress("glGetQueryObjectiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetQueryObjectiv is NULL");
    (*fptr)(id, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferSubData ( GLuint buffer, GLintptr offset, GLsizeiptr size, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERSUBDATAPROC fptr = (PFNGLGETNAMEDBUFFERSUBDATAPROC) dasWglGetProcAddress("glGetNamedBufferSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedBufferSubData is NULL");
    (*fptr)(buffer, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glBufferStorage ( GLenum target, GLsizeiptr size, const void * data, GLbitfield flags, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERSTORAGEPROC fptr = (PFNGLBUFFERSTORAGEPROC) dasWglGetProcAddress("glBufferStorage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBufferStorage is NULL");
    (*fptr)(target, size, data, flags);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferReadBuffer ( GLuint framebuffer, GLenum src, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC fptr = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) dasWglGetProcAddress("glNamedFramebufferReadBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferReadBuffer is NULL");
    (*fptr)(framebuffer, src);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangeIndexeddNV ( GLuint index, GLdouble n, GLdouble f, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEINDEXEDDNVPROC fptr = (PFNGLDEPTHRANGEINDEXEDDNVPROC) dasWglGetProcAddress("glDepthRangeIndexeddNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDepthRangeIndexeddNV is NULL");
    (*fptr)(index, n, f);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexSubImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXSUBIMAGE3DEXTPROC fptr = (PFNGLMULTITEXSUBIMAGE3DEXTPROC) dasWglGetProcAddress("glMultiTexSubImage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexSubImage3DEXT is NULL");
    (*fptr)(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexParameterIuivEXT ( GLenum texunit, GLenum target, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXPARAMETERIUIVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) dasWglGetProcAddress("glGetMultiTexParameterIuivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexParameterIuivEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedFramebufferfi ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERFIPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) dasWglGetProcAddress("glClearNamedFramebufferfi");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearNamedFramebufferfi is NULL");
    (*fptr)(framebuffer, buffer, drawbuffer, depth, stencil);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2i64vNV ( GLuint index, const GLint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2I64VNVPROC fptr = (PFNGLVERTEXATTRIBL2I64VNVPROC) dasWglGetProcAddress("glVertexAttribL2i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL2i64vNV is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetShaderInfoLog ( GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADERINFOLOGPROC fptr = (PFNGLGETSHADERINFOLOGPROC) dasWglGetProcAddress("glGetShaderInfoLog");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetShaderInfoLog is NULL");
    (*fptr)(shader, bufSize, length, infoLog);
    checkOpenGLError(__context__,__at__);
}

void glGetBooleanIndexedvEXT ( GLenum target, GLuint index, GLboolean * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBOOLEANINDEXEDVEXTPROC fptr = (PFNGLGETBOOLEANINDEXEDVEXTPROC) dasWglGetProcAddress("glGetBooleanIndexedvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetBooleanIndexedvEXT is NULL");
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedFramebufferiv ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERIVPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) dasWglGetProcAddress("glClearNamedFramebufferiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearNamedFramebufferiv is NULL");
    (*fptr)(framebuffer, buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

void glGenerateTextureMipmap ( GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENERATETEXTUREMIPMAPPROC fptr = (PFNGLGENERATETEXTUREMIPMAPPROC) dasWglGetProcAddress("glGenerateTextureMipmap");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenerateTextureMipmap is NULL");
    (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
}

void glTextureAttachMemoryNV ( GLuint texture, GLuint memory, GLuint64 offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREATTACHMEMORYNVPROC fptr = (PFNGLTEXTUREATTACHMEMORYNVPROC) dasWglGetProcAddress("glTextureAttachMemoryNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureAttachMemoryNV is NULL");
    (*fptr)(texture, memory, offset);
    checkOpenGLError(__context__,__at__);
}

void glSpecializeShader ( GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSPECIALIZESHADERPROC fptr = (PFNGLSPECIALIZESHADERPROC) dasWglGetProcAddress("glSpecializeShader");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSpecializeShader is NULL");
    (*fptr)(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2iEXT ( GLuint program, GLint location, GLint v0, GLint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2IEXTPROC fptr = (PFNGLPROGRAMUNIFORM2IEXTPROC) dasWglGetProcAddress("glProgramUniform2iEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2iEXT is NULL");
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage3DMultisampleEXT ( GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC fptr = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC) dasWglGetProcAddress("glTextureStorage3DMultisampleEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureStorage3DMultisampleEXT is NULL");
    (*fptr)(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstancedBaseVertex ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) dasWglGetProcAddress("glDrawElementsInstancedBaseVertex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawElementsInstancedBaseVertex is NULL");
    (*fptr)(mode, count, type, indices, instancecount, basevertex);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1fEXT ( GLuint program, GLint location, GLfloat v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1FEXTPROC fptr = (PFNGLPROGRAMUNIFORM1FEXTPROC) dasWglGetProcAddress("glProgramUniform1fEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1fEXT is NULL");
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glGenRenderbuffers ( GLsizei n, GLuint * renderbuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENRENDERBUFFERSPROC fptr = (PFNGLGENRENDERBUFFERSPROC) dasWglGetProcAddress("glGenRenderbuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenRenderbuffers is NULL");
    (*fptr)(n, renderbuffers);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedProgramivEXT ( GLuint program, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMIVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMIVEXTPROC) dasWglGetProcAddress("glGetNamedProgramivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedProgramivEXT is NULL");
    (*fptr)(program, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexLevelParameterfvEXT ( GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC fptr = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) dasWglGetProcAddress("glGetMultiTexLevelParameterfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexLevelParameterfvEXT is NULL");
    (*fptr)(texunit, target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstancedEXT ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDEXTPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) dasWglGetProcAddress("glDrawElementsInstancedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawElementsInstancedEXT is NULL");
    (*fptr)(mode, count, type, indices, primcount);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedFramebufferfv ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERFVPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) dasWglGetProcAddress("glClearNamedFramebufferfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearNamedFramebufferfv is NULL");
    (*fptr)(framebuffer, buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ui64ARB ( GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM4UI64ARBPROC) dasWglGetProcAddress("glProgramUniform4ui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4ui64ARB is NULL");
    (*fptr)(program, location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void * glMapBuffer ( GLenum target, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPBUFFERPROC fptr = (PFNGLMAPBUFFERPROC) dasWglGetProcAddress("glMapBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMapBuffer is NULL");
    auto result = (*fptr)(target, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glSamplerParameterIuiv ( GLuint sampler, GLenum pname, const GLuint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERIUIVPROC fptr = (PFNGLSAMPLERPARAMETERIUIVPROC) dasWglGetProcAddress("glSamplerParameterIuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSamplerParameterIuiv is NULL");
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glEndConditionalRender ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDCONDITIONALRENDERPROC fptr = (PFNGLENDCONDITIONALRENDERPROC) dasWglGetProcAddress("glEndConditionalRender");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEndConditionalRender is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glBlendFunc ( GLenum sfactor, GLenum dfactor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCPROC fptr = (PFNGLBLENDFUNCPROC) dasWglGetProcAddress("glBlendFunc");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendFunc is NULL");
    (*fptr)(sfactor, dfactor);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2DPROC fptr = (PFNGLPROGRAMUNIFORM2DPROC) dasWglGetProcAddress("glProgramUniform2d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2d is NULL");
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void * glMapNamedBufferRangeEXT ( GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPNAMEDBUFFERRANGEEXTPROC fptr = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC) dasWglGetProcAddress("glMapNamedBufferRangeEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMapNamedBufferRangeEXT is NULL");
    auto result = (*fptr)(buffer, offset, length, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glBindBuffer ( GLenum target, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDBUFFERPROC fptr = (PFNGLBINDBUFFERPROC) dasWglGetProcAddress("glBindBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindBuffer is NULL");
    (*fptr)(target, buffer);
    checkOpenGLError(__context__,__at__);
}

void glDeleteSamplers ( GLsizei count, const GLuint * samplers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETESAMPLERSPROC fptr = (PFNGLDELETESAMPLERSPROC) dasWglGetProcAddress("glDeleteSamplers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteSamplers is NULL");
    (*fptr)(count, samplers);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) dasWglGetProcAddress("glProgramUniformMatrix2dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2dv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedBufferSubData ( GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDBUFFERSUBDATAPROC fptr = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) dasWglGetProcAddress("glClearNamedBufferSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearNamedBufferSubData is NULL");
    (*fptr)(buffer, internalformat, offset, size, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glUniform4i64vNV ( GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4I64VNVPROC fptr = (PFNGLUNIFORM4I64VNVPROC) dasWglGetProcAddress("glUniform4i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4i64vNV is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2FPROC fptr = (PFNGLPROGRAMUNIFORM2FPROC) dasWglGetProcAddress("glProgramUniform2f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2f is NULL");
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsPointInFillPathNV ( GLuint path, GLuint mask, GLfloat x, GLfloat y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISPOINTINFILLPATHNVPROC fptr = (PFNGLISPOINTINFILLPATHNVPROC) dasWglGetProcAddress("glIsPointInFillPathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsPointInFillPathNV is NULL");
    auto result = (*fptr)(path, mask, x, y);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform3ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3IVEXTPROC) dasWglGetProcAddress("glProgramUniform3ivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3ivEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformdv ( GLuint program, GLint location, GLsizei bufSize, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMDVPROC fptr = (PFNGLGETNUNIFORMDVPROC) dasWglGetProcAddress("glGetnUniformdv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnUniformdv is NULL");
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformfv ( GLuint program, GLint location, GLsizei bufSize, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMFVPROC fptr = (PFNGLGETNUNIFORMFVPROC) dasWglGetProcAddress("glGetnUniformfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnUniformfv is NULL");
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glPathParameteriNV ( GLuint path, GLenum pname, GLint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHPARAMETERINVPROC fptr = (PFNGLPATHPARAMETERINVPROC) dasWglGetProcAddress("glPathParameteriNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathParameteriNV is NULL");
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glClientAttribDefaultEXT ( GLbitfield mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLIENTATTRIBDEFAULTEXTPROC fptr = (PFNGLCLIENTATTRIBDEFAULTEXTPROC) dasWglGetProcAddress("glClientAttribDefaultEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClientAttribDefaultEXT is NULL");
    (*fptr)(mask);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedBufferSubDataEXT ( GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC fptr = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) dasWglGetProcAddress("glClearNamedBufferSubDataEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearNamedBufferSubDataEXT is NULL");
    (*fptr)(buffer, internalformat, offset, size, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glTexStorage3D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSTORAGE3DPROC fptr = (PFNGLTEXSTORAGE3DPROC) dasWglGetProcAddress("glTexStorage3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexStorage3D is NULL");
    (*fptr)(target, levels, internalformat, width, height, depth);
    checkOpenGLError(__context__,__at__);
}

void glGetnTexImage ( GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNTEXIMAGEPROC fptr = (PFNGLGETNTEXIMAGEPROC) dasWglGetProcAddress("glGetnTexImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnTexImage is NULL");
    (*fptr)(target, level, format, type, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveUniform ( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEUNIFORMPROC fptr = (PFNGLGETACTIVEUNIFORMPROC) dasWglGetProcAddress("glGetActiveUniform");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetActiveUniform is NULL");
    (*fptr)(program, index, bufSize, length, size, type, name);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateBufferData ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATEBUFFERDATAPROC fptr = (PFNGLINVALIDATEBUFFERDATAPROC) dasWglGetProcAddress("glInvalidateBufferData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glInvalidateBufferData is NULL");
    (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferParameteriv ( GLuint buffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPARAMETERIVPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetNamedBufferParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedBufferParameteriv is NULL");
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformiv ( GLuint program, GLint location, GLsizei bufSize, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMIVPROC fptr = (PFNGLGETNUNIFORMIVPROC) dasWglGetProcAddress("glGetnUniformiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnUniformiv is NULL");
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexGeniEXT ( GLenum texunit, GLenum coord, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENIEXTPROC fptr = (PFNGLMULTITEXGENIEXTPROC) dasWglGetProcAddress("glMultiTexGeniEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexGeniEXT is NULL");
    (*fptr)(texunit, coord, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4uiEXT ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM4UIEXTPROC) dasWglGetProcAddress("glProgramUniform4uiEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4uiEXT is NULL");
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glPathDashArrayNV ( GLuint path, GLsizei dashCount, const GLfloat * dashArray, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHDASHARRAYNVPROC fptr = (PFNGLPATHDASHARRAYNVPROC) dasWglGetProcAddress("glPathDashArrayNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathDashArrayNV is NULL");
    (*fptr)(path, dashCount, dashArray);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC fptr = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) dasWglGetProcAddress("glCompressedTexSubImage3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTexSubImage3D is NULL");
    (*fptr)(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsShader ( GLuint shader, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISSHADERPROC fptr = (PFNGLISSHADERPROC) dasWglGetProcAddress("glIsShader");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsShader is NULL");
    auto result = (*fptr)(shader);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glVertexAttribI2iv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI2IVPROC fptr = (PFNGLVERTEXATTRIBI2IVPROC) dasWglGetProcAddress("glVertexAttribI2iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI2iv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterIuivEXT ( GLuint texture, GLenum target, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIUIVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) dasWglGetProcAddress("glGetTextureParameterIuivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureParameterIuivEXT is NULL");
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorage ( GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) dasWglGetProcAddress("glNamedRenderbufferStorage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedRenderbufferStorage is NULL");
    (*fptr)(renderbuffer, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterf ( GLuint texture, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERFPROC fptr = (PFNGLTEXTUREPARAMETERFPROC) dasWglGetProcAddress("glTextureParameterf");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameterf is NULL");
    (*fptr)(texture, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glDrawCommandsNV ( GLenum primitiveMode, GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWCOMMANDSNVPROC fptr = (PFNGLDRAWCOMMANDSNVPROC) dasWglGetProcAddress("glDrawCommandsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawCommandsNV is NULL");
    (*fptr)(primitiveMode, buffer, indirects, sizes, count);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2dvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBlendColor ( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDCOLORPROC fptr = (PFNGLBLENDCOLORPROC) dasWglGetProcAddress("glBlendColor");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendColor is NULL");
    (*fptr)(red, green, blue, alpha);
    checkOpenGLError(__context__,__at__);
}

void glUniform4fv ( GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4FVPROC fptr = (PFNGLUNIFORM4FVPROC) dasWglGetProcAddress("glUniform4fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4fv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL4ui64vNV ( GLuint index, const GLuint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL4UI64VNVPROC) dasWglGetProcAddress("glVertexAttribL4ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL4ui64vNV is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXIMAGE1DPROC fptr = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) dasWglGetProcAddress("glCompressedTexImage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTexImage1D is NULL");
    (*fptr)(target, level, internalformat, width, border, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glClearStencil ( GLint s, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARSTENCILPROC fptr = (PFNGLCLEARSTENCILPROC) dasWglGetProcAddress("glClearStencil");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearStencil is NULL");
    (*fptr)(s);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4DPROC fptr = (PFNGLVERTEXATTRIBL4DPROC) dasWglGetProcAddress("glVertexAttribL4d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL4d is NULL");
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1dEXT ( GLuint program, GLint location, GLdouble x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1DEXTPROC fptr = (PFNGLPROGRAMUNIFORM1DEXTPROC) dasWglGetProcAddress("glProgramUniform1dEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1dEXT is NULL");
    (*fptr)(program, location, x);
    checkOpenGLError(__context__,__at__);
}

void glPrimitiveRestartIndex ( GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPRIMITIVERESTARTINDEXPROC fptr = (PFNGLPRIMITIVERESTARTINDEXPROC) dasWglGetProcAddress("glPrimitiveRestartIndex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPrimitiveRestartIndex is NULL");
    (*fptr)(index);
    checkOpenGLError(__context__,__at__);
}

void glTransformFeedbackBufferRange ( GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC fptr = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) dasWglGetProcAddress("glTransformFeedbackBufferRange");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTransformFeedbackBufferRange is NULL");
    (*fptr)(xfb, index, buffer, offset, size);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3DPROC fptr = (PFNGLVERTEXATTRIBL3DPROC) dasWglGetProcAddress("glVertexAttribL3d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL3d is NULL");
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

GLuint64 glGetTextureSamplerHandleARB ( GLuint texture, GLuint sampler, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURESAMPLERHANDLEARBPROC fptr = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC) dasWglGetProcAddress("glGetTextureSamplerHandleARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureSamplerHandleARB is NULL");
    auto result = (*fptr)(texture, sampler);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glDetachShader ( GLuint program, GLuint shader, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDETACHSHADERPROC fptr = (PFNGLDETACHSHADERPROC) dasWglGetProcAddress("glDetachShader");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDetachShader is NULL");
    (*fptr)(program, shader);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawMeshTasksIndirectCountNV ( GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC fptr = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) dasWglGetProcAddress("glMultiDrawMeshTasksIndirectCountNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawMeshTasksIndirectCountNV is NULL");
    (*fptr)(indirect, drawcount, maxdrawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryIndexediv ( GLenum target, GLuint index, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYINDEXEDIVPROC fptr = (PFNGLGETQUERYINDEXEDIVPROC) dasWglGetProcAddress("glGetQueryIndexediv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetQueryIndexediv is NULL");
    (*fptr)(target, index, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glPointAlongPathNV ( GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTALONGPATHNVPROC fptr = (PFNGLPOINTALONGPATHNVPROC) dasWglGetProcAddress("glPointAlongPathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPointAlongPathNV is NULL");
    auto result = (*fptr)(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glEnableClientStateIndexedEXT ( GLenum array, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLECLIENTSTATEINDEXEDEXTPROC fptr = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) dasWglGetProcAddress("glEnableClientStateIndexedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEnableClientStateIndexedEXT is NULL");
    (*fptr)(array, index);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveUniformBlockName ( GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC fptr = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) dasWglGetProcAddress("glGetActiveUniformBlockName");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetActiveUniformBlockName is NULL");
    (*fptr)(program, uniformBlockIndex, bufSize, length, uniformBlockName);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTexture3D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTURE3DPROC fptr = (PFNGLFRAMEBUFFERTEXTURE3DPROC) dasWglGetProcAddress("glFramebufferTexture3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferTexture3D is NULL");
    (*fptr)(target, attachment, textarget, texture, level, zoffset);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateTexSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATETEXSUBIMAGEPROC fptr = (PFNGLINVALIDATETEXSUBIMAGEPROC) dasWglGetProcAddress("glInvalidateTexSubImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glInvalidateTexSubImage is NULL");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth);
    checkOpenGLError(__context__,__at__);
}

void glCopyNamedBufferSubData ( GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYNAMEDBUFFERSUBDATAPROC fptr = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) dasWglGetProcAddress("glCopyNamedBufferSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyNamedBufferSubData is NULL");
    (*fptr)(readBuffer, writeBuffer, readOffset, writeOffset, size);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorageMultisampleEXT ( GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) dasWglGetProcAddress("glNamedRenderbufferStorageMultisampleEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedRenderbufferStorageMultisampleEXT is NULL");
    (*fptr)(renderbuffer, samples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangeArraydvNV ( GLuint first, GLsizei count, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEARRAYDVNVPROC fptr = (PFNGLDEPTHRANGEARRAYDVNVPROC) dasWglGetProcAddress("glDepthRangeArraydvNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDepthRangeArraydvNV is NULL");
    (*fptr)(first, count, v);
    checkOpenGLError(__context__,__at__);
}

void glEnableVertexAttribArray ( GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEVERTEXATTRIBARRAYPROC fptr = (PFNGLENABLEVERTEXATTRIBARRAYPROC) dasWglGetProcAddress("glEnableVertexAttribArray");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEnableVertexAttribArray is NULL");
    (*fptr)(index);
    checkOpenGLError(__context__,__at__);
}

void glDeleteShader ( GLuint shader, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETESHADERPROC fptr = (PFNGLDELETESHADERPROC) dasWglGetProcAddress("glDeleteShader");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteShader is NULL");
    (*fptr)(shader);
    checkOpenGLError(__context__,__at__);
}

void glEndConditionalRenderNV ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDCONDITIONALRENDERNVPROC fptr = (PFNGLENDCONDITIONALRENDERNVPROC) dasWglGetProcAddress("glEndConditionalRenderNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEndConditionalRenderNV is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribPointer ( GLuint index, GLint size, GLenum type, bool normalized, GLsizei stride, const void * pointer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBPOINTERPROC fptr = (PFNGLVERTEXATTRIBPOINTERPROC) dasWglGetProcAddress("glVertexAttribPointer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribPointer is NULL");
    (*fptr)(index, size, type, normalized, stride, pointer);
    checkOpenGLError(__context__,__at__);
}

void glUniform4ui64ARB ( GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UI64ARBPROC fptr = (PFNGLUNIFORM4UI64ARBPROC) dasWglGetProcAddress("glUniform4ui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4ui64ARB is NULL");
    (*fptr)(location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glGetInternalformatSampleivNV ( GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTERNALFORMATSAMPLEIVNVPROC fptr = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) dasWglGetProcAddress("glGetInternalformatSampleivNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetInternalformatSampleivNV is NULL");
    (*fptr)(target, internalformat, samples, pname, count, params);
    checkOpenGLError(__context__,__at__);
}

void glDrawArraysIndirect ( GLenum mode, const void * indirect, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSINDIRECTPROC fptr = (PFNGLDRAWARRAYSINDIRECTPROC) dasWglGetProcAddress("glDrawArraysIndirect");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawArraysIndirect is NULL");
    (*fptr)(mode, indirect);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedProgramLocalParameterdvEXT ( GLuint program, GLenum target, GLuint index, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) dasWglGetProcAddress("glGetNamedProgramLocalParameterdvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedProgramLocalParameterdvEXT is NULL");
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glDeleteVertexArrays ( GLsizei n, const GLuint * arrays, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEVERTEXARRAYSPROC fptr = (PFNGLDELETEVERTEXARRAYSPROC) dasWglGetProcAddress("glDeleteVertexArrays");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteVertexArrays is NULL");
    (*fptr)(n, arrays);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x2dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) dasWglGetProcAddress("glProgramUniformMatrix4x2dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4x2dv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexSubImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexSubImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedMultiTexSubImage1DEXT is NULL");
    (*fptr)(texunit, target, level, xoffset, width, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4fEXT ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4FEXTPROC fptr = (PFNGLPROGRAMUNIFORM4FEXTPROC) dasWglGetProcAddress("glProgramUniform4fEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4fEXT is NULL");
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glDeletePerfQueryINTEL ( GLuint queryHandle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEPERFQUERYINTELPROC fptr = (PFNGLDELETEPERFQUERYINTELPROC) dasWglGetProcAddress("glDeletePerfQueryINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeletePerfQueryINTEL is NULL");
    (*fptr)(queryHandle);
    checkOpenGLError(__context__,__at__);
}

void glDrawCommandsAddressNV ( GLenum primitiveMode, const GLuint64 * indirects, const GLsizei * sizes, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWCOMMANDSADDRESSNVPROC fptr = (PFNGLDRAWCOMMANDSADDRESSNVPROC) dasWglGetProcAddress("glDrawCommandsAddressNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawCommandsAddressNV is NULL");
    (*fptr)(primitiveMode, indirects, sizes, count);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1FVPROC fptr = (PFNGLPROGRAMUNIFORM1FVPROC) dasWglGetProcAddress("glProgramUniform1fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1fv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glShadingRateSampleOrderCustomNV ( GLenum rate, GLuint samples, const GLint * locations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC fptr = (PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) dasWglGetProcAddress("glShadingRateSampleOrderCustomNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glShadingRateSampleOrderCustomNV is NULL");
    (*fptr)(rate, samples, locations);
    checkOpenGLError(__context__,__at__);
}

void glGetSynciv ( GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSYNCIVPROC fptr = (PFNGLGETSYNCIVPROC) dasWglGetProcAddress("glGetSynciv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetSynciv is NULL");
    (*fptr)(sync, pname, count, length, values);
    checkOpenGLError(__context__,__at__);
}

void glDrawArraysInstancedEXT ( GLenum mode, GLint start, GLsizei count, GLsizei primcount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSINSTANCEDEXTPROC fptr = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) dasWglGetProcAddress("glDrawArraysInstancedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawArraysInstancedEXT is NULL");
    (*fptr)(mode, start, count, primcount);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquationi ( GLuint buf, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONIPROC fptr = (PFNGLBLENDEQUATIONIPROC) dasWglGetProcAddress("glBlendEquationi");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendEquationi is NULL");
    (*fptr)(buf, mode);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribPointerv ( GLuint index, GLenum pname, void ** pointer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBPOINTERVPROC fptr = (PFNGLGETVERTEXATTRIBPOINTERVPROC) dasWglGetProcAddress("glGetVertexAttribPointerv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexAttribPointerv is NULL");
    (*fptr)(index, pname, pointer);
    checkOpenGLError(__context__,__at__);
}

void glUniform1ui64NV ( GLint location, GLuint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UI64NVPROC fptr = (PFNGLUNIFORM1UI64NVPROC) dasWglGetProcAddress("glUniform1ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1ui64NV is NULL");
    (*fptr)(location, x);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameteriEXT ( GLuint texture, GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIEXTPROC fptr = (PFNGLTEXTUREPARAMETERIEXTPROC) dasWglGetProcAddress("glTextureParameteriEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameteriEXT is NULL");
    (*fptr)(texture, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexLevelParameterivEXT ( GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC fptr = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetMultiTexLevelParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexLevelParameterivEXT is NULL");
    (*fptr)(texunit, target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferDataEXT ( GLuint buffer, GLsizeiptr size, const void * data, GLenum usage, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERDATAEXTPROC fptr = (PFNGLNAMEDBUFFERDATAEXTPROC) dasWglGetProcAddress("glNamedBufferDataEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedBufferDataEXT is NULL");
    (*fptr)(buffer, size, data, usage);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribIFormatNV ( GLuint index, GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBIFORMATNVPROC fptr = (PFNGLVERTEXATTRIBIFORMATNVPROC) dasWglGetProcAddress("glVertexAttribIFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribIFormatNV is NULL");
    (*fptr)(index, size, type, stride);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI2uiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI2UIVPROC fptr = (PFNGLVERTEXATTRIBI2UIVPROC) dasWglGetProcAddress("glVertexAttribI2uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI2uiv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glTexImage2DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXIMAGE2DMULTISAMPLEPROC fptr = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) dasWglGetProcAddress("glTexImage2DMultisample");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexImage2DMultisample is NULL");
    (*fptr)(target, samples, internalformat, width, height, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) dasWglGetProcAddress("glProgramUniformMatrix2fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2fv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameteri ( GLuint texture, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIPROC fptr = (PFNGLTEXTUREPARAMETERIPROC) dasWglGetProcAddress("glTextureParameteri");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameteri is NULL");
    (*fptr)(texture, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glMatrixTranslatedEXT ( GLenum mode, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXTRANSLATEDEXTPROC fptr = (PFNGLMATRIXTRANSLATEDEXTPROC) dasWglGetProcAddress("glMatrixTranslatedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixTranslatedEXT is NULL");
    (*fptr)(mode, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1UIVEXTPROC) dasWglGetProcAddress("glProgramUniform1uivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1uivEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x4dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) dasWglGetProcAddress("glProgramUniformMatrix3x4dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3x4dv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x4dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2x4dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2x4dvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTextureEXT ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) dasWglGetProcAddress("glNamedFramebufferTextureEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferTextureEXT is NULL");
    (*fptr)(framebuffer, attachment, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glMatrixFrustumEXT ( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXFRUSTUMEXTPROC fptr = (PFNGLMATRIXFRUSTUMEXTPROC) dasWglGetProcAddress("glMatrixFrustumEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixFrustumEXT is NULL");
    (*fptr)(mode, left, right, bottom, top, zNear, zFar);
    checkOpenGLError(__context__,__at__);
}

void glMatrixMultTransposedEXT ( GLenum mode, const GLdouble * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULTTRANSPOSEDEXTPROC fptr = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) dasWglGetProcAddress("glMatrixMultTransposedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixMultTransposedEXT is NULL");
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glGetTransformFeedbackVarying ( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTRANSFORMFEEDBACKVARYINGPROC fptr = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) dasWglGetProcAddress("glGetTransformFeedbackVarying");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTransformFeedbackVarying is NULL");
    (*fptr)(program, index, bufSize, length, size, type, name);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferDrawBuffersEXT ( GLuint framebuffer, GLsizei n, const GLenum * bufs, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC fptr = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) dasWglGetProcAddress("glFramebufferDrawBuffersEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferDrawBuffersEXT is NULL");
    (*fptr)(framebuffer, n, bufs);
    checkOpenGLError(__context__,__at__);
}

GLenum glPathGlyphIndexRangeNV ( GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint * baseAndCount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHGLYPHINDEXRANGENVPROC fptr = (PFNGLPATHGLYPHINDEXRANGENVPROC) dasWglGetProcAddress("glPathGlyphIndexRangeNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathGlyphIndexRangeNV is NULL");
    auto result = (*fptr)(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glShaderBinary ( GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADERBINARYPROC fptr = (PFNGLSHADERBINARYPROC) dasWglGetProcAddress("glShaderBinary");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glShaderBinary is NULL");
    (*fptr)(count, shaders, binaryFormat, binary, length);
    checkOpenGLError(__context__,__at__);
}

void glDisableClientStateIndexedEXT ( GLenum array, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC fptr = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) dasWglGetProcAddress("glDisableClientStateIndexedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDisableClientStateIndexedEXT is NULL");
    (*fptr)(array, index);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangeIndexed ( GLuint index, GLdouble n, GLdouble f, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEINDEXEDPROC fptr = (PFNGLDEPTHRANGEINDEXEDPROC) dasWglGetProcAddress("glDepthRangeIndexed");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDepthRangeIndexed is NULL");
    (*fptr)(index, n, f);
    checkOpenGLError(__context__,__at__);
}

void glPointParameteriv ( GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTPARAMETERIVPROC fptr = (PFNGLPOINTPARAMETERIVPROC) dasWglGetProcAddress("glPointParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPointParameteriv is NULL");
    (*fptr)(pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorCounterDataAMD ( GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORCOUNTERDATAAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) dasWglGetProcAddress("glGetPerfMonitorCounterDataAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPerfMonitorCounterDataAMD is NULL");
    (*fptr)(monitor, pname, dataSize, data, bytesWritten);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoadTransposedEXT ( GLenum mode, const GLdouble * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADTRANSPOSEDEXTPROC fptr = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) dasWglGetProcAddress("glMatrixLoadTransposedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixLoadTransposedEXT is NULL");
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

GLuint glCreateShaderProgramEXT ( GLenum type, const GLchar * string, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESHADERPROGRAMEXTPROC fptr = (PFNGLCREATESHADERPROGRAMEXTPROC) dasWglGetProcAddress("glCreateShaderProgramEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateShaderProgramEXT is NULL");
    auto result = (*fptr)(type, string);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glPathCommandsNV ( GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHCOMMANDSNVPROC fptr = (PFNGLPATHCOMMANDSNVPROC) dasWglGetProcAddress("glPathCommandsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathCommandsNV is NULL");
    (*fptr)(path, numCommands, commands, numCoords, coordType, coords);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveSubroutineUniformName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC fptr = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) dasWglGetProcAddress("glGetActiveSubroutineUniformName");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetActiveSubroutineUniformName is NULL");
    (*fptr)(program, shadertype, index, bufSize, length, name);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexBuffer ( GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXBUFFERPROC fptr = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) dasWglGetProcAddress("glVertexArrayVertexBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexBuffer is NULL");
    (*fptr)(vaobj, bindingindex, buffer, offset, stride);
    checkOpenGLError(__context__,__at__);
}

void glShadingRateImageBarrierNV ( bool synchronize, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADINGRATEIMAGEBARRIERNVPROC fptr = (PFNGLSHADINGRATEIMAGEBARRIERNVPROC) dasWglGetProcAddress("glShadingRateImageBarrierNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glShadingRateImageBarrierNV is NULL");
    (*fptr)(synchronize);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArraysIndirectBindlessCountNV ( GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC) dasWglGetProcAddress("glMultiDrawArraysIndirectBindlessCountNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawArraysIndirectBindlessCountNV is NULL");
    (*fptr)(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
    checkOpenGLError(__context__,__at__);
}

void glSignalVkFenceNV ( GLuint64 vkFence, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSIGNALVKFENCENVPROC fptr = (PFNGLSIGNALVKFENCENVPROC) dasWglGetProcAddress("glSignalVkFenceNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSignalVkFenceNV is NULL");
    (*fptr)(vkFence);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsBaseVertex ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSBASEVERTEXPROC fptr = (PFNGLDRAWELEMENTSBASEVERTEXPROC) dasWglGetProcAddress("glDrawElementsBaseVertex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawElementsBaseVertex is NULL");
    (*fptr)(mode, count, type, indices, basevertex);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetDebugMessageLogARB ( GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDEBUGMESSAGELOGARBPROC fptr = (PFNGLGETDEBUGMESSAGELOGARBPROC) dasWglGetProcAddress("glGetDebugMessageLogARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetDebugMessageLogARB is NULL");
    auto result = (*fptr)(count, bufSize, sources, types, ids, severities, lengths, messageLog);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glInvalidateNamedFramebufferData ( GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC fptr = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) dasWglGetProcAddress("glInvalidateNamedFramebufferData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glInvalidateNamedFramebufferData is NULL");
    (*fptr)(framebuffer, numAttachments, attachments);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterivEXT ( GLuint texture, GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIVEXTPROC fptr = (PFNGLTEXTUREPARAMETERIVEXTPROC) dasWglGetProcAddress("glTextureParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameterivEXT is NULL");
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetFramebufferParameterivMESA ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC fptr = (PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) dasWglGetProcAddress("glGetFramebufferParameterivMESA");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFramebufferParameterivMESA is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferParameterui64vNV ( GLuint buffer, GLenum pname, GLuint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC) dasWglGetProcAddress("glGetNamedBufferParameterui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedBufferParameterui64vNV is NULL");
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2ui64vNV ( GLuint index, const GLuint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL2UI64VNVPROC) dasWglGetProcAddress("glVertexAttribL2ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL2ui64vNV is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArraysIndirectCount ( GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC) dasWglGetProcAddress("glMultiDrawArraysIndirectCount");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawArraysIndirectCount is NULL");
    (*fptr)(mode, indirect, drawcount, maxdrawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glBindFragDataLocationIndexed ( GLuint program, GLuint colorNumber, GLuint index, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDFRAGDATALOCATIONINDEXEDPROC fptr = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) dasWglGetProcAddress("glBindFragDataLocationIndexed");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindFragDataLocationIndexed is NULL");
    (*fptr)(program, colorNumber, index, name);
    checkOpenGLError(__context__,__at__);
}

void glGetBufferParameteriv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBUFFERPARAMETERIVPROC fptr = (PFNGLGETBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetBufferParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetBufferParameteriv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniform4dv ( GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4DVPROC fptr = (PFNGLUNIFORM4DVPROC) dasWglGetProcAddress("glUniform4dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4dv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformfvARB ( GLuint program, GLint location, GLsizei bufSize, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMFVARBPROC fptr = (PFNGLGETNUNIFORMFVARBPROC) dasWglGetProcAddress("glGetnUniformfvARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnUniformfvARB is NULL");
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glEndQuery ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDQUERYPROC fptr = (PFNGLENDQUERYPROC) dasWglGetProcAddress("glEndQuery");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEndQuery is NULL");
    (*fptr)(target);
    checkOpenGLError(__context__,__at__);
}

void glGetTexImage ( GLenum target, GLint level, GLenum format, GLenum type, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXIMAGEPROC fptr = (PFNGLGETTEXIMAGEPROC) dasWglGetProcAddress("glGetTexImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTexImage is NULL");
    (*fptr)(target, level, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGetInternalformativ ( GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTERNALFORMATIVPROC fptr = (PFNGLGETINTERNALFORMATIVPROC) dasWglGetProcAddress("glGetInternalformativ");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetInternalformativ is NULL");
    (*fptr)(target, internalformat, pname, count, params);
    checkOpenGLError(__context__,__at__);
}

void glEnableVertexArrayAttribEXT ( GLuint vaobj, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEVERTEXARRAYATTRIBEXTPROC fptr = (PFNGLENABLEVERTEXARRAYATTRIBEXTPROC) dasWglGetProcAddress("glEnableVertexArrayAttribEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEnableVertexArrayAttribEXT is NULL");
    (*fptr)(vaobj, index);
    checkOpenGLError(__context__,__at__);
}

void glDepthRange ( GLdouble n, GLdouble f, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEPROC fptr = (PFNGLDEPTHRANGEPROC) dasWglGetProcAddress("glDepthRange");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDepthRange is NULL");
    (*fptr)(n, f);
    checkOpenGLError(__context__,__at__);
}

void glGetTexLevelParameteriv ( GLenum target, GLint level, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXLEVELPARAMETERIVPROC fptr = (PFNGLGETTEXLEVELPARAMETERIVPROC) dasWglGetProcAddress("glGetTexLevelParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTexLevelParameteriv is NULL");
    (*fptr)(target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsStateNV ( GLuint state, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISSTATENVPROC fptr = (PFNGLISSTATENVPROC) dasWglGetProcAddress("glIsStateNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsStateNV is NULL");
    auto result = (*fptr)(state);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glCopyTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXSUBIMAGE1DPROC fptr = (PFNGLCOPYTEXSUBIMAGE1DPROC) dasWglGetProcAddress("glCopyTexSubImage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTexSubImage1D is NULL");
    (*fptr)(target, level, xoffset, x, y, width);
    checkOpenGLError(__context__,__at__);
}

void glUniform4iv ( GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4IVPROC fptr = (PFNGLUNIFORM4IVPROC) dasWglGetProcAddress("glUniform4iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4iv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3IPROC fptr = (PFNGLPROGRAMUNIFORM3IPROC) dasWglGetProcAddress("glProgramUniform3i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3i is NULL");
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4IPROC fptr = (PFNGLPROGRAMUNIFORM4IPROC) dasWglGetProcAddress("glProgramUniform4i");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4i is NULL");
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3dEXT ( GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3DEXTPROC fptr = (PFNGLPROGRAMUNIFORM3DEXTPROC) dasWglGetProcAddress("glProgramUniform3dEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3dEXT is NULL");
    (*fptr)(program, location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4dvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetPathMetricRangeNV ( GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHMETRICRANGENVPROC fptr = (PFNGLGETPATHMETRICRANGENVPROC) dasWglGetProcAddress("glGetPathMetricRangeNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPathMetricRangeNV is NULL");
    (*fptr)(metricQueryMask, firstPathName, numPaths, stride, metrics);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3i64vNV ( GLuint index, const GLint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3I64VNVPROC fptr = (PFNGLVERTEXATTRIBL3I64VNVPROC) dasWglGetProcAddress("glVertexAttribL3i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL3i64vNV is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glViewportSwizzleNV ( GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTSWIZZLENVPROC fptr = (PFNGLVIEWPORTSWIZZLENVPROC) dasWglGetProcAddress("glViewportSwizzleNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glViewportSwizzleNV is NULL");
    (*fptr)(index, swizzlex, swizzley, swizzlez, swizzlew);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveUniformName ( GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEUNIFORMNAMEPROC fptr = (PFNGLGETACTIVEUNIFORMNAMEPROC) dasWglGetProcAddress("glGetActiveUniformName");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetActiveUniformName is NULL");
    (*fptr)(program, uniformIndex, bufSize, length, uniformName);
    checkOpenGLError(__context__,__at__);
}

void glCreateStatesNV ( GLsizei n, GLuint * states, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESTATESNVPROC fptr = (PFNGLCREATESTATESNVPROC) dasWglGetProcAddress("glCreateStatesNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateStatesNV is NULL");
    (*fptr)(n, states);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribDivisor ( GLuint index, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBDIVISORPROC fptr = (PFNGLVERTEXATTRIBDIVISORPROC) dasWglGetProcAddress("glVertexAttribDivisor");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribDivisor is NULL");
    (*fptr)(index, divisor);
    checkOpenGLError(__context__,__at__);
}

void glEnablei ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEIPROC fptr = (PFNGLENABLEIPROC) dasWglGetProcAddress("glEnablei");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEnablei is NULL");
    (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
}

void glGetNextPerfQueryIdINTEL ( GLuint queryId, GLuint * nextQueryId, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNEXTPERFQUERYIDINTELPROC fptr = (PFNGLGETNEXTPERFQUERYIDINTELPROC) dasWglGetProcAddress("glGetNextPerfQueryIdINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNextPerfQueryIdINTEL is NULL");
    (*fptr)(queryId, nextQueryId);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP1uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP1UIVPROC fptr = (PFNGLVERTEXATTRIBP1UIVPROC) dasWglGetProcAddress("glVertexAttribP1uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribP1uiv is NULL");
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glGetPathDashArrayNV ( GLuint path, GLfloat * dashArray, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHDASHARRAYNVPROC fptr = (PFNGLGETPATHDASHARRAYNVPROC) dasWglGetProcAddress("glGetPathDashArrayNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPathDashArrayNV is NULL");
    (*fptr)(path, dashArray);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryObjecti64v ( GLuint id, GLenum pname, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYOBJECTI64VPROC fptr = (PFNGLGETQUERYOBJECTI64VPROC) dasWglGetProcAddress("glGetQueryObjecti64v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetQueryObjecti64v is NULL");
    (*fptr)(id, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetIntegerui64vNV ( GLenum value, GLuint64EXT * result, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGERUI64VNVPROC fptr = (PFNGLGETINTEGERUI64VNVPROC) dasWglGetProcAddress("glGetIntegerui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetIntegerui64vNV is NULL");
    (*fptr)(value, result);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribBinding ( GLuint attribindex, GLuint bindingindex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBBINDINGPROC fptr = (PFNGLVERTEXATTRIBBINDINGPROC) dasWglGetProcAddress("glVertexAttribBinding");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribBinding is NULL");
    (*fptr)(attribindex, bindingindex);
    checkOpenGLError(__context__,__at__);
}

void glDrawBuffers ( GLsizei n, const GLenum * bufs, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWBUFFERSPROC fptr = (PFNGLDRAWBUFFERSPROC) dasWglGetProcAddress("glDrawBuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawBuffers is NULL");
    (*fptr)(n, bufs);
    checkOpenGLError(__context__,__at__);
}

void glFlushMappedNamedBufferRange ( GLuint buffer, GLintptr offset, GLsizeiptr length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC fptr = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) dasWglGetProcAddress("glFlushMappedNamedBufferRange");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFlushMappedNamedBufferRange is NULL");
    (*fptr)(buffer, offset, length);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedBufferData ( GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDBUFFERDATAPROC fptr = (PFNGLCLEARNAMEDBUFFERDATAPROC) dasWglGetProcAddress("glClearNamedBufferData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearNamedBufferData is NULL");
    (*fptr)(buffer, internalformat, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glRenderbufferStorage ( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRENDERBUFFERSTORAGEPROC fptr = (PFNGLRENDERBUFFERSTORAGEPROC) dasWglGetProcAddress("glRenderbufferStorage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glRenderbufferStorage is NULL");
    (*fptr)(target, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ui64ARB ( GLuint program, GLint location, GLuint64 x, GLuint64 y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM2UI64ARBPROC) dasWglGetProcAddress("glProgramUniform2ui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2ui64ARB is NULL");
    (*fptr)(program, location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI2ui ( GLuint index, GLuint x, GLuint y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI2UIPROC fptr = (PFNGLVERTEXATTRIBI2UIPROC) dasWglGetProcAddress("glVertexAttribI2ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI2ui is NULL");
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4DVPROC fptr = (PFNGLVERTEXATTRIB4DVPROC) dasWglGetProcAddress("glVertexAttrib4dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4dv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4bv ( GLuint index, const GLbyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4BVPROC fptr = (PFNGLVERTEXATTRIB4BVPROC) dasWglGetProcAddress("glVertexAttrib4bv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4bv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4fv ( GLuint index, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4FVPROC fptr = (PFNGLVERTEXATTRIB4FVPROC) dasWglGetProcAddress("glVertexAttrib4fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4fv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1iv ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1IVPROC fptr = (PFNGLPROGRAMUNIFORM1IVPROC) dasWglGetProcAddress("glProgramUniform1iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1iv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glDisable ( GLenum cap, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEPROC fptr = (PFNGLDISABLEPROC) dasWglGetProcAddress("glDisable");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDisable is NULL");
    (*fptr)(cap);
    checkOpenGLError(__context__,__at__);
}

void glSamplerParameterIiv ( GLuint sampler, GLenum pname, const GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERIIVPROC fptr = (PFNGLSAMPLERPARAMETERIIVPROC) dasWglGetProcAddress("glSamplerParameterIiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSamplerParameterIiv is NULL");
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquationiARB ( GLuint buf, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONIARBPROC fptr = (PFNGLBLENDEQUATIONIARBPROC) dasWglGetProcAddress("glBlendEquationiARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendEquationiARB is NULL");
    (*fptr)(buf, mode);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTexture ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTUREPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) dasWglGetProcAddress("glNamedFramebufferTexture");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferTexture is NULL");
    (*fptr)(framebuffer, attachment, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glDrawElements ( GLenum mode, GLsizei count, GLenum type, const void * indices, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSPROC fptr = (PFNGLDRAWELEMENTSPROC) dasWglGetProcAddress("glDrawElements");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawElements is NULL");
    (*fptr)(mode, count, type, indices);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix3fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3FVPROC fptr = (PFNGLUNIFORMMATRIX3FVPROC) dasWglGetProcAddress("glUniformMatrix3fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix3fv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix3dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3DVPROC fptr = (PFNGLUNIFORMMATRIX3DVPROC) dasWglGetProcAddress("glUniformMatrix3dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix3dv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBufferData ( GLenum target, GLsizeiptr size, const void * data, GLenum usage, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERDATAPROC fptr = (PFNGLBUFFERDATAPROC) dasWglGetProcAddress("glBufferData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBufferData is NULL");
    (*fptr)(target, size, data, usage);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x2fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) dasWglGetProcAddress("glProgramUniformMatrix4x2fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4x2fv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBlendFuncSeparate ( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCSEPARATEPROC fptr = (PFNGLBLENDFUNCSEPARATEPROC) dasWglGetProcAddress("glBlendFuncSeparate");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendFuncSeparate is NULL");
    (*fptr)(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformHandleui64ARB ( GLuint program, GLint location, GLuint64 value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) dasWglGetProcAddress("glProgramUniformHandleui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformHandleui64ARB is NULL");
    (*fptr)(program, location, value);
    checkOpenGLError(__context__,__at__);
}

void glUniform4ui64vARB ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UI64VARBPROC fptr = (PFNGLUNIFORM4UI64VARBPROC) dasWglGetProcAddress("glUniform4ui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4ui64vARB is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4iv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4IVPROC fptr = (PFNGLVERTEXATTRIB4IVPROC) dasWglGetProcAddress("glVertexAttrib4iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4iv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1DVPROC fptr = (PFNGLPROGRAMUNIFORM1DVPROC) dasWglGetProcAddress("glProgramUniform1dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1dv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4sv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4SVPROC fptr = (PFNGLVERTEXATTRIB4SVPROC) dasWglGetProcAddress("glVertexAttrib4sv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4sv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glSelectPerfMonitorCountersAMD ( GLuint monitor, bool enable, GLuint group, GLint numCounters, GLuint * counterList, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSELECTPERFMONITORCOUNTERSAMDPROC fptr = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) dasWglGetProcAddress("glSelectPerfMonitorCountersAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSelectPerfMonitorCountersAMD is NULL");
    (*fptr)(monitor, enable, group, numCounters, counterList);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE3DEXTPROC fptr = (PFNGLTEXTURESUBIMAGE3DEXTPROC) dasWglGetProcAddress("glTextureSubImage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureSubImage3DEXT is NULL");
    (*fptr)(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

GLsync glFenceSync ( GLenum condition, GLbitfield flags, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFENCESYNCPROC fptr = (PFNGLFENCESYNCPROC) dasWglGetProcAddress("glFenceSync");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFenceSync is NULL");
    auto result = (*fptr)(condition, flags);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMultiTexImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXIMAGE2DEXTPROC fptr = (PFNGLMULTITEXIMAGE2DEXTPROC) dasWglGetProcAddress("glMultiTexImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexImage2DEXT is NULL");
    (*fptr)(texunit, target, level, internalformat, width, height, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGetObjectLabel ( GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETOBJECTLABELPROC fptr = (PFNGLGETOBJECTLABELPROC) dasWglGetProcAddress("glGetObjectLabel");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetObjectLabel is NULL");
    (*fptr)(identifier, name, bufSize, length, label);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) dasWglGetProcAddress("glCompressedTextureSubImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTextureSubImage1DEXT is NULL");
    (*fptr)(texture, target, level, xoffset, width, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexImage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedMultiTexImage3DEXT is NULL");
    (*fptr)(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedMultiTexImage1DEXT is NULL");
    (*fptr)(texunit, target, level, internalformat, width, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3fvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2dEXT ( GLuint program, GLint location, GLdouble x, GLdouble y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2DEXTPROC fptr = (PFNGLPROGRAMUNIFORM2DEXTPROC) dasWglGetProcAddress("glProgramUniform2dEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2dEXT is NULL");
    (*fptr)(program, location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4uiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4UIVPROC fptr = (PFNGLVERTEXATTRIB4UIVPROC) dasWglGetProcAddress("glVertexAttrib4uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4uiv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2DVEXTPROC) dasWglGetProcAddress("glProgramUniform2dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2dvEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribIFormatEXT ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribIFormatEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexAttribIFormatEXT is NULL");
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArraysIndirectBindlessNV ( GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC) dasWglGetProcAddress("glMultiDrawArraysIndirectBindlessNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawArraysIndirectBindlessNV is NULL");
    (*fptr)(mode, indirect, drawCount, stride, vertexBufferCount);
    checkOpenGLError(__context__,__at__);
}

void glCreateProgramPipelines ( GLsizei n, GLuint * pipelines, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEPROGRAMPIPELINESPROC fptr = (PFNGLCREATEPROGRAMPIPELINESPROC) dasWglGetProcAddress("glCreateProgramPipelines");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateProgramPipelines is NULL");
    (*fptr)(n, pipelines);
    checkOpenGLError(__context__,__at__);
}

void glFragmentCoverageColorNV ( GLuint color, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAGMENTCOVERAGECOLORNVPROC fptr = (PFNGLFRAGMENTCOVERAGECOLORNVPROC) dasWglGetProcAddress("glFragmentCoverageColorNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFragmentCoverageColorNV is NULL");
    (*fptr)(color);
    checkOpenGLError(__context__,__at__);
}

void glDisableIndexedEXT ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEINDEXEDEXTPROC fptr = (PFNGLDISABLEINDEXEDEXTPROC) dasWglGetProcAddress("glDisableIndexedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDisableIndexedEXT is NULL");
    (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
}

void glValidateProgram ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVALIDATEPROGRAMPROC fptr = (PFNGLVALIDATEPROGRAMPROC) dasWglGetProcAddress("glValidateProgram");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glValidateProgram is NULL");
    (*fptr)(program);
    checkOpenGLError(__context__,__at__);
}

void glUniform4ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4UIPROC fptr = (PFNGLUNIFORM4UIPROC) dasWglGetProcAddress("glUniform4ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4ui is NULL");
    (*fptr)(location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4FPROC fptr = (PFNGLPROGRAMUNIFORM4FPROC) dasWglGetProcAddress("glProgramUniform4f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4f is NULL");
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x4fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) dasWglGetProcAddress("glProgramUniformMatrix3x4fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3x4fv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameter4dvEXT ( GLuint program, GLenum target, GLuint index, const GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameter4dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParameter4dvEXT is NULL");
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glDrawCommandsStatesAddressNV ( const GLuint64 * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC fptr = (PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC) dasWglGetProcAddress("glDrawCommandsStatesAddressNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawCommandsStatesAddressNV is NULL");
    (*fptr)(indirects, sizes, states, fbos, count);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorCountersAMD ( GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORCOUNTERSAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERSAMDPROC) dasWglGetProcAddress("glGetPerfMonitorCountersAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPerfMonitorCountersAMD is NULL");
    (*fptr)(group, numCounters, maxActiveCounters, counterSize, counters);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM2UI64VNVPROC) dasWglGetProcAddress("glProgramUniform2ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2ui64vNV is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glResolveDepthValuesNV ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRESOLVEDEPTHVALUESNVPROC fptr = (PFNGLRESOLVEDEPTHVALUESNVPROC) dasWglGetProcAddress("glResolveDepthValuesNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glResolveDepthValuesNV is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glUniformui64NV ( GLint location, GLuint64EXT value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMUI64NVPROC fptr = (PFNGLUNIFORMUI64NVPROC) dasWglGetProcAddress("glUniformui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformui64NV is NULL");
    (*fptr)(location, value);
    checkOpenGLError(__context__,__at__);
}

void glDrawArraysInstanced ( GLenum mode, GLint first, GLsizei count, GLsizei instancecount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSINSTANCEDPROC fptr = (PFNGLDRAWARRAYSINSTANCEDPROC) dasWglGetProcAddress("glDrawArraysInstanced");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawArraysInstanced is NULL");
    (*fptr)(mode, first, count, instancecount);
    checkOpenGLError(__context__,__at__);
}

void glUniformHandleui64vNV ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMHANDLEUI64VNVPROC fptr = (PFNGLUNIFORMHANDLEUI64VNVPROC) dasWglGetProcAddress("glUniformHandleui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformHandleui64vNV is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetRenderbufferParameteriv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETRENDERBUFFERPARAMETERIVPROC fptr = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetRenderbufferParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetRenderbufferParameteriv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3FPROC fptr = (PFNGLPROGRAMUNIFORM3FPROC) dasWglGetProcAddress("glProgramUniform3f");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3f is NULL");
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4DPROC fptr = (PFNGLPROGRAMUNIFORM4DPROC) dasWglGetProcAddress("glProgramUniform4d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4d is NULL");
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsInstancedBaseVertexBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) dasWglGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawElementsInstancedBaseVertexBaseInstance is NULL");
    (*fptr)(mode, count, type, indices, instancecount, basevertex, baseinstance);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramInfoLog ( GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMINFOLOGPROC fptr = (PFNGLGETPROGRAMINFOLOGPROC) dasWglGetProcAddress("glGetProgramInfoLog");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramInfoLog is NULL");
    (*fptr)(program, bufSize, length, infoLog);
    checkOpenGLError(__context__,__at__);
}

void glMemoryBarrier ( GLbitfield barriers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMEMORYBARRIERPROC fptr = (PFNGLMEMORYBARRIERPROC) dasWglGetProcAddress("glMemoryBarrier");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMemoryBarrier is NULL");
    (*fptr)(barriers);
    checkOpenGLError(__context__,__at__);
}

void glRenderbufferStorageMultisampleAdvancedAMD ( GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC fptr = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) dasWglGetProcAddress("glRenderbufferStorageMultisampleAdvancedAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glRenderbufferStorageMultisampleAdvancedAMD is NULL");
    (*fptr)(target, samples, storageSamples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexEnvivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXENVIVEXTPROC fptr = (PFNGLMULTITEXENVIVEXTPROC) dasWglGetProcAddress("glMultiTexEnvivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexEnvivEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameteriv ( GLuint texture, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIVPROC fptr = (PFNGLGETTEXTUREPARAMETERIVPROC) dasWglGetProcAddress("glGetTextureParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureParameteriv is NULL");
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glUnmapNamedBufferEXT ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNMAPNAMEDBUFFEREXTPROC fptr = (PFNGLUNMAPNAMEDBUFFEREXTPROC) dasWglGetProcAddress("glUnmapNamedBufferEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUnmapNamedBufferEXT is NULL");
    auto result = (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLVULKANPROCNV glGetVkProcAddrNV ( const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVKPROCADDRNVPROC fptr = (PFNGLGETVKPROCADDRNVPROC) dasWglGetProcAddress("glGetVkProcAddrNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVkProcAddrNV is NULL");
    auto result = (*fptr)(name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMatrixMultdEXT ( GLenum mode, const GLdouble * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULTDEXTPROC fptr = (PFNGLMATRIXMULTDEXTPROC) dasWglGetProcAddress("glMatrixMultdEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixMultdEXT is NULL");
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glPathParameterfvNV ( GLuint path, GLenum pname, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHPARAMETERFVNVPROC fptr = (PFNGLPATHPARAMETERFVNVPROC) dasWglGetProcAddress("glPathParameterfvNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathParameterfvNV is NULL");
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexEnvivEXT ( GLenum texunit, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXENVIVEXTPROC fptr = (PFNGLGETMULTITEXENVIVEXTPROC) dasWglGetProcAddress("glGetMultiTexEnvivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexEnvivEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribLFormatNV ( GLuint index, GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBLFORMATNVPROC fptr = (PFNGLVERTEXATTRIBLFORMATNVPROC) dasWglGetProcAddress("glVertexAttribLFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribLFormatNV is NULL");
    (*fptr)(index, size, type, stride);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferRenderbuffer ( GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC fptr = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) dasWglGetProcAddress("glNamedFramebufferRenderbuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferRenderbuffer is NULL");
    (*fptr)(framebuffer, attachment, renderbuffertarget, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3DPROC fptr = (PFNGLPROGRAMUNIFORM3DPROC) dasWglGetProcAddress("glProgramUniform3d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3d is NULL");
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glGetnCompressedTexImageARB ( GLenum target, GLint lod, GLsizei bufSize, void * img, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC fptr = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) dasWglGetProcAddress("glGetnCompressedTexImageARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnCompressedTexImageARB is NULL");
    (*fptr)(target, lod, bufSize, img);
    checkOpenGLError(__context__,__at__);
}

void glProvokingVertex ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROVOKINGVERTEXPROC fptr = (PFNGLPROVOKINGVERTEXPROC) dasWglGetProcAddress("glProvokingVertex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProvokingVertex is NULL");
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glPointParameterfv ( GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTPARAMETERFVPROC fptr = (PFNGLPOINTPARAMETERFVPROC) dasWglGetProcAddress("glPointParameterfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPointParameterfv is NULL");
    (*fptr)(pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniform3ui64NV ( GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3UI64NVPROC fptr = (PFNGLUNIFORM3UI64NVPROC) dasWglGetProcAddress("glUniform3ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3ui64NV is NULL");
    (*fptr)(location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glGetTexLevelParameterfv ( GLenum target, GLint level, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXLEVELPARAMETERFVPROC fptr = (PFNGLGETTEXLEVELPARAMETERFVPROC) dasWglGetProcAddress("glGetTexLevelParameterfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTexLevelParameterfv is NULL");
    (*fptr)(target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glColorMask ( bool red, bool green, bool blue, bool alpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOLORMASKPROC fptr = (PFNGLCOLORMASKPROC) dasWglGetProcAddress("glColorMask");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glColorMask is NULL");
    (*fptr)(red, green, blue, alpha);
    checkOpenGLError(__context__,__at__);
}

void glBeginQuery ( GLenum target, GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINQUERYPROC fptr = (PFNGLBEGINQUERYPROC) dasWglGetProcAddress("glBeginQuery");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBeginQuery is NULL");
    (*fptr)(target, id);
    checkOpenGLError(__context__,__at__);
}

void glTexturePageCommitmentMemNV ( GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC fptr = (PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) dasWglGetProcAddress("glTexturePageCommitmentMemNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexturePageCommitmentMemNV is NULL");
    (*fptr)(texture, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferuiv ( GLenum buffer, GLint drawbuffer, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERUIVPROC fptr = (PFNGLCLEARBUFFERUIVPROC) dasWglGetProcAddress("glClearBufferuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearBufferuiv is NULL");
    (*fptr)(buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) dasWglGetProcAddress("glProgramUniformMatrix4dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4dv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1ui ( GLuint program, GLint location, GLuint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UIPROC fptr = (PFNGLPROGRAMUNIFORM1UIPROC) dasWglGetProcAddress("glProgramUniform1ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1ui is NULL");
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferStorageEXT ( GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERSTORAGEEXTPROC fptr = (PFNGLNAMEDBUFFERSTORAGEEXTPROC) dasWglGetProcAddress("glNamedBufferStorageEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedBufferStorageEXT is NULL");
    (*fptr)(buffer, size, data, flags);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UIPROC fptr = (PFNGLPROGRAMUNIFORM3UIPROC) dasWglGetProcAddress("glProgramUniform3ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3ui is NULL");
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsBufferResidentNV ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISBUFFERRESIDENTNVPROC fptr = (PFNGLISBUFFERRESIDENTNVPROC) dasWglGetProcAddress("glIsBufferResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsBufferResidentNV is NULL");
    auto result = (*fptr)(target);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetTransformFeedbackiv ( GLuint xfb, GLenum pname, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTRANSFORMFEEDBACKIVPROC fptr = (PFNGLGETTRANSFORMFEEDBACKIVPROC) dasWglGetProcAddress("glGetTransformFeedbackiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTransformFeedbackiv is NULL");
    (*fptr)(xfb, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorCounterInfoAMD ( GLuint group, GLuint counter, GLenum pname, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORCOUNTERINFOAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) dasWglGetProcAddress("glGetPerfMonitorCounterInfoAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPerfMonitorCounterInfoAMD is NULL");
    (*fptr)(group, counter, pname, data);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTexture3DEXT ( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) dasWglGetProcAddress("glNamedFramebufferTexture3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferTexture3DEXT is NULL");
    (*fptr)(framebuffer, attachment, textarget, texture, level, zoffset);
    checkOpenGLError(__context__,__at__);
}

GLushort glGetStageIndexNV ( GLenum shadertype, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSTAGEINDEXNVPROC fptr = (PFNGLGETSTAGEINDEXNVPROC) dasWglGetProcAddress("glGetStageIndexNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetStageIndexNV is NULL");
    auto result = (*fptr)(shadertype);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glColorFormatNV ( GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOLORFORMATNVPROC fptr = (PFNGLCOLORFORMATNVPROC) dasWglGetProcAddress("glColorFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glColorFormatNV is NULL");
    (*fptr)(size, type, stride);
    checkOpenGLError(__context__,__at__);
}

GLint glGetFragDataLocation ( GLuint program, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAGDATALOCATIONPROC fptr = (PFNGLGETFRAGDATALOCATIONPROC) dasWglGetProcAddress("glGetFragDataLocation");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFragDataLocation is NULL");
    auto result = (*fptr)(program, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMultiTexParameterivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERIVEXTPROC fptr = (PFNGLMULTITEXPARAMETERIVEXTPROC) dasWglGetProcAddress("glMultiTexParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexParameterivEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterIuivEXT ( GLuint texture, GLenum target, GLenum pname, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIUIVEXTPROC fptr = (PFNGLTEXTUREPARAMETERIUIVEXTPROC) dasWglGetProcAddress("glTextureParameterIuivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameterIuivEXT is NULL");
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM3UI64VARBPROC) dasWglGetProcAddress("glProgramUniform3ui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3ui64vARB is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexEnvfvEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXENVFVEXTPROC fptr = (PFNGLGETMULTITEXENVFVEXTPROC) dasWglGetProcAddress("glGetMultiTexEnvfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexEnvfvEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMakeImageHandleResidentARB ( GLuint64 handle, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEIMAGEHANDLERESIDENTARBPROC fptr = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) dasWglGetProcAddress("glMakeImageHandleResidentARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeImageHandleResidentARB is NULL");
    (*fptr)(handle, access);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2d ( GLuint index, GLdouble x, GLdouble y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2DPROC fptr = (PFNGLVERTEXATTRIBL2DPROC) dasWglGetProcAddress("glVertexAttribL2d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL2d is NULL");
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC fptr = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) dasWglGetProcAddress("glCompressedTexSubImage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTexSubImage2D is NULL");
    (*fptr)(target, level, xoffset, yoffset, width, height, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glPointSize ( GLfloat size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTSIZEPROC fptr = (PFNGLPOINTSIZEPROC) dasWglGetProcAddress("glPointSize");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPointSize is NULL");
    (*fptr)(size);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformui64NV ( GLuint program, GLint location, GLuint64EXT value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMUI64NVPROC fptr = (PFNGLPROGRAMUNIFORMUI64NVPROC) dasWglGetProcAddress("glProgramUniformui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformui64NV is NULL");
    (*fptr)(program, location, value);
    checkOpenGLError(__context__,__at__);
}

void glEndTransformFeedback ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDTRANSFORMFEEDBACKPROC fptr = (PFNGLENDTRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glEndTransformFeedback");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEndTransformFeedback is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glActiveShaderProgram ( GLuint pipeline, GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLACTIVESHADERPROGRAMPROC fptr = (PFNGLACTIVESHADERPROGRAMPROC) dasWglGetProcAddress("glActiveShaderProgram");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glActiveShaderProgram is NULL");
    (*fptr)(pipeline, program);
    checkOpenGLError(__context__,__at__);
}

void glUniform2ui64ARB ( GLint location, GLuint64 x, GLuint64 y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UI64ARBPROC fptr = (PFNGLUNIFORM2UI64ARBPROC) dasWglGetProcAddress("glUniform2ui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2ui64ARB is NULL");
    (*fptr)(location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM1UI64VARBPROC) dasWglGetProcAddress("glProgramUniform1ui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1ui64vARB is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glBeginPerfMonitorAMD ( GLuint monitor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINPERFMONITORAMDPROC fptr = (PFNGLBEGINPERFMONITORAMDPROC) dasWglGetProcAddress("glBeginPerfMonitorAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBeginPerfMonitorAMD is NULL");
    (*fptr)(monitor);
    checkOpenGLError(__context__,__at__);
}

GLboolean glUnmapBuffer ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNMAPBUFFERPROC fptr = (PFNGLUNMAPBUFFERPROC) dasWglGetProcAddress("glUnmapBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUnmapBuffer is NULL");
    auto result = (*fptr)(target);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glCopyTextureSubImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) dasWglGetProcAddress("glCopyTextureSubImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTextureSubImage2DEXT is NULL");
    (*fptr)(texture, target, level, xoffset, yoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1uiEXT ( GLuint program, GLint location, GLuint v0, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM1UIEXTPROC) dasWglGetProcAddress("glProgramUniform1uiEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1uiEXT is NULL");
    (*fptr)(program, location, v0);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayIndexOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYINDEXOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYINDEXOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayIndexOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayIndexOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glGetInteger64i_v ( GLenum target, GLuint index, GLint64 * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGER64I_VPROC fptr = (PFNGLGETINTEGER64I_VPROC) dasWglGetProcAddress("glGetInteger64i_v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetInteger64i_v is NULL");
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramStringEXT ( GLuint program, GLenum target, GLenum format, GLsizei len, const void * string, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMSTRINGEXTPROC fptr = (PFNGLNAMEDPROGRAMSTRINGEXTPROC) dasWglGetProcAddress("glNamedProgramStringEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramStringEXT is NULL");
    (*fptr)(program, target, format, len, string);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexSubImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXSUBIMAGE2DEXTPROC fptr = (PFNGLMULTITEXSUBIMAGE2DEXTPROC) dasWglGetProcAddress("glMultiTexSubImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexSubImage2DEXT is NULL");
    (*fptr)(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glBeginConditionalRenderNV ( GLuint id, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINCONDITIONALRENDERNVPROC fptr = (PFNGLBEGINCONDITIONALRENDERNVPROC) dasWglGetProcAddress("glBeginConditionalRenderNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBeginConditionalRenderNV is NULL");
    (*fptr)(id, mode);
    checkOpenGLError(__context__,__at__);
}

void glDepthBoundsdNV ( GLdouble zmin, GLdouble zmax, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHBOUNDSDNVPROC fptr = (PFNGLDEPTHBOUNDSDNVPROC) dasWglGetProcAddress("glDepthBoundsdNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDepthBoundsdNV is NULL");
    (*fptr)(zmin, zmax);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferParameteri64v ( GLuint buffer, GLenum pname, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPARAMETERI64VPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) dasWglGetProcAddress("glGetNamedBufferParameteri64v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedBufferParameteri64v is NULL");
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniform3i64vNV ( GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM3I64VNVPROC fptr = (PFNGLUNIFORM3I64VNVPROC) dasWglGetProcAddress("glUniform3i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform3i64vNV is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformi64vARB ( GLuint program, GLint location, GLsizei bufSize, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMI64VARBPROC fptr = (PFNGLGETNUNIFORMI64VARBPROC) dasWglGetProcAddress("glGetnUniformi64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnUniformi64vARB is NULL");
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM2I64VARBPROC) dasWglGetProcAddress("glProgramUniform2i64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2i64vARB is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetDoubleIndexedvEXT ( GLenum target, GLuint index, GLdouble * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDOUBLEINDEXEDVEXTPROC fptr = (PFNGLGETDOUBLEINDEXEDVEXTPROC) dasWglGetProcAddress("glGetDoubleIndexedvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetDoubleIndexedvEXT is NULL");
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTextureARB ( GLenum target, GLenum attachment, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTUREARBPROC fptr = (PFNGLFRAMEBUFFERTEXTUREARBPROC) dasWglGetProcAddress("glFramebufferTextureARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferTextureARB is NULL");
    (*fptr)(target, attachment, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glGetPointeri_vEXT ( GLenum pname, GLuint index, void ** params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPOINTERI_VEXTPROC fptr = (PFNGLGETPOINTERI_VEXTPROC) dasWglGetProcAddress("glGetPointeri_vEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPointeri_vEXT is NULL");
    (*fptr)(pname, index, params);
    checkOpenGLError(__context__,__at__);
}

void glSecondaryColorFormatNV ( GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSECONDARYCOLORFORMATNVPROC fptr = (PFNGLSECONDARYCOLORFORMATNVPROC) dasWglGetProcAddress("glSecondaryColorFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSecondaryColorFormatNV is NULL");
    (*fptr)(size, type, stride);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsIndirectBindlessCountNV ( GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC) dasWglGetProcAddress("glMultiDrawElementsIndirectBindlessCountNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawElementsIndirectBindlessCountNV is NULL");
    (*fptr)(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage3DMultisample ( GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC fptr = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) dasWglGetProcAddress("glTextureStorage3DMultisample");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureStorage3DMultisample is NULL");
    (*fptr)(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glScissorArrayv ( GLuint first, GLsizei count, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSORARRAYVPROC fptr = (PFNGLSCISSORARRAYVPROC) dasWglGetProcAddress("glScissorArrayv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glScissorArrayv is NULL");
    (*fptr)(first, count, v);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoad3x2fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOAD3X2FNVPROC fptr = (PFNGLMATRIXLOAD3X2FNVPROC) dasWglGetProcAddress("glMatrixLoad3x2fNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixLoad3x2fNV is NULL");
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1FVEXTPROC) dasWglGetProcAddress("glProgramUniform1fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1fvEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glTransformFeedbackVaryings ( GLuint program, GLsizei count, const GLchar *const * varyings, GLenum bufferMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTRANSFORMFEEDBACKVARYINGSPROC fptr = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) dasWglGetProcAddress("glTransformFeedbackVaryings");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTransformFeedbackVaryings is NULL");
    (*fptr)(program, count, varyings, bufferMode);
    checkOpenGLError(__context__,__at__);
}

void glBufferAddressRangeNV ( GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERADDRESSRANGENVPROC fptr = (PFNGLBUFFERADDRESSRANGENVPROC) dasWglGetProcAddress("glBufferAddressRangeNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBufferAddressRangeNV is NULL");
    (*fptr)(pname, index, address, length);
    checkOpenGLError(__context__,__at__);
}

GLint glGetAttribLocation ( GLuint program, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETATTRIBLOCATIONPROC fptr = (PFNGLGETATTRIBLOCATIONPROC) dasWglGetProcAddress("glGetAttribLocation");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetAttribLocation is NULL");
    auto result = (*fptr)(program, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glVertexAttrib4usv ( GLuint index, const GLushort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4USVPROC fptr = (PFNGLVERTEXATTRIB4USVPROC) dasWglGetProcAddress("glVertexAttrib4usv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4usv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glEnableClientStateiEXT ( GLenum array, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLECLIENTSTATEIEXTPROC fptr = (PFNGLENABLECLIENTSTATEIEXTPROC) dasWglGetProcAddress("glEnableClientStateiEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEnableClientStateiEXT is NULL");
    (*fptr)(array, index);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsProgram ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISPROGRAMPROC fptr = (PFNGLISPROGRAMPROC) dasWglGetProcAddress("glIsProgram");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsProgram is NULL");
    auto result = (*fptr)(program);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniform1i64vNV ( GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1I64VNVPROC fptr = (PFNGLUNIFORM1I64VNVPROC) dasWglGetProcAddress("glUniform1i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1i64vNV is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glStencilFunc ( GLenum func, GLint ref, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILFUNCPROC fptr = (PFNGLSTENCILFUNCPROC) dasWglGetProcAddress("glStencilFunc");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilFunc is NULL");
    (*fptr)(func, ref, mask);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3iv ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3IVPROC fptr = (PFNGLPROGRAMUNIFORM3IVPROC) dasWglGetProcAddress("glProgramUniform3iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3iv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glUniform2ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UI64VNVPROC fptr = (PFNGLUNIFORM2UI64VNVPROC) dasWglGetProcAddress("glUniform2ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2ui64vNV is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorageEXT ( GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) dasWglGetProcAddress("glNamedRenderbufferStorageEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedRenderbufferStorageEXT is NULL");
    (*fptr)(renderbuffer, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glBeginPerfQueryINTEL ( GLuint queryHandle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINPERFQUERYINTELPROC fptr = (PFNGLBEGINPERFQUERYINTELPROC) dasWglGetProcAddress("glBeginPerfQueryINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBeginPerfQueryINTEL is NULL");
    (*fptr)(queryHandle);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib4ubv ( GLuint index, const GLubyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB4UBVPROC fptr = (PFNGLVERTEXATTRIB4UBVPROC) dasWglGetProcAddress("glVertexAttrib4ubv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib4ubv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterfv ( GLuint texture, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERFVPROC fptr = (PFNGLGETTEXTUREPARAMETERFVPROC) dasWglGetProcAddress("glGetTextureParameterfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureParameterfv is NULL");
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedBufferDataEXT ( GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDBUFFERDATAEXTPROC fptr = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC) dasWglGetProcAddress("glClearNamedBufferDataEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearNamedBufferDataEXT is NULL");
    (*fptr)(buffer, internalformat, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribBindingEXT ( GLuint vaobj, GLuint attribindex, GLuint bindingindex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribBindingEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexAttribBindingEXT is NULL");
    (*fptr)(vaobj, attribindex, bindingindex);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXIMAGE3DEXTPROC fptr = (PFNGLMULTITEXIMAGE3DEXTPROC) dasWglGetProcAddress("glMultiTexImage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexImage3DEXT is NULL");
    (*fptr)(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glBindVertexBuffer ( GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDVERTEXBUFFERPROC fptr = (PFNGLBINDVERTEXBUFFERPROC) dasWglGetProcAddress("glBindVertexBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindVertexBuffer is NULL");
    (*fptr)(bindingindex, buffer, offset, stride);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedRenderbufferParameteriv ( GLuint renderbuffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC fptr = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetNamedRenderbufferParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedRenderbufferParameteriv is NULL");
    (*fptr)(renderbuffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x4fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3x4fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3x4fvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage2DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE2DEXTPROC fptr = (PFNGLTEXTURESTORAGE2DEXTPROC) dasWglGetProcAddress("glTextureStorage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureStorage2DEXT is NULL");
    (*fptr)(texture, target, levels, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2DVPROC fptr = (PFNGLVERTEXATTRIB2DVPROC) dasWglGetProcAddress("glVertexAttrib2dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib2dv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2fv ( GLuint index, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2FVPROC fptr = (PFNGLVERTEXATTRIB2FVPROC) dasWglGetProcAddress("glVertexAttrib2fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib2fv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3FVPROC fptr = (PFNGLPROGRAMUNIFORM3FVPROC) dasWglGetProcAddress("glProgramUniform3fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3fv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexBuffers ( GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXBUFFERSPROC fptr = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) dasWglGetProcAddress("glVertexArrayVertexBuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexBuffers is NULL");
    (*fptr)(vaobj, first, count, buffers, offsets, strides);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformHandleui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) dasWglGetProcAddress("glProgramUniformHandleui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformHandleui64vARB is NULL");
    (*fptr)(program, location, count, values);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE1DEXTPROC fptr = (PFNGLTEXTURESUBIMAGE1DEXTPROC) dasWglGetProcAddress("glTextureSubImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureSubImage1DEXT is NULL");
    (*fptr)(texture, target, level, xoffset, width, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayVertexOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3i64ARB ( GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM3I64ARBPROC) dasWglGetProcAddress("glProgramUniform3i64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3i64ARB is NULL");
    (*fptr)(program, location, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryBufferObjectui64v ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYBUFFEROBJECTUI64VPROC fptr = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) dasWglGetProcAddress("glGetQueryBufferObjectui64v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetQueryBufferObjectui64v is NULL");
    (*fptr)(id, buffer, pname, offset);
    checkOpenGLError(__context__,__at__);
}

GLuint64 glGetTextureSamplerHandleNV ( GLuint texture, GLuint sampler, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURESAMPLERHANDLENVPROC fptr = (PFNGLGETTEXTURESAMPLERHANDLENVPROC) dasWglGetProcAddress("glGetTextureSamplerHandleNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureSamplerHandleNV is NULL");
    auto result = (*fptr)(texture, sampler);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetnUniformuiv ( GLuint program, GLint location, GLsizei bufSize, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMUIVPROC fptr = (PFNGLGETNUNIFORMUIVPROC) dasWglGetProcAddress("glGetnUniformuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnUniformuiv is NULL");
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glBlendParameteriNV ( GLenum pname, GLint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDPARAMETERINVPROC fptr = (PFNGLBLENDPARAMETERINVPROC) dasWglGetProcAddress("glBlendParameteriNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendParameteriNV is NULL");
    (*fptr)(pname, value);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfMonitorCounterStringAMD ( GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) dasWglGetProcAddress("glGetPerfMonitorCounterStringAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPerfMonitorCounterStringAMD is NULL");
    (*fptr)(group, counter, bufSize, length, counterString);
    checkOpenGLError(__context__,__at__);
}

void glTexStorage1D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSTORAGE1DPROC fptr = (PFNGLTEXSTORAGE1DPROC) dasWglGetProcAddress("glTexStorage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexStorage1D is NULL");
    (*fptr)(target, levels, internalformat, width);
    checkOpenGLError(__context__,__at__);
}

void glTextureImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREIMAGE1DEXTPROC fptr = (PFNGLTEXTUREIMAGE1DEXTPROC) dasWglGetProcAddress("glTextureImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureImage1DEXT is NULL");
    (*fptr)(texture, target, level, internalformat, width, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) dasWglGetProcAddress("glProgramUniformMatrix4fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4fv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glDeleteBuffers ( GLsizei n, const GLuint * buffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEBUFFERSPROC fptr = (PFNGLDELETEBUFFERSPROC) dasWglGetProcAddress("glDeleteBuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteBuffers is NULL");
    (*fptr)(n, buffers);
    checkOpenGLError(__context__,__at__);
}

void * glMapBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPBUFFERRANGEPROC fptr = (PFNGLMAPBUFFERRANGEPROC) dasWglGetProcAddress("glMapBufferRange");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMapBufferRange is NULL");
    auto result = (*fptr)(target, offset, length, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetMultisamplefv ( GLenum pname, GLuint index, GLfloat * val, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTISAMPLEFVPROC fptr = (PFNGLGETMULTISAMPLEFVPROC) dasWglGetProcAddress("glGetMultisamplefv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultisamplefv is NULL");
    (*fptr)(pname, index, val);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageInsert ( GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGEINSERTPROC fptr = (PFNGLDEBUGMESSAGEINSERTPROC) dasWglGetProcAddress("glDebugMessageInsert");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDebugMessageInsert is NULL");
    (*fptr)(source, type, id, severity, length, buf);
    checkOpenGLError(__context__,__at__);
}

void glFlushMappedBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFLUSHMAPPEDBUFFERRANGEPROC fptr = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) dasWglGetProcAddress("glFlushMappedBufferRange");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFlushMappedBufferRange is NULL");
    (*fptr)(target, offset, length);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsTransformFeedback ( GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISTRANSFORMFEEDBACKPROC fptr = (PFNGLISTRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glIsTransformFeedback");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsTransformFeedback is NULL");
    auto result = (*fptr)(id);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetFloatIndexedvEXT ( GLenum target, GLuint index, GLfloat * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFLOATINDEXEDVEXTPROC fptr = (PFNGLGETFLOATINDEXEDVEXTPROC) dasWglGetProcAddress("glGetFloatIndexedvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFloatIndexedvEXT is NULL");
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glMakeImageHandleNonResidentNV ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC fptr = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) dasWglGetProcAddress("glMakeImageHandleNonResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeImageHandleNonResidentNV is NULL");
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glUniform1i64NV ( GLint location, GLint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1I64NVPROC fptr = (PFNGLUNIFORM1I64NVPROC) dasWglGetProcAddress("glUniform1i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1i64NV is NULL");
    (*fptr)(location, x);
    checkOpenGLError(__context__,__at__);
}

void glFlushMappedNamedBufferRangeEXT ( GLuint buffer, GLintptr offset, GLsizeiptr length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC fptr = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) dasWglGetProcAddress("glFlushMappedNamedBufferRangeEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFlushMappedNamedBufferRangeEXT is NULL");
    (*fptr)(buffer, offset, length);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterIuiv ( GLuint texture, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERIUIVPROC fptr = (PFNGLGETTEXTUREPARAMETERIUIVPROC) dasWglGetProcAddress("glGetTextureParameterIuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureParameterIuiv is NULL");
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4x2dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4X2DVPROC fptr = (PFNGLUNIFORMMATRIX4X2DVPROC) dasWglGetProcAddress("glUniformMatrix4x2dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix4x2dv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glEndPerfQueryINTEL ( GLuint queryHandle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDPERFQUERYINTELPROC fptr = (PFNGLENDPERFQUERYINTELPROC) dasWglGetProcAddress("glEndPerfQueryINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEndPerfQueryINTEL is NULL");
    (*fptr)(queryHandle);
    checkOpenGLError(__context__,__at__);
}

void glDrawMeshTasksNV ( GLuint first, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWMESHTASKSNVPROC fptr = (PFNGLDRAWMESHTASKSNVPROC) dasWglGetProcAddress("glDrawMeshTasksNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawMeshTasksNV is NULL");
    (*fptr)(first, count);
    checkOpenGLError(__context__,__at__);
}

GLenum glPathGlyphIndexArrayNV ( GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHGLYPHINDEXARRAYNVPROC fptr = (PFNGLPATHGLYPHINDEXARRAYNVPROC) dasWglGetProcAddress("glPathGlyphIndexArrayNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathGlyphIndexArrayNV is NULL");
    auto result = (*fptr)(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glSampleCoverage ( GLfloat value, bool invert, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLECOVERAGEPROC fptr = (PFNGLSAMPLECOVERAGEPROC) dasWglGetProcAddress("glSampleCoverage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSampleCoverage is NULL");
    (*fptr)(value, invert);
    checkOpenGLError(__context__,__at__);
}

void glBlendFunci ( GLuint buf, GLenum src, GLenum dst, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCIPROC fptr = (PFNGLBLENDFUNCIPROC) dasWglGetProcAddress("glBlendFunci");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendFunci is NULL");
    (*fptr)(buf, src, dst);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexParameterIuivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERIUIVEXTPROC fptr = (PFNGLMULTITEXPARAMETERIUIVEXTPROC) dasWglGetProcAddress("glMultiTexParameterIuivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexParameterIuivEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glStencilThenCoverFillPathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) dasWglGetProcAddress("glStencilThenCoverFillPathInstancedNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilThenCoverFillPathInstancedNV is NULL");
    (*fptr)(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glStencilThenCoverStrokePathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) dasWglGetProcAddress("glStencilThenCoverStrokePathInstancedNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilThenCoverStrokePathInstancedNV is NULL");
    (*fptr)(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP2ui ( GLuint index, GLenum type, bool normalized, GLuint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP2UIPROC fptr = (PFNGLVERTEXATTRIBP2UIPROC) dasWglGetProcAddress("glVertexAttribP2ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribP2ui is NULL");
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquationSeparate ( GLenum modeRGB, GLenum modeAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONSEPARATEPROC fptr = (PFNGLBLENDEQUATIONSEPARATEPROC) dasWglGetProcAddress("glBlendEquationSeparate");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendEquationSeparate is NULL");
    (*fptr)(modeRGB, modeAlpha);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageInsertARB ( GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGEINSERTARBPROC fptr = (PFNGLDEBUGMESSAGEINSERTARBPROC) dasWglGetProcAddress("glDebugMessageInsertARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDebugMessageInsertARB is NULL");
    (*fptr)(source, type, id, severity, length, buf);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribDivisorEXT ( GLuint vaobj, GLuint index, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribDivisorEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexAttribDivisorEXT is NULL");
    (*fptr)(vaobj, index, divisor);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXIMAGE1DEXTPROC fptr = (PFNGLMULTITEXIMAGE1DEXTPROC) dasWglGetProcAddress("glMultiTexImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexImage1DEXT is NULL");
    (*fptr)(texunit, target, level, internalformat, width, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ui64NV ( GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM2UI64NVPROC) dasWglGetProcAddress("glProgramUniform2ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2ui64NV is NULL");
    (*fptr)(program, location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glNormalFormatNV ( GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNORMALFORMATNVPROC fptr = (PFNGLNORMALFORMATNVPROC) dasWglGetProcAddress("glNormalFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNormalFormatNV is NULL");
    (*fptr)(type, stride);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveSubroutineUniformiv ( GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC fptr = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) dasWglGetProcAddress("glGetActiveSubroutineUniformiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetActiveSubroutineUniformiv is NULL");
    (*fptr)(program, shadertype, index, pname, values);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1d ( GLuint index, GLdouble x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1DPROC fptr = (PFNGLVERTEXATTRIBL1DPROC) dasWglGetProcAddress("glVertexAttribL1d");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL1d is NULL");
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix3x4dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3X4DVPROC fptr = (PFNGLUNIFORMMATRIX3X4DVPROC) dasWglGetProcAddress("glUniformMatrix3x4dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix3x4dv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glPathStencilDepthOffsetNV ( GLfloat factor, GLfloat units, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHSTENCILDEPTHOFFSETNVPROC fptr = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC) dasWglGetProcAddress("glPathStencilDepthOffsetNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathStencilDepthOffsetNV is NULL");
    (*fptr)(factor, units);
    checkOpenGLError(__context__,__at__);
}

void glTextureImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREIMAGE2DEXTPROC fptr = (PFNGLTEXTUREIMAGE2DEXTPROC) dasWglGetProcAddress("glTextureImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureImage2DEXT is NULL");
    (*fptr)(texture, target, level, internalformat, width, height, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoadTranspose3x3fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC fptr = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) dasWglGetProcAddress("glMatrixLoadTranspose3x3fNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixLoadTranspose3x3fNV is NULL");
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquationSeparatei ( GLuint buf, GLenum modeRGB, GLenum modeAlpha, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONSEPARATEIPROC fptr = (PFNGLBLENDEQUATIONSEPARATEIPROC) dasWglGetProcAddress("glBlendEquationSeparatei");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendEquationSeparatei is NULL");
    (*fptr)(buf, modeRGB, modeAlpha);
    checkOpenGLError(__context__,__at__);
}

void glCoverageModulationTableNV ( GLsizei n, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERAGEMODULATIONTABLENVPROC fptr = (PFNGLCOVERAGEMODULATIONTABLENVPROC) dasWglGetProcAddress("glCoverageModulationTableNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCoverageModulationTableNV is NULL");
    (*fptr)(n, v);
    checkOpenGLError(__context__,__at__);
}

void glUniform2i64vARB ( GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2I64VARBPROC fptr = (PFNGLUNIFORM2I64VARBPROC) dasWglGetProcAddress("glUniform2i64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2i64vARB is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferSampleLocationsfvARB ( GLenum target, GLuint start, GLsizei count, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC fptr = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) dasWglGetProcAddress("glFramebufferSampleLocationsfvARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferSampleLocationsfvARB is NULL");
    (*fptr)(target, start, count, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x3fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2x3fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2x3fvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4dEXT ( GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4DEXTPROC fptr = (PFNGLPROGRAMUNIFORM4DEXTPROC) dasWglGetProcAddress("glProgramUniform4dEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4dEXT is NULL");
    (*fptr)(program, location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfQueryIdByNameINTEL ( GLchar * queryName, GLuint * queryId, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFQUERYIDBYNAMEINTELPROC fptr = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC) dasWglGetProcAddress("glGetPerfQueryIdByNameINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPerfQueryIdByNameINTEL is NULL");
    (*fptr)(queryName, queryId);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayPointervEXT ( GLuint vaobj, GLenum pname, void ** param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYPOINTERVEXTPROC fptr = (PFNGLGETVERTEXARRAYPOINTERVEXTPROC) dasWglGetProcAddress("glGetVertexArrayPointervEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexArrayPointervEXT is NULL");
    (*fptr)(vaobj, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTexture1D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTURE1DPROC fptr = (PFNGLFRAMEBUFFERTEXTURE1DPROC) dasWglGetProcAddress("glFramebufferTexture1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferTexture1D is NULL");
    (*fptr)(target, attachment, textarget, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexArrayIndexed64iv ( GLuint vaobj, GLuint index, GLenum pname, GLint64 * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXARRAYINDEXED64IVPROC fptr = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) dasWglGetProcAddress("glGetVertexArrayIndexed64iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexArrayIndexed64iv is NULL");
    (*fptr)(vaobj, index, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glBindTransformFeedback ( GLenum target, GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDTRANSFORMFEEDBACKPROC fptr = (PFNGLBINDTRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glBindTransformFeedback");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindTransformFeedback is NULL");
    (*fptr)(target, id);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureImage ( GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREIMAGEPROC fptr = (PFNGLGETTEXTUREIMAGEPROC) dasWglGetProcAddress("glGetTextureImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureImage is NULL");
    (*fptr)(texture, level, format, type, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetSubroutineIndex ( GLuint program, GLenum shadertype, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSUBROUTINEINDEXPROC fptr = (PFNGLGETSUBROUTINEINDEXPROC) dasWglGetProcAddress("glGetSubroutineIndex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetSubroutineIndex is NULL");
    auto result = (*fptr)(program, shadertype, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glBindSamplers ( GLuint first, GLsizei count, const GLuint * samplers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDSAMPLERSPROC fptr = (PFNGLBINDSAMPLERSPROC) dasWglGetProcAddress("glBindSamplers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindSamplers is NULL");
    (*fptr)(first, count, samplers);
    checkOpenGLError(__context__,__at__);
}

void glTexCoordFormatNV ( GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXCOORDFORMATNVPROC fptr = (PFNGLTEXCOORDFORMATNVPROC) dasWglGetProcAddress("glTexCoordFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexCoordFormatNV is NULL");
    (*fptr)(size, type, stride);
    checkOpenGLError(__context__,__at__);
}

void glDisableVertexAttribArray ( GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEVERTEXATTRIBARRAYPROC fptr = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) dasWglGetProcAddress("glDisableVertexAttribArray");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDisableVertexAttribArray is NULL");
    (*fptr)(index);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2uiEXT ( GLuint program, GLint location, GLuint v0, GLuint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM2UIEXTPROC) dasWglGetProcAddress("glProgramUniform2uiEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2uiEXT is NULL");
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glStencilThenCoverStrokePathNV ( GLuint path, GLint reference, GLuint mask, GLenum coverMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC fptr = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) dasWglGetProcAddress("glStencilThenCoverStrokePathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilThenCoverStrokePathNV is NULL");
    (*fptr)(path, reference, mask, coverMode);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribIuiv ( GLuint index, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBIUIVPROC fptr = (PFNGLGETVERTEXATTRIBIUIVPROC) dasWglGetProcAddress("glGetVertexAttribIuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexAttribIuiv is NULL");
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glBindTextureUnit ( GLuint unit, GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDTEXTUREUNITPROC fptr = (PFNGLBINDTEXTUREUNITPROC) dasWglGetProcAddress("glBindTextureUnit");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindTextureUnit is NULL");
    (*fptr)(unit, texture);
    checkOpenGLError(__context__,__at__);
}

void glSubpixelPrecisionBiasNV ( GLuint xbits, GLuint ybits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSUBPIXELPRECISIONBIASNVPROC fptr = (PFNGLSUBPIXELPRECISIONBIASNVPROC) dasWglGetProcAddress("glSubpixelPrecisionBiasNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSubpixelPrecisionBiasNV is NULL");
    (*fptr)(xbits, ybits);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsFramebuffer ( GLuint framebuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISFRAMEBUFFERPROC fptr = (PFNGLISFRAMEBUFFERPROC) dasWglGetProcAddress("glIsFramebuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsFramebuffer is NULL");
    auto result = (*fptr)(framebuffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMatrixMultTransposefEXT ( GLenum mode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULTTRANSPOSEFEXTPROC fptr = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) dasWglGetProcAddress("glMatrixMultTransposefEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixMultTransposefEXT is NULL");
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glPushClientAttribDefaultEXT ( GLbitfield mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC fptr = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) dasWglGetProcAddress("glPushClientAttribDefaultEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPushClientAttribDefaultEXT is NULL");
    (*fptr)(mask);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ui64NV ( GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM4UI64NVPROC) dasWglGetProcAddress("glProgramUniform4ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4ui64NV is NULL");
    (*fptr)(program, location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glDeleteNamedStringARB ( GLint namelen, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETENAMEDSTRINGARBPROC fptr = (PFNGLDELETENAMEDSTRINGARBPROC) dasWglGetProcAddress("glDeleteNamedStringARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteNamedStringARB is NULL");
    (*fptr)(namelen, name);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3DVPROC fptr = (PFNGLPROGRAMUNIFORM3DVPROC) dasWglGetProcAddress("glProgramUniform3dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3dv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glPathSubCoordsNV ( GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHSUBCOORDSNVPROC fptr = (PFNGLPATHSUBCOORDSNVPROC) dasWglGetProcAddress("glPathSubCoordsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathSubCoordsNV is NULL");
    (*fptr)(path, coordStart, numCoords, coordType, coords);
    checkOpenGLError(__context__,__at__);
}

void glBindBufferBase ( GLenum target, GLuint index, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDBUFFERBASEPROC fptr = (PFNGLBINDBUFFERBASEPROC) dasWglGetProcAddress("glBindBufferBase");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindBufferBase is NULL");
    (*fptr)(target, index, buffer);
    checkOpenGLError(__context__,__at__);
}

void glGenTextures ( GLsizei n, GLuint * textures, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENTEXTURESPROC fptr = (PFNGLGENTEXTURESPROC) dasWglGetProcAddress("glGenTextures");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenTextures is NULL");
    (*fptr)(n, textures);
    checkOpenGLError(__context__,__at__);
}

void glMemoryBarrierByRegion ( GLbitfield barriers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMEMORYBARRIERBYREGIONPROC fptr = (PFNGLMEMORYBARRIERBYREGIONPROC) dasWglGetProcAddress("glMemoryBarrierByRegion");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMemoryBarrierByRegion is NULL");
    (*fptr)(barriers);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3iEXT ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3IEXTPROC fptr = (PFNGLPROGRAMUNIFORM3IEXTPROC) dasWglGetProcAddress("glProgramUniform3iEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3iEXT is NULL");
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferParameteri ( GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERPARAMETERIPROC fptr = (PFNGLFRAMEBUFFERPARAMETERIPROC) dasWglGetProcAddress("glFramebufferParameteri");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferParameteri is NULL");
    (*fptr)(target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glEGLImageTargetTexStorageEXT ( GLenum target, GLeglImageOES image, const GLint * attrib_list, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC fptr = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) dasWglGetProcAddress("glEGLImageTargetTexStorageEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEGLImageTargetTexStorageEXT is NULL");
    (*fptr)(target, image, attrib_list);
    checkOpenGLError(__context__,__at__);
}

void glMakeTextureHandleResidentNV ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKETEXTUREHANDLERESIDENTNVPROC fptr = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) dasWglGetProcAddress("glMakeTextureHandleResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeTextureHandleResidentNV is NULL");
    (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
}

void glClearTexSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARTEXSUBIMAGEPROC fptr = (PFNGLCLEARTEXSUBIMAGEPROC) dasWglGetProcAddress("glClearTexSubImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearTexSubImage is NULL");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1ui64NV ( GLuint index, GLuint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1UI64NVPROC fptr = (PFNGLVERTEXATTRIBL1UI64NVPROC) dasWglGetProcAddress("glVertexAttribL1ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL1ui64NV is NULL");
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferParameteri ( GLuint framebuffer, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC fptr = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) dasWglGetProcAddress("glNamedFramebufferParameteri");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferParameteri is NULL");
    (*fptr)(framebuffer, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1i64NV ( GLuint program, GLint location, GLint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1I64NVPROC fptr = (PFNGLPROGRAMUNIFORM1I64NVPROC) dasWglGetProcAddress("glProgramUniform1i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1i64NV is NULL");
    (*fptr)(program, location, x);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttrib2sv ( GLuint index, const GLshort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIB2SVPROC fptr = (PFNGLVERTEXATTRIB2SVPROC) dasWglGetProcAddress("glVertexAttrib2sv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttrib2sv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glMatrixMultTranspose3x3fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC fptr = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) dasWglGetProcAddress("glMatrixMultTranspose3x3fNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixMultTranspose3x3fNV is NULL");
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

void glPathSubCommandsNV ( GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHSUBCOMMANDSNVPROC fptr = (PFNGLPATHSUBCOMMANDSNVPROC) dasWglGetProcAddress("glPathSubCommandsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathSubCommandsNV is NULL");
    (*fptr)(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
    checkOpenGLError(__context__,__at__);
}

void glCoverageModulationNV ( GLenum components, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERAGEMODULATIONNVPROC fptr = (PFNGLCOVERAGEMODULATIONNVPROC) dasWglGetProcAddress("glCoverageModulationNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCoverageModulationNV is NULL");
    (*fptr)(components);
    checkOpenGLError(__context__,__at__);
}

void glBufferAttachMemoryNV ( GLenum target, GLuint memory, GLuint64 offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERATTACHMEMORYNVPROC fptr = (PFNGLBUFFERATTACHMEMORYNVPROC) dasWglGetProcAddress("glBufferAttachMemoryNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBufferAttachMemoryNV is NULL");
    (*fptr)(target, memory, offset);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramInterfaceiv ( GLuint program, GLenum programInterface, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMINTERFACEIVPROC fptr = (PFNGLGETPROGRAMINTERFACEIVPROC) dasWglGetProcAddress("glGetProgramInterfaceiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramInterfaceiv is NULL");
    (*fptr)(program, programInterface, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsNamedBufferResidentNV ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISNAMEDBUFFERRESIDENTNVPROC fptr = (PFNGLISNAMEDBUFFERRESIDENTNVPROC) dasWglGetProcAddress("glIsNamedBufferResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsNamedBufferResidentNV is NULL");
    auto result = (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glDispatchCompute ( GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISPATCHCOMPUTEPROC fptr = (PFNGLDISPATCHCOMPUTEPROC) dasWglGetProcAddress("glDispatchCompute");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDispatchCompute is NULL");
    (*fptr)(num_groups_x, num_groups_y, num_groups_z);
    checkOpenGLError(__context__,__at__);
}

void glGetnTexImageARB ( GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNTEXIMAGEARBPROC fptr = (PFNGLGETNTEXIMAGEARBPROC) dasWglGetProcAddress("glGetnTexImageARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnTexImageARB is NULL");
    (*fptr)(target, level, format, type, bufSize, img);
    checkOpenGLError(__context__,__at__);
}

void glTexBuffer ( GLenum target, GLenum internalformat, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXBUFFERPROC fptr = (PFNGLTEXBUFFERPROC) dasWglGetProcAddress("glTexBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexBuffer is NULL");
    (*fptr)(target, internalformat, buffer);
    checkOpenGLError(__context__,__at__);
}

void glViewport ( GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTPROC fptr = (PFNGLVIEWPORTPROC) dasWglGetProcAddress("glViewport");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glViewport is NULL");
    (*fptr)(x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glGetPointerv ( GLenum pname, void ** params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPOINTERVPROC fptr = (PFNGLGETPOINTERVPROC) dasWglGetProcAddress("glGetPointerv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPointerv is NULL");
    (*fptr)(pname, params);
    checkOpenGLError(__context__,__at__);
}

void glClipControl ( GLenum origin, GLenum depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLIPCONTROLPROC fptr = (PFNGLCLIPCONTROLPROC) dasWglGetProcAddress("glClipControl");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClipControl is NULL");
    (*fptr)(origin, depth);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribDivisorARB ( GLuint index, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBDIVISORARBPROC fptr = (PFNGLVERTEXATTRIBDIVISORARBPROC) dasWglGetProcAddress("glVertexAttribDivisorARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribDivisorARB is NULL");
    (*fptr)(index, divisor);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x4fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2x4fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2x4fvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBeginConditionalRender ( GLuint id, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINCONDITIONALRENDERPROC fptr = (PFNGLBEGINCONDITIONALRENDERPROC) dasWglGetProcAddress("glBeginConditionalRender");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBeginConditionalRender is NULL");
    (*fptr)(id, mode);
    checkOpenGLError(__context__,__at__);
}

void glInsertEventMarkerEXT ( GLsizei length, const GLchar * marker, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINSERTEVENTMARKEREXTPROC fptr = (PFNGLINSERTEVENTMARKEREXTPROC) dasWglGetProcAddress("glInsertEventMarkerEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glInsertEventMarkerEXT is NULL");
    (*fptr)(length, marker);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferFetchBarrierEXT ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC fptr = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) dasWglGetProcAddress("glFramebufferFetchBarrierEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferFetchBarrierEXT is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glUniform2i64vNV ( GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2I64VNVPROC fptr = (PFNGLUNIFORM2I64VNVPROC) dasWglGetProcAddress("glUniform2i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2i64vNV is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage3DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE3DEXTPROC fptr = (PFNGLTEXTURESTORAGE3DEXTPROC) dasWglGetProcAddress("glTextureStorage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureStorage3DEXT is NULL");
    (*fptr)(texture, target, levels, internalformat, width, height, depth);
    checkOpenGLError(__context__,__at__);
}

void glCreateFramebuffers ( GLsizei n, GLuint * framebuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEFRAMEBUFFERSPROC fptr = (PFNGLCREATEFRAMEBUFFERSPROC) dasWglGetProcAddress("glCreateFramebuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateFramebuffers is NULL");
    (*fptr)(n, framebuffers);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC fptr = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) dasWglGetProcAddress("glCompressedTexSubImage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTexSubImage1D is NULL");
    (*fptr)(target, level, xoffset, width, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

GLenum glGetGraphicsResetStatusARB ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETGRAPHICSRESETSTATUSARBPROC fptr = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) dasWglGetProcAddress("glGetGraphicsResetStatusARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetGraphicsResetStatusARB is NULL");
    auto result = (*fptr)();
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetNamedProgramStringEXT ( GLuint program, GLenum target, GLenum pname, void * string, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMSTRINGEXTPROC fptr = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) dasWglGetProcAddress("glGetNamedProgramStringEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedProgramStringEXT is NULL");
    (*fptr)(program, target, pname, string);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoad3x3fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOAD3X3FNVPROC fptr = (PFNGLMATRIXLOAD3X3FNVPROC) dasWglGetProcAddress("glMatrixLoad3x3fNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixLoad3x3fNV is NULL");
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix4x2fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX4X2FVPROC fptr = (PFNGLUNIFORMMATRIX4X2FVPROC) dasWglGetProcAddress("glUniformMatrix4x2fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix4x2fv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glCommandListSegmentsNV ( GLuint list, GLuint segments, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMMANDLISTSEGMENTSNVPROC fptr = (PFNGLCOMMANDLISTSEGMENTSNVPROC) dasWglGetProcAddress("glCommandListSegmentsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCommandListSegmentsNV is NULL");
    (*fptr)(list, segments);
    checkOpenGLError(__context__,__at__);
}

void glEnableIndexedEXT ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEINDEXEDEXTPROC fptr = (PFNGLENABLEINDEXEDEXTPROC) dasWglGetProcAddress("glEnableIndexedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEnableIndexedEXT is NULL");
    (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
}

void glUniform2ui64vARB ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UI64VARBPROC fptr = (PFNGLUNIFORM2UI64VARBPROC) dasWglGetProcAddress("glUniform2ui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2ui64vARB is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glViewportIndexedfv ( GLuint index, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTINDEXEDFVPROC fptr = (PFNGLVIEWPORTINDEXEDFVPROC) dasWglGetProcAddress("glViewportIndexedfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glViewportIndexedfv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetObjectLabelEXT ( GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETOBJECTLABELEXTPROC fptr = (PFNGLGETOBJECTLABELEXTPROC) dasWglGetProcAddress("glGetObjectLabelEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetObjectLabelEXT is NULL");
    (*fptr)(type, object, bufSize, length, label);
    checkOpenGLError(__context__,__at__);
}

void glColorMaski ( GLuint index, bool r, bool g, bool b, bool a, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOLORMASKIPROC fptr = (PFNGLCOLORMASKIPROC) dasWglGetProcAddress("glColorMaski");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glColorMaski is NULL");
    (*fptr)(index, r, g, b, a);
    checkOpenGLError(__context__,__at__);
}

void glDrawTransformFeedbackStream ( GLenum mode, GLuint id, GLuint stream, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) dasWglGetProcAddress("glDrawTransformFeedbackStream");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawTransformFeedbackStream is NULL");
    (*fptr)(mode, id, stream);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTexImage3D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXIMAGE3DPROC fptr = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) dasWglGetProcAddress("glCompressedTexImage3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTexImage3D is NULL");
    (*fptr)(target, level, internalformat, width, height, depth, border, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glCreateVertexArrays ( GLsizei n, GLuint * arrays, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEVERTEXARRAYSPROC fptr = (PFNGLCREATEVERTEXARRAYSPROC) dasWglGetProcAddress("glCreateVertexArrays");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateVertexArrays is NULL");
    (*fptr)(n, arrays);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedMultiTexImage2DEXT is NULL");
    (*fptr)(texunit, target, level, internalformat, width, height, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glDrawElementsIndirect ( GLenum mode, GLenum type, const void * indirect, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWELEMENTSINDIRECTPROC fptr = (PFNGLDRAWELEMENTSINDIRECTPROC) dasWglGetProcAddress("glDrawElementsIndirect");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawElementsIndirect is NULL");
    (*fptr)(mode, type, indirect);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveAtomicCounterBufferiv ( GLuint program, GLuint bufferIndex, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC fptr = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) dasWglGetProcAddress("glGetActiveAtomicCounterBufferiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetActiveAtomicCounterBufferiv is NULL");
    (*fptr)(program, bufferIndex, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveUniformsiv ( GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEUNIFORMSIVPROC fptr = (PFNGLGETACTIVEUNIFORMSIVPROC) dasWglGetProcAddress("glGetActiveUniformsiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetActiveUniformsiv is NULL");
    (*fptr)(program, uniformCount, uniformIndices, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glBindTextures ( GLuint first, GLsizei count, const GLuint * textures, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDTEXTURESPROC fptr = (PFNGLBINDTEXTURESPROC) dasWglGetProcAddress("glBindTextures");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindTextures is NULL");
    (*fptr)(first, count, textures);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferSubDataEXT ( GLuint buffer, GLintptr offset, GLsizeiptr size, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERSUBDATAEXTPROC fptr = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) dasWglGetProcAddress("glGetNamedBufferSubDataEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedBufferSubDataEXT is NULL");
    (*fptr)(buffer, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2fEXT ( GLuint program, GLint location, GLfloat v0, GLfloat v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2FEXTPROC fptr = (PFNGLPROGRAMUNIFORM2FEXTPROC) dasWglGetProcAddress("glProgramUniform2fEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2fEXT is NULL");
    (*fptr)(program, location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x3dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4x3dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4x3dvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glPolygonOffsetClampEXT ( GLfloat factor, GLfloat units, GLfloat clamp, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOLYGONOFFSETCLAMPEXTPROC fptr = (PFNGLPOLYGONOFFSETCLAMPEXTPROC) dasWglGetProcAddress("glPolygonOffsetClampEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPolygonOffsetClampEXT is NULL");
    (*fptr)(factor, units, clamp);
    checkOpenGLError(__context__,__at__);
}

void glMatrixMult3x2fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULT3X2FNVPROC fptr = (PFNGLMATRIXMULT3X2FNVPROC) dasWglGetProcAddress("glMatrixMult3x2fNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixMult3x2fNV is NULL");
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsEnabledIndexedEXT ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISENABLEDINDEXEDEXTPROC fptr = (PFNGLISENABLEDINDEXEDEXTPROC) dasWglGetProcAddress("glIsEnabledIndexedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsEnabledIndexedEXT is NULL");
    auto result = (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLboolean glIsPathNV ( GLuint path, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISPATHNVPROC fptr = (PFNGLISPATHNVPROC) dasWglGetProcAddress("glIsPathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsPathNV is NULL");
    auto result = (*fptr)(path);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLuint glCreateShaderProgramv ( GLenum type, GLsizei count, const GLchar *const * strings, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESHADERPROGRAMVPROC fptr = (PFNGLCREATESHADERPROGRAMVPROC) dasWglGetProcAddress("glCreateShaderProgramv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateShaderProgramv is NULL");
    auto result = (*fptr)(type, count, strings);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniformMatrix3x4fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX3X4FVPROC fptr = (PFNGLUNIFORMMATRIX3X4FVPROC) dasWglGetProcAddress("glUniformMatrix3x4fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix3x4fv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glViewportIndexedf ( GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTINDEXEDFPROC fptr = (PFNGLVIEWPORTINDEXEDFPROC) dasWglGetProcAddress("glViewportIndexedf");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glViewportIndexedf is NULL");
    (*fptr)(index, x, y, w, h);
    checkOpenGLError(__context__,__at__);
}

void glBindImageTextures ( GLuint first, GLsizei count, const GLuint * textures, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDIMAGETEXTURESPROC fptr = (PFNGLBINDIMAGETEXTURESPROC) dasWglGetProcAddress("glBindImageTextures");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindImageTextures is NULL");
    (*fptr)(first, count, textures);
    checkOpenGLError(__context__,__at__);
}

GLenum glCheckFramebufferStatus ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCHECKFRAMEBUFFERSTATUSPROC fptr = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) dasWglGetProcAddress("glCheckFramebufferStatus");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCheckFramebufferStatus is NULL");
    auto result = (*fptr)(target);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glTextureParameterIiv ( GLuint texture, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIIVPROC fptr = (PFNGLTEXTUREPARAMETERIIVPROC) dasWglGetProcAddress("glTextureParameterIiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameterIiv is NULL");
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureSubImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) dasWglGetProcAddress("glCopyTextureSubImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTextureSubImage1DEXT is NULL");
    (*fptr)(texture, target, level, xoffset, x, y, width);
    checkOpenGLError(__context__,__at__);
}

void glPathParameterivNV ( GLuint path, GLenum pname, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHPARAMETERIVNVPROC fptr = (PFNGLPATHPARAMETERIVNVPROC) dasWglGetProcAddress("glPathParameterivNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathParameterivNV is NULL");
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

GLint glGetUniformLocation ( GLuint program, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMLOCATIONPROC fptr = (PFNGLGETUNIFORMLOCATIONPROC) dasWglGetProcAddress("glGetUniformLocation");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformLocation is NULL");
    auto result = (*fptr)(program, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glUniformHandleui64vARB ( GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMHANDLEUI64VARBPROC fptr = (PFNGLUNIFORMHANDLEUI64VARBPROC) dasWglGetProcAddress("glUniformHandleui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformHandleui64vARB is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoadTransposefEXT ( GLenum mode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADTRANSPOSEFEXTPROC fptr = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) dasWglGetProcAddress("glMatrixLoadTransposefEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixLoadTransposefEXT is NULL");
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexCoordPointerEXT ( GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXCOORDPOINTEREXTPROC fptr = (PFNGLMULTITEXCOORDPOINTEREXTPROC) dasWglGetProcAddress("glMultiTexCoordPointerEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexCoordPointerEXT is NULL");
    (*fptr)(texunit, size, type, stride, pointer);
    checkOpenGLError(__context__,__at__);
}

void glGetFramebufferParameterivEXT ( GLuint framebuffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetFramebufferParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFramebufferParameterivEXT is NULL");
    (*fptr)(framebuffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMakeNamedBufferNonResidentNV ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC fptr = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC) dasWglGetProcAddress("glMakeNamedBufferNonResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeNamedBufferNonResidentNV is NULL");
    (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3i64NV ( GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3I64NVPROC fptr = (PFNGLVERTEXATTRIBL3I64NVPROC) dasWglGetProcAddress("glVertexAttribL3i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL3i64NV is NULL");
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage2DMultisample ( GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC fptr = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) dasWglGetProcAddress("glTextureStorage2DMultisample");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureStorage2DMultisample is NULL");
    (*fptr)(texture, samples, internalformat, width, height, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glBlendEquation ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDEQUATIONPROC fptr = (PFNGLBLENDEQUATIONPROC) dasWglGetProcAddress("glBlendEquation");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendEquation is NULL");
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

GLuint64 glGetTextureHandleNV ( GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREHANDLENVPROC fptr = (PFNGLGETTEXTUREHANDLENVPROC) dasWglGetProcAddress("glGetTextureHandleNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureHandleNV is NULL");
    auto result = (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glFramebufferTexture ( GLenum target, GLenum attachment, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTUREPROC fptr = (PFNGLFRAMEBUFFERTEXTUREPROC) dasWglGetProcAddress("glFramebufferTexture");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferTexture is NULL");
    (*fptr)(target, attachment, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glFlush ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFLUSHPROC fptr = (PFNGLFLUSHPROC) dasWglGetProcAddress("glFlush");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFlush is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glProgramBinary ( GLuint program, GLenum binaryFormat, const void * binary, GLsizei length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMBINARYPROC fptr = (PFNGLPROGRAMBINARYPROC) dasWglGetProcAddress("glProgramBinary");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramBinary is NULL");
    (*fptr)(program, binaryFormat, binary, length);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureParameterfvEXT ( GLuint texture, GLenum target, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREPARAMETERFVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERFVEXTPROC) dasWglGetProcAddress("glGetTextureParameterfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureParameterfvEXT is NULL");
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glClear ( GLbitfield mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARPROC fptr = (PFNGLCLEARPROC) dasWglGetProcAddress("glClear");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClear is NULL");
    (*fptr)(mask);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangef ( GLfloat n, GLfloat f, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEFPROC fptr = (PFNGLDEPTHRANGEFPROC) dasWglGetProcAddress("glDepthRangef");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDepthRangef is NULL");
    (*fptr)(n, f);
    checkOpenGLError(__context__,__at__);
}

void glUniform4i64NV ( GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4I64NVPROC fptr = (PFNGLUNIFORM4I64NVPROC) dasWglGetProcAddress("glUniform4i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4i64NV is NULL");
    (*fptr)(location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTexture2DEXT ( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) dasWglGetProcAddress("glNamedFramebufferTexture2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferTexture2DEXT is NULL");
    (*fptr)(framebuffer, attachment, textarget, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferPageCommitmentEXT ( GLuint buffer, GLintptr offset, GLsizeiptr size, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC fptr = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) dasWglGetProcAddress("glNamedBufferPageCommitmentEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedBufferPageCommitmentEXT is NULL");
    (*fptr)(buffer, offset, size, commit);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UIVPROC fptr = (PFNGLPROGRAMUNIFORM1UIVPROC) dasWglGetProcAddress("glProgramUniform1uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1uiv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2IVEXTPROC) dasWglGetProcAddress("glProgramUniform2ivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2ivEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedProgramLocalParameterIuivEXT ( GLuint program, GLenum target, GLuint index, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) dasWglGetProcAddress("glGetNamedProgramLocalParameterIuivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedProgramLocalParameterIuivEXT is NULL");
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glCoverFillPathNV ( GLuint path, GLenum coverMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERFILLPATHNVPROC fptr = (PFNGLCOVERFILLPATHNVPROC) dasWglGetProcAddress("glCoverFillPathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCoverFillPathNV is NULL");
    (*fptr)(path, coverMode);
    checkOpenGLError(__context__,__at__);
}

void glGetShadingRateImagePaletteNV ( GLuint viewport, GLuint entry, GLenum * rate, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADINGRATEIMAGEPALETTENVPROC fptr = (PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) dasWglGetProcAddress("glGetShadingRateImagePaletteNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetShadingRateImagePaletteNV is NULL");
    (*fptr)(viewport, entry, rate);
    checkOpenGLError(__context__,__at__);
}

void * glMapNamedBufferRange ( GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPNAMEDBUFFERRANGEPROC fptr = (PFNGLMAPNAMEDBUFFERRANGEPROC) dasWglGetProcAddress("glMapNamedBufferRange");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMapNamedBufferRange is NULL");
    auto result = (*fptr)(buffer, offset, length, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform4fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4FVPROC fptr = (PFNGLPROGRAMUNIFORM4FVPROC) dasWglGetProcAddress("glProgramUniform4fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4fv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureSubImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) dasWglGetProcAddress("glCopyTextureSubImage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTextureSubImage3DEXT is NULL");
    (*fptr)(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformSubroutineuiv ( GLenum shadertype, GLint location, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMSUBROUTINEUIVPROC fptr = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) dasWglGetProcAddress("glGetUniformSubroutineuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformSubroutineuiv is NULL");
    (*fptr)(shadertype, location, params);
    checkOpenGLError(__context__,__at__);
}

void glGetBufferParameteri64v ( GLenum target, GLenum pname, GLint64 * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBUFFERPARAMETERI64VPROC fptr = (PFNGLGETBUFFERPARAMETERI64VPROC) dasWglGetProcAddress("glGetBufferParameteri64v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetBufferParameteri64v is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetCompressedTextureSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC fptr = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) dasWglGetProcAddress("glGetCompressedTextureSubImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetCompressedTextureSubImage is NULL");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribLOffsetEXT ( GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribLOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexAttribLOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, index, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glTextureBufferEXT ( GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBUFFEREXTPROC fptr = (PFNGLTEXTUREBUFFEREXTPROC) dasWglGetProcAddress("glTextureBufferEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureBufferEXT is NULL");
    (*fptr)(texture, target, internalformat, buffer);
    checkOpenGLError(__context__,__at__);
}

void glClearDepthf ( GLfloat d, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARDEPTHFPROC fptr = (PFNGLCLEARDEPTHFPROC) dasWglGetProcAddress("glClearDepthf");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearDepthf is NULL");
    (*fptr)(d);
    checkOpenGLError(__context__,__at__);
}

void glGetDoublei_vEXT ( GLenum pname, GLuint index, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDOUBLEI_VEXTPROC fptr = (PFNGLGETDOUBLEI_VEXTPROC) dasWglGetProcAddress("glGetDoublei_vEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetDoublei_vEXT is NULL");
    (*fptr)(pname, index, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x4dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) dasWglGetProcAddress("glProgramUniformMatrix2x4dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2x4dv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTexStorage2D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSTORAGE2DPROC fptr = (PFNGLTEXSTORAGE2DPROC) dasWglGetProcAddress("glTexStorage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexStorage2D is NULL");
    (*fptr)(target, levels, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribP3uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBP3UIVPROC fptr = (PFNGLVERTEXATTRIBP3UIVPROC) dasWglGetProcAddress("glVertexAttribP3uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribP3uiv is NULL");
    (*fptr)(index, type, normalized, value);
    checkOpenGLError(__context__,__at__);
}

void glGetPathSpacingNV ( GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHSPACINGNVPROC fptr = (PFNGLGETPATHSPACINGNVPROC) dasWglGetProcAddress("glGetPathSpacingNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPathSpacingNV is NULL");
    (*fptr)(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribIPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBIPOINTERPROC fptr = (PFNGLVERTEXATTRIBIPOINTERPROC) dasWglGetProcAddress("glVertexAttribIPointer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribIPointer is NULL");
    (*fptr)(index, size, type, stride, pointer);
    checkOpenGLError(__context__,__at__);
}

void glProgramParameteriARB ( GLuint program, GLenum pname, GLint value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMPARAMETERIARBPROC fptr = (PFNGLPROGRAMPARAMETERIARBPROC) dasWglGetProcAddress("glProgramParameteriARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramParameteriARB is NULL");
    (*fptr)(program, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsBaseVertex ( GLenum mode, const GLsizei * count, GLenum type, const void *const * indices, GLsizei drawcount, const GLint * basevertex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC fptr = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) dasWglGetProcAddress("glMultiDrawElementsBaseVertex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawElementsBaseVertex is NULL");
    (*fptr)(mode, count, type, indices, drawcount, basevertex);
    checkOpenGLError(__context__,__at__);
}

void glBindFramebuffer ( GLenum target, GLuint framebuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDFRAMEBUFFERPROC fptr = (PFNGLBINDFRAMEBUFFERPROC) dasWglGetProcAddress("glBindFramebuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindFramebuffer is NULL");
    (*fptr)(target, framebuffer);
    checkOpenGLError(__context__,__at__);
}

void glGetFramebufferParameteriv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAMEBUFFERPARAMETERIVPROC fptr = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetFramebufferParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFramebufferParameteriv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformuiv ( GLuint program, GLint location, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMUIVPROC fptr = (PFNGLGETUNIFORMUIVPROC) dasWglGetProcAddress("glGetUniformuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformuiv is NULL");
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3DVPROC fptr = (PFNGLVERTEXATTRIBL3DVPROC) dasWglGetProcAddress("glVertexAttribL3dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL3dv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glPathGlyphRangeNV ( GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHGLYPHRANGENVPROC fptr = (PFNGLPATHGLYPHRANGENVPROC) dasWglGetProcAddress("glPathGlyphRangeNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathGlyphRangeNV is NULL");
    (*fptr)(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
    checkOpenGLError(__context__,__at__);
}

void glSamplerParameteri ( GLuint sampler, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERIPROC fptr = (PFNGLSAMPLERPARAMETERIPROC) dasWglGetProcAddress("glSamplerParameteri");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSamplerParameteri is NULL");
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glTextureView ( GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREVIEWPROC fptr = (PFNGLTEXTUREVIEWPROC) dasWglGetProcAddress("glTextureView");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureView is NULL");
    (*fptr)(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
    checkOpenGLError(__context__,__at__);
}

void glDeleteStatesNV ( GLsizei n, const GLuint * states, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETESTATESNVPROC fptr = (PFNGLDELETESTATESNVPROC) dasWglGetProcAddress("glDeleteStatesNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteStatesNV is NULL");
    (*fptr)(n, states);
    checkOpenGLError(__context__,__at__);
}

void glCallCommandListNV ( GLuint list, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCALLCOMMANDLISTNVPROC fptr = (PFNGLCALLCOMMANDLISTNVPROC) dasWglGetProcAddress("glCallCommandListNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCallCommandListNV is NULL");
    (*fptr)(list);
    checkOpenGLError(__context__,__at__);
}

void glTextureBarrier ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBARRIERPROC fptr = (PFNGLTEXTUREBARRIERPROC) dasWglGetProcAddress("glTextureBarrier");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureBarrier is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsSampler ( GLuint sampler, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISSAMPLERPROC fptr = (PFNGLISSAMPLERPROC) dasWglGetProcAddress("glIsSampler");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsSampler is NULL");
    auto result = (*fptr)(sampler);
    checkOpenGLError(__context__,__at__);
    return result;
}

GLsync glCreateSyncFromCLeventARB ( struct _cl_context * context, struct _cl_event * event, GLbitfield flags, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESYNCFROMCLEVENTARBPROC fptr = (PFNGLCREATESYNCFROMCLEVENTARBPROC) dasWglGetProcAddress("glCreateSyncFromCLeventARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateSyncFromCLeventARB is NULL");
    auto result = (*fptr)(context, event, flags);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetQueryiv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYIVPROC fptr = (PFNGLGETQUERYIVPROC) dasWglGetProcAddress("glGetQueryiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetQueryiv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) dasWglGetProcAddress("glCompressedTextureSubImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTextureSubImage2DEXT is NULL");
    (*fptr)(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glNamedCopyBufferSubDataEXT ( GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC fptr = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) dasWglGetProcAddress("glNamedCopyBufferSubDataEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedCopyBufferSubDataEXT is NULL");
    (*fptr)(readBuffer, writeBuffer, readOffset, writeOffset, size);
    checkOpenGLError(__context__,__at__);
}

void glMatrixPushEXT ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXPUSHEXTPROC fptr = (PFNGLMATRIXPUSHEXTPROC) dasWglGetProcAddress("glMatrixPushEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixPushEXT is NULL");
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM4I64VARBPROC) dasWglGetProcAddress("glProgramUniform4i64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4i64vARB is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

GLint glGetFragDataIndex ( GLuint program, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAGDATAINDEXPROC fptr = (PFNGLGETFRAGDATAINDEXPROC) dasWglGetProcAddress("glGetFragDataIndex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFragDataIndex is NULL");
    auto result = (*fptr)(program, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetTexParameteriv ( GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXPARAMETERIVPROC fptr = (PFNGLGETTEXPARAMETERIVPROC) dasWglGetProcAddress("glGetTexParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTexParameteriv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTexParameterIiv ( GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERIIVPROC fptr = (PFNGLTEXPARAMETERIIVPROC) dasWglGetProcAddress("glTexParameterIiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexParameterIiv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1IVEXTPROC) dasWglGetProcAddress("glProgramUniform1ivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1ivEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glQueryCounter ( GLuint id, GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLQUERYCOUNTERPROC fptr = (PFNGLQUERYCOUNTERPROC) dasWglGetProcAddress("glQueryCounter");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glQueryCounter is NULL");
    (*fptr)(id, target);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsTexture ( GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISTEXTUREPROC fptr = (PFNGLISTEXTUREPROC) dasWglGetProcAddress("glIsTexture");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsTexture is NULL");
    auto result = (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glStencilOp ( GLenum fail, GLenum zfail, GLenum zpass, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILOPPROC fptr = (PFNGLSTENCILOPPROC) dasWglGetProcAddress("glStencilOp");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilOp is NULL");
    (*fptr)(fail, zfail, zpass);
    checkOpenGLError(__context__,__at__);
}

GLint glGetSubroutineUniformLocation ( GLuint program, GLenum shadertype, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC fptr = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) dasWglGetProcAddress("glGetSubroutineUniformLocation");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetSubroutineUniformLocation is NULL");
    auto result = (*fptr)(program, shadertype, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGenerateMultiTexMipmapEXT ( GLenum texunit, GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENERATEMULTITEXMIPMAPEXTPROC fptr = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC) dasWglGetProcAddress("glGenerateMultiTexMipmapEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenerateMultiTexMipmapEXT is NULL");
    (*fptr)(texunit, target);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x3dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2x3dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2x3dvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4i64NV ( GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4I64NVPROC fptr = (PFNGLPROGRAMUNIFORM4I64NVPROC) dasWglGetProcAddress("glProgramUniform4i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4i64NV is NULL");
    (*fptr)(program, location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glNamedStringARB ( GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDSTRINGARBPROC fptr = (PFNGLNAMEDSTRINGARBPROC) dasWglGetProcAddress("glNamedStringARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedStringARB is NULL");
    (*fptr)(type, namelen, name, stringlen, string);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformuivARB ( GLuint program, GLint location, GLsizei bufSize, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMUIVARBPROC fptr = (PFNGLGETNUNIFORMUIVARBPROC) dasWglGetProcAddress("glGetnUniformuivARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnUniformuivARB is NULL");
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glGenFramebuffers ( GLsizei n, GLuint * framebuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENFRAMEBUFFERSPROC fptr = (PFNGLGENFRAMEBUFFERSPROC) dasWglGetProcAddress("glGenFramebuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenFramebuffers is NULL");
    (*fptr)(n, framebuffers);
    checkOpenGLError(__context__,__at__);
}

void glPathGlyphsNV ( GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHGLYPHSNVPROC fptr = (PFNGLPATHGLYPHSNVPROC) dasWglGetProcAddress("glPathGlyphsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathGlyphsNV is NULL");
    (*fptr)(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
    checkOpenGLError(__context__,__at__);
}

void glDispatchComputeIndirect ( GLintptr indirect, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISPATCHCOMPUTEINDIRECTPROC fptr = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) dasWglGetProcAddress("glDispatchComputeIndirect");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDispatchComputeIndirect is NULL");
    (*fptr)(indirect);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformIndices ( GLuint program, GLsizei uniformCount, const GLchar *const * uniformNames, GLuint * uniformIndices, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMINDICESPROC fptr = (PFNGLGETUNIFORMINDICESPROC) dasWglGetProcAddress("glGetUniformIndices");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformIndices is NULL");
    (*fptr)(program, uniformCount, uniformNames, uniformIndices);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribLFormatEXT ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribLFormatEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexAttribLFormatEXT is NULL");
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glInvalidateSubFramebuffer ( GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLINVALIDATESUBFRAMEBUFFERPROC fptr = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) dasWglGetProcAddress("glInvalidateSubFramebuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glInvalidateSubFramebuffer is NULL");
    (*fptr)(target, numAttachments, attachments, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glPushDebugGroup ( GLenum source, GLuint id, GLsizei length, const GLchar * message, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPUSHDEBUGGROUPPROC fptr = (PFNGLPUSHDEBUGGROUPPROC) dasWglGetProcAddress("glPushDebugGroup");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPushDebugGroup is NULL");
    (*fptr)(source, id, length, message);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferReadBufferEXT ( GLuint framebuffer, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERREADBUFFEREXTPROC fptr = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC) dasWglGetProcAddress("glFramebufferReadBufferEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferReadBufferEXT is NULL");
    (*fptr)(framebuffer, mode);
    checkOpenGLError(__context__,__at__);
}

void glSamplerParameterf ( GLuint sampler, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERFPROC fptr = (PFNGLSAMPLERPARAMETERFPROC) dasWglGetProcAddress("glSamplerParameterf");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSamplerParameterf is NULL");
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glFinish ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFINISHPROC fptr = (PFNGLFINISHPROC) dasWglGetProcAddress("glFinish");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFinish is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glDeleteTextures ( GLsizei n, const GLuint * textures, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETETEXTURESPROC fptr = (PFNGLDELETETEXTURESPROC) dasWglGetProcAddress("glDeleteTextures");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteTextures is NULL");
    (*fptr)(n, textures);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2i64NV ( GLuint index, GLint64EXT x, GLint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2I64NVPROC fptr = (PFNGLVERTEXATTRIBL2I64NVPROC) dasWglGetProcAddress("glVertexAttribL2i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL2i64NV is NULL");
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glReadnPixels ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLREADNPIXELSPROC fptr = (PFNGLREADNPIXELSPROC) dasWglGetProcAddress("glReadnPixels");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glReadnPixels is NULL");
    (*fptr)(x, y, width, height, format, type, bufSize, data);
    checkOpenGLError(__context__,__at__);
}

void glGetActiveAttrib ( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVEATTRIBPROC fptr = (PFNGLGETACTIVEATTRIBPROC) dasWglGetProcAddress("glGetActiveAttrib");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetActiveAttrib is NULL");
    (*fptr)(program, index, bufSize, length, size, type, name);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramBinary ( GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMBINARYPROC fptr = (PFNGLGETPROGRAMBINARYPROC) dasWglGetProcAddress("glGetProgramBinary");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramBinary is NULL");
    (*fptr)(program, bufSize, length, binaryFormat, binary);
    checkOpenGLError(__context__,__at__);
}

void glTexPageCommitmentARB ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPAGECOMMITMENTARBPROC fptr = (PFNGLTEXPAGECOMMITMENTARBPROC) dasWglGetProcAddress("glTexPageCommitmentARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexPageCommitmentARB is NULL");
    (*fptr)(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL3ui64NV ( GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL3UI64NVPROC fptr = (PFNGLVERTEXATTRIBL3UI64NVPROC) dasWglGetProcAddress("glVertexAttribL3ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL3ui64NV is NULL");
    (*fptr)(index, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glTexParameteriv ( GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERIVPROC fptr = (PFNGLTEXPARAMETERIVPROC) dasWglGetProcAddress("glTexParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexParameteriv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawArraysIndirectCountARB ( GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) dasWglGetProcAddress("glMultiDrawArraysIndirectCountARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawArraysIndirectCountARB is NULL");
    (*fptr)(mode, indirect, drawcount, maxdrawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glGetIntegerv ( GLenum pname, GLint * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGERVPROC fptr = (PFNGLGETINTEGERVPROC) dasWglGetProcAddress("glGetIntegerv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetIntegerv is NULL");
    (*fptr)(pname, data);
    checkOpenGLError(__context__,__at__);
}

void glReleaseShaderCompiler ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRELEASESHADERCOMPILERPROC fptr = (PFNGLRELEASESHADERCOMPILERPROC) dasWglGetProcAddress("glReleaseShaderCompiler");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glReleaseShaderCompiler is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glTransformFeedbackBufferBase ( GLuint xfb, GLuint index, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC fptr = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) dasWglGetProcAddress("glTransformFeedbackBufferBase");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTransformFeedbackBufferBase is NULL");
    (*fptr)(xfb, index, buffer);
    checkOpenGLError(__context__,__at__);
}

void glPrimitiveBoundingBoxARB ( GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPRIMITIVEBOUNDINGBOXARBPROC fptr = (PFNGLPRIMITIVEBOUNDINGBOXARBPROC) dasWglGetProcAddress("glPrimitiveBoundingBoxARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPrimitiveBoundingBoxARB is NULL");
    (*fptr)(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4DVPROC fptr = (PFNGLPROGRAMUNIFORM4DVPROC) dasWglGetProcAddress("glProgramUniform4dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4dv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetCompressedMultiTexImageEXT ( GLenum texunit, GLenum target, GLint lod, void * img, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC fptr = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) dasWglGetProcAddress("glGetCompressedMultiTexImageEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetCompressedMultiTexImageEXT is NULL");
    (*fptr)(texunit, target, lod, img);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayBindVertexBufferEXT ( GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC fptr = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC) dasWglGetProcAddress("glVertexArrayBindVertexBufferEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayBindVertexBufferEXT is NULL");
    (*fptr)(vaobj, bindingindex, buffer, offset, stride);
    checkOpenGLError(__context__,__at__);
}

void glGetCoverageModulationTableNV ( GLsizei bufSize, GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOVERAGEMODULATIONTABLENVPROC fptr = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC) dasWglGetProcAddress("glGetCoverageModulationTableNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetCoverageModulationTableNV is NULL");
    (*fptr)(bufSize, v);
    checkOpenGLError(__context__,__at__);
}

void glPointParameteri ( GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTPARAMETERIPROC fptr = (PFNGLPOINTPARAMETERIPROC) dasWglGetProcAddress("glPointParameteri");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPointParameteri is NULL");
    (*fptr)(pname, param);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageCallback ( GLDEBUGPROC callback, const void * userParam, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGECALLBACKPROC fptr = (PFNGLDEBUGMESSAGECALLBACKPROC) dasWglGetProcAddress("glDebugMessageCallback");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDebugMessageCallback is NULL");
    (*fptr)(callback, userParam);
    checkOpenGLError(__context__,__at__);
}

void glMatrixTranslatefEXT ( GLenum mode, GLfloat x, GLfloat y, GLfloat z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXTRANSLATEFEXTPROC fptr = (PFNGLMATRIXTRANSLATEFEXTPROC) dasWglGetProcAddress("glMatrixTranslatefEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixTranslatefEXT is NULL");
    (*fptr)(mode, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexParameterivEXT ( GLenum texunit, GLenum target, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXPARAMETERIVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetMultiTexParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexParameterivEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCompressedMultiTexSubImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexSubImage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedMultiTexSubImage3DEXT is NULL");
    (*fptr)(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glTextureBuffer ( GLuint texture, GLenum internalformat, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREBUFFERPROC fptr = (PFNGLTEXTUREBUFFERPROC) dasWglGetProcAddress("glTextureBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureBuffer is NULL");
    (*fptr)(texture, internalformat, buffer);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayTexCoordOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayTexCoordOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayTexCoordOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, size, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x4fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) dasWglGetProcAddress("glProgramUniformMatrix2x4fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2x4fv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4iv ( GLuint program, GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4IVPROC fptr = (PFNGLPROGRAMUNIFORM4IVPROC) dasWglGetProcAddress("glProgramUniform4iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4iv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4UIVEXTPROC) dasWglGetProcAddress("glProgramUniform4uivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4uivEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glReadPixels ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLREADPIXELSPROC fptr = (PFNGLREADPIXELSPROC) dasWglGetProcAddress("glReadPixels");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glReadPixels is NULL");
    (*fptr)(x, y, width, height, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glStencilFuncSeparate ( GLenum face, GLenum func, GLint ref, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILFUNCSEPARATEPROC fptr = (PFNGLSTENCILFUNCSEPARATEPROC) dasWglGetProcAddress("glStencilFuncSeparate");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilFuncSeparate is NULL");
    (*fptr)(face, func, ref, mask);
    checkOpenGLError(__context__,__at__);
}

void glScissorIndexedv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSORINDEXEDVPROC fptr = (PFNGLSCISSORINDEXEDVPROC) dasWglGetProcAddress("glScissorIndexedv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glScissorIndexedv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformui64vNV ( GLuint program, GLint location, GLuint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMUI64VNVPROC fptr = (PFNGLGETUNIFORMUI64VNVPROC) dasWglGetProcAddress("glGetUniformui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformui64vNV is NULL");
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1ui64vARB ( GLuint index, const GLuint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1UI64VARBPROC fptr = (PFNGLVERTEXATTRIBL1UI64VARBPROC) dasWglGetProcAddress("glVertexAttribL1ui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL1ui64vARB is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glPointParameterf ( GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPOINTPARAMETERFPROC fptr = (PFNGLPOINTPARAMETERFPROC) dasWglGetProcAddress("glPointParameterf");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPointParameterf is NULL");
    (*fptr)(pname, param);
    checkOpenGLError(__context__,__at__);
}

void glDrawArraysInstancedBaseInstance ( GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC fptr = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) dasWglGetProcAddress("glDrawArraysInstancedBaseInstance");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawArraysInstancedBaseInstance is NULL");
    (*fptr)(mode, first, count, instancecount, baseinstance);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage1D ( GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE1DPROC fptr = (PFNGLTEXTURESUBIMAGE1DPROC) dasWglGetProcAddress("glTextureSubImage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureSubImage1D is NULL");
    (*fptr)(texture, level, xoffset, width, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTextureLayerARB ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTURELAYERARBPROC fptr = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) dasWglGetProcAddress("glFramebufferTextureLayerARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferTextureLayerARB is NULL");
    (*fptr)(target, attachment, texture, level, layer);
    checkOpenGLError(__context__,__at__);
}

void glTexturePageCommitmentEXT ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPAGECOMMITMENTEXTPROC fptr = (PFNGLTEXTUREPAGECOMMITMENTEXTPROC) dasWglGetProcAddress("glTexturePageCommitmentEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexturePageCommitmentEXT is NULL");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, commit);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParameterI4ivEXT ( GLuint program, GLenum target, GLuint index, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameterI4ivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParameterI4ivEXT is NULL");
    (*fptr)(program, target, index, params);
    checkOpenGLError(__context__,__at__);
}

void glWindowRectanglesEXT ( GLenum mode, GLsizei count, const GLint * box, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLWINDOWRECTANGLESEXTPROC fptr = (PFNGLWINDOWRECTANGLESEXTPROC) dasWglGetProcAddress("glWindowRectanglesEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glWindowRectanglesEXT is NULL");
    (*fptr)(mode, count, box);
    checkOpenGLError(__context__,__at__);
}

void glMatrixMult3x3fNV ( GLenum matrixMode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXMULT3X3FNVPROC fptr = (PFNGLMATRIXMULT3X3FNVPROC) dasWglGetProcAddress("glMatrixMult3x3fNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixMult3x3fNV is NULL");
    (*fptr)(matrixMode, m);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformi64vNV ( GLuint program, GLint location, GLint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMI64VNVPROC fptr = (PFNGLGETUNIFORMI64VNVPROC) dasWglGetProcAddress("glGetUniformi64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformi64vNV is NULL");
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glEnableVertexArrayEXT ( GLuint vaobj, GLenum array, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENABLEVERTEXARRAYEXTPROC fptr = (PFNGLENABLEVERTEXARRAYEXTPROC) dasWglGetProcAddress("glEnableVertexArrayEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEnableVertexArrayEXT is NULL");
    (*fptr)(vaobj, array);
    checkOpenGLError(__context__,__at__);
}

void glAttachShader ( GLuint program, GLuint shader, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLATTACHSHADERPROC fptr = (PFNGLATTACHSHADERPROC) dasWglGetProcAddress("glAttachShader");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glAttachShader is NULL");
    (*fptr)(program, shader);
    checkOpenGLError(__context__,__at__);
}

void glGetTexParameterfv ( GLenum target, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXPARAMETERFVPROC fptr = (PFNGLGETTEXPARAMETERFVPROC) dasWglGetProcAddress("glGetTexParameterfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTexParameterfv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexGenfvEXT ( GLenum texunit, GLenum coord, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXGENFVEXTPROC fptr = (PFNGLGETMULTITEXGENFVEXTPROC) dasWglGetProcAddress("glGetMultiTexGenfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexGenfvEXT is NULL");
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURESUBIMAGEPROC fptr = (PFNGLGETTEXTURESUBIMAGEPROC) dasWglGetProcAddress("glGetTextureSubImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureSubImage is NULL");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

void glWaitVkSemaphoreNV ( GLuint64 vkSemaphore, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLWAITVKSEMAPHORENVPROC fptr = (PFNGLWAITVKSEMAPHORENVPROC) dasWglGetProcAddress("glWaitVkSemaphoreNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glWaitVkSemaphoreNV is NULL");
    (*fptr)(vkSemaphore);
    checkOpenGLError(__context__,__at__);
}

void glDeleteRenderbuffers ( GLsizei n, const GLuint * renderbuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETERENDERBUFFERSPROC fptr = (PFNGLDELETERENDERBUFFERSPROC) dasWglGetProcAddress("glDeleteRenderbuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteRenderbuffers is NULL");
    (*fptr)(n, renderbuffers);
    checkOpenGLError(__context__,__at__);
}

void glViewportPositionWScaleNV ( GLuint index, GLfloat xcoeff, GLfloat ycoeff, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVIEWPORTPOSITIONWSCALENVPROC fptr = (PFNGLVIEWPORTPOSITIONWSCALENVPROC) dasWglGetProcAddress("glViewportPositionWScaleNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glViewportPositionWScaleNV is NULL");
    (*fptr)(index, xcoeff, ycoeff);
    checkOpenGLError(__context__,__at__);
}

void glCoverStrokePathNV ( GLuint path, GLenum coverMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERSTROKEPATHNVPROC fptr = (PFNGLCOVERSTROKEPATHNVPROC) dasWglGetProcAddress("glCoverStrokePathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCoverStrokePathNV is NULL");
    (*fptr)(path, coverMode);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoadIdentityEXT ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADIDENTITYEXTPROC fptr = (PFNGLMATRIXLOADIDENTITYEXTPROC) dasWglGetProcAddress("glMatrixLoadIdentityEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixLoadIdentityEXT is NULL");
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glUniform4i64vARB ( GLint location, GLsizei count, const GLint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM4I64VARBPROC fptr = (PFNGLUNIFORM4I64VARBPROC) dasWglGetProcAddress("glUniform4i64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform4i64vARB is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGenVertexArrays ( GLsizei n, GLuint * arrays, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENVERTEXARRAYSPROC fptr = (PFNGLGENVERTEXARRAYSPROC) dasWglGetProcAddress("glGenVertexArrays");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenVertexArrays is NULL");
    (*fptr)(n, arrays);
    checkOpenGLError(__context__,__at__);
}

void glClearNamedFramebufferuiv ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) dasWglGetProcAddress("glClearNamedFramebufferuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearNamedFramebufferuiv is NULL");
    (*fptr)(framebuffer, buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsEnabledi ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISENABLEDIPROC fptr = (PFNGLISENABLEDIPROC) dasWglGetProcAddress("glIsEnabledi");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsEnabledi is NULL");
    auto result = (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glVertexAttribL4dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4DVPROC fptr = (PFNGLVERTEXATTRIBL4DVPROC) dasWglGetProcAddress("glVertexAttribL4dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL4dv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1i64ARB ( GLuint program, GLint location, GLint64 x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM1I64ARBPROC) dasWglGetProcAddress("glProgramUniform1i64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1i64ARB is NULL");
    (*fptr)(program, location, x);
    checkOpenGLError(__context__,__at__);
}

void glClearDepthdNV ( GLdouble depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARDEPTHDNVPROC fptr = (PFNGLCLEARDEPTHDNVPROC) dasWglGetProcAddress("glClearDepthdNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearDepthdNV is NULL");
    (*fptr)(depth);
    checkOpenGLError(__context__,__at__);
}

void glDeleteProgram ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEPROGRAMPROC fptr = (PFNGLDELETEPROGRAMPROC) dasWglGetProcAddress("glDeleteProgram");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteProgram is NULL");
    (*fptr)(program);
    checkOpenGLError(__context__,__at__);
}

void glClearDepth ( GLdouble depth, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARDEPTHPROC fptr = (PFNGLCLEARDEPTHPROC) dasWglGetProcAddress("glClearDepth");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearDepth is NULL");
    (*fptr)(depth);
    checkOpenGLError(__context__,__at__);
}

void glGetFramebufferAttachmentParameteriv ( GLenum target, GLenum attachment, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC fptr = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) dasWglGetProcAddress("glGetFramebufferAttachmentParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFramebufferAttachmentParameteriv is NULL");
    (*fptr)(target, attachment, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMaxShaderCompilerThreadsKHR ( GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAXSHADERCOMPILERTHREADSKHRPROC fptr = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) dasWglGetProcAddress("glMaxShaderCompilerThreadsKHR");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMaxShaderCompilerThreadsKHR is NULL");
    (*fptr)(count);
    checkOpenGLError(__context__,__at__);
}

void glGenQueries ( GLsizei n, GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENQUERIESPROC fptr = (PFNGLGENQUERIESPROC) dasWglGetProcAddress("glGenQueries");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenQueries is NULL");
    (*fptr)(n, ids);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribdv ( GLuint index, GLenum pname, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBDVPROC fptr = (PFNGLGETVERTEXATTRIBDVPROC) dasWglGetProcAddress("glGetVertexAttribdv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexAttribdv is NULL");
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribfv ( GLuint index, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBFVPROC fptr = (PFNGLGETVERTEXATTRIBFVPROC) dasWglGetProcAddress("glGetVertexAttribfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexAttribfv is NULL");
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glDeleteFramebuffers ( GLsizei n, const GLuint * framebuffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEFRAMEBUFFERSPROC fptr = (PFNGLDELETEFRAMEBUFFERSPROC) dasWglGetProcAddress("glDeleteFramebuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteFramebuffers is NULL");
    (*fptr)(n, framebuffers);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UIPROC fptr = (PFNGLPROGRAMUNIFORM4UIPROC) dasWglGetProcAddress("glProgramUniform4ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4ui is NULL");
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexParameterIivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERIIVEXTPROC fptr = (PFNGLMULTITEXPARAMETERIIVEXTPROC) dasWglGetProcAddress("glMultiTexParameterIivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexParameterIivEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureRenderbufferEXT ( GLuint texture, GLenum target, GLuint renderbuffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURERENDERBUFFEREXTPROC fptr = (PFNGLTEXTURERENDERBUFFEREXTPROC) dasWglGetProcAddress("glTextureRenderbufferEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureRenderbufferEXT is NULL");
    (*fptr)(texture, target, renderbuffer);
    checkOpenGLError(__context__,__at__);
}

void glLineWidth ( GLfloat width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLLINEWIDTHPROC fptr = (PFNGLLINEWIDTHPROC) dasWglGetProcAddress("glLineWidth");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glLineWidth is NULL");
    (*fptr)(width);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribiv ( GLuint index, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBIVPROC fptr = (PFNGLGETVERTEXATTRIBIVPROC) dasWglGetProcAddress("glGetVertexAttribiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexAttribiv is NULL");
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetInteger64v ( GLenum pname, GLint64 * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGER64VPROC fptr = (PFNGLGETINTEGER64VPROC) dasWglGetProcAddress("glGetInteger64v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetInteger64v is NULL");
    (*fptr)(pname, data);
    checkOpenGLError(__context__,__at__);
}

void glGetIntegerIndexedvEXT ( GLenum target, GLuint index, GLint * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGERINDEXEDVEXTPROC fptr = (PFNGLGETINTEGERINDEXEDVEXTPROC) dasWglGetProcAddress("glGetIntegerIndexedvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetIntegerIndexedvEXT is NULL");
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glTexParameterfv ( GLenum target, GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERFVPROC fptr = (PFNGLTEXPARAMETERFVPROC) dasWglGetProcAddress("glTexParameterfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexParameterfv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTexImage1D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXIMAGE1DPROC fptr = (PFNGLTEXIMAGE1DPROC) dasWglGetProcAddress("glTexImage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexImage1D is NULL");
    (*fptr)(target, level, internalformat, width, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferDrawBufferEXT ( GLuint framebuffer, GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC fptr = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) dasWglGetProcAddress("glFramebufferDrawBufferEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferDrawBufferEXT is NULL");
    (*fptr)(framebuffer, mode);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayAttribLFormat ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYATTRIBLFORMATPROC fptr = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) dasWglGetProcAddress("glVertexArrayAttribLFormat");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayAttribLFormat is NULL");
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glGetShaderSource ( GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADERSOURCEPROC fptr = (PFNGLGETSHADERSOURCEPROC) dasWglGetProcAddress("glGetShaderSource");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetShaderSource is NULL");
    (*fptr)(shader, bufSize, length, source);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4i64ARB ( GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM4I64ARBPROC) dasWglGetProcAddress("glProgramUniform4i64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4i64ARB is NULL");
    (*fptr)(program, location, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

GLint glGetProgramResourceLocationIndex ( GLuint program, GLenum programInterface, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC fptr = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) dasWglGetProcAddress("glGetProgramResourceLocationIndex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramResourceLocationIndex is NULL");
    auto result = (*fptr)(program, programInterface, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniformMatrix2x3dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) dasWglGetProcAddress("glProgramUniformMatrix2x3dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2x3dv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2i64ARB ( GLuint program, GLint location, GLint64 x, GLint64 y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM2I64ARBPROC) dasWglGetProcAddress("glProgramUniform2i64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2i64ARB is NULL");
    (*fptr)(program, location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glLogicOp ( GLenum opcode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLLOGICOPPROC fptr = (PFNGLLOGICOPPROC) dasWglGetProcAddress("glLogicOp");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glLogicOp is NULL");
    (*fptr)(opcode);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI1iv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI1IVPROC fptr = (PFNGLVERTEXATTRIBI1IVPROC) dasWglGetProcAddress("glVertexAttribI1iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI1iv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferDrawBuffer ( GLuint framebuffer, GLenum buf, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC fptr = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) dasWglGetProcAddress("glNamedFramebufferDrawBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferDrawBuffer is NULL");
    (*fptr)(framebuffer, buf);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferSampleLocationsfvARB ( GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC fptr = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) dasWglGetProcAddress("glNamedFramebufferSampleLocationsfvARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferSampleLocationsfvARB is NULL");
    (*fptr)(framebuffer, start, count, v);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramiv ( GLuint program, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMIVPROC fptr = (PFNGLGETPROGRAMIVPROC) dasWglGetProcAddress("glGetProgramiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramiv is NULL");
    (*fptr)(program, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetCompressedTexImage ( GLenum target, GLint level, void * img, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMPRESSEDTEXIMAGEPROC fptr = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) dasWglGetProcAddress("glGetCompressedTexImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetCompressedTexImage is NULL");
    (*fptr)(target, level, img);
    checkOpenGLError(__context__,__at__);
}

void glGetDoublev ( GLenum pname, GLdouble * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETDOUBLEVPROC fptr = (PFNGLGETDOUBLEVPROC) dasWglGetProcAddress("glGetDoublev");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetDoublev is NULL");
    (*fptr)(pname, data);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL2ui64NV ( GLuint index, GLuint64EXT x, GLuint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL2UI64NVPROC fptr = (PFNGLVERTEXATTRIBL2UI64NVPROC) dasWglGetProcAddress("glVertexAttribL2ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL2ui64NV is NULL");
    (*fptr)(index, x, y);
    checkOpenGLError(__context__,__at__);
}

void glTexParameterIuiv ( GLenum target, GLenum pname, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXPARAMETERIUIVPROC fptr = (PFNGLTEXPARAMETERIUIVPROC) dasWglGetProcAddress("glTexParameterIuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexParameterIuiv is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage2D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE2DPROC fptr = (PFNGLTEXTURESUBIMAGE2DPROC) dasWglGetProcAddress("glTextureSubImage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureSubImage2D is NULL");
    (*fptr)(texture, level, xoffset, yoffset, width, height, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glUniform1uiv ( GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UIVPROC fptr = (PFNGLUNIFORM1UIVPROC) dasWglGetProcAddress("glUniform1uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1uiv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayAttribIFormat ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYATTRIBIFORMATPROC fptr = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) dasWglGetProcAddress("glVertexArrayAttribIFormat");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayAttribIFormat is NULL");
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

GLenum glGetGraphicsResetStatus ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETGRAPHICSRESETSTATUSPROC fptr = (PFNGLGETGRAPHICSRESETSTATUSPROC) dasWglGetProcAddress("glGetGraphicsResetStatus");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetGraphicsResetStatus is NULL");
    auto result = (*fptr)();
    checkOpenGLError(__context__,__at__);
    return result;
}

void glMultiTexGendvEXT ( GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENDVEXTPROC fptr = (PFNGLMULTITEXGENDVEXTPROC) dasWglGetProcAddress("glMultiTexGendvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexGendvEXT is NULL");
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsVertexArray ( GLuint array, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISVERTEXARRAYPROC fptr = (PFNGLISVERTEXARRAYPROC) dasWglGetProcAddress("glIsVertexArray");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsVertexArray is NULL");
    auto result = (*fptr)(array);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform3fEXT ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3FEXTPROC fptr = (PFNGLPROGRAMUNIFORM3FEXTPROC) dasWglGetProcAddress("glProgramUniform3fEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3fEXT is NULL");
    (*fptr)(program, location, v0, v1, v2);
    checkOpenGLError(__context__,__at__);
}

void glUniform2ui ( GLint location, GLuint v0, GLuint v1, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2UIPROC fptr = (PFNGLUNIFORM2UIPROC) dasWglGetProcAddress("glUniform2ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2ui is NULL");
    (*fptr)(location, v0, v1);
    checkOpenGLError(__context__,__at__);
}

void glGetShadingRateSampleLocationivNV ( GLenum rate, GLuint samples, GLuint index, GLint * location, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC fptr = (PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) dasWglGetProcAddress("glGetShadingRateSampleLocationivNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetShadingRateSampleLocationivNV is NULL");
    (*fptr)(rate, samples, index, location);
    checkOpenGLError(__context__,__at__);
}

void glBlitFramebuffer ( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLITFRAMEBUFFERPROC fptr = (PFNGLBLITFRAMEBUFFERPROC) dasWglGetProcAddress("glBlitFramebuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlitFramebuffer is NULL");
    (*fptr)(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    checkOpenGLError(__context__,__at__);
}

void glUniform2dv ( GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2DVPROC fptr = (PFNGLUNIFORM2DVPROC) dasWglGetProcAddress("glUniform2dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2dv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glDisableVertexArrayEXT ( GLuint vaobj, GLenum array, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISABLEVERTEXARRAYEXTPROC fptr = (PFNGLDISABLEVERTEXARRAYEXTPROC) dasWglGetProcAddress("glDisableVertexArrayEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDisableVertexArrayEXT is NULL");
    (*fptr)(vaobj, array);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsCommandListNV ( GLuint list, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISCOMMANDLISTNVPROC fptr = (PFNGLISCOMMANDLISTNVPROC) dasWglGetProcAddress("glIsCommandListNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsCommandListNV is NULL");
    auto result = (*fptr)(list);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetBufferParameterui64vNV ( GLenum target, GLenum pname, GLuint64EXT * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBUFFERPARAMETERUI64VNVPROC fptr = (PFNGLGETBUFFERPARAMETERUI64VNVPROC) dasWglGetProcAddress("glGetBufferParameterui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetBufferParameterui64vNV is NULL");
    (*fptr)(target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterfvEXT ( GLuint texture, GLenum target, GLenum pname, const GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERFVEXTPROC fptr = (PFNGLTEXTUREPARAMETERFVEXTPROC) dasWglGetProcAddress("glTextureParameterfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameterfvEXT is NULL");
    (*fptr)(texture, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetnUniformdvARB ( GLuint program, GLint location, GLsizei bufSize, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNUNIFORMDVARBPROC fptr = (PFNGLGETNUNIFORMDVARBPROC) dasWglGetProcAddress("glGetnUniformdvARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetnUniformdvARB is NULL");
    (*fptr)(program, location, bufSize, params);
    checkOpenGLError(__context__,__at__);
}

void glUniformHandleui64ARB ( GLint location, GLuint64 value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMHANDLEUI64ARBPROC fptr = (PFNGLUNIFORMHANDLEUI64ARBPROC) dasWglGetProcAddress("glUniformHandleui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformHandleui64ARB is NULL");
    (*fptr)(location, value);
    checkOpenGLError(__context__,__at__);
}

void glCullFace ( GLenum mode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCULLFACEPROC fptr = (PFNGLCULLFACEPROC) dasWglGetProcAddress("glCullFace");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCullFace is NULL");
    (*fptr)(mode);
    checkOpenGLError(__context__,__at__);
}

void glUniform2iv ( GLint location, GLsizei count, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2IVPROC fptr = (PFNGLUNIFORM2IVPROC) dasWglGetProcAddress("glUniform2iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2iv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glPathCoordsNV ( GLuint path, GLsizei numCoords, GLenum coordType, const void * coords, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHCOORDSNVPROC fptr = (PFNGLPATHCOORDSNVPROC) dasWglGetProcAddress("glPathCoordsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathCoordsNV is NULL");
    (*fptr)(path, numCoords, coordType, coords);
    checkOpenGLError(__context__,__at__);
}

void glStencilFillPathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILFILLPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC) dasWglGetProcAddress("glStencilFillPathInstancedNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilFillPathInstancedNV is NULL");
    (*fptr)(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glGetPathParameterfvNV ( GLuint path, GLenum pname, GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPATHPARAMETERFVNVPROC fptr = (PFNGLGETPATHPARAMETERFVNVPROC) dasWglGetProcAddress("glGetPathParameterfvNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPathParameterfvNV is NULL");
    (*fptr)(path, pname, value);
    checkOpenGLError(__context__,__at__);
}

void glConservativeRasterParameterfNV ( GLenum pname, GLfloat value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCONSERVATIVERASTERPARAMETERFNVPROC fptr = (PFNGLCONSERVATIVERASTERPARAMETERFNVPROC) dasWglGetProcAddress("glConservativeRasterParameterfNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glConservativeRasterParameterfNV is NULL");
    (*fptr)(pname, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2fvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBindMultiTextureEXT ( GLenum texunit, GLenum target, GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDMULTITEXTUREEXTPROC fptr = (PFNGLBINDMULTITEXTUREEXTPROC) dasWglGetProcAddress("glBindMultiTextureEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindMultiTextureEXT is NULL");
    (*fptr)(texunit, target, texture);
    checkOpenGLError(__context__,__at__);
}

void glTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXSUBIMAGE3DPROC fptr = (PFNGLTEXSUBIMAGE3DPROC) dasWglGetProcAddress("glTexSubImage3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexSubImage3D is NULL");
    (*fptr)(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryObjectuiv ( GLuint id, GLenum pname, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYOBJECTUIVPROC fptr = (PFNGLGETQUERYOBJECTUIVPROC) dasWglGetProcAddress("glGetQueryObjectuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetQueryObjectuiv is NULL");
    (*fptr)(id, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexBufferEXT ( GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXBUFFEREXTPROC fptr = (PFNGLMULTITEXBUFFEREXTPROC) dasWglGetProcAddress("glMultiTexBufferEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexBufferEXT is NULL");
    (*fptr)(texunit, target, internalformat, buffer);
    checkOpenGLError(__context__,__at__);
}

void glCreateCommandListsNV ( GLsizei n, GLuint * lists, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATECOMMANDLISTSNVPROC fptr = (PFNGLCREATECOMMANDLISTSNVPROC) dasWglGetProcAddress("glCreateCommandListsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateCommandListsNV is NULL");
    (*fptr)(n, lists);
    checkOpenGLError(__context__,__at__);
}

void glPatchParameterfv ( GLenum pname, const GLfloat * values, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATCHPARAMETERFVPROC fptr = (PFNGLPATCHPARAMETERFVPROC) dasWglGetProcAddress("glPatchParameterfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPatchParameterfv is NULL");
    (*fptr)(pname, values);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2DVPROC fptr = (PFNGLUNIFORMMATRIX2DVPROC) dasWglGetProcAddress("glUniformMatrix2dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix2dv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetIntegerui64i_vNV ( GLenum value, GLuint index, GLuint64EXT * result, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETINTEGERUI64I_VNVPROC fptr = (PFNGLGETINTEGERUI64I_VNVPROC) dasWglGetProcAddress("glGetIntegerui64i_vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetIntegerui64i_vNV is NULL");
    (*fptr)(value, index, result);
    checkOpenGLError(__context__,__at__);
}

void glMatrixScalefEXT ( GLenum mode, GLfloat x, GLfloat y, GLfloat z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXSCALEFEXTPROC fptr = (PFNGLMATRIXSCALEFEXTPROC) dasWglGetProcAddress("glMatrixScalefEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixScalefEXT is NULL");
    (*fptr)(mode, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1dv ( GLuint index, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1DVPROC fptr = (PFNGLVERTEXATTRIBL1DVPROC) dasWglGetProcAddress("glVertexAttribL1dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL1dv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glValidateProgramPipeline ( GLuint pipeline, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVALIDATEPROGRAMPIPELINEPROC fptr = (PFNGLVALIDATEPROGRAMPIPELINEPROC) dasWglGetProcAddress("glValidateProgramPipeline");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glValidateProgramPipeline is NULL");
    (*fptr)(pipeline);
    checkOpenGLError(__context__,__at__);
}

void glTextureParameterIuiv ( GLuint texture, GLenum pname, const GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREPARAMETERIUIVPROC fptr = (PFNGLTEXTUREPARAMETERIUIVPROC) dasWglGetProcAddress("glTextureParameterIuiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureParameterIuiv is NULL");
    (*fptr)(texture, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMUI64VNVPROC fptr = (PFNGLPROGRAMUNIFORMUI64VNVPROC) dasWglGetProcAddress("glProgramUniformui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformui64vNV is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsProgramPipeline ( GLuint pipeline, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISPROGRAMPIPELINEPROC fptr = (PFNGLISPROGRAMPIPELINEPROC) dasWglGetProcAddress("glIsProgramPipeline");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsProgramPipeline is NULL");
    auto result = (*fptr)(pipeline);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glResetMemoryObjectParameterNV ( GLuint memory, GLenum pname, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRESETMEMORYOBJECTPARAMETERNVPROC fptr = (PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) dasWglGetProcAddress("glResetMemoryObjectParameterNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glResetMemoryObjectParameterNV is NULL");
    (*fptr)(memory, pname);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureSubImage3D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) dasWglGetProcAddress("glCompressedTextureSubImage3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTextureSubImage3D is NULL");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexAttribOffsetEXT ( GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, bool normalized, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexAttribOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, index, size, type, normalized, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferPageCommitmentMemNV ( GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC fptr = (PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) dasWglGetProcAddress("glNamedBufferPageCommitmentMemNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedBufferPageCommitmentMemNV is NULL");
    (*fptr)(buffer, offset, size, memory, memOffset, commit);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2x4dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2X4DVPROC fptr = (PFNGLUNIFORMMATRIX2X4DVPROC) dasWglGetProcAddress("glUniformMatrix2x4dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix2x4dv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UIVPROC fptr = (PFNGLPROGRAMUNIFORM4UIVPROC) dasWglGetProcAddress("glProgramUniform4uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4uiv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsIndirect ( GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) dasWglGetProcAddress("glMultiDrawElementsIndirect");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawElementsIndirect is NULL");
    (*fptr)(mode, type, indirect, drawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glDepthMask ( bool flag, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHMASKPROC fptr = (PFNGLDEPTHMASKPROC) dasWglGetProcAddress("glDepthMask");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDepthMask is NULL");
    (*fptr)(flag);
    checkOpenGLError(__context__,__at__);
}

void glScissorIndexed ( GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSORINDEXEDPROC fptr = (PFNGLSCISSORINDEXEDPROC) dasWglGetProcAddress("glScissorIndexed");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glScissorIndexed is NULL");
    (*fptr)(index, left, bottom, width, height);
    checkOpenGLError(__context__,__at__);
}

void glDispatchComputeGroupSizeARB ( GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC fptr = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) dasWglGetProcAddress("glDispatchComputeGroupSizeARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDispatchComputeGroupSizeARB is NULL");
    (*fptr)(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayElementBuffer ( GLuint vaobj, GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYELEMENTBUFFERPROC fptr = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) dasWglGetProcAddress("glVertexArrayElementBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayElementBuffer is NULL");
    (*fptr)(vaobj, buffer);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform3dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3DVEXTPROC) dasWglGetProcAddress("glProgramUniform3dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform3dvEXT is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glGetMemoryObjectDetachedResourcesuivNV ( GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC fptr = (PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) dasWglGetProcAddress("glGetMemoryObjectDetachedResourcesuivNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMemoryObjectDetachedResourcesuivNV is NULL");
    (*fptr)(memory, pname, first, count, params);
    checkOpenGLError(__context__,__at__);
}

void glResumeTransformFeedback ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRESUMETRANSFORMFEEDBACKPROC fptr = (PFNGLRESUMETRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glResumeTransformFeedback");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glResumeTransformFeedback is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glEndQueryIndexed ( GLenum target, GLuint index, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLENDQUERYINDEXEDPROC fptr = (PFNGLENDQUERYINDEXEDPROC) dasWglGetProcAddress("glEndQueryIndexed");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEndQueryIndexed is NULL");
    (*fptr)(target, index);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4iEXT ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4IEXTPROC fptr = (PFNGLPROGRAMUNIFORM4IEXTPROC) dasWglGetProcAddress("glProgramUniform4iEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4iEXT is NULL");
    (*fptr)(program, location, v0, v1, v2, v3);
    checkOpenGLError(__context__,__at__);
}

void glMakeBufferResidentNV ( GLenum target, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEBUFFERRESIDENTNVPROC fptr = (PFNGLMAKEBUFFERRESIDENTNVPROC) dasWglGetProcAddress("glMakeBufferResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeBufferResidentNV is NULL");
    (*fptr)(target, access);
    checkOpenGLError(__context__,__at__);
}

void glRasterSamplesEXT ( GLuint samples, bool fixedsamplelocations, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRASTERSAMPLESEXTPROC fptr = (PFNGLRASTERSAMPLESEXTPROC) dasWglGetProcAddress("glRasterSamplesEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glRasterSamplesEXT is NULL");
    (*fptr)(samples, fixedsamplelocations);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix2x3fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) dasWglGetProcAddress("glProgramUniformMatrix2x3fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix2x3fv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedFramebufferAttachmentParameterivEXT ( GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedFramebufferAttachmentParameterivEXT is NULL");
    (*fptr)(framebuffer, attachment, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLuint glCreateShader ( GLenum type, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATESHADERPROC fptr = (PFNGLCREATESHADERPROC) dasWglGetProcAddress("glCreateShader");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateShader is NULL");
    auto result = (*fptr)(type);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniform1ui64ARB ( GLuint program, GLint location, GLuint64 x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM1UI64ARBPROC) dasWglGetProcAddress("glProgramUniform1ui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1ui64ARB is NULL");
    (*fptr)(program, location, x);
    checkOpenGLError(__context__,__at__);
}

void glBindBuffersBase ( GLenum target, GLuint first, GLsizei count, const GLuint * buffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDBUFFERSBASEPROC fptr = (PFNGLBINDBUFFERSBASEPROC) dasWglGetProcAddress("glBindBuffersBase");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindBuffersBase is NULL");
    (*fptr)(target, first, count, buffers);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedBufferPointervEXT ( GLuint buffer, GLenum pname, void ** params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDBUFFERPOINTERVEXTPROC fptr = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) dasWglGetProcAddress("glGetNamedBufferPointervEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedBufferPointervEXT is NULL");
    (*fptr)(buffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glActiveProgramEXT ( GLuint program, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLACTIVEPROGRAMEXTPROC fptr = (PFNGLACTIVEPROGRAMEXTPROC) dasWglGetProcAddress("glActiveProgramEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glActiveProgramEXT is NULL");
    (*fptr)(program);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI1ui ( GLuint index, GLuint x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI1UIPROC fptr = (PFNGLVERTEXATTRIBI1UIPROC) dasWglGetProcAddress("glVertexAttribI1ui");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI1ui is NULL");
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glMatrixRotatedEXT ( GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXROTATEDEXTPROC fptr = (PFNGLMATRIXROTATEDEXTPROC) dasWglGetProcAddress("glMatrixRotatedEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixRotatedEXT is NULL");
    (*fptr)(mode, angle, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void * glMapNamedBuffer ( GLuint buffer, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAPNAMEDBUFFERPROC fptr = (PFNGLMAPNAMEDBUFFERPROC) dasWglGetProcAddress("glMapNamedBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMapNamedBuffer is NULL");
    auto result = (*fptr)(buffer, access);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetNamedRenderbufferParameterivEXT ( GLuint renderbuffer, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetNamedRenderbufferParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedRenderbufferParameterivEXT is NULL");
    (*fptr)(renderbuffer, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glFogCoordFormatNV ( GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFOGCOORDFORMATNVPROC fptr = (PFNGLFOGCOORDFORMATNVPROC) dasWglGetProcAddress("glFogCoordFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFogCoordFormatNV is NULL");
    (*fptr)(type, stride);
    checkOpenGLError(__context__,__at__);
}

void glBindSampler ( GLuint unit, GLuint sampler, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDSAMPLERPROC fptr = (PFNGLBINDSAMPLERPROC) dasWglGetProcAddress("glBindSampler");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindSampler is NULL");
    (*fptr)(unit, sampler);
    checkOpenGLError(__context__,__at__);
}

void glTextureImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTUREIMAGE3DEXTPROC fptr = (PFNGLTEXTUREIMAGE3DEXTPROC) dasWglGetProcAddress("glTextureImage3DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureImage3DEXT is NULL");
    (*fptr)(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangedNV ( GLdouble zNear, GLdouble zFar, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEDNVPROC fptr = (PFNGLDEPTHRANGEDNVPROC) dasWglGetProcAddress("glDepthRangedNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDepthRangedNV is NULL");
    (*fptr)(zNear, zFar);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x2fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4x2fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4x2fvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBUFFERSUBDATAPROC fptr = (PFNGLGETBUFFERSUBDATAPROC) dasWglGetProcAddress("glGetBufferSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetBufferSubData is NULL");
    (*fptr)(target, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform2uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM2UIVPROC fptr = (PFNGLPROGRAMUNIFORM2UIVPROC) dasWglGetProcAddress("glProgramUniform2uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform2uiv is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glCopyPathNV ( GLuint resultPath, GLuint srcPath, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYPATHNVPROC fptr = (PFNGLCOPYPATHNVPROC) dasWglGetProcAddress("glCopyPathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyPathNV is NULL");
    (*fptr)(resultPath, srcPath);
    checkOpenGLError(__context__,__at__);
}

void glUniform2fv ( GLint location, GLsizei count, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2FVPROC fptr = (PFNGLUNIFORM2FVPROC) dasWglGetProcAddress("glUniform2fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2fv is NULL");
    (*fptr)(location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glMatrixScaledEXT ( GLenum mode, GLdouble x, GLdouble y, GLdouble z, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXSCALEDEXTPROC fptr = (PFNGLMATRIXSCALEDEXTPROC) dasWglGetProcAddress("glMatrixScaledEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixScaledEXT is NULL");
    (*fptr)(mode, x, y, z);
    checkOpenGLError(__context__,__at__);
}

void glListDrawCommandsStatesClientNV ( GLuint list, GLuint segment, const void ** indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC fptr = (PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC) dasWglGetProcAddress("glListDrawCommandsStatesClientNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glListDrawCommandsStatesClientNV is NULL");
    (*fptr)(list, segment, indirects, sizes, states, fbos, count);
    checkOpenGLError(__context__,__at__);
}

void glCopyMultiTexImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYMULTITEXIMAGE2DEXTPROC fptr = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC) dasWglGetProcAddress("glCopyMultiTexImage2DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyMultiTexImage2DEXT is NULL");
    (*fptr)(texunit, target, level, internalformat, x, y, width, height, border);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsIndirectBindlessNV ( GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC) dasWglGetProcAddress("glMultiDrawElementsIndirectBindlessNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawElementsIndirectBindlessNV is NULL");
    (*fptr)(mode, type, indirect, drawCount, stride, vertexBufferCount);
    checkOpenGLError(__context__,__at__);
}

void glGetCompressedTextureImage ( GLuint texture, GLint level, GLsizei bufSize, void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC fptr = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) dasWglGetProcAddress("glGetCompressedTextureImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetCompressedTextureImage is NULL");
    (*fptr)(texture, level, bufSize, pixels);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM4I64VNVPROC) dasWglGetProcAddress("glProgramUniform4i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4i64vNV is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glTransformPathNV ( GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTRANSFORMPATHNVPROC fptr = (PFNGLTRANSFORMPATHNVPROC) dasWglGetProcAddress("glTransformPathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTransformPathNV is NULL");
    (*fptr)(resultPath, srcPath, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glStencilFillPathNV ( GLuint path, GLenum fillMode, GLuint mask, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILFILLPATHNVPROC fptr = (PFNGLSTENCILFILLPATHNVPROC) dasWglGetProcAddress("glStencilFillPathNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilFillPathNV is NULL");
    (*fptr)(path, fillMode, mask);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x2fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3x2fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3x2fvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetProgramResourceiv ( GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPROGRAMRESOURCEIVPROC fptr = (PFNGLGETPROGRAMRESOURCEIVPROC) dasWglGetProcAddress("glGetProgramResourceiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetProgramResourceiv is NULL");
    (*fptr)(program, programInterface, index, propCount, props, count, length, params);
    checkOpenGLError(__context__,__at__);
}

void glMakeBufferNonResidentNV ( GLenum target, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEBUFFERNONRESIDENTNVPROC fptr = (PFNGLMAKEBUFFERNONRESIDENTNVPROC) dasWglGetProcAddress("glMakeBufferNonResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeBufferNonResidentNV is NULL");
    (*fptr)(target);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1ui64vNV ( GLuint index, const GLuint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL1UI64VNVPROC) dasWglGetProcAddress("glVertexAttribL1ui64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL1ui64vNV is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glLabelObjectEXT ( GLenum type, GLuint object, GLsizei length, const GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLLABELOBJECTEXTPROC fptr = (PFNGLLABELOBJECTEXTPROC) dasWglGetProcAddress("glLabelObjectEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glLabelObjectEXT is NULL");
    (*fptr)(type, object, length, label);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsNamedStringARB ( GLint namelen, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISNAMEDSTRINGARBPROC fptr = (PFNGLISNAMEDSTRINGARBPROC) dasWglGetProcAddress("glIsNamedStringARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsNamedStringARB is NULL");
    auto result = (*fptr)(namelen, name);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetTextureLevelParameterivEXT ( GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetTextureLevelParameterivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureLevelParameterivEXT is NULL");
    (*fptr)(texture, target, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2FVPROC fptr = (PFNGLUNIFORMMATRIX2FVPROC) dasWglGetProcAddress("glUniformMatrix2fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix2fv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetSamplerParameterfv ( GLuint sampler, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSAMPLERPARAMETERFVPROC fptr = (PFNGLGETSAMPLERPARAMETERFVPROC) dasWglGetProcAddress("glGetSamplerParameterfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetSamplerParameterfv is NULL");
    (*fptr)(sampler, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLboolean glIsImageHandleResidentARB ( GLuint64 handle, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLISIMAGEHANDLERESIDENTARBPROC fptr = (PFNGLISIMAGEHANDLERESIDENTARBPROC) dasWglGetProcAddress("glIsImageHandleResidentARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glIsImageHandleResidentARB is NULL");
    auto result = (*fptr)(handle);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glCompileShaderIncludeARB ( GLuint shader, GLsizei count, const GLchar *const * path, const GLint * length, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPILESHADERINCLUDEARBPROC fptr = (PFNGLCOMPILESHADERINCLUDEARBPROC) dasWglGetProcAddress("glCompileShaderIncludeARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompileShaderIncludeARB is NULL");
    (*fptr)(shader, count, path, length);
    checkOpenGLError(__context__,__at__);
}

void glMatrixLoadfEXT ( GLenum mode, const GLfloat * m, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMATRIXLOADFEXTPROC fptr = (PFNGLMATRIXLOADFEXTPROC) dasWglGetProcAddress("glMatrixLoadfEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMatrixLoadfEXT is NULL");
    (*fptr)(mode, m);
    checkOpenGLError(__context__,__at__);
}

void glGetCompressedTextureImageEXT ( GLuint texture, GLenum target, GLint lod, void * img, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC fptr = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) dasWglGetProcAddress("glGetCompressedTextureImageEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetCompressedTextureImageEXT is NULL");
    (*fptr)(texture, target, lod, img);
    checkOpenGLError(__context__,__at__);
}

void glSignalVkSemaphoreNV ( GLuint64 vkSemaphore, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSIGNALVKSEMAPHORENVPROC fptr = (PFNGLSIGNALVKSEMAPHORENVPROC) dasWglGetProcAddress("glSignalVkSemaphoreNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSignalVkSemaphoreNV is NULL");
    (*fptr)(vkSemaphore);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayNormalOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYNORMALOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYNORMALOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayNormalOffsetEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayNormalOffsetEXT is NULL");
    (*fptr)(vaobj, buffer, type, stride, offset);
    checkOpenGLError(__context__,__at__);
}

void glCreateBuffers ( GLsizei n, GLuint * buffers, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEBUFFERSPROC fptr = (PFNGLCREATEBUFFERSPROC) dasWglGetProcAddress("glCreateBuffers");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateBuffers is NULL");
    (*fptr)(n, buffers);
    checkOpenGLError(__context__,__at__);
}

GLuint glGetUniformBlockIndex ( GLuint program, const GLchar * uniformBlockName, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMBLOCKINDEXPROC fptr = (PFNGLGETUNIFORMBLOCKINDEXPROC) dasWglGetProcAddress("glGetUniformBlockIndex");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformBlockIndex is NULL");
    auto result = (*fptr)(program, uniformBlockName);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glDrawCommandsStatesNV ( GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWCOMMANDSSTATESNVPROC fptr = (PFNGLDRAWCOMMANDSSTATESNVPROC) dasWglGetProcAddress("glDrawCommandsStatesNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawCommandsStatesNV is NULL");
    (*fptr)(buffer, indirects, sizes, states, fbos, count);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferPageCommitmentARB ( GLuint buffer, GLintptr offset, GLsizeiptr size, bool commit, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC fptr = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) dasWglGetProcAddress("glNamedBufferPageCommitmentARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedBufferPageCommitmentARB is NULL");
    (*fptr)(buffer, offset, size, commit);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexParameterfEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXPARAMETERFEXTPROC fptr = (PFNGLMULTITEXPARAMETERFEXTPROC) dasWglGetProcAddress("glMultiTexParameterfEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexParameterfEXT is NULL");
    (*fptr)(texunit, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glTexImage2D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXIMAGE2DPROC fptr = (PFNGLTEXIMAGE2DPROC) dasWglGetProcAddress("glTexImage2D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTexImage2D is NULL");
    (*fptr)(target, level, internalformat, width, height, border, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glRenderbufferStorageMultisampleCoverageNV ( GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC fptr = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) dasWglGetProcAddress("glRenderbufferStorageMultisampleCoverageNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glRenderbufferStorageMultisampleCoverageNV is NULL");
    (*fptr)(target, coverageSamples, colorSamples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2x4fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2X4FVPROC fptr = (PFNGLUNIFORMMATRIX2X4FVPROC) dasWglGetProcAddress("glUniformMatrix2x4fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix2x4fv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glMakeImageHandleResidentNV ( GLuint64 handle, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKEIMAGEHANDLERESIDENTNVPROC fptr = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) dasWglGetProcAddress("glMakeImageHandleResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeImageHandleResidentNV is NULL");
    (*fptr)(handle, access);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x4dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3x4dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3x4dvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glGetQueryBufferObjectiv ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETQUERYBUFFEROBJECTIVPROC fptr = (PFNGLGETQUERYBUFFEROBJECTIVPROC) dasWglGetProcAddress("glGetQueryBufferObjectiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetQueryBufferObjectiv is NULL");
    (*fptr)(id, buffer, pname, offset);
    checkOpenGLError(__context__,__at__);
}

void glFramebufferTextureMultiviewOVR ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC fptr = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) dasWglGetProcAddress("glFramebufferTextureMultiviewOVR");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glFramebufferTextureMultiviewOVR is NULL");
    (*fptr)(target, attachment, texture, level, baseViewIndex, numViews);
    checkOpenGLError(__context__,__at__);
}

void glGetTextureLevelParameterfv ( GLuint texture, GLint level, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTURELEVELPARAMETERFVPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) dasWglGetProcAddress("glGetTextureLevelParameterfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureLevelParameterfv is NULL");
    (*fptr)(texture, level, pname, params);
    checkOpenGLError(__context__,__at__);
}

GLuint64 glGetTextureHandleARB ( GLuint texture, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTEXTUREHANDLEARBPROC fptr = (PFNGLGETTEXTUREHANDLEARBPROC) dasWglGetProcAddress("glGetTextureHandleARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTextureHandleARB is NULL");
    auto result = (*fptr)(texture);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glBlendFunciARB ( GLuint buf, GLenum src, GLenum dst, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBLENDFUNCIARBPROC fptr = (PFNGLBLENDFUNCIARBPROC) dasWglGetProcAddress("glBlendFunciARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBlendFunciARB is NULL");
    (*fptr)(buf, src, dst);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferParameteriEXT ( GLuint framebuffer, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC) dasWglGetProcAddress("glNamedFramebufferParameteriEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferParameteriEXT is NULL");
    (*fptr)(framebuffer, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glMakeNamedBufferResidentNV ( GLuint buffer, GLenum access, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMAKENAMEDBUFFERRESIDENTNVPROC fptr = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC) dasWglGetProcAddress("glMakeNamedBufferResidentNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMakeNamedBufferResidentNV is NULL");
    (*fptr)(buffer, access);
    checkOpenGLError(__context__,__at__);
}

void glCoverFillPathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOVERFILLPATHINSTANCEDNVPROC fptr = (PFNGLCOVERFILLPATHINSTANCEDNVPROC) dasWglGetProcAddress("glCoverFillPathInstancedNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCoverFillPathInstancedNV is NULL");
    (*fptr)(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayVertexBindingDivisorEXT ( GLuint vaobj, GLuint bindingindex, GLuint divisor, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC fptr = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC) dasWglGetProcAddress("glVertexArrayVertexBindingDivisorEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayVertexBindingDivisorEXT is NULL");
    (*fptr)(vaobj, bindingindex, divisor);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4usv ( GLuint index, const GLushort * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4USVPROC fptr = (PFNGLVERTEXATTRIBI4USVPROC) dasWglGetProcAddress("glVertexAttribI4usv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI4usv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4uiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4UIVPROC fptr = (PFNGLVERTEXATTRIBI4UIVPROC) dasWglGetProcAddress("glVertexAttribI4uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI4uiv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x3fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4x3fvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4x3fvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferSubData ( GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERSUBDATAPROC fptr = (PFNGLNAMEDBUFFERSUBDATAPROC) dasWglGetProcAddress("glNamedBufferSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedBufferSubData is NULL");
    (*fptr)(buffer, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glBindBuffersRange ( GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDBUFFERSRANGEPROC fptr = (PFNGLBINDBUFFERSRANGEPROC) dasWglGetProcAddress("glBindBuffersRange");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindBuffersRange is NULL");
    (*fptr)(target, first, count, buffers, offsets, sizes);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawElementsIndirectCount ( GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC) dasWglGetProcAddress("glMultiDrawElementsIndirectCount");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawElementsIndirectCount is NULL");
    (*fptr)(mode, type, indirect, drawcount, maxdrawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glUniform1ui64ARB ( GLint location, GLuint64 x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM1UI64ARBPROC fptr = (PFNGLUNIFORM1UI64ARBPROC) dasWglGetProcAddress("glUniform1ui64ARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform1ui64ARB is NULL");
    (*fptr)(location, x);
    checkOpenGLError(__context__,__at__);
}

void glStencilStrokePathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) dasWglGetProcAddress("glStencilStrokePathInstancedNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilStrokePathInstancedNV is NULL");
    (*fptr)(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
    checkOpenGLError(__context__,__at__);
}

void glGetFloatv ( GLenum pname, GLfloat * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETFLOATVPROC fptr = (PFNGLGETFLOATVPROC) dasWglGetProcAddress("glGetFloatv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetFloatv is NULL");
    (*fptr)(pname, data);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexParameterfvEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXPARAMETERFVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERFVEXTPROC) dasWglGetProcAddress("glGetMultiTexParameterfvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexParameterfvEXT is NULL");
    (*fptr)(texunit, target, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetBooleani_v ( GLenum target, GLuint index, GLboolean * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETBOOLEANI_VPROC fptr = (PFNGLGETBOOLEANI_VPROC) dasWglGetProcAddress("glGetBooleani_v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetBooleani_v is NULL");
    (*fptr)(target, index, data);
    checkOpenGLError(__context__,__at__);
}

void glDrawMeshTasksIndirectNV ( GLintptr indirect, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWMESHTASKSINDIRECTNVPROC fptr = (PFNGLDRAWMESHTASKSINDIRECTNVPROC) dasWglGetProcAddress("glDrawMeshTasksIndirectNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawMeshTasksIndirectNV is NULL");
    (*fptr)(indirect);
    checkOpenGLError(__context__,__at__);
}

void glGetSamplerParameterIiv ( GLuint sampler, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSAMPLERPARAMETERIIVPROC fptr = (PFNGLGETSAMPLERPARAMETERIIVPROC) dasWglGetProcAddress("glGetSamplerParameterIiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetSamplerParameterIiv is NULL");
    (*fptr)(sampler, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetVertexAttribLdv ( GLuint index, GLenum pname, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETVERTEXATTRIBLDVPROC fptr = (PFNGLGETVERTEXATTRIBLDVPROC) dasWglGetProcAddress("glGetVertexAttribLdv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetVertexAttribLdv is NULL");
    (*fptr)(index, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexGenivEXT ( GLenum texunit, GLenum coord, GLenum pname, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENIVEXTPROC fptr = (PFNGLMULTITEXGENIVEXTPROC) dasWglGetProcAddress("glMultiTexGenivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexGenivEXT is NULL");
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glCopyMultiTexImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYMULTITEXIMAGE1DEXTPROC fptr = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC) dasWglGetProcAddress("glCopyMultiTexImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyMultiTexImage1DEXT is NULL");
    (*fptr)(texunit, target, level, internalformat, x, y, width, border);
    checkOpenGLError(__context__,__at__);
}

void glUniform2i64NV ( GLint location, GLint64EXT x, GLint64EXT y, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORM2I64NVPROC fptr = (PFNGLUNIFORM2I64NVPROC) dasWglGetProcAddress("glUniform2i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniform2i64NV is NULL");
    (*fptr)(location, x, y);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL1i64NV ( GLuint index, GLint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1I64NVPROC fptr = (PFNGLVERTEXATTRIBL1I64NVPROC) dasWglGetProcAddress("glVertexAttribL1i64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL1i64NV is NULL");
    (*fptr)(index, x);
    checkOpenGLError(__context__,__at__);
}

void glVertexFormatNV ( GLint size, GLenum type, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXFORMATNVPROC fptr = (PFNGLVERTEXFORMATNVPROC) dasWglGetProcAddress("glVertexFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexFormatNV is NULL");
    (*fptr)(size, type, stride);
    checkOpenGLError(__context__,__at__);
}

void glGenTransformFeedbacks ( GLsizei n, GLuint * ids, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGENTRANSFORMFEEDBACKSPROC fptr = (PFNGLGENTRANSFORMFEEDBACKSPROC) dasWglGetProcAddress("glGenTransformFeedbacks");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGenTransformFeedbacks is NULL");
    (*fptr)(n, ids);
    checkOpenGLError(__context__,__at__);
}

void glBeginQueryIndexed ( GLenum target, GLuint index, GLuint id, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINQUERYINDEXEDPROC fptr = (PFNGLBEGINQUERYINDEXEDPROC) dasWglGetProcAddress("glBeginQueryIndexed");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBeginQueryIndexed is NULL");
    (*fptr)(target, index, id);
    checkOpenGLError(__context__,__at__);
}

GLenum glPathMemoryGlyphIndexArrayNV ( GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC fptr = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) dasWglGetProcAddress("glPathMemoryGlyphIndexArrayNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPathMemoryGlyphIndexArrayNV is NULL");
    auto result = (*fptr)(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glPauseTransformFeedback ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPAUSETRANSFORMFEEDBACKPROC fptr = (PFNGLPAUSETRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glPauseTransformFeedback");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glPauseTransformFeedback is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glDeleteProgramPipelines ( GLsizei n, const GLuint * pipelines, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEPROGRAMPIPELINESPROC fptr = (PFNGLDELETEPROGRAMPIPELINESPROC) dasWglGetProcAddress("glDeleteProgramPipelines");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteProgramPipelines is NULL");
    (*fptr)(n, pipelines);
    checkOpenGLError(__context__,__at__);
}

void glVertexArrayAttribBinding ( GLuint vaobj, GLuint attribindex, GLuint bindingindex, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXARRAYATTRIBBINDINGPROC fptr = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) dasWglGetProcAddress("glVertexArrayAttribBinding");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexArrayAttribBinding is NULL");
    (*fptr)(vaobj, attribindex, bindingindex);
    checkOpenGLError(__context__,__at__);
}

void glDebugMessageControl ( GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, bool enabled, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEBUGMESSAGECONTROLPROC fptr = (PFNGLDEBUGMESSAGECONTROLPROC) dasWglGetProcAddress("glDebugMessageControl");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDebugMessageControl is NULL");
    (*fptr)(source, type, severity, count, ids, enabled);
    checkOpenGLError(__context__,__at__);
}

void glCopyTextureSubImage3D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYTEXTURESUBIMAGE3DPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) dasWglGetProcAddress("glCopyTextureSubImage3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyTextureSubImage3D is NULL");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribFormat ( GLuint attribindex, GLint size, GLenum type, bool normalized, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBFORMATPROC fptr = (PFNGLVERTEXATTRIBFORMATPROC) dasWglGetProcAddress("glVertexAttribFormat");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribFormat is NULL");
    (*fptr)(attribindex, size, type, normalized, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribLFormat ( GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBLFORMATPROC fptr = (PFNGLVERTEXATTRIBLFORMATPROC) dasWglGetProcAddress("glVertexAttribLFormat");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribLFormat is NULL");
    (*fptr)(attribindex, size, type, relativeoffset);
    checkOpenGLError(__context__,__at__);
}

void glDeletePerfMonitorsAMD ( GLsizei n, GLuint * monitors, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETEPERFMONITORSAMDPROC fptr = (PFNGLDELETEPERFMONITORSAMDPROC) dasWglGetProcAddress("glDeletePerfMonitorsAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeletePerfMonitorsAMD is NULL");
    (*fptr)(n, monitors);
    checkOpenGLError(__context__,__at__);
}

void glGetMultiTexGendvEXT ( GLenum texunit, GLenum coord, GLenum pname, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETMULTITEXGENDVEXTPROC fptr = (PFNGLGETMULTITEXGENDVEXTPROC) dasWglGetProcAddress("glGetMultiTexGendvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetMultiTexGendvEXT is NULL");
    (*fptr)(texunit, coord, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glGetPerfCounterInfoINTEL ( GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETPERFCOUNTERINFOINTELPROC fptr = (PFNGLGETPERFCOUNTERINFOINTELPROC) dasWglGetProcAddress("glGetPerfCounterInfoINTEL");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetPerfCounterInfoINTEL is NULL");
    (*fptr)(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform1ui64NV ( GLuint program, GLint location, GLuint64EXT x, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM1UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM1UI64NVPROC) dasWglGetProcAddress("glProgramUniform1ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform1ui64NV is NULL");
    (*fptr)(program, location, x);
    checkOpenGLError(__context__,__at__);
}

void glSamplerParameterfv ( GLuint sampler, GLenum pname, const GLfloat * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSAMPLERPARAMETERFVPROC fptr = (PFNGLSAMPLERPARAMETERFVPROC) dasWglGetProcAddress("glSamplerParameterfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glSamplerParameterfv is NULL");
    (*fptr)(sampler, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glGetSamplerParameteriv ( GLuint sampler, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETSAMPLERPARAMETERIVPROC fptr = (PFNGLGETSAMPLERPARAMETERIVPROC) dasWglGetProcAddress("glGetSamplerParameteriv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetSamplerParameteriv is NULL");
    (*fptr)(sampler, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glNamedBufferSubDataEXT ( GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDBUFFERSUBDATAEXTPROC fptr = (PFNGLNAMEDBUFFERSUBDATAEXTPROC) dasWglGetProcAddress("glNamedBufferSubDataEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedBufferSubDataEXT is NULL");
    (*fptr)(buffer, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glScissorExclusiveArrayvNV ( GLuint first, GLsizei count, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSCISSOREXCLUSIVEARRAYVNVPROC fptr = (PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) dasWglGetProcAddress("glScissorExclusiveArrayvNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glScissorExclusiveArrayvNV is NULL");
    (*fptr)(first, count, v);
    checkOpenGLError(__context__,__at__);
}

void glEvaluateDepthValuesARB ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLEVALUATEDEPTHVALUESARBPROC fptr = (PFNGLEVALUATEDEPTHVALUESARBPROC) dasWglGetProcAddress("glEvaluateDepthValuesARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glEvaluateDepthValuesARB is NULL");
    (*fptr)();
    checkOpenGLError(__context__,__at__);
}

void glClearTexImage ( GLuint texture, GLint level, GLenum format, GLenum type, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARTEXIMAGEPROC fptr = (PFNGLCLEARTEXIMAGEPROC) dasWglGetProcAddress("glClearTexImage");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearTexImage is NULL");
    (*fptr)(texture, level, format, type, data);
    checkOpenGLError(__context__,__at__);
}

void glGetTransformFeedbacki_v ( GLuint xfb, GLenum pname, GLuint index, GLint * param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETTRANSFORMFEEDBACKI_VPROC fptr = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) dasWglGetProcAddress("glGetTransformFeedbacki_v");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetTransformFeedbacki_v is NULL");
    (*fptr)(xfb, pname, index, param);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI3iv ( GLuint index, const GLint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI3IVPROC fptr = (PFNGLVERTEXATTRIBI3IVPROC) dasWglGetProcAddress("glVertexAttribI3iv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI3iv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glMultiDrawMeshTasksIndirectNV ( GLintptr indirect, GLsizei drawcount, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC fptr = (PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) dasWglGetProcAddress("glMultiDrawMeshTasksIndirectNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiDrawMeshTasksIndirectNV is NULL");
    (*fptr)(indirect, drawcount, stride);
    checkOpenGLError(__context__,__at__);
}

void glDepthRangeArrayv ( GLuint first, GLsizei count, const GLdouble * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDEPTHRANGEARRAYVPROC fptr = (PFNGLDEPTHRANGEARRAYVPROC) dasWglGetProcAddress("glDepthRangeArrayv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDepthRangeArrayv is NULL");
    (*fptr)(first, count, v);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribL4ui64NV ( GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL4UI64NVPROC fptr = (PFNGLVERTEXATTRIBL4UI64NVPROC) dasWglGetProcAddress("glVertexAttribL4ui64NV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL4ui64NV is NULL");
    (*fptr)(index, x, y, z, w);
    checkOpenGLError(__context__,__at__);
}

void glTextureSubImage3D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESUBIMAGE3DPROC fptr = (PFNGLTEXTURESUBIMAGE3DPROC) dasWglGetProcAddress("glTextureSubImage3D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureSubImage3D is NULL");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTextureFaceEXT ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) dasWglGetProcAddress("glNamedFramebufferTextureFaceEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferTextureFaceEXT is NULL");
    (*fptr)(framebuffer, attachment, texture, level, face);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexEnvfEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXENVFEXTPROC fptr = (PFNGLMULTITEXENVFEXTPROC) dasWglGetProcAddress("glMultiTexEnvfEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexEnvfEXT is NULL");
    (*fptr)(texunit, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

GLuint glCreateProgram ( Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATEPROGRAMPROC fptr = (PFNGLCREATEPROGRAMPROC) dasWglGetProcAddress("glCreateProgram");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateProgram is NULL");
    auto result = (*fptr)();
    checkOpenGLError(__context__,__at__);
    return result;
}

void glProgramUniformMatrix3x2fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) dasWglGetProcAddress("glProgramUniformMatrix3x2fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3x2fv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, const void * data, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBUFFERSUBDATAPROC fptr = (PFNGLBUFFERSUBDATAPROC) dasWglGetProcAddress("glBufferSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBufferSubData is NULL");
    (*fptr)(target, offset, size, data);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribFormatNV ( GLuint index, GLint size, GLenum type, bool normalized, GLsizei stride, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBFORMATNVPROC fptr = (PFNGLVERTEXATTRIBFORMATNVPROC) dasWglGetProcAddress("glVertexAttribFormatNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribFormatNV is NULL");
    (*fptr)(index, size, type, normalized, stride);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix4x3fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) dasWglGetProcAddress("glProgramUniformMatrix4x3fv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix4x3fv is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexEnviEXT ( GLenum texunit, GLenum target, GLenum pname, GLint param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXENVIEXTPROC fptr = (PFNGLMULTITEXENVIEXTPROC) dasWglGetProcAddress("glMultiTexEnviEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexEnviEXT is NULL");
    (*fptr)(texunit, target, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glCompressedTextureImage1DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) dasWglGetProcAddress("glCompressedTextureImage1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCompressedTextureImage1DEXT is NULL");
    (*fptr)(texture, target, level, internalformat, width, border, imageSize, bits);
    checkOpenGLError(__context__,__at__);
}

void glClearBufferiv ( GLenum buffer, GLint drawbuffer, const GLint * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCLEARBUFFERIVPROC fptr = (PFNGLCLEARBUFFERIVPROC) dasWglGetProcAddress("glClearBufferiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glClearBufferiv is NULL");
    (*fptr)(buffer, drawbuffer, value);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI1uiv ( GLuint index, const GLuint * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI1UIVPROC fptr = (PFNGLVERTEXATTRIBI1UIVPROC) dasWglGetProcAddress("glVertexAttribI1uiv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI1uiv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

GLboolean glUnmapNamedBuffer ( GLuint buffer, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNMAPNAMEDBUFFERPROC fptr = (PFNGLUNMAPNAMEDBUFFERPROC) dasWglGetProcAddress("glUnmapNamedBuffer");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUnmapNamedBuffer is NULL");
    auto result = (*fptr)(buffer);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glVertexAttribL1i64vNV ( GLuint index, const GLint64EXT * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBL1I64VNVPROC fptr = (PFNGLVERTEXATTRIBL1I64VNVPROC) dasWglGetProcAddress("glVertexAttribL1i64vNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribL1i64vNV is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glNamedProgramLocalParametersI4ivEXT ( GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParametersI4ivEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedProgramLocalParametersI4ivEXT is NULL");
    (*fptr)(program, target, index, count, params);
    checkOpenGLError(__context__,__at__);
}

void glDrawTransformFeedbackInstanced ( GLenum mode, GLuint id, GLsizei instancecount, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) dasWglGetProcAddress("glDrawTransformFeedbackInstanced");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDrawTransformFeedbackInstanced is NULL");
    (*fptr)(mode, id, instancecount);
    checkOpenGLError(__context__,__at__);
}

void glNamedFramebufferTexture1DEXT ( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) dasWglGetProcAddress("glNamedFramebufferTexture1DEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedFramebufferTexture1DEXT is NULL");
    (*fptr)(framebuffer, attachment, textarget, texture, level);
    checkOpenGLError(__context__,__at__);
}

void glCopyBufferSubData ( GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCOPYBUFFERSUBDATAPROC fptr = (PFNGLCOPYBUFFERSUBDATAPROC) dasWglGetProcAddress("glCopyBufferSubData");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCopyBufferSubData is NULL");
    (*fptr)(readTarget, writeTarget, readOffset, writeOffset, size);
    checkOpenGLError(__context__,__at__);
}

void glUniformMatrix2x3dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLUNIFORMMATRIX2X3DVPROC fptr = (PFNGLUNIFORMMATRIX2X3DVPROC) dasWglGetProcAddress("glUniformMatrix2x3dv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glUniformMatrix2x3dv is NULL");
    (*fptr)(location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glTextureStorage1D ( GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLTEXTURESTORAGE1DPROC fptr = (PFNGLTEXTURESTORAGE1DPROC) dasWglGetProcAddress("glTextureStorage1D");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glTextureStorage1D is NULL");
    (*fptr)(texture, levels, internalformat, width);
    checkOpenGLError(__context__,__at__);
}

void glGetNamedStringivARB ( GLint namelen, const GLchar * name, GLenum pname, GLint * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETNAMEDSTRINGIVARBPROC fptr = (PFNGLGETNAMEDSTRINGIVARBPROC) dasWglGetProcAddress("glGetNamedStringivARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetNamedStringivARB is NULL");
    (*fptr)(namelen, name, pname, params);
    checkOpenGLError(__context__,__at__);
}

void glNamedRenderbufferStorageMultisampleAdvancedAMD ( GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) dasWglGetProcAddress("glNamedRenderbufferStorageMultisampleAdvancedAMD");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glNamedRenderbufferStorageMultisampleAdvancedAMD is NULL");
    (*fptr)(renderbuffer, samples, storageSamples, internalformat, width, height);
    checkOpenGLError(__context__,__at__);
}

void glStencilOpSeparate ( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSTENCILOPSEPARATEPROC fptr = (PFNGLSTENCILOPSEPARATEPROC) dasWglGetProcAddress("glStencilOpSeparate");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glStencilOpSeparate is NULL");
    (*fptr)(face, sfail, dpfail, dppass);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformdv ( GLuint program, GLint location, GLdouble * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMDVPROC fptr = (PFNGLGETUNIFORMDVPROC) dasWglGetProcAddress("glGetUniformdv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformdv is NULL");
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glGetUniformfv ( GLuint program, GLint location, GLfloat * params, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETUNIFORMFVPROC fptr = (PFNGLGETUNIFORMFVPROC) dasWglGetProcAddress("glGetUniformfv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetUniformfv is NULL");
    (*fptr)(program, location, params);
    checkOpenGLError(__context__,__at__);
}

void glVertexAttribI4ubv ( GLuint index, const GLubyte * v, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLVERTEXATTRIBI4UBVPROC fptr = (PFNGLVERTEXATTRIBI4UBVPROC) dasWglGetProcAddress("glVertexAttribI4ubv");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glVertexAttribI4ubv is NULL");
    (*fptr)(index, v);
    checkOpenGLError(__context__,__at__);
}

void glBindFragDataLocation ( GLuint program, GLuint color, const GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBINDFRAGDATALOCATIONPROC fptr = (PFNGLBINDFRAGDATALOCATIONPROC) dasWglGetProcAddress("glBindFragDataLocation");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBindFragDataLocation is NULL");
    (*fptr)(program, color, name);
    checkOpenGLError(__context__,__at__);
}

void glGetObjectPtrLabel ( const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETOBJECTPTRLABELPROC fptr = (PFNGLGETOBJECTPTRLABELPROC) dasWglGetProcAddress("glGetObjectPtrLabel");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetObjectPtrLabel is NULL");
    (*fptr)(ptr, bufSize, length, label);
    checkOpenGLError(__context__,__at__);
}

void glMultiTexGendEXT ( GLenum texunit, GLenum coord, GLenum pname, GLdouble param, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLMULTITEXGENDEXTPROC fptr = (PFNGLMULTITEXGENDEXTPROC) dasWglGetProcAddress("glMultiTexGendEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glMultiTexGendEXT is NULL");
    (*fptr)(texunit, coord, pname, param);
    checkOpenGLError(__context__,__at__);
}

void glBeginTransformFeedback ( GLenum primitiveMode, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLBEGINTRANSFORMFEEDBACKPROC fptr = (PFNGLBEGINTRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glBeginTransformFeedback");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glBeginTransformFeedback is NULL");
    (*fptr)(primitiveMode);
    checkOpenGLError(__context__,__at__);
}

void glShadingRateImagePaletteNV ( GLuint viewport, GLuint first, GLsizei count, const GLenum * rates, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLSHADINGRATEIMAGEPALETTENVPROC fptr = (PFNGLSHADINGRATEIMAGEPALETTENVPROC) dasWglGetProcAddress("glShadingRateImagePaletteNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glShadingRateImagePaletteNV is NULL");
    (*fptr)(viewport, first, count, rates);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniformMatrix3x2dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3x2dvEXT");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniformMatrix3x2dvEXT is NULL");
    (*fptr)(program, location, count, transpose, value);
    checkOpenGLError(__context__,__at__);
}

void glProgramUniform4ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLPROGRAMUNIFORM4UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM4UI64VARBPROC) dasWglGetProcAddress("glProgramUniform4ui64vARB");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glProgramUniform4ui64vARB is NULL");
    (*fptr)(program, location, count, value);
    checkOpenGLError(__context__,__at__);
}

void glDeleteCommandListsNV ( GLsizei n, const GLuint * lists, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLDELETECOMMANDLISTSNVPROC fptr = (PFNGLDELETECOMMANDLISTSNVPROC) dasWglGetProcAddress("glDeleteCommandListsNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glDeleteCommandListsNV is NULL");
    (*fptr)(n, lists);
    checkOpenGLError(__context__,__at__);
}

GLuint64 glGetImageHandleNV ( GLuint texture, GLint level, bool layered, GLint layer, GLenum format, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETIMAGEHANDLENVPROC fptr = (PFNGLGETIMAGEHANDLENVPROC) dasWglGetProcAddress("glGetImageHandleNV");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetImageHandleNV is NULL");
    auto result = (*fptr)(texture, level, layered, layer, format);
    checkOpenGLError(__context__,__at__);
    return result;
}

void glGetActiveSubroutineName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLGETACTIVESUBROUTINENAMEPROC fptr = (PFNGLGETACTIVESUBROUTINENAMEPROC) dasWglGetProcAddress("glGetActiveSubroutineName");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glGetActiveSubroutineName is NULL");
    (*fptr)(program, shadertype, index, bufSize, length, name);
    checkOpenGLError(__context__,__at__);
}

void glCreateTextures ( GLenum target, GLsizei n, GLuint * textures, Context * __context__, LineInfoArg * __at__ ) {
    static PFNGLCREATETEXTURESPROC fptr = (PFNGLCREATETEXTURESPROC) dasWglGetProcAddress("glCreateTextures");
    if (!fptr) __context__->throw_error_at(*__at__,"OpenGL: method glCreateTextures is NULL");
    (*fptr)(target, n, textures);
    checkOpenGLError(__context__,__at__);
}

