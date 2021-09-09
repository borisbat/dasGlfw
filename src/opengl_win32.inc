void glProgramUniformMatrix3fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) dasWglGetProcAddress("glProgramUniformMatrix3fv");
    (*fptr)(program, location, count, transpose, value);
}

void glShaderSource ( GLuint shader, GLsizei count, const GLchar *const * string, const GLint * length ) {
    static PFNGLSHADERSOURCEPROC fptr = (PFNGLSHADERSOURCEPROC) dasWglGetProcAddress("glShaderSource");
    (*fptr)(shader, count, string, length);
}

void glVertexAttrib3dv ( GLuint index, const GLdouble * v ) {
    static PFNGLVERTEXATTRIB3DVPROC fptr = (PFNGLVERTEXATTRIB3DVPROC) dasWglGetProcAddress("glVertexAttrib3dv");
    (*fptr)(index, v);
}

void glUniformMatrix4dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLUNIFORMMATRIX4DVPROC fptr = (PFNGLUNIFORMMATRIX4DVPROC) dasWglGetProcAddress("glUniformMatrix4dv");
    (*fptr)(location, count, transpose, value);
}

void glGenProgramPipelines ( GLsizei n, GLuint * pipelines ) {
    static PFNGLGENPROGRAMPIPELINESPROC fptr = (PFNGLGENPROGRAMPIPELINESPROC) dasWglGetProcAddress("glGenProgramPipelines");
    (*fptr)(n, pipelines);
}

void glProgramUniformMatrix3dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) dasWglGetProcAddress("glProgramUniformMatrix3dv");
    (*fptr)(program, location, count, transpose, value);
}

void glGetTextureLevelParameteriv ( GLuint texture, GLint level, GLenum pname, GLint * params ) {
    static PFNGLGETTEXTURELEVELPARAMETERIVPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) dasWglGetProcAddress("glGetTextureLevelParameteriv");
    (*fptr)(texture, level, pname, params);
}

void glVertexAttribI4iv ( GLuint index, const GLint * v ) {
    static PFNGLVERTEXATTRIBI4IVPROC fptr = (PFNGLVERTEXATTRIBI4IVPROC) dasWglGetProcAddress("glVertexAttribI4iv");
    (*fptr)(index, v);
}

void glVertexAttribI4sv ( GLuint index, const GLshort * v ) {
    static PFNGLVERTEXATTRIBI4SVPROC fptr = (PFNGLVERTEXATTRIBI4SVPROC) dasWglGetProcAddress("glVertexAttribI4sv");
    (*fptr)(index, v);
}

void glGetUniformi64vARB ( GLuint program, GLint location, GLint64 * params ) {
    static PFNGLGETUNIFORMI64VARBPROC fptr = (PFNGLGETUNIFORMI64VARBPROC) dasWglGetProcAddress("glGetUniformi64vARB");
    (*fptr)(program, location, params);
}

void glMatrixMultfEXT ( GLenum mode, const GLfloat * m ) {
    static PFNGLMATRIXMULTFEXTPROC fptr = (PFNGLMATRIXMULTFEXTPROC) dasWglGetProcAddress("glMatrixMultfEXT");
    (*fptr)(mode, m);
}

void glMakeImageHandleNonResidentARB ( GLuint64 handle ) {
    static PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC fptr = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) dasWglGetProcAddress("glMakeImageHandleNonResidentARB");
    (*fptr)(handle);
}

void glDrawElementsInstanced ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount ) {
    static PFNGLDRAWELEMENTSINSTANCEDPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDPROC) dasWglGetProcAddress("glDrawElementsInstanced");
    (*fptr)(mode, count, type, indices, instancecount);
}

void glProgramUniformMatrix3dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3dvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glMatrixOrthoEXT ( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar ) {
    static PFNGLMATRIXORTHOEXTPROC fptr = (PFNGLMATRIXORTHOEXTPROC) dasWglGetProcAddress("glMatrixOrthoEXT");
    (*fptr)(mode, left, right, bottom, top, zNear, zFar);
}

void glUniform3i64NV ( GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z ) {
    static PFNGLUNIFORM3I64NVPROC fptr = (PFNGLUNIFORM3I64NVPROC) dasWglGetProcAddress("glUniform3i64NV");
    (*fptr)(location, x, y, z);
}

void glProgramUniform2i64NV ( GLuint program, GLint location, GLint64EXT x, GLint64EXT y ) {
    static PFNGLPROGRAMUNIFORM2I64NVPROC fptr = (PFNGLPROGRAMUNIFORM2I64NVPROC) dasWglGetProcAddress("glProgramUniform2i64NV");
    (*fptr)(program, location, x, y);
}

void glUniform4uiv ( GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLUNIFORM4UIVPROC fptr = (PFNGLUNIFORM4UIVPROC) dasWglGetProcAddress("glUniform4uiv");
    (*fptr)(location, count, value);
}

void glNamedProgramLocalParameterI4uivEXT ( GLuint program, GLenum target, GLuint index, const GLuint * params ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameterI4uivEXT");
    (*fptr)(program, target, index, params);
}

void glDisableVertexArrayAttrib ( GLuint vaobj, GLuint index ) {
    static PFNGLDISABLEVERTEXARRAYATTRIBPROC fptr = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) dasWglGetProcAddress("glDisableVertexArrayAttrib");
    (*fptr)(vaobj, index);
}

void glTexStorage2DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations ) {
    static PFNGLTEXSTORAGE2DMULTISAMPLEPROC fptr = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) dasWglGetProcAddress("glTexStorage2DMultisample");
    (*fptr)(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glVertexArrayAttribFormat ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, bool normalized, GLuint relativeoffset ) {
    static PFNGLVERTEXARRAYATTRIBFORMATPROC fptr = (PFNGLVERTEXARRAYATTRIBFORMATPROC) dasWglGetProcAddress("glVertexArrayAttribFormat");
    (*fptr)(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribI4bv ( GLuint index, const GLbyte * v ) {
    static PFNGLVERTEXATTRIBI4BVPROC fptr = (PFNGLVERTEXATTRIBI4BVPROC) dasWglGetProcAddress("glVertexAttribI4bv");
    (*fptr)(index, v);
}

void glUniform3ui64vARB ( GLint location, GLsizei count, const GLuint64 * value ) {
    static PFNGLUNIFORM3UI64VARBPROC fptr = (PFNGLUNIFORM3UI64VARBPROC) dasWglGetProcAddress("glUniform3ui64vARB");
    (*fptr)(location, count, value);
}

void glCompileShader ( GLuint shader ) {
    static PFNGLCOMPILESHADERPROC fptr = (PFNGLCOMPILESHADERPROC) dasWglGetProcAddress("glCompileShader");
    (*fptr)(shader);
}

void glVertexAttribI4ui ( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w ) {
    static PFNGLVERTEXATTRIBI4UIPROC fptr = (PFNGLVERTEXATTRIBI4UIPROC) dasWglGetProcAddress("glVertexAttribI4ui");
    (*fptr)(index, x, y, z, w);
}

void glGetVertexAttribLui64vARB ( GLuint index, GLenum pname, GLuint64EXT * params ) {
    static PFNGLGETVERTEXATTRIBLUI64VARBPROC fptr = (PFNGLGETVERTEXATTRIBLUI64VARBPROC) dasWglGetProcAddress("glGetVertexAttribLui64vARB");
    (*fptr)(index, pname, params);
}

void glTextureBarrierNV (  ) {
    static PFNGLTEXTUREBARRIERNVPROC fptr = (PFNGLTEXTUREBARRIERNVPROC) dasWglGetProcAddress("glTextureBarrierNV");
    (*fptr)();
}

GLenum glCheckNamedFramebufferStatusEXT ( GLuint framebuffer, GLenum target ) {
    static PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC fptr = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) dasWglGetProcAddress("glCheckNamedFramebufferStatusEXT");
    return (*fptr)(framebuffer, target);
}

GLuint glGenPathsNV ( GLsizei range ) {
    static PFNGLGENPATHSNVPROC fptr = (PFNGLGENPATHSNVPROC) dasWglGetProcAddress("glGenPathsNV");
    return (*fptr)(range);
}

void glUniform1ui64vARB ( GLint location, GLsizei count, const GLuint64 * value ) {
    static PFNGLUNIFORM1UI64VARBPROC fptr = (PFNGLUNIFORM1UI64VARBPROC) dasWglGetProcAddress("glUniform1ui64vARB");
    (*fptr)(location, count, value);
}

void glGetVertexAttribIiv ( GLuint index, GLenum pname, GLint * params ) {
    static PFNGLGETVERTEXATTRIBIIVPROC fptr = (PFNGLGETVERTEXATTRIBIIVPROC) dasWglGetProcAddress("glGetVertexAttribIiv");
    (*fptr)(index, pname, params);
}

void glClearBufferData ( GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data ) {
    static PFNGLCLEARBUFFERDATAPROC fptr = (PFNGLCLEARBUFFERDATAPROC) dasWglGetProcAddress("glClearBufferData");
    (*fptr)(target, internalformat, format, type, data);
}

void glSamplerParameteriv ( GLuint sampler, GLenum pname, const GLint * param ) {
    static PFNGLSAMPLERPARAMETERIVPROC fptr = (PFNGLSAMPLERPARAMETERIVPROC) dasWglGetProcAddress("glSamplerParameteriv");
    (*fptr)(sampler, pname, param);
}

void glClearBufferSubData ( GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data ) {
    static PFNGLCLEARBUFFERSUBDATAPROC fptr = (PFNGLCLEARBUFFERSUBDATAPROC) dasWglGetProcAddress("glClearBufferSubData");
    (*fptr)(target, internalformat, offset, size, format, type, data);
}

void glGetPerfMonitorGroupsAMD ( GLint * numGroups, GLsizei groupsSize, GLuint * groups ) {
    static PFNGLGETPERFMONITORGROUPSAMDPROC fptr = (PFNGLGETPERFMONITORGROUPSAMDPROC) dasWglGetProcAddress("glGetPerfMonitorGroupsAMD");
    (*fptr)(numGroups, groupsSize, groups);
}

void glVertexAttribP2uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value ) {
    static PFNGLVERTEXATTRIBP2UIVPROC fptr = (PFNGLVERTEXATTRIBP2UIVPROC) dasWglGetProcAddress("glVertexAttribP2uiv");
    (*fptr)(index, type, normalized, value);
}

void glCreateRenderbuffers ( GLsizei n, GLuint * renderbuffers ) {
    static PFNGLCREATERENDERBUFFERSPROC fptr = (PFNGLCREATERENDERBUFFERSPROC) dasWglGetProcAddress("glCreateRenderbuffers");
    (*fptr)(n, renderbuffers);
}

void glTextureParameterfEXT ( GLuint texture, GLenum target, GLenum pname, GLfloat param ) {
    static PFNGLTEXTUREPARAMETERFEXTPROC fptr = (PFNGLTEXTUREPARAMETERFEXTPROC) dasWglGetProcAddress("glTextureParameterfEXT");
    (*fptr)(texture, target, pname, param);
}

void glDisableClientStateiEXT ( GLenum array, GLuint index ) {
    static PFNGLDISABLECLIENTSTATEIEXTPROC fptr = (PFNGLDISABLECLIENTSTATEIEXTPROC) dasWglGetProcAddress("glDisableClientStateiEXT");
    (*fptr)(array, index);
}

void glGetNamedFramebufferAttachmentParameteriv ( GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params ) {
    static PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) dasWglGetProcAddress("glGetNamedFramebufferAttachmentParameteriv");
    (*fptr)(framebuffer, attachment, pname, params);
}

void glVertexArrayColorOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYCOLOROFFSETEXTPROC fptr = (PFNGLVERTEXARRAYCOLOROFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayColorOffsetEXT");
    (*fptr)(vaobj, buffer, size, type, stride, offset);
}

void glMinSampleShadingARB ( GLfloat value ) {
    static PFNGLMINSAMPLESHADINGARBPROC fptr = (PFNGLMINSAMPLESHADINGARBPROC) dasWglGetProcAddress("glMinSampleShadingARB");
    (*fptr)(value);
}

void glPathParameterfNV ( GLuint path, GLenum pname, GLfloat value ) {
    static PFNGLPATHPARAMETERFNVPROC fptr = (PFNGLPATHPARAMETERFNVPROC) dasWglGetProcAddress("glPathParameterfNV");
    (*fptr)(path, pname, value);
}

void glNamedFramebufferTextureLayer ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) dasWglGetProcAddress("glNamedFramebufferTextureLayer");
    (*fptr)(framebuffer, attachment, texture, level, layer);
}

void glUniform3i64ARB ( GLint location, GLint64 x, GLint64 y, GLint64 z ) {
    static PFNGLUNIFORM3I64ARBPROC fptr = (PFNGLUNIFORM3I64ARBPROC) dasWglGetProcAddress("glUniform3i64ARB");
    (*fptr)(location, x, y, z);
}

void glMultiTexGenfvEXT ( GLenum texunit, GLenum coord, GLenum pname, const GLfloat * params ) {
    static PFNGLMULTITEXGENFVEXTPROC fptr = (PFNGLMULTITEXGENFVEXTPROC) dasWglGetProcAddress("glMultiTexGenfvEXT");
    (*fptr)(texunit, coord, pname, params);
}

void glDisablei ( GLenum target, GLuint index ) {
    static PFNGLDISABLEIPROC fptr = (PFNGLDISABLEIPROC) dasWglGetProcAddress("glDisablei");
    (*fptr)(target, index);
}

void glUniform2uiv ( GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLUNIFORM2UIVPROC fptr = (PFNGLUNIFORM2UIVPROC) dasWglGetProcAddress("glUniform2uiv");
    (*fptr)(location, count, value);
}

void glCreatePerfQueryINTEL ( GLuint queryId, GLuint * queryHandle ) {
    static PFNGLCREATEPERFQUERYINTELPROC fptr = (PFNGLCREATEPERFQUERYINTELPROC) dasWglGetProcAddress("glCreatePerfQueryINTEL");
    (*fptr)(queryId, queryHandle);
}

GLint glGetProgramResourceLocation ( GLuint program, GLenum programInterface, const GLchar * name ) {
    static PFNGLGETPROGRAMRESOURCELOCATIONPROC fptr = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) dasWglGetProcAddress("glGetProgramResourceLocation");
    return (*fptr)(program, programInterface, name);
}

void glProgramUniformMatrix3x2dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) dasWglGetProcAddress("glProgramUniformMatrix3x2dv");
    (*fptr)(program, location, count, transpose, value);
}

void glConservativeRasterParameteriNV ( GLenum pname, GLint param ) {
    static PFNGLCONSERVATIVERASTERPARAMETERINVPROC fptr = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC) dasWglGetProcAddress("glConservativeRasterParameteriNV");
    (*fptr)(pname, param);
}

void glVertexBindingDivisor ( GLuint bindingindex, GLuint divisor ) {
    static PFNGLVERTEXBINDINGDIVISORPROC fptr = (PFNGLVERTEXBINDINGDIVISORPROC) dasWglGetProcAddress("glVertexBindingDivisor");
    (*fptr)(bindingindex, divisor);
}

void glProgramUniformMatrix4x3dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) dasWglGetProcAddress("glProgramUniformMatrix4x3dv");
    (*fptr)(program, location, count, transpose, value);
}

void glTextureStorage2D ( GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLTEXTURESTORAGE2DPROC fptr = (PFNGLTEXTURESTORAGE2DPROC) dasWglGetProcAddress("glTextureStorage2D");
    (*fptr)(texture, levels, internalformat, width, height);
}

void glCompressedTextureSubImage2D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) dasWglGetProcAddress("glCompressedTextureSubImage2D");
    (*fptr)(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glProgramUniform1i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value ) {
    static PFNGLPROGRAMUNIFORM1I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM1I64VARBPROC) dasWglGetProcAddress("glProgramUniform1i64vARB");
    (*fptr)(program, location, count, value);
}

void glVertexArrayMultiTexCoordOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayMultiTexCoordOffsetEXT");
    (*fptr)(vaobj, buffer, texunit, size, type, stride, offset);
}

void glGetMultiTexImageEXT ( GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels ) {
    static PFNGLGETMULTITEXIMAGEEXTPROC fptr = (PFNGLGETMULTITEXIMAGEEXTPROC) dasWglGetProcAddress("glGetMultiTexImageEXT");
    (*fptr)(texunit, target, level, format, type, pixels);
}

void glProgramUniform3ui64NV ( GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z ) {
    static PFNGLPROGRAMUNIFORM3UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM3UI64NVPROC) dasWglGetProcAddress("glProgramUniform3ui64NV");
    (*fptr)(program, location, x, y, z);
}

void glGetPathParameterivNV ( GLuint path, GLenum pname, GLint * value ) {
    static PFNGLGETPATHPARAMETERIVNVPROC fptr = (PFNGLGETPATHPARAMETERIVNVPROC) dasWglGetProcAddress("glGetPathParameterivNV");
    (*fptr)(path, pname, value);
}

void glUniformMatrix2x3fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLUNIFORMMATRIX2X3FVPROC fptr = (PFNGLUNIFORMMATRIX2X3FVPROC) dasWglGetProcAddress("glUniformMatrix2x3fv");
    (*fptr)(location, count, transpose, value);
}

void glDrawArraysInstancedARB ( GLenum mode, GLint first, GLsizei count, GLsizei primcount ) {
    static PFNGLDRAWARRAYSINSTANCEDARBPROC fptr = (PFNGLDRAWARRAYSINSTANCEDARBPROC) dasWglGetProcAddress("glDrawArraysInstancedARB");
    (*fptr)(mode, first, count, primcount);
}

void glProgramUniform3i64NV ( GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z ) {
    static PFNGLPROGRAMUNIFORM3I64NVPROC fptr = (PFNGLPROGRAMUNIFORM3I64NVPROC) dasWglGetProcAddress("glProgramUniform3i64NV");
    (*fptr)(program, location, x, y, z);
}

void glVertexAttribP3ui ( GLuint index, GLenum type, bool normalized, GLuint value ) {
    static PFNGLVERTEXATTRIBP3UIPROC fptr = (PFNGLVERTEXATTRIBP3UIPROC) dasWglGetProcAddress("glVertexAttribP3ui");
    (*fptr)(index, type, normalized, value);
}

void glClearBufferfv ( GLenum buffer, GLint drawbuffer, const GLfloat * value ) {
    static PFNGLCLEARBUFFERFVPROC fptr = (PFNGLCLEARBUFFERFVPROC) dasWglGetProcAddress("glClearBufferfv");
    (*fptr)(buffer, drawbuffer, value);
}

void glVertexAttrib4Nuiv ( GLuint index, const GLuint * v ) {
    static PFNGLVERTEXATTRIB4NUIVPROC fptr = (PFNGLVERTEXATTRIB4NUIVPROC) dasWglGetProcAddress("glVertexAttrib4Nuiv");
    (*fptr)(index, v);
}

void glProgramUniformHandleui64NV ( GLuint program, GLint location, GLuint64 value ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) dasWglGetProcAddress("glProgramUniformHandleui64NV");
    (*fptr)(program, location, value);
}

void glObjectPtrLabel ( const void * ptr, GLsizei length, const GLchar * label ) {
    static PFNGLOBJECTPTRLABELPROC fptr = (PFNGLOBJECTPTRLABELPROC) dasWglGetProcAddress("glObjectPtrLabel");
    (*fptr)(ptr, length, label);
}

void glVertexAttrib3sv ( GLuint index, const GLshort * v ) {
    static PFNGLVERTEXATTRIB3SVPROC fptr = (PFNGLVERTEXATTRIB3SVPROC) dasWglGetProcAddress("glVertexAttrib3sv");
    (*fptr)(index, v);
}

void glGenPerfMonitorsAMD ( GLsizei n, GLuint * monitors ) {
    static PFNGLGENPERFMONITORSAMDPROC fptr = (PFNGLGENPERFMONITORSAMDPROC) dasWglGetProcAddress("glGenPerfMonitorsAMD");
    (*fptr)(n, monitors);
}

void glClearBufferfi ( GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil ) {
    static PFNGLCLEARBUFFERFIPROC fptr = (PFNGLCLEARBUFFERFIPROC) dasWglGetProcAddress("glClearBufferfi");
    (*fptr)(buffer, drawbuffer, depth, stencil);
}

void glProgramPathFragmentInputGenNV ( GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs ) {
    static PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC fptr = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) dasWglGetProcAddress("glProgramPathFragmentInputGenNV");
    (*fptr)(program, location, genMode, components, coeffs);
}

void glVertexAttrib4Nubv ( GLuint index, const GLubyte * v ) {
    static PFNGLVERTEXATTRIB4NUBVPROC fptr = (PFNGLVERTEXATTRIB4NUBVPROC) dasWglGetProcAddress("glVertexAttrib4Nubv");
    (*fptr)(index, v);
}

void glGetUniformiv ( GLuint program, GLint location, GLint * params ) {
    static PFNGLGETUNIFORMIVPROC fptr = (PFNGLGETUNIFORMIVPROC) dasWglGetProcAddress("glGetUniformiv");
    (*fptr)(program, location, params);
}

void glBindBufferRange ( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size ) {
    static PFNGLBINDBUFFERRANGEPROC fptr = (PFNGLBINDBUFFERRANGEPROC) dasWglGetProcAddress("glBindBufferRange");
    (*fptr)(target, index, buffer, offset, size);
}

void glVertexAttribP1ui ( GLuint index, GLenum type, bool normalized, GLuint value ) {
    static PFNGLVERTEXATTRIBP1UIPROC fptr = (PFNGLVERTEXATTRIBP1UIPROC) dasWglGetProcAddress("glVertexAttribP1ui");
    (*fptr)(index, type, normalized, value);
}

void glVertexAttrib3fv ( GLuint index, const GLfloat * v ) {
    static PFNGLVERTEXATTRIB3FVPROC fptr = (PFNGLVERTEXATTRIB3FVPROC) dasWglGetProcAddress("glVertexAttrib3fv");
    (*fptr)(index, v);
}

void glInvalidateFramebuffer ( GLenum target, GLsizei numAttachments, const GLenum * attachments ) {
    static PFNGLINVALIDATEFRAMEBUFFERPROC fptr = (PFNGLINVALIDATEFRAMEBUFFERPROC) dasWglGetProcAddress("glInvalidateFramebuffer");
    (*fptr)(target, numAttachments, attachments);
}

void glUniformMatrix4fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLUNIFORMMATRIX4FVPROC fptr = (PFNGLUNIFORMMATRIX4FVPROC) dasWglGetProcAddress("glUniformMatrix4fv");
    (*fptr)(location, count, transpose, value);
}

void glInvalidateBufferSubData ( GLuint buffer, GLintptr offset, GLsizeiptr length ) {
    static PFNGLINVALIDATEBUFFERSUBDATAPROC fptr = (PFNGLINVALIDATEBUFFERSUBDATAPROC) dasWglGetProcAddress("glInvalidateBufferSubData");
    (*fptr)(buffer, offset, length);
}

void glGetPerfMonitorGroupStringAMD ( GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString ) {
    static PFNGLGETPERFMONITORGROUPSTRINGAMDPROC fptr = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) dasWglGetProcAddress("glGetPerfMonitorGroupStringAMD");
    (*fptr)(group, bufSize, length, groupString);
}

GLboolean glIsImageHandleResidentNV ( GLuint64 handle ) {
    static PFNGLISIMAGEHANDLERESIDENTNVPROC fptr = (PFNGLISIMAGEHANDLERESIDENTNVPROC) dasWglGetProcAddress("glIsImageHandleResidentNV");
    return (*fptr)(handle);
}

void glUniform2ui64NV ( GLint location, GLuint64EXT x, GLuint64EXT y ) {
    static PFNGLUNIFORM2UI64NVPROC fptr = (PFNGLUNIFORM2UI64NVPROC) dasWglGetProcAddress("glUniform2ui64NV");
    (*fptr)(location, x, y);
}

void glProgramUniform1ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value ) {
    static PFNGLPROGRAMUNIFORM1UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM1UI64VNVPROC) dasWglGetProcAddress("glProgramUniform1ui64vNV");
    (*fptr)(program, location, count, value);
}

void glPathStencilFuncNV ( GLenum func, GLint ref, GLuint mask ) {
    static PFNGLPATHSTENCILFUNCNVPROC fptr = (PFNGLPATHSTENCILFUNCNVPROC) dasWglGetProcAddress("glPathStencilFuncNV");
    (*fptr)(func, ref, mask);
}

void glProgramUniform3i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value ) {
    static PFNGLPROGRAMUNIFORM3I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM3I64VARBPROC) dasWglGetProcAddress("glProgramUniform3i64vARB");
    (*fptr)(program, location, count, value);
}

void glPathStringNV ( GLuint path, GLenum format, GLsizei length, const void * pathString ) {
    static PFNGLPATHSTRINGNVPROC fptr = (PFNGLPATHSTRINGNVPROC) dasWglGetProcAddress("glPathStringNV");
    (*fptr)(path, format, length, pathString);
}

void glTexImage3DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations ) {
    static PFNGLTEXIMAGE3DMULTISAMPLEPROC fptr = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) dasWglGetProcAddress("glTexImage3DMultisample");
    (*fptr)(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glIndexFormatNV ( GLenum type, GLsizei stride ) {
    static PFNGLINDEXFORMATNVPROC fptr = (PFNGLINDEXFORMATNVPROC) dasWglGetProcAddress("glIndexFormatNV");
    (*fptr)(type, stride);
}

void glLinkProgram ( GLuint program ) {
    static PFNGLLINKPROGRAMPROC fptr = (PFNGLLINKPROGRAMPROC) dasWglGetProcAddress("glLinkProgram");
    (*fptr)(program);
}

void glGetMultiTexGenivEXT ( GLenum texunit, GLenum coord, GLenum pname, GLint * params ) {
    static PFNGLGETMULTITEXGENIVEXTPROC fptr = (PFNGLGETMULTITEXGENIVEXTPROC) dasWglGetProcAddress("glGetMultiTexGenivEXT");
    (*fptr)(texunit, coord, pname, params);
}

void glGetProgramPipelineInfoLog ( GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog ) {
    static PFNGLGETPROGRAMPIPELINEINFOLOGPROC fptr = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) dasWglGetProcAddress("glGetProgramPipelineInfoLog");
    (*fptr)(pipeline, bufSize, length, infoLog);
}

void glProgramUniform3i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value ) {
    static PFNGLPROGRAMUNIFORM3I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM3I64VNVPROC) dasWglGetProcAddress("glProgramUniform3i64vNV");
    (*fptr)(program, location, count, value);
}

void glGetNamedBufferParameterivEXT ( GLuint buffer, GLenum pname, GLint * params ) {
    static PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetNamedBufferParameterivEXT");
    (*fptr)(buffer, pname, params);
}

void glCopyTextureSubImage2D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height ) {
    static PFNGLCOPYTEXTURESUBIMAGE2DPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) dasWglGetProcAddress("glCopyTextureSubImage2D");
    (*fptr)(texture, level, xoffset, yoffset, x, y, width, height);
}

void glVertexAttribI3ui ( GLuint index, GLuint x, GLuint y, GLuint z ) {
    static PFNGLVERTEXATTRIBI3UIPROC fptr = (PFNGLVERTEXATTRIBI3UIPROC) dasWglGetProcAddress("glVertexAttribI3ui");
    (*fptr)(index, x, y, z);
}

void glUniformHandleui64NV ( GLint location, GLuint64 value ) {
    static PFNGLUNIFORMHANDLEUI64NVPROC fptr = (PFNGLUNIFORMHANDLEUI64NVPROC) dasWglGetProcAddress("glUniformHandleui64NV");
    (*fptr)(location, value);
}

void glProgramUniform3ui64ARB ( GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z ) {
    static PFNGLPROGRAMUNIFORM3UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM3UI64ARBPROC) dasWglGetProcAddress("glProgramUniform3ui64ARB");
    (*fptr)(program, location, x, y, z);
}

void glProgramUniform1iEXT ( GLuint program, GLint location, GLint v0 ) {
    static PFNGLPROGRAMUNIFORM1IEXTPROC fptr = (PFNGLPROGRAMUNIFORM1IEXTPROC) dasWglGetProcAddress("glProgramUniform1iEXT");
    (*fptr)(program, location, v0);
}

void glVertexAttribLPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer ) {
    static PFNGLVERTEXATTRIBLPOINTERPROC fptr = (PFNGLVERTEXATTRIBLPOINTERPROC) dasWglGetProcAddress("glVertexAttribLPointer");
    (*fptr)(index, size, type, stride, pointer);
}

void glVertexAttrib4Nub ( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w ) {
    static PFNGLVERTEXATTRIB4NUBPROC fptr = (PFNGLVERTEXATTRIB4NUBPROC) dasWglGetProcAddress("glVertexAttrib4Nub");
    (*fptr)(index, x, y, z, w);
}

void glNamedBufferStorage ( GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags ) {
    static PFNGLNAMEDBUFFERSTORAGEPROC fptr = (PFNGLNAMEDBUFFERSTORAGEPROC) dasWglGetProcAddress("glNamedBufferStorage");
    (*fptr)(buffer, size, data, flags);
}

void glUniformSubroutinesuiv ( GLenum shadertype, GLsizei count, const GLuint * indices ) {
    static PFNGLUNIFORMSUBROUTINESUIVPROC fptr = (PFNGLUNIFORMSUBROUTINESUIVPROC) dasWglGetProcAddress("glUniformSubroutinesuiv");
    (*fptr)(shadertype, count, indices);
}

void glNamedFramebufferDrawBuffers ( GLuint framebuffer, GLsizei n, const GLenum * bufs ) {
    static PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC fptr = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) dasWglGetProcAddress("glNamedFramebufferDrawBuffers");
    (*fptr)(framebuffer, n, bufs);
}

void glUniform4ui64NV ( GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w ) {
    static PFNGLUNIFORM4UI64NVPROC fptr = (PFNGLUNIFORM4UI64NVPROC) dasWglGetProcAddress("glUniform4ui64NV");
    (*fptr)(location, x, y, z, w);
}

void glCopyImageSubData ( GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth ) {
    static PFNGLCOPYIMAGESUBDATAPROC fptr = (PFNGLCOPYIMAGESUBDATAPROC) dasWglGetProcAddress("glCopyImageSubData");
    (*fptr)(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glProgramUniform1i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value ) {
    static PFNGLPROGRAMUNIFORM1I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM1I64VNVPROC) dasWglGetProcAddress("glProgramUniform1i64vNV");
    (*fptr)(program, location, count, value);
}

void glCompressedTextureSubImage1D ( GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) dasWglGetProcAddress("glCompressedTextureSubImage1D");
    (*fptr)(texture, level, xoffset, width, format, imageSize, data);
}

void glProgramUniformMatrix4fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4fvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glTexImage3D ( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXIMAGE3DPROC fptr = (PFNGLTEXIMAGE3DPROC) dasWglGetProcAddress("glTexImage3D");
    (*fptr)(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glFramebufferTextureFaceARB ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face ) {
    static PFNGLFRAMEBUFFERTEXTUREFACEARBPROC fptr = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) dasWglGetProcAddress("glFramebufferTextureFaceARB");
    (*fptr)(target, attachment, texture, level, face);
}

void glProgramUniform4fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORM4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4FVEXTPROC) dasWglGetProcAddress("glProgramUniform4fvEXT");
    (*fptr)(program, location, count, value);
}

void glStencilMaskSeparate ( GLenum face, GLuint mask ) {
    static PFNGLSTENCILMASKSEPARATEPROC fptr = (PFNGLSTENCILMASKSEPARATEPROC) dasWglGetProcAddress("glStencilMaskSeparate");
    (*fptr)(face, mask);
}

void glTextureParameterIivEXT ( GLuint texture, GLenum target, GLenum pname, const GLint * params ) {
    static PFNGLTEXTUREPARAMETERIIVEXTPROC fptr = (PFNGLTEXTUREPARAMETERIIVEXTPROC) dasWglGetProcAddress("glTextureParameterIivEXT");
    (*fptr)(texture, target, pname, params);
}

void glMultiTexSubImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLMULTITEXSUBIMAGE1DEXTPROC fptr = (PFNGLMULTITEXSUBIMAGE1DEXTPROC) dasWglGetProcAddress("glMultiTexSubImage1DEXT");
    (*fptr)(texunit, target, level, xoffset, width, format, type, pixels);
}

void glNamedProgramLocalParameterI4uiEXT ( GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameterI4uiEXT");
    (*fptr)(program, target, index, x, y, z, w);
}

void glActiveTexture ( GLenum texture ) {
    static PFNGLACTIVETEXTUREPROC fptr = (PFNGLACTIVETEXTUREPROC) dasWglGetProcAddress("glActiveTexture");
    (*fptr)(texture);
}

void glUniform1i64vARB ( GLint location, GLsizei count, const GLint64 * value ) {
    static PFNGLUNIFORM1I64VARBPROC fptr = (PFNGLUNIFORM1I64VARBPROC) dasWglGetProcAddress("glUniform1i64vARB");
    (*fptr)(location, count, value);
}

void glGetNamedProgramLocalParameterIivEXT ( GLuint program, GLenum target, GLuint index, GLint * params ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) dasWglGetProcAddress("glGetNamedProgramLocalParameterIivEXT");
    (*fptr)(program, target, index, params);
}

void glGetPathCommandsNV ( GLuint path, GLubyte * commands ) {
    static PFNGLGETPATHCOMMANDSNVPROC fptr = (PFNGLGETPATHCOMMANDSNVPROC) dasWglGetProcAddress("glGetPathCommandsNV");
    (*fptr)(path, commands);
}

void glVertexAttrib2f ( GLuint index, GLfloat x, GLfloat y ) {
    static PFNGLVERTEXATTRIB2FPROC fptr = (PFNGLVERTEXATTRIB2FPROC) dasWglGetProcAddress("glVertexAttrib2f");
    (*fptr)(index, x, y);
}

void glBindVertexArray ( GLuint array ) {
    static PFNGLBINDVERTEXARRAYPROC fptr = (PFNGLBINDVERTEXARRAYPROC) dasWglGetProcAddress("glBindVertexArray");
    (*fptr)(array);
}

void glEndPerfMonitorAMD ( GLuint monitor ) {
    static PFNGLENDPERFMONITORAMDPROC fptr = (PFNGLENDPERFMONITORAMDPROC) dasWglGetProcAddress("glEndPerfMonitorAMD");
    (*fptr)(monitor);
}

void glNamedProgramLocalParameter4fvEXT ( GLuint program, GLenum target, GLuint index, const GLfloat * params ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameter4fvEXT");
    (*fptr)(program, target, index, params);
}

void glGetProgramResourceName ( GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name ) {
    static PFNGLGETPROGRAMRESOURCENAMEPROC fptr = (PFNGLGETPROGRAMRESOURCENAMEPROC) dasWglGetProcAddress("glGetProgramResourceName");
    (*fptr)(program, programInterface, index, bufSize, length, name);
}

void glNamedFramebufferSampleLocationsfvNV ( GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v ) {
    static PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC fptr = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) dasWglGetProcAddress("glNamedFramebufferSampleLocationsfvNV");
    (*fptr)(framebuffer, start, count, v);
}

void glGetPathMetricsNV ( GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics ) {
    static PFNGLGETPATHMETRICSNVPROC fptr = (PFNGLGETPATHMETRICSNVPROC) dasWglGetProcAddress("glGetPathMetricsNV");
    (*fptr)(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glCoverStrokePathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues ) {
    static PFNGLCOVERSTROKEPATHINSTANCEDNVPROC fptr = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) dasWglGetProcAddress("glCoverStrokePathInstancedNV");
    (*fptr)(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glNamedRenderbufferStorageMultisampleCoverageEXT ( GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) dasWglGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT");
    (*fptr)(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

void glVertexArrayVertexAttribIOffsetEXT ( GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribIOffsetEXT");
    (*fptr)(vaobj, buffer, index, size, type, stride, offset);
}

void glVertexAttrib2d ( GLuint index, GLdouble x, GLdouble y ) {
    static PFNGLVERTEXATTRIB2DPROC fptr = (PFNGLVERTEXATTRIB2DPROC) dasWglGetProcAddress("glVertexAttrib2d");
    (*fptr)(index, x, y);
}

void glGetNamedFramebufferParameterivEXT ( GLuint framebuffer, GLenum pname, GLint * params ) {
    static PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetNamedFramebufferParameterivEXT");
    (*fptr)(framebuffer, pname, params);
}

void glVertexAttrib4Nusv ( GLuint index, const GLushort * v ) {
    static PFNGLVERTEXATTRIB4NUSVPROC fptr = (PFNGLVERTEXATTRIB4NUSVPROC) dasWglGetProcAddress("glVertexAttrib4Nusv");
    (*fptr)(index, v);
}

void glGenerateMipmap ( GLenum target ) {
    static PFNGLGENERATEMIPMAPPROC fptr = (PFNGLGENERATEMIPMAPPROC) dasWglGetProcAddress("glGenerateMipmap");
    (*fptr)(target);
}

void glMatrixPopEXT ( GLenum mode ) {
    static PFNGLMATRIXPOPEXTPROC fptr = (PFNGLMATRIXPOPEXTPROC) dasWglGetProcAddress("glMatrixPopEXT");
    (*fptr)(mode);
}

void glProgramUniform2fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORM2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2FVEXTPROC) dasWglGetProcAddress("glProgramUniform2fvEXT");
    (*fptr)(program, location, count, value);
}

void glSampleMaski ( GLuint maskNumber, GLbitfield mask ) {
    static PFNGLSAMPLEMASKIPROC fptr = (PFNGLSAMPLEMASKIPROC) dasWglGetProcAddress("glSampleMaski");
    (*fptr)(maskNumber, mask);
}

void glGetTextureImageEXT ( GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels ) {
    static PFNGLGETTEXTUREIMAGEEXTPROC fptr = (PFNGLGETTEXTUREIMAGEEXTPROC) dasWglGetProcAddress("glGetTextureImageEXT");
    (*fptr)(texture, target, level, format, type, pixels);
}

void glMatrixRotatefEXT ( GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z ) {
    static PFNGLMATRIXROTATEFEXTPROC fptr = (PFNGLMATRIXROTATEFEXTPROC) dasWglGetProcAddress("glMatrixRotatefEXT");
    (*fptr)(mode, angle, x, y, z);
}

void glNamedFramebufferTextureLayerEXT ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) dasWglGetProcAddress("glNamedFramebufferTextureLayerEXT");
    (*fptr)(framebuffer, attachment, texture, level, layer);
}

void glUniform1d ( GLint location, GLdouble x ) {
    static PFNGLUNIFORM1DPROC fptr = (PFNGLUNIFORM1DPROC) dasWglGetProcAddress("glUniform1d");
    (*fptr)(location, x);
}

void glUniform1fv ( GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLUNIFORM1FVPROC fptr = (PFNGLUNIFORM1FVPROC) dasWglGetProcAddress("glUniform1fv");
    (*fptr)(location, count, value);
}

void glUniform1ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value ) {
    static PFNGLUNIFORM1UI64VNVPROC fptr = (PFNGLUNIFORM1UI64VNVPROC) dasWglGetProcAddress("glUniform1ui64vNV");
    (*fptr)(location, count, value);
}

void glDrawElementsInstancedARB ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount ) {
    static PFNGLDRAWELEMENTSINSTANCEDARBPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDARBPROC) dasWglGetProcAddress("glDrawElementsInstancedARB");
    (*fptr)(mode, count, type, indices, primcount);
}

void glGetIntegeri_v ( GLenum target, GLuint index, GLint * data ) {
    static PFNGLGETINTEGERI_VPROC fptr = (PFNGLGETINTEGERI_VPROC) dasWglGetProcAddress("glGetIntegeri_v");
    (*fptr)(target, index, data);
}

void glBlendFuncSeparatei ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha ) {
    static PFNGLBLENDFUNCSEPARATEIPROC fptr = (PFNGLBLENDFUNCSEPARATEIPROC) dasWglGetProcAddress("glBlendFuncSeparatei");
    (*fptr)(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

GLboolean glIsBuffer ( GLuint buffer ) {
    static PFNGLISBUFFERPROC fptr = (PFNGLISBUFFERPROC) dasWglGetProcAddress("glIsBuffer");
    return (*fptr)(buffer);
}

void glDrawTransformFeedback ( GLenum mode, GLuint id ) {
    static PFNGLDRAWTRANSFORMFEEDBACKPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glDrawTransformFeedback");
    (*fptr)(mode, id);
}

GLenum glClientWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout ) {
    static PFNGLCLIENTWAITSYNCPROC fptr = (PFNGLCLIENTWAITSYNCPROC) dasWglGetProcAddress("glClientWaitSync");
    return (*fptr)(sync, flags, timeout);
}

void glUniform1f ( GLint location, GLfloat v0 ) {
    static PFNGLUNIFORM1FPROC fptr = (PFNGLUNIFORM1FPROC) dasWglGetProcAddress("glUniform1f");
    (*fptr)(location, v0);
}

void glDrawRangeElements ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices ) {
    static PFNGLDRAWRANGEELEMENTSPROC fptr = (PFNGLDRAWRANGEELEMENTSPROC) dasWglGetProcAddress("glDrawRangeElements");
    (*fptr)(mode, start, end, count, type, indices);
}

void glProgramUniform2ui ( GLuint program, GLint location, GLuint v0, GLuint v1 ) {
    static PFNGLPROGRAMUNIFORM2UIPROC fptr = (PFNGLPROGRAMUNIFORM2UIPROC) dasWglGetProcAddress("glProgramUniform2ui");
    (*fptr)(program, location, v0, v1);
}

void glCopyTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height ) {
    static PFNGLCOPYTEXSUBIMAGE3DPROC fptr = (PFNGLCOPYTEXSUBIMAGE3DPROC) dasWglGetProcAddress("glCopyTexSubImage3D");
    (*fptr)(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCreateSamplers ( GLsizei n, GLuint * samplers ) {
    static PFNGLCREATESAMPLERSPROC fptr = (PFNGLCREATESAMPLERSPROC) dasWglGetProcAddress("glCreateSamplers");
    (*fptr)(n, samplers);
}

void glUniform3i64vARB ( GLint location, GLsizei count, const GLint64 * value ) {
    static PFNGLUNIFORM3I64VARBPROC fptr = (PFNGLUNIFORM3I64VARBPROC) dasWglGetProcAddress("glUniform3i64vARB");
    (*fptr)(location, count, value);
}

void glGetVertexArrayPointeri_vEXT ( GLuint vaobj, GLuint index, GLenum pname, void ** param ) {
    static PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC fptr = (PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC) dasWglGetProcAddress("glGetVertexArrayPointeri_vEXT");
    (*fptr)(vaobj, index, pname, param);
}

void glUniform1i ( GLint location, GLint v0 ) {
    static PFNGLUNIFORM1IPROC fptr = (PFNGLUNIFORM1IPROC) dasWglGetProcAddress("glUniform1i");
    (*fptr)(location, v0);
}

void glUniform2i ( GLint location, GLint v0, GLint v1 ) {
    static PFNGLUNIFORM2IPROC fptr = (PFNGLUNIFORM2IPROC) dasWglGetProcAddress("glUniform2i");
    (*fptr)(location, v0, v1);
}

void glProgramUniform2dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORM2DVPROC fptr = (PFNGLPROGRAMUNIFORM2DVPROC) dasWglGetProcAddress("glProgramUniform2dv");
    (*fptr)(program, location, count, value);
}

void glCopyTextureSubImage1D ( GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width ) {
    static PFNGLCOPYTEXTURESUBIMAGE1DPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) dasWglGetProcAddress("glCopyTextureSubImage1D");
    (*fptr)(texture, level, xoffset, x, y, width);
}

void glCompressedTextureImage3DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) dasWglGetProcAddress("glCompressedTextureImage3DEXT");
    (*fptr)(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glGetnUniformui64vARB ( GLuint program, GLint location, GLsizei bufSize, GLuint64 * params ) {
    static PFNGLGETNUNIFORMUI64VARBPROC fptr = (PFNGLGETNUNIFORMUI64VARBPROC) dasWglGetProcAddress("glGetnUniformui64vARB");
    (*fptr)(program, location, bufSize, params);
}

void glVertexArrayFogCoordOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayFogCoordOffsetEXT");
    (*fptr)(vaobj, buffer, type, stride, offset);
}

void glStencilThenCoverFillPathNV ( GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode ) {
    static PFNGLSTENCILTHENCOVERFILLPATHNVPROC fptr = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC) dasWglGetProcAddress("glStencilThenCoverFillPathNV");
    (*fptr)(path, fillMode, mask, coverMode);
}

void glProgramUniform2iv ( GLuint program, GLint location, GLsizei count, const GLint * value ) {
    static PFNGLPROGRAMUNIFORM2IVPROC fptr = (PFNGLPROGRAMUNIFORM2IVPROC) dasWglGetProcAddress("glProgramUniform2iv");
    (*fptr)(program, location, count, value);
}

void glGetnCompressedTexImage ( GLenum target, GLint lod, GLsizei bufSize, void * pixels ) {
    static PFNGLGETNCOMPRESSEDTEXIMAGEPROC fptr = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC) dasWglGetProcAddress("glGetnCompressedTexImage");
    (*fptr)(target, lod, bufSize, pixels);
}

void glVertexAttrib1sv ( GLuint index, const GLshort * v ) {
    static PFNGLVERTEXATTRIB1SVPROC fptr = (PFNGLVERTEXATTRIB1SVPROC) dasWglGetProcAddress("glVertexAttrib1sv");
    (*fptr)(index, v);
}

void glGetTextureLevelParameterfvEXT ( GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat * params ) {
    static PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) dasWglGetProcAddress("glGetTextureLevelParameterfvEXT");
    (*fptr)(texture, target, level, pname, params);
}

void glPolygonOffsetClamp ( GLfloat factor, GLfloat units, GLfloat clamp ) {
    static PFNGLPOLYGONOFFSETCLAMPPROC fptr = (PFNGLPOLYGONOFFSETCLAMPPROC) dasWglGetProcAddress("glPolygonOffsetClamp");
    (*fptr)(factor, units, clamp);
}

void glProgramUniformHandleui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64 * values ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) dasWglGetProcAddress("glProgramUniformHandleui64vNV");
    (*fptr)(program, location, count, values);
}

void glGetProgramStageiv ( GLuint program, GLenum shadertype, GLenum pname, GLint * values ) {
    static PFNGLGETPROGRAMSTAGEIVPROC fptr = (PFNGLGETPROGRAMSTAGEIVPROC) dasWglGetProcAddress("glGetProgramStageiv");
    (*fptr)(program, shadertype, pname, values);
}

void glUniform3ui64ARB ( GLint location, GLuint64 x, GLuint64 y, GLuint64 z ) {
    static PFNGLUNIFORM3UI64ARBPROC fptr = (PFNGLUNIFORM3UI64ARBPROC) dasWglGetProcAddress("glUniform3ui64ARB");
    (*fptr)(location, x, y, z);
}

void glUniformMatrix3x2fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLUNIFORMMATRIX3X2FVPROC fptr = (PFNGLUNIFORMMATRIX3X2FVPROC) dasWglGetProcAddress("glUniformMatrix3x2fv");
    (*fptr)(location, count, transpose, value);
}

void glGetShaderiv ( GLuint shader, GLenum pname, GLint * params ) {
    static PFNGLGETSHADERIVPROC fptr = (PFNGLGETSHADERIVPROC) dasWglGetProcAddress("glGetShaderiv");
    (*fptr)(shader, pname, params);
}

void glCreateTransformFeedbacks ( GLsizei n, GLuint * ids ) {
    static PFNGLCREATETRANSFORMFEEDBACKSPROC fptr = (PFNGLCREATETRANSFORMFEEDBACKSPROC) dasWglGetProcAddress("glCreateTransformFeedbacks");
    (*fptr)(n, ids);
}

void glUniformMatrix4x3fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLUNIFORMMATRIX4X3FVPROC fptr = (PFNGLUNIFORMMATRIX4X3FVPROC) dasWglGetProcAddress("glUniformMatrix4x3fv");
    (*fptr)(location, count, transpose, value);
}

void glBindImageTexture ( GLuint unit, GLuint texture, GLint level, bool layered, GLint layer, GLenum access, GLenum format ) {
    static PFNGLBINDIMAGETEXTUREPROC fptr = (PFNGLBINDIMAGETEXTUREPROC) dasWglGetProcAddress("glBindImageTexture");
    (*fptr)(unit, texture, level, layered, layer, access, format);
}

void glVertexAttribI2i ( GLuint index, GLint x, GLint y ) {
    static PFNGLVERTEXATTRIBI2IPROC fptr = (PFNGLVERTEXATTRIBI2IPROC) dasWglGetProcAddress("glVertexAttribI2i");
    (*fptr)(index, x, y);
}

void glGetNamedBufferPointerv ( GLuint buffer, GLenum pname, void ** params ) {
    static PFNGLGETNAMEDBUFFERPOINTERVPROC fptr = (PFNGLGETNAMEDBUFFERPOINTERVPROC) dasWglGetProcAddress("glGetNamedBufferPointerv");
    (*fptr)(buffer, pname, params);
}

void glVertexAttrib1dv ( GLuint index, const GLdouble * v ) {
    static PFNGLVERTEXATTRIB1DVPROC fptr = (PFNGLVERTEXATTRIB1DVPROC) dasWglGetProcAddress("glVertexAttrib1dv");
    (*fptr)(index, v);
}

void glDisableVertexArrayAttribEXT ( GLuint vaobj, GLuint index ) {
    static PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC fptr = (PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC) dasWglGetProcAddress("glDisableVertexArrayAttribEXT");
    (*fptr)(vaobj, index);
}

void glProgramUniform3ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value ) {
    static PFNGLPROGRAMUNIFORM3UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM3UI64VNVPROC) dasWglGetProcAddress("glProgramUniform3ui64vNV");
    (*fptr)(program, location, count, value);
}

void glTexPageCommitmentMemNV ( GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, bool commit ) {
    static PFNGLTEXPAGECOMMITMENTMEMNVPROC fptr = (PFNGLTEXPAGECOMMITMENTMEMNVPROC) dasWglGetProcAddress("glTexPageCommitmentMemNV");
    (*fptr)(target, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
}

void glNamedRenderbufferStorageMultisample ( GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) dasWglGetProcAddress("glNamedRenderbufferStorageMultisample");
    (*fptr)(renderbuffer, samples, internalformat, width, height);
}

void glNamedProgramLocalParameters4fvEXT ( GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat * params ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameters4fvEXT");
    (*fptr)(program, target, index, count, params);
}

void glGetVertexArrayIntegervEXT ( GLuint vaobj, GLenum pname, GLint * param ) {
    static PFNGLGETVERTEXARRAYINTEGERVEXTPROC fptr = (PFNGLGETVERTEXARRAYINTEGERVEXTPROC) dasWglGetProcAddress("glGetVertexArrayIntegervEXT");
    (*fptr)(vaobj, pname, param);
}

void glPathCoverDepthFuncNV ( GLenum func ) {
    static PFNGLPATHCOVERDEPTHFUNCNVPROC fptr = (PFNGLPATHCOVERDEPTHFUNCNVPROC) dasWglGetProcAddress("glPathCoverDepthFuncNV");
    (*fptr)(func);
}

void glGetPathCoordsNV ( GLuint path, GLfloat * coords ) {
    static PFNGLGETPATHCOORDSNVPROC fptr = (PFNGLGETPATHCOORDSNVPROC) dasWglGetProcAddress("glGetPathCoordsNV");
    (*fptr)(path, coords);
}

void glEdgeFlagFormatNV ( GLsizei stride ) {
    static PFNGLEDGEFLAGFORMATNVPROC fptr = (PFNGLEDGEFLAGFORMATNVPROC) dasWglGetProcAddress("glEdgeFlagFormatNV");
    (*fptr)(stride);
}

void glVertexAttribI3uiv ( GLuint index, const GLuint * v ) {
    static PFNGLVERTEXATTRIBI3UIVPROC fptr = (PFNGLVERTEXATTRIBI3UIVPROC) dasWglGetProcAddress("glVertexAttribI3uiv");
    (*fptr)(index, v);
}

void glCopyMultiTexSubImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width ) {
    static PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC fptr = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) dasWglGetProcAddress("glCopyMultiTexSubImage1DEXT");
    (*fptr)(texunit, target, level, xoffset, x, y, width);
}

void glVertexAttrib1s ( GLuint index, GLshort x ) {
    static PFNGLVERTEXATTRIB1SPROC fptr = (PFNGLVERTEXATTRIB1SPROC) dasWglGetProcAddress("glVertexAttrib1s");
    (*fptr)(index, x);
}

void glVertexAttrib4Nbv ( GLuint index, const GLbyte * v ) {
    static PFNGLVERTEXATTRIB4NBVPROC fptr = (PFNGLVERTEXATTRIB4NBVPROC) dasWglGetProcAddress("glVertexAttrib4Nbv");
    (*fptr)(index, v);
}

void glProgramUniform3uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLPROGRAMUNIFORM3UIVPROC fptr = (PFNGLPROGRAMUNIFORM3UIVPROC) dasWglGetProcAddress("glProgramUniform3uiv");
    (*fptr)(program, location, count, value);
}

void glProgramUniform4ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value ) {
    static PFNGLPROGRAMUNIFORM4UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM4UI64VNVPROC) dasWglGetProcAddress("glProgramUniform4ui64vNV");
    (*fptr)(program, location, count, value);
}

void glGetnUniformivARB ( GLuint program, GLint location, GLsizei bufSize, GLint * params ) {
    static PFNGLGETNUNIFORMIVARBPROC fptr = (PFNGLGETNUNIFORMIVARBPROC) dasWglGetProcAddress("glGetnUniformivARB");
    (*fptr)(program, location, bufSize, params);
}

void glVertexAttrib4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w ) {
    static PFNGLVERTEXATTRIB4DPROC fptr = (PFNGLVERTEXATTRIB4DPROC) dasWglGetProcAddress("glVertexAttrib4d");
    (*fptr)(index, x, y, z, w);
}

void glObjectLabel ( GLenum identifier, GLuint name, GLsizei length, const GLchar * label ) {
    static PFNGLOBJECTLABELPROC fptr = (PFNGLOBJECTLABELPROC) dasWglGetProcAddress("glObjectLabel");
    (*fptr)(identifier, name, length, label);
}

void glUseProgramStages ( GLuint pipeline, GLbitfield stages, GLuint program ) {
    static PFNGLUSEPROGRAMSTAGESPROC fptr = (PFNGLUSEPROGRAMSTAGESPROC) dasWglGetProcAddress("glUseProgramStages");
    (*fptr)(pipeline, stages, program);
}

void glCompressedTextureImage2DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) dasWglGetProcAddress("glCompressedTextureImage2DEXT");
    (*fptr)(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

void glNamedProgramLocalParametersI4uivEXT ( GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint * params ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParametersI4uivEXT");
    (*fptr)(program, target, index, count, params);
}

void glVertexAttrib4Niv ( GLuint index, const GLint * v ) {
    static PFNGLVERTEXATTRIB4NIVPROC fptr = (PFNGLVERTEXATTRIB4NIVPROC) dasWglGetProcAddress("glVertexAttrib4Niv");
    (*fptr)(index, v);
}

void glVertexAttrib4Nsv ( GLuint index, const GLshort * v ) {
    static PFNGLVERTEXATTRIB4NSVPROC fptr = (PFNGLVERTEXATTRIB4NSVPROC) dasWglGetProcAddress("glVertexAttrib4Nsv");
    (*fptr)(index, v);
}

void glMultiTexParameteriEXT ( GLenum texunit, GLenum target, GLenum pname, GLint param ) {
    static PFNGLMULTITEXPARAMETERIEXTPROC fptr = (PFNGLMULTITEXPARAMETERIEXTPROC) dasWglGetProcAddress("glMultiTexParameteriEXT");
    (*fptr)(texunit, target, pname, param);
}

GLboolean glIsSync ( GLsync sync ) {
    static PFNGLISSYNCPROC fptr = (PFNGLISSYNCPROC) dasWglGetProcAddress("glIsSync");
    return (*fptr)(sync);
}

void glVertexAttribL4i64NV ( GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w ) {
    static PFNGLVERTEXATTRIBL4I64NVPROC fptr = (PFNGLVERTEXATTRIBL4I64NVPROC) dasWglGetProcAddress("glVertexAttribL4i64NV");
    (*fptr)(index, x, y, z, w);
}

void glGetVertexArrayIntegeri_vEXT ( GLuint vaobj, GLuint index, GLenum pname, GLint * param ) {
    static PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC fptr = (PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC) dasWglGetProcAddress("glGetVertexArrayIntegeri_vEXT");
    (*fptr)(vaobj, index, pname, param);
}

void glScissorExclusiveNV ( GLint x, GLint y, GLsizei width, GLsizei height ) {
    static PFNGLSCISSOREXCLUSIVENVPROC fptr = (PFNGLSCISSOREXCLUSIVENVPROC) dasWglGetProcAddress("glScissorExclusiveNV");
    (*fptr)(x, y, width, height);
}

void glVertexAttrib4f ( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w ) {
    static PFNGLVERTEXATTRIB4FPROC fptr = (PFNGLVERTEXATTRIB4FPROC) dasWglGetProcAddress("glVertexAttrib4f");
    (*fptr)(index, x, y, z, w);
}

GLboolean glIsPointInStrokePathNV ( GLuint path, GLfloat x, GLfloat y ) {
    static PFNGLISPOINTINSTROKEPATHNVPROC fptr = (PFNGLISPOINTINSTROKEPATHNVPROC) dasWglGetProcAddress("glIsPointInStrokePathNV");
    return (*fptr)(path, x, y);
}

void glMultiTexGenfEXT ( GLenum texunit, GLenum coord, GLenum pname, GLfloat param ) {
    static PFNGLMULTITEXGENFEXTPROC fptr = (PFNGLMULTITEXGENFEXTPROC) dasWglGetProcAddress("glMultiTexGenfEXT");
    (*fptr)(texunit, coord, pname, param);
}

void glProgramUniform2ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value ) {
    static PFNGLPROGRAMUNIFORM2UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM2UI64VARBPROC) dasWglGetProcAddress("glProgramUniform2ui64vARB");
    (*fptr)(program, location, count, value);
}

void glShaderStorageBlockBinding ( GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding ) {
    static PFNGLSHADERSTORAGEBLOCKBINDINGPROC fptr = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) dasWglGetProcAddress("glShaderStorageBlockBinding");
    (*fptr)(program, storageBlockIndex, storageBlockBinding);
}

void glGetPerfQueryDataINTEL ( GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint * bytesWritten ) {
    static PFNGLGETPERFQUERYDATAINTELPROC fptr = (PFNGLGETPERFQUERYDATAINTELPROC) dasWglGetProcAddress("glGetPerfQueryDataINTEL");
    (*fptr)(queryHandle, flags, dataSize, data, bytesWritten);
}

void glUniform2d ( GLint location, GLdouble x, GLdouble y ) {
    static PFNGLUNIFORM2DPROC fptr = (PFNGLUNIFORM2DPROC) dasWglGetProcAddress("glUniform2d");
    (*fptr)(location, x, y);
}

void glBindProgramPipeline ( GLuint pipeline ) {
    static PFNGLBINDPROGRAMPIPELINEPROC fptr = (PFNGLBINDPROGRAMPIPELINEPROC) dasWglGetProcAddress("glBindProgramPipeline");
    (*fptr)(pipeline);
}

void glUniform1iv ( GLint location, GLsizei count, const GLint * value ) {
    static PFNGLUNIFORM1IVPROC fptr = (PFNGLUNIFORM1IVPROC) dasWglGetProcAddress("glUniform1iv");
    (*fptr)(location, count, value);
}

void glGetUniformui64vARB ( GLuint program, GLint location, GLuint64 * params ) {
    static PFNGLGETUNIFORMUI64VARBPROC fptr = (PFNGLGETUNIFORMUI64VARBPROC) dasWglGetProcAddress("glGetUniformui64vARB");
    (*fptr)(program, location, params);
}

const GLubyte * glGetStringi ( GLenum name, GLuint index ) {
    static PFNGLGETSTRINGIPROC fptr = (PFNGLGETSTRINGIPROC) dasWglGetProcAddress("glGetStringi");
    return (*fptr)(name, index);
}

void glGetActiveUniformBlockiv ( GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params ) {
    static PFNGLGETACTIVEUNIFORMBLOCKIVPROC fptr = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) dasWglGetProcAddress("glGetActiveUniformBlockiv");
    (*fptr)(program, uniformBlockIndex, pname, params);
}

void glTextureParameterfv ( GLuint texture, GLenum pname, const GLfloat * param ) {
    static PFNGLTEXTUREPARAMETERFVPROC fptr = (PFNGLTEXTUREPARAMETERFVPROC) dasWglGetProcAddress("glTextureParameterfv");
    (*fptr)(texture, pname, param);
}

void glProgramUniformMatrix4x2dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4x2dvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glProgramUniform2i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value ) {
    static PFNGLPROGRAMUNIFORM2I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM2I64VNVPROC) dasWglGetProcAddress("glProgramUniform2i64vNV");
    (*fptr)(program, location, count, value);
}

void glStencilStrokePathNV ( GLuint path, GLint reference, GLuint mask ) {
    static PFNGLSTENCILSTROKEPATHNVPROC fptr = (PFNGLSTENCILSTROKEPATHNVPROC) dasWglGetProcAddress("glStencilStrokePathNV");
    (*fptr)(path, reference, mask);
}

void glUniform2f ( GLint location, GLfloat v0, GLfloat v1 ) {
    static PFNGLUNIFORM2FPROC fptr = (PFNGLUNIFORM2FPROC) dasWglGetProcAddress("glUniform2f");
    (*fptr)(location, v0, v1);
}

void glUniform1dv ( GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLUNIFORM1DVPROC fptr = (PFNGLUNIFORM1DVPROC) dasWglGetProcAddress("glUniform1dv");
    (*fptr)(location, count, value);
}

void glStateCaptureNV ( GLuint state, GLenum mode ) {
    static PFNGLSTATECAPTURENVPROC fptr = (PFNGLSTATECAPTURENVPROC) dasWglGetProcAddress("glStateCaptureNV");
    (*fptr)(state, mode);
}

void glVertexAttrib2s ( GLuint index, GLshort x, GLshort y ) {
    static PFNGLVERTEXATTRIB2SPROC fptr = (PFNGLVERTEXATTRIB2SPROC) dasWglGetProcAddress("glVertexAttrib2s");
    (*fptr)(index, x, y);
}

GLuint glGetCommandHeaderNV ( GLenum tokenID, GLuint size ) {
    static PFNGLGETCOMMANDHEADERNVPROC fptr = (PFNGLGETCOMMANDHEADERNVPROC) dasWglGetProcAddress("glGetCommandHeaderNV");
    return (*fptr)(tokenID, size);
}

void glTextureStorage3D ( GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth ) {
    static PFNGLTEXTURESTORAGE3DPROC fptr = (PFNGLTEXTURESTORAGE3DPROC) dasWglGetProcAddress("glTextureStorage3D");
    (*fptr)(texture, levels, internalformat, width, height, depth);
}

void glTextureParameteriv ( GLuint texture, GLenum pname, const GLint * param ) {
    static PFNGLTEXTUREPARAMETERIVPROC fptr = (PFNGLTEXTUREPARAMETERIVPROC) dasWglGetProcAddress("glTextureParameteriv");
    (*fptr)(texture, pname, param);
}

void glVertexAttribL3ui64vNV ( GLuint index, const GLuint64EXT * v ) {
    static PFNGLVERTEXATTRIBL3UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL3UI64VNVPROC) dasWglGetProcAddress("glVertexAttribL3ui64vNV");
    (*fptr)(index, v);
}

GLboolean glIsQuery ( GLuint id ) {
    static PFNGLISQUERYPROC fptr = (PFNGLISQUERYPROC) dasWglGetProcAddress("glIsQuery");
    return (*fptr)(id);
}

void glProgramUniform2fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORM2FVPROC fptr = (PFNGLPROGRAMUNIFORM2FVPROC) dasWglGetProcAddress("glProgramUniform2fv");
    (*fptr)(program, location, count, value);
}

void glGetTransformFeedbacki64_v ( GLuint xfb, GLenum pname, GLuint index, GLint64 * param ) {
    static PFNGLGETTRANSFORMFEEDBACKI64_VPROC fptr = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) dasWglGetProcAddress("glGetTransformFeedbacki64_v");
    (*fptr)(xfb, pname, index, param);
}

void glEGLImageTargetTextureStorageEXT ( GLuint texture, GLeglImageOES image, const GLint * attrib_list ) {
    static PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC fptr = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) dasWglGetProcAddress("glEGLImageTargetTextureStorageEXT");
    (*fptr)(texture, image, attrib_list);
}

void glDebugMessageCallbackARB ( GLDEBUGPROCARB callback, const void * userParam ) {
    static PFNGLDEBUGMESSAGECALLBACKARBPROC fptr = (PFNGLDEBUGMESSAGECALLBACKARBPROC) dasWglGetProcAddress("glDebugMessageCallbackARB");
    (*fptr)(callback, userParam);
}

void glGetMultiTexParameterIivEXT ( GLenum texunit, GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETMULTITEXPARAMETERIIVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC) dasWglGetProcAddress("glGetMultiTexParameterIivEXT");
    (*fptr)(texunit, target, pname, params);
}

void glDrawTransformFeedbackStreamInstanced ( GLenum mode, GLuint id, GLuint stream, GLsizei instancecount ) {
    static PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) dasWglGetProcAddress("glDrawTransformFeedbackStreamInstanced");
    (*fptr)(mode, id, stream, instancecount);
}

void glMakeTextureHandleNonResidentNV ( GLuint64 handle ) {
    static PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC fptr = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) dasWglGetProcAddress("glMakeTextureHandleNonResidentNV");
    (*fptr)(handle);
}

void glTextureSubImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXTURESUBIMAGE2DEXTPROC fptr = (PFNGLTEXTURESUBIMAGE2DEXTPROC) dasWglGetProcAddress("glTextureSubImage2DEXT");
    (*fptr)(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glCopyTextureImage1DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border ) {
    static PFNGLCOPYTEXTUREIMAGE1DEXTPROC fptr = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC) dasWglGetProcAddress("glCopyTextureImage1DEXT");
    (*fptr)(texture, target, level, internalformat, x, y, width, border);
}

void glProgramParameteri ( GLuint program, GLenum pname, GLint value ) {
    static PFNGLPROGRAMPARAMETERIPROC fptr = (PFNGLPROGRAMPARAMETERIPROC) dasWglGetProcAddress("glProgramParameteri");
    (*fptr)(program, pname, value);
}

void glGetVertexArrayIndexediv ( GLuint vaobj, GLuint index, GLenum pname, GLint * param ) {
    static PFNGLGETVERTEXARRAYINDEXEDIVPROC fptr = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) dasWglGetProcAddress("glGetVertexArrayIndexediv");
    (*fptr)(vaobj, index, pname, param);
}

void glGetProgramResourcefvNV ( GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLfloat * params ) {
    static PFNGLGETPROGRAMRESOURCEFVNVPROC fptr = (PFNGLGETPROGRAMRESOURCEFVNVPROC) dasWglGetProcAddress("glGetProgramResourcefvNV");
    (*fptr)(program, programInterface, index, propCount, props, count, length, params);
}

void glVertexArraySecondaryColorOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC fptr = (PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC) dasWglGetProcAddress("glVertexArraySecondaryColorOffsetEXT");
    (*fptr)(vaobj, buffer, size, type, stride, offset);
}

void glGetFirstPerfQueryIdINTEL ( GLuint * queryId ) {
    static PFNGLGETFIRSTPERFQUERYIDINTELPROC fptr = (PFNGLGETFIRSTPERFQUERYIDINTELPROC) dasWglGetProcAddress("glGetFirstPerfQueryIdINTEL");
    (*fptr)(queryId);
}

void glReadnPixelsARB ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data ) {
    static PFNGLREADNPIXELSARBPROC fptr = (PFNGLREADNPIXELSARBPROC) dasWglGetProcAddress("glReadnPixelsARB");
    (*fptr)(x, y, width, height, format, type, bufSize, data);
}

void glUniformMatrix3x2dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLUNIFORMMATRIX3X2DVPROC fptr = (PFNGLUNIFORMMATRIX3X2DVPROC) dasWglGetProcAddress("glUniformMatrix3x2dv");
    (*fptr)(location, count, transpose, value);
}

void glGetTexParameterIuiv ( GLenum target, GLenum pname, GLuint * params ) {
    static PFNGLGETTEXPARAMETERIUIVPROC fptr = (PFNGLGETTEXPARAMETERIUIVPROC) dasWglGetProcAddress("glGetTexParameterIuiv");
    (*fptr)(target, pname, params);
}

void glUniform3ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value ) {
    static PFNGLUNIFORM3UI64VNVPROC fptr = (PFNGLUNIFORM3UI64VNVPROC) dasWglGetProcAddress("glUniform3ui64vNV");
    (*fptr)(location, count, value);
}

void glUniformMatrix4x3dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLUNIFORMMATRIX4X3DVPROC fptr = (PFNGLUNIFORMMATRIX4X3DVPROC) dasWglGetProcAddress("glUniformMatrix4x3dv");
    (*fptr)(location, count, transpose, value);
}

void glGetNamedFramebufferParameteriv ( GLuint framebuffer, GLenum pname, GLint * param ) {
    static PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetNamedFramebufferParameteriv");
    (*fptr)(framebuffer, pname, param);
}

void glDrawElementsInstancedBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance ) {
    static PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) dasWglGetProcAddress("glDrawElementsInstancedBaseInstance");
    (*fptr)(mode, count, type, indices, instancecount, baseinstance);
}

void glGetTextureParameterIiv ( GLuint texture, GLenum pname, GLint * params ) {
    static PFNGLGETTEXTUREPARAMETERIIVPROC fptr = (PFNGLGETTEXTUREPARAMETERIIVPROC) dasWglGetProcAddress("glGetTextureParameterIiv");
    (*fptr)(texture, pname, params);
}

void glVertexAttrib1fv ( GLuint index, const GLfloat * v ) {
    static PFNGLVERTEXATTRIB1FVPROC fptr = (PFNGLVERTEXATTRIB1FVPROC) dasWglGetProcAddress("glVertexAttrib1fv");
    (*fptr)(index, v);
}

void glPopDebugGroup (  ) {
    static PFNGLPOPDEBUGGROUPPROC fptr = (PFNGLPOPDEBUGGROUPPROC) dasWglGetProcAddress("glPopDebugGroup");
    (*fptr)();
}

GLboolean glIsTextureHandleResidentARB ( GLuint64 handle ) {
    static PFNGLISTEXTUREHANDLERESIDENTARBPROC fptr = (PFNGLISTEXTUREHANDLERESIDENTARBPROC) dasWglGetProcAddress("glIsTextureHandleResidentARB");
    return (*fptr)(handle);
}

void glGetNamedStringARB ( GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string ) {
    static PFNGLGETNAMEDSTRINGARBPROC fptr = (PFNGLGETNAMEDSTRINGARBPROC) dasWglGetProcAddress("glGetNamedStringARB");
    (*fptr)(namelen, name, bufSize, stringlen, string);
}

void glGetQueryObjectui64v ( GLuint id, GLenum pname, GLuint64 * params ) {
    static PFNGLGETQUERYOBJECTUI64VPROC fptr = (PFNGLGETQUERYOBJECTUI64VPROC) dasWglGetProcAddress("glGetQueryObjectui64v");
    (*fptr)(id, pname, params);
}

void glBlendBarrierKHR (  ) {
    static PFNGLBLENDBARRIERKHRPROC fptr = (PFNGLBLENDBARRIERKHRPROC) dasWglGetProcAddress("glBlendBarrierKHR");
    (*fptr)();
}

void glGetPointerIndexedvEXT ( GLenum target, GLuint index, void ** data ) {
    static PFNGLGETPOINTERINDEXEDVEXTPROC fptr = (PFNGLGETPOINTERINDEXEDVEXTPROC) dasWglGetProcAddress("glGetPointerIndexedvEXT");
    (*fptr)(target, index, data);
}

void glCompressedMultiTexSubImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexSubImage2DEXT");
    (*fptr)(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glGetProgramPipelineiv ( GLuint pipeline, GLenum pname, GLint * params ) {
    static PFNGLGETPROGRAMPIPELINEIVPROC fptr = (PFNGLGETPROGRAMPIPELINEIVPROC) dasWglGetProcAddress("glGetProgramPipelineiv");
    (*fptr)(pipeline, pname, params);
}

void glGenerateTextureMipmapEXT ( GLuint texture, GLenum target ) {
    static PFNGLGENERATETEXTUREMIPMAPEXTPROC fptr = (PFNGLGENERATETEXTUREMIPMAPEXTPROC) dasWglGetProcAddress("glGenerateTextureMipmapEXT");
    (*fptr)(texture, target);
}

void glDeleteSync ( GLsync sync ) {
    static PFNGLDELETESYNCPROC fptr = (PFNGLDELETESYNCPROC) dasWglGetProcAddress("glDeleteSync");
    (*fptr)(sync);
}

void glGetDoublei_v ( GLenum target, GLuint index, GLdouble * data ) {
    static PFNGLGETDOUBLEI_VPROC fptr = (PFNGLGETDOUBLEI_VPROC) dasWglGetProcAddress("glGetDoublei_v");
    (*fptr)(target, index, data);
}

void glDeleteQueries ( GLsizei n, const GLuint * ids ) {
    static PFNGLDELETEQUERIESPROC fptr = (PFNGLDELETEQUERIESPROC) dasWglGetProcAddress("glDeleteQueries");
    (*fptr)(n, ids);
}

void glVertexAttrib3s ( GLuint index, GLshort x, GLshort y, GLshort z ) {
    static PFNGLVERTEXATTRIB3SPROC fptr = (PFNGLVERTEXATTRIB3SPROC) dasWglGetProcAddress("glVertexAttrib3s");
    (*fptr)(index, x, y, z);
}

void glProgramUniform3uiEXT ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2 ) {
    static PFNGLPROGRAMUNIFORM3UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM3UIEXTPROC) dasWglGetProcAddress("glProgramUniform3uiEXT");
    (*fptr)(program, location, v0, v1, v2);
}

void glTextureStorage2DMultisampleEXT ( GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations ) {
    static PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC fptr = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC) dasWglGetProcAddress("glTextureStorage2DMultisampleEXT");
    (*fptr)(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

void glGetAttachedShaders ( GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders ) {
    static PFNGLGETATTACHEDSHADERSPROC fptr = (PFNGLGETATTACHEDSHADERSPROC) dasWglGetProcAddress("glGetAttachedShaders");
    (*fptr)(program, maxCount, count, shaders);
}

void glUniform1ui ( GLint location, GLuint v0 ) {
    static PFNGLUNIFORM1UIPROC fptr = (PFNGLUNIFORM1UIPROC) dasWglGetProcAddress("glUniform1ui");
    (*fptr)(location, v0);
}

void glWaitSync ( GLsync sync, GLbitfield flags, GLuint64 timeout ) {
    static PFNGLWAITSYNCPROC fptr = (PFNGLWAITSYNCPROC) dasWglGetProcAddress("glWaitSync");
    (*fptr)(sync, flags, timeout);
}

void glEnableVertexArrayAttrib ( GLuint vaobj, GLuint index ) {
    static PFNGLENABLEVERTEXARRAYATTRIBPROC fptr = (PFNGLENABLEVERTEXARRAYATTRIBPROC) dasWglGetProcAddress("glEnableVertexArrayAttrib");
    (*fptr)(vaobj, index);
}

void glCompileCommandListNV ( GLuint list ) {
    static PFNGLCOMPILECOMMANDLISTNVPROC fptr = (PFNGLCOMPILECOMMANDLISTNVPROC) dasWglGetProcAddress("glCompileCommandListNV");
    (*fptr)(list);
}

void glUniform4ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value ) {
    static PFNGLUNIFORM4UI64VNVPROC fptr = (PFNGLUNIFORM4UI64VNVPROC) dasWglGetProcAddress("glUniform4ui64vNV");
    (*fptr)(location, count, value);
}

void glClampColor ( GLenum target, GLenum clamp ) {
    static PFNGLCLAMPCOLORPROC fptr = (PFNGLCLAMPCOLORPROC) dasWglGetProcAddress("glClampColor");
    (*fptr)(target, clamp);
}

void glUniform3ui ( GLint location, GLuint v0, GLuint v1, GLuint v2 ) {
    static PFNGLUNIFORM3UIPROC fptr = (PFNGLUNIFORM3UIPROC) dasWglGetProcAddress("glUniform3ui");
    (*fptr)(location, v0, v1, v2);
}

void glProgramUniform2uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLPROGRAMUNIFORM2UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2UIVEXTPROC) dasWglGetProcAddress("glProgramUniform2uivEXT");
    (*fptr)(program, location, count, value);
}

void glBufferPageCommitmentMemNV ( GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, bool commit ) {
    static PFNGLBUFFERPAGECOMMITMENTMEMNVPROC fptr = (PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) dasWglGetProcAddress("glBufferPageCommitmentMemNV");
    (*fptr)(target, offset, size, memory, memOffset, commit);
}

void glMultiDrawArraysIndirect ( GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) dasWglGetProcAddress("glMultiDrawArraysIndirect");
    (*fptr)(mode, indirect, drawcount, stride);
}

void glDeletePathsNV ( GLuint path, GLsizei range ) {
    static PFNGLDELETEPATHSNVPROC fptr = (PFNGLDELETEPATHSNVPROC) dasWglGetProcAddress("glDeletePathsNV");
    (*fptr)(path, range);
}

void glInterpolatePathsNV ( GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight ) {
    static PFNGLINTERPOLATEPATHSNVPROC fptr = (PFNGLINTERPOLATEPATHSNVPROC) dasWglGetProcAddress("glInterpolatePathsNV");
    (*fptr)(resultPath, pathA, pathB, weight);
}

void glDeleteTransformFeedbacks ( GLsizei n, const GLuint * ids ) {
    static PFNGLDELETETRANSFORMFEEDBACKSPROC fptr = (PFNGLDELETETRANSFORMFEEDBACKSPROC) dasWglGetProcAddress("glDeleteTransformFeedbacks");
    (*fptr)(n, ids);
}

void glPopGroupMarkerEXT (  ) {
    static PFNGLPOPGROUPMARKEREXTPROC fptr = (PFNGLPOPGROUPMARKEREXTPROC) dasWglGetProcAddress("glPopGroupMarkerEXT");
    (*fptr)();
}

void glGenSamplers ( GLsizei count, GLuint * samplers ) {
    static PFNGLGENSAMPLERSPROC fptr = (PFNGLGENSAMPLERSPROC) dasWglGetProcAddress("glGenSamplers");
    (*fptr)(count, samplers);
}

void glGetNamedProgramLocalParameterfvEXT ( GLuint program, GLenum target, GLuint index, GLfloat * params ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) dasWglGetProcAddress("glGetNamedProgramLocalParameterfvEXT");
    (*fptr)(program, target, index, params);
}

void glProgramUniform3fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORM3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3FVEXTPROC) dasWglGetProcAddress("glProgramUniform3fvEXT");
    (*fptr)(program, location, count, value);
}

void glMinSampleShading ( GLfloat value ) {
    static PFNGLMINSAMPLESHADINGPROC fptr = (PFNGLMINSAMPLESHADINGPROC) dasWglGetProcAddress("glMinSampleShading");
    (*fptr)(value);
}

void glDrawVkImageNV ( GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1 ) {
    static PFNGLDRAWVKIMAGENVPROC fptr = (PFNGLDRAWVKIMAGENVPROC) dasWglGetProcAddress("glDrawVkImageNV");
    (*fptr)(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

void glGetQueryBufferObjectuiv ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset ) {
    static PFNGLGETQUERYBUFFEROBJECTUIVPROC fptr = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) dasWglGetProcAddress("glGetQueryBufferObjectuiv");
    (*fptr)(id, buffer, pname, offset);
}

void glUseProgram ( GLuint program ) {
    static PFNGLUSEPROGRAMPROC fptr = (PFNGLUSEPROGRAMPROC) dasWglGetProcAddress("glUseProgram");
    (*fptr)(program);
}

void glVertexArrayBindingDivisor ( GLuint vaobj, GLuint bindingindex, GLuint divisor ) {
    static PFNGLVERTEXARRAYBINDINGDIVISORPROC fptr = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) dasWglGetProcAddress("glVertexArrayBindingDivisor");
    (*fptr)(vaobj, bindingindex, divisor);
}

void glGetQueryBufferObjecti64v ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset ) {
    static PFNGLGETQUERYBUFFEROBJECTI64VPROC fptr = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) dasWglGetProcAddress("glGetQueryBufferObjecti64v");
    (*fptr)(id, buffer, pname, offset);
}

void glVertexAttrib1f ( GLuint index, GLfloat x ) {
    static PFNGLVERTEXATTRIB1FPROC fptr = (PFNGLVERTEXATTRIB1FPROC) dasWglGetProcAddress("glVertexAttrib1f");
    (*fptr)(index, x);
}

void glBindRenderbuffer ( GLenum target, GLuint renderbuffer ) {
    static PFNGLBINDRENDERBUFFERPROC fptr = (PFNGLBINDRENDERBUFFERPROC) dasWglGetProcAddress("glBindRenderbuffer");
    (*fptr)(target, renderbuffer);
}

void glCreateQueries ( GLenum target, GLsizei n, GLuint * ids ) {
    static PFNGLCREATEQUERIESPROC fptr = (PFNGLCREATEQUERIESPROC) dasWglGetProcAddress("glCreateQueries");
    (*fptr)(target, n, ids);
}

void glGetBufferPointerv ( GLenum target, GLenum pname, void ** params ) {
    static PFNGLGETBUFFERPOINTERVPROC fptr = (PFNGLGETBUFFERPOINTERVPROC) dasWglGetProcAddress("glGetBufferPointerv");
    (*fptr)(target, pname, params);
}

void glBindVertexBuffers ( GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides ) {
    static PFNGLBINDVERTEXBUFFERSPROC fptr = (PFNGLBINDVERTEXBUFFERSPROC) dasWglGetProcAddress("glBindVertexBuffers");
    (*fptr)(first, count, buffers, offsets, strides);
}

void glDebugMessageControlARB ( GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, bool enabled ) {
    static PFNGLDEBUGMESSAGECONTROLARBPROC fptr = (PFNGLDEBUGMESSAGECONTROLARBPROC) dasWglGetProcAddress("glDebugMessageControlARB");
    (*fptr)(source, type, severity, count, ids, enabled);
}

void glNamedBufferAttachMemoryNV ( GLuint buffer, GLuint memory, GLuint64 offset ) {
    static PFNGLNAMEDBUFFERATTACHMEMORYNVPROC fptr = (PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) dasWglGetProcAddress("glNamedBufferAttachMemoryNV");
    (*fptr)(buffer, memory, offset);
}

void glVertexAttrib1d ( GLuint index, GLdouble x ) {
    static PFNGLVERTEXATTRIB1DPROC fptr = (PFNGLVERTEXATTRIB1DPROC) dasWglGetProcAddress("glVertexAttrib1d");
    (*fptr)(index, x);
}

void glRenderbufferStorageMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC fptr = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) dasWglGetProcAddress("glRenderbufferStorageMultisample");
    (*fptr)(target, samples, internalformat, width, height);
}

void glUniform1i64ARB ( GLint location, GLint64 x ) {
    static PFNGLUNIFORM1I64ARBPROC fptr = (PFNGLUNIFORM1I64ARBPROC) dasWglGetProcAddress("glUniform1i64ARB");
    (*fptr)(location, x);
}

void glVertexAttribP4uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value ) {
    static PFNGLVERTEXATTRIBP4UIVPROC fptr = (PFNGLVERTEXATTRIBP4UIVPROC) dasWglGetProcAddress("glVertexAttribP4uiv");
    (*fptr)(index, type, normalized, value);
}

void glGetTextureParameterivEXT ( GLuint texture, GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETTEXTUREPARAMETERIVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetTextureParameterivEXT");
    (*fptr)(texture, target, pname, params);
}

void glVertexAttrib4s ( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w ) {
    static PFNGLVERTEXATTRIB4SPROC fptr = (PFNGLVERTEXATTRIB4SPROC) dasWglGetProcAddress("glVertexAttrib4s");
    (*fptr)(index, x, y, z, w);
}

GLboolean glIsTextureHandleResidentNV ( GLuint64 handle ) {
    static PFNGLISTEXTUREHANDLERESIDENTNVPROC fptr = (PFNGLISTEXTUREHANDLERESIDENTNVPROC) dasWglGetProcAddress("glIsTextureHandleResidentNV");
    return (*fptr)(handle);
}

void glNamedProgramLocalParameterI4iEXT ( GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameterI4iEXT");
    (*fptr)(program, target, index, x, y, z, w);
}

void glShadingRateSampleOrderNV ( GLenum order ) {
    static PFNGLSHADINGRATESAMPLEORDERNVPROC fptr = (PFNGLSHADINGRATESAMPLEORDERNVPROC) dasWglGetProcAddress("glShadingRateSampleOrderNV");
    (*fptr)(order);
}

void glBindAttribLocation ( GLuint program, GLuint index, const GLchar * name ) {
    static PFNGLBINDATTRIBLOCATIONPROC fptr = (PFNGLBINDATTRIBLOCATIONPROC) dasWglGetProcAddress("glBindAttribLocation");
    (*fptr)(program, index, name);
}

GLuint glGetProgramResourceIndex ( GLuint program, GLenum programInterface, const GLchar * name ) {
    static PFNGLGETPROGRAMRESOURCEINDEXPROC fptr = (PFNGLGETPROGRAMRESOURCEINDEXPROC) dasWglGetProcAddress("glGetProgramResourceIndex");
    return (*fptr)(program, programInterface, name);
}

void glMultiDrawElements ( GLenum mode, const GLsizei * count, GLenum type, const void *const * indices, GLsizei drawcount ) {
    static PFNGLMULTIDRAWELEMENTSPROC fptr = (PFNGLMULTIDRAWELEMENTSPROC) dasWglGetProcAddress("glMultiDrawElements");
    (*fptr)(mode, count, type, indices, drawcount);
}

void glUniform3iv ( GLint location, GLsizei count, const GLint * value ) {
    static PFNGLUNIFORM3IVPROC fptr = (PFNGLUNIFORM3IVPROC) dasWglGetProcAddress("glUniform3iv");
    (*fptr)(location, count, value);
}

void glVertexAttribI3i ( GLuint index, GLint x, GLint y, GLint z ) {
    static PFNGLVERTEXATTRIBI3IPROC fptr = (PFNGLVERTEXATTRIBI3IPROC) dasWglGetProcAddress("glVertexAttribI3i");
    (*fptr)(index, x, y, z);
}

void glDrawRangeElementsBaseVertex ( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex ) {
    static PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC fptr = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) dasWglGetProcAddress("glDrawRangeElementsBaseVertex");
    (*fptr)(mode, start, end, count, type, indices, basevertex);
}

void glTexBufferRange ( GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size ) {
    static PFNGLTEXBUFFERRANGEPROC fptr = (PFNGLTEXBUFFERRANGEPROC) dasWglGetProcAddress("glTexBufferRange");
    (*fptr)(target, internalformat, buffer, offset, size);
}

void glNamedBufferData ( GLuint buffer, GLsizeiptr size, const void * data, GLenum usage ) {
    static PFNGLNAMEDBUFFERDATAPROC fptr = (PFNGLNAMEDBUFFERDATAPROC) dasWglGetProcAddress("glNamedBufferData");
    (*fptr)(buffer, size, data, usage);
}

void glCopyTextureImage2DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border ) {
    static PFNGLCOPYTEXTUREIMAGE2DEXTPROC fptr = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC) dasWglGetProcAddress("glCopyTextureImage2DEXT");
    (*fptr)(texture, target, level, internalformat, x, y, width, height, border);
}

void glProgramUniform1dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORM1DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1DVEXTPROC) dasWglGetProcAddress("glProgramUniform1dvEXT");
    (*fptr)(program, location, count, value);
}

void glBlitNamedFramebuffer ( GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter ) {
    static PFNGLBLITNAMEDFRAMEBUFFERPROC fptr = (PFNGLBLITNAMEDFRAMEBUFFERPROC) dasWglGetProcAddress("glBlitNamedFramebuffer");
    (*fptr)(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glVertexAttribL1ui64ARB ( GLuint index, GLuint64EXT x ) {
    static PFNGLVERTEXATTRIBL1UI64ARBPROC fptr = (PFNGLVERTEXATTRIBL1UI64ARBPROC) dasWglGetProcAddress("glVertexAttribL1ui64ARB");
    (*fptr)(index, x);
}

void glVertexArrayVertexAttribFormatEXT ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, bool normalized, GLuint relativeoffset ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribFormatEXT");
    (*fptr)(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glApplyFramebufferAttachmentCMAAINTEL (  ) {
    static PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC fptr = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) dasWglGetProcAddress("glApplyFramebufferAttachmentCMAAINTEL");
    (*fptr)();
}

void glMultiTexParameterfvEXT ( GLenum texunit, GLenum target, GLenum pname, const GLfloat * params ) {
    static PFNGLMULTITEXPARAMETERFVEXTPROC fptr = (PFNGLMULTITEXPARAMETERFVEXTPROC) dasWglGetProcAddress("glMultiTexParameterfvEXT");
    (*fptr)(texunit, target, pname, params);
}

void glUniform3fv ( GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLUNIFORM3FVPROC fptr = (PFNGLUNIFORM3FVPROC) dasWglGetProcAddress("glUniform3fv");
    (*fptr)(location, count, value);
}

void glNamedProgramLocalParameter4dEXT ( GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameter4dEXT");
    (*fptr)(program, target, index, x, y, z, w);
}

void glVertexAttribL2dv ( GLuint index, const GLdouble * v ) {
    static PFNGLVERTEXATTRIBL2DVPROC fptr = (PFNGLVERTEXATTRIBL2DVPROC) dasWglGetProcAddress("glVertexAttribL2dv");
    (*fptr)(index, v);
}

void glUniform4i64ARB ( GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w ) {
    static PFNGLUNIFORM4I64ARBPROC fptr = (PFNGLUNIFORM4I64ARBPROC) dasWglGetProcAddress("glUniform4i64ARB");
    (*fptr)(location, x, y, z, w);
}

void glFramebufferSampleLocationsfvNV ( GLenum target, GLuint start, GLsizei count, const GLfloat * v ) {
    static PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC fptr = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) dasWglGetProcAddress("glFramebufferSampleLocationsfvNV");
    (*fptr)(target, start, count, v);
}

void glBlendEquationSeparateiARB ( GLuint buf, GLenum modeRGB, GLenum modeAlpha ) {
    static PFNGLBLENDEQUATIONSEPARATEIARBPROC fptr = (PFNGLBLENDEQUATIONSEPARATEIARBPROC) dasWglGetProcAddress("glBlendEquationSeparateiARB");
    (*fptr)(buf, modeRGB, modeAlpha);
}

void glGenBuffers ( GLsizei n, GLuint * buffers ) {
    static PFNGLGENBUFFERSPROC fptr = (PFNGLGENBUFFERSPROC) dasWglGetProcAddress("glGenBuffers");
    (*fptr)(n, buffers);
}

void glUniform3i ( GLint location, GLint v0, GLint v1, GLint v2 ) {
    static PFNGLUNIFORM3IPROC fptr = (PFNGLUNIFORM3IPROC) dasWglGetProcAddress("glUniform3i");
    (*fptr)(location, v0, v1, v2);
}

void glUniform4i ( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 ) {
    static PFNGLUNIFORM4IPROC fptr = (PFNGLUNIFORM4IPROC) dasWglGetProcAddress("glUniform4i");
    (*fptr)(location, v0, v1, v2, v3);
}

void glInvalidateTexImage ( GLuint texture, GLint level ) {
    static PFNGLINVALIDATETEXIMAGEPROC fptr = (PFNGLINVALIDATETEXIMAGEPROC) dasWglGetProcAddress("glInvalidateTexImage");
    (*fptr)(texture, level);
}

void glGetVertexAttribLui64vNV ( GLuint index, GLenum pname, GLuint64EXT * params ) {
    static PFNGLGETVERTEXATTRIBLUI64VNVPROC fptr = (PFNGLGETVERTEXATTRIBLUI64VNVPROC) dasWglGetProcAddress("glGetVertexAttribLui64vNV");
    (*fptr)(index, pname, params);
}

void glGetFloati_v ( GLenum target, GLuint index, GLfloat * data ) {
    static PFNGLGETFLOATI_VPROC fptr = (PFNGLGETFLOATI_VPROC) dasWglGetProcAddress("glGetFloati_v");
    (*fptr)(target, index, data);
}

void glCopyMultiTexSubImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height ) {
    static PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC fptr = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) dasWglGetProcAddress("glCopyMultiTexSubImage2DEXT");
    (*fptr)(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

void glMultiDrawArrays ( GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount ) {
    static PFNGLMULTIDRAWARRAYSPROC fptr = (PFNGLMULTIDRAWARRAYSPROC) dasWglGetProcAddress("glMultiDrawArrays");
    (*fptr)(mode, first, count, drawcount);
}

void * glMapNamedBufferEXT ( GLuint buffer, GLenum access ) {
    static PFNGLMAPNAMEDBUFFEREXTPROC fptr = (PFNGLMAPNAMEDBUFFEREXTPROC) dasWglGetProcAddress("glMapNamedBufferEXT");
    return (*fptr)(buffer, access);
}

GLuint64 glGetImageHandleARB ( GLuint texture, GLint level, bool layered, GLint layer, GLenum format ) {
    static PFNGLGETIMAGEHANDLEARBPROC fptr = (PFNGLGETIMAGEHANDLEARBPROC) dasWglGetProcAddress("glGetImageHandleARB");
    return (*fptr)(texture, level, layered, layer, format);
}

void glUniform2i64ARB ( GLint location, GLint64 x, GLint64 y ) {
    static PFNGLUNIFORM2I64ARBPROC fptr = (PFNGLUNIFORM2I64ARBPROC) dasWglGetProcAddress("glUniform2i64ARB");
    (*fptr)(location, x, y);
}

void glUseShaderProgramEXT ( GLenum type, GLuint program ) {
    static PFNGLUSESHADERPROGRAMEXTPROC fptr = (PFNGLUSESHADERPROGRAMEXTPROC) dasWglGetProcAddress("glUseShaderProgramEXT");
    (*fptr)(type, program);
}

void glVertexAttribIFormat ( GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset ) {
    static PFNGLVERTEXATTRIBIFORMATPROC fptr = (PFNGLVERTEXATTRIBIFORMATPROC) dasWglGetProcAddress("glVertexAttribIFormat");
    (*fptr)(attribindex, size, type, relativeoffset);
}

void glGetPerfQueryInfoINTEL ( GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask ) {
    static PFNGLGETPERFQUERYINFOINTELPROC fptr = (PFNGLGETPERFQUERYINFOINTELPROC) dasWglGetProcAddress("glGetPerfQueryInfoINTEL");
    (*fptr)(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetTextureParameterIivEXT ( GLuint texture, GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETTEXTUREPARAMETERIIVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC) dasWglGetProcAddress("glGetTextureParameterIivEXT");
    (*fptr)(texture, target, pname, params);
}

void glInvalidateNamedFramebufferSubData ( GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height ) {
    static PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC fptr = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) dasWglGetProcAddress("glInvalidateNamedFramebufferSubData");
    (*fptr)(framebuffer, numAttachments, attachments, x, y, width, height);
}

void glGetInternalformati64v ( GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 * params ) {
    static PFNGLGETINTERNALFORMATI64VPROC fptr = (PFNGLGETINTERNALFORMATI64VPROC) dasWglGetProcAddress("glGetInternalformati64v");
    (*fptr)(target, internalformat, pname, count, params);
}

void glTexBufferARB ( GLenum target, GLenum internalformat, GLuint buffer ) {
    static PFNGLTEXBUFFERARBPROC fptr = (PFNGLTEXBUFFERARBPROC) dasWglGetProcAddress("glTexBufferARB");
    (*fptr)(target, internalformat, buffer);
}

void glGetTexParameterIiv ( GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETTEXPARAMETERIIVPROC fptr = (PFNGLGETTEXPARAMETERIIVPROC) dasWglGetProcAddress("glGetTexParameterIiv");
    (*fptr)(target, pname, params);
}

void glProgramUniform4dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORM4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4DVEXTPROC) dasWglGetProcAddress("glProgramUniform4dvEXT");
    (*fptr)(program, location, count, value);
}

void glWeightPathsNV ( GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights ) {
    static PFNGLWEIGHTPATHSNVPROC fptr = (PFNGLWEIGHTPATHSNVPROC) dasWglGetProcAddress("glWeightPathsNV");
    (*fptr)(resultPath, numPaths, paths, weights);
}

void glGetVertexAttribLi64vNV ( GLuint index, GLenum pname, GLint64EXT * params ) {
    static PFNGLGETVERTEXATTRIBLI64VNVPROC fptr = (PFNGLGETVERTEXATTRIBLI64VNVPROC) dasWglGetProcAddress("glGetVertexAttribLi64vNV");
    (*fptr)(index, pname, params);
}

void glVertexAttribI4i ( GLuint index, GLint x, GLint y, GLint z, GLint w ) {
    static PFNGLVERTEXATTRIBI4IPROC fptr = (PFNGLVERTEXATTRIBI4IPROC) dasWglGetProcAddress("glVertexAttribI4i");
    (*fptr)(index, x, y, z, w);
}

void glGetVertexArrayiv ( GLuint vaobj, GLenum pname, GLint * param ) {
    static PFNGLGETVERTEXARRAYIVPROC fptr = (PFNGLGETVERTEXARRAYIVPROC) dasWglGetProcAddress("glGetVertexArrayiv");
    (*fptr)(vaobj, pname, param);
}

void glVertexAttribL4i64vNV ( GLuint index, const GLint64EXT * v ) {
    static PFNGLVERTEXATTRIBL4I64VNVPROC fptr = (PFNGLVERTEXATTRIBL4I64VNVPROC) dasWglGetProcAddress("glVertexAttribL4i64vNV");
    (*fptr)(index, v);
}

void glFramebufferTexture2D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level ) {
    static PFNGLFRAMEBUFFERTEXTURE2DPROC fptr = (PFNGLFRAMEBUFFERTEXTURE2DPROC) dasWglGetProcAddress("glFramebufferTexture2D");
    (*fptr)(target, attachment, textarget, texture, level);
}

void glVertexAttrib3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z ) {
    static PFNGLVERTEXATTRIB3DPROC fptr = (PFNGLVERTEXATTRIB3DPROC) dasWglGetProcAddress("glVertexAttrib3d");
    (*fptr)(index, x, y, z);
}

void glMatrixLoaddEXT ( GLenum mode, const GLdouble * m ) {
    static PFNGLMATRIXLOADDEXTPROC fptr = (PFNGLMATRIXLOADDEXTPROC) dasWglGetProcAddress("glMatrixLoaddEXT");
    (*fptr)(mode, m);
}

void glMultiTexRenderbufferEXT ( GLenum texunit, GLenum target, GLuint renderbuffer ) {
    static PFNGLMULTITEXRENDERBUFFEREXTPROC fptr = (PFNGLMULTITEXRENDERBUFFEREXTPROC) dasWglGetProcAddress("glMultiTexRenderbufferEXT");
    (*fptr)(texunit, target, renderbuffer);
}

void glFramebufferParameteriMESA ( GLenum target, GLenum pname, GLint param ) {
    static PFNGLFRAMEBUFFERPARAMETERIMESAPROC fptr = (PFNGLFRAMEBUFFERPARAMETERIMESAPROC) dasWglGetProcAddress("glFramebufferParameteriMESA");
    (*fptr)(target, pname, param);
}

void glPushGroupMarkerEXT ( GLsizei length, const GLchar * marker ) {
    static PFNGLPUSHGROUPMARKEREXTPROC fptr = (PFNGLPUSHGROUPMARKEREXTPROC) dasWglGetProcAddress("glPushGroupMarkerEXT");
    (*fptr)(length, marker);
}

void glTextureBufferRange ( GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size ) {
    static PFNGLTEXTUREBUFFERRANGEPROC fptr = (PFNGLTEXTUREBUFFERRANGEPROC) dasWglGetProcAddress("glTextureBufferRange");
    (*fptr)(texture, internalformat, buffer, offset, size);
}

void glGetFloati_vEXT ( GLenum pname, GLuint index, GLfloat * params ) {
    static PFNGLGETFLOATI_VEXTPROC fptr = (PFNGLGETFLOATI_VEXTPROC) dasWglGetProcAddress("glGetFloati_vEXT");
    (*fptr)(pname, index, params);
}

void glCompressedTextureSubImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) dasWglGetProcAddress("glCompressedTextureSubImage3DEXT");
    (*fptr)(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glUniform3uiv ( GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLUNIFORM3UIVPROC fptr = (PFNGLUNIFORM3UIVPROC) dasWglGetProcAddress("glUniform3uiv");
    (*fptr)(location, count, value);
}

void glVertexAttrib3f ( GLuint index, GLfloat x, GLfloat y, GLfloat z ) {
    static PFNGLVERTEXATTRIB3FPROC fptr = (PFNGLVERTEXATTRIB3FPROC) dasWglGetProcAddress("glVertexAttrib3f");
    (*fptr)(index, x, y, z);
}

void glProgramUniform3uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLPROGRAMUNIFORM3UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3UIVEXTPROC) dasWglGetProcAddress("glProgramUniform3uivEXT");
    (*fptr)(program, location, count, value);
}

GLboolean glIsRenderbuffer ( GLuint renderbuffer ) {
    static PFNGLISRENDERBUFFERPROC fptr = (PFNGLISRENDERBUFFERPROC) dasWglGetProcAddress("glIsRenderbuffer");
    return (*fptr)(renderbuffer);
}

GLenum glCheckNamedFramebufferStatus ( GLuint framebuffer, GLenum target ) {
    static PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC fptr = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) dasWglGetProcAddress("glCheckNamedFramebufferStatus");
    return (*fptr)(framebuffer, target);
}

void glBindShadingRateImageNV ( GLuint texture ) {
    static PFNGLBINDSHADINGRATEIMAGENVPROC fptr = (PFNGLBINDSHADINGRATEIMAGENVPROC) dasWglGetProcAddress("glBindShadingRateImageNV");
    (*fptr)(texture);
}

void glTexAttachMemoryNV ( GLenum target, GLuint memory, GLuint64 offset ) {
    static PFNGLTEXATTACHMEMORYNVPROC fptr = (PFNGLTEXATTACHMEMORYNVPROC) dasWglGetProcAddress("glTexAttachMemoryNV");
    (*fptr)(target, memory, offset);
}

void glVertexAttribI1i ( GLuint index, GLint x ) {
    static PFNGLVERTEXATTRIBI1IPROC fptr = (PFNGLVERTEXATTRIBI1IPROC) dasWglGetProcAddress("glVertexAttribI1i");
    (*fptr)(index, x);
}

void glProgramUniform1d ( GLuint program, GLint location, GLdouble v0 ) {
    static PFNGLPROGRAMUNIFORM1DPROC fptr = (PFNGLPROGRAMUNIFORM1DPROC) dasWglGetProcAddress("glProgramUniform1d");
    (*fptr)(program, location, v0);
}

void glUniform4f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 ) {
    static PFNGLUNIFORM4FPROC fptr = (PFNGLUNIFORM4FPROC) dasWglGetProcAddress("glUniform4f");
    (*fptr)(location, v0, v1, v2, v3);
}

void glBufferPageCommitmentARB ( GLenum target, GLintptr offset, GLsizeiptr size, bool commit ) {
    static PFNGLBUFFERPAGECOMMITMENTARBPROC fptr = (PFNGLBUFFERPAGECOMMITMENTARBPROC) dasWglGetProcAddress("glBufferPageCommitmentARB");
    (*fptr)(target, offset, size, commit);
}

void glBlendFuncSeparateiARB ( GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha ) {
    static PFNGLBLENDFUNCSEPARATEIARBPROC fptr = (PFNGLBLENDFUNCSEPARATEIARBPROC) dasWglGetProcAddress("glBlendFuncSeparateiARB");
    (*fptr)(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glMaxShaderCompilerThreadsARB ( GLuint count ) {
    static PFNGLMAXSHADERCOMPILERTHREADSARBPROC fptr = (PFNGLMAXSHADERCOMPILERTHREADSARBPROC) dasWglGetProcAddress("glMaxShaderCompilerThreadsARB");
    (*fptr)(count);
}

void glMakeTextureHandleNonResidentARB ( GLuint64 handle ) {
    static PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC fptr = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) dasWglGetProcAddress("glMakeTextureHandleNonResidentARB");
    (*fptr)(handle);
}

void glPatchParameteri ( GLenum pname, GLint value ) {
    static PFNGLPATCHPARAMETERIPROC fptr = (PFNGLPATCHPARAMETERIPROC) dasWglGetProcAddress("glPatchParameteri");
    (*fptr)(pname, value);
}

void glVertexArrayEdgeFlagOffsetEXT ( GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayEdgeFlagOffsetEXT");
    (*fptr)(vaobj, buffer, stride, offset);
}

GLuint glGetDebugMessageLog ( GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog ) {
    static PFNGLGETDEBUGMESSAGELOGPROC fptr = (PFNGLGETDEBUGMESSAGELOGPROC) dasWglGetProcAddress("glGetDebugMessageLog");
    return (*fptr)(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glProgramUniform1f ( GLuint program, GLint location, GLfloat v0 ) {
    static PFNGLPROGRAMUNIFORM1FPROC fptr = (PFNGLPROGRAMUNIFORM1FPROC) dasWglGetProcAddress("glProgramUniform1f");
    (*fptr)(program, location, v0);
}

void glTexStorage3DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations ) {
    static PFNGLTEXSTORAGE3DMULTISAMPLEPROC fptr = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) dasWglGetProcAddress("glTexStorage3DMultisample");
    (*fptr)(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glMultiDrawElementsIndirectCountARB ( GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) dasWglGetProcAddress("glMultiDrawElementsIndirectCountARB");
    (*fptr)(mode, type, indirect, drawcount, maxdrawcount, stride);
}

void glCopyMultiTexSubImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height ) {
    static PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC fptr = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) dasWglGetProcAddress("glCopyMultiTexSubImage3DEXT");
    (*fptr)(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glUniform3f ( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 ) {
    static PFNGLUNIFORM3FPROC fptr = (PFNGLUNIFORM3FPROC) dasWglGetProcAddress("glUniform3f");
    (*fptr)(location, v0, v1, v2);
}

void glUniform4d ( GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w ) {
    static PFNGLUNIFORM4DPROC fptr = (PFNGLUNIFORM4DPROC) dasWglGetProcAddress("glUniform4d");
    (*fptr)(location, x, y, z, w);
}

void glProgramUniform1i ( GLuint program, GLint location, GLint v0 ) {
    static PFNGLPROGRAMUNIFORM1IPROC fptr = (PFNGLPROGRAMUNIFORM1IPROC) dasWglGetProcAddress("glProgramUniform1i");
    (*fptr)(program, location, v0);
}

void glProgramUniform2i ( GLuint program, GLint location, GLint v0, GLint v1 ) {
    static PFNGLPROGRAMUNIFORM2IPROC fptr = (PFNGLPROGRAMUNIFORM2IPROC) dasWglGetProcAddress("glProgramUniform2i");
    (*fptr)(program, location, v0, v1);
}

void glUniformBlockBinding ( GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding ) {
    static PFNGLUNIFORMBLOCKBINDINGPROC fptr = (PFNGLUNIFORMBLOCKBINDINGPROC) dasWglGetProcAddress("glUniformBlockBinding");
    (*fptr)(program, uniformBlockIndex, uniformBlockBinding);
}

void glGetSamplerParameterIuiv ( GLuint sampler, GLenum pname, GLuint * params ) {
    static PFNGLGETSAMPLERPARAMETERIUIVPROC fptr = (PFNGLGETSAMPLERPARAMETERIUIVPROC) dasWglGetProcAddress("glGetSamplerParameterIuiv");
    (*fptr)(sampler, pname, params);
}

void glProgramUniform4ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value ) {
    static PFNGLPROGRAMUNIFORM4IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4IVEXTPROC) dasWglGetProcAddress("glProgramUniform4ivEXT");
    (*fptr)(program, location, count, value);
}

void glNamedProgramLocalParameter4fEXT ( GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameter4fEXT");
    (*fptr)(program, target, index, x, y, z, w);
}

void glTextureBufferRangeEXT ( GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size ) {
    static PFNGLTEXTUREBUFFERRANGEEXTPROC fptr = (PFNGLTEXTUREBUFFERRANGEEXTPROC) dasWglGetProcAddress("glTextureBufferRangeEXT");
    (*fptr)(texture, target, internalformat, buffer, offset, size);
}

void glTextureStorage1DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width ) {
    static PFNGLTEXTURESTORAGE1DEXTPROC fptr = (PFNGLTEXTURESTORAGE1DEXTPROC) dasWglGetProcAddress("glTextureStorage1DEXT");
    (*fptr)(texture, target, levels, internalformat, width);
}

void glSpecializeShaderARB ( GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue ) {
    static PFNGLSPECIALIZESHADERARBPROC fptr = (PFNGLSPECIALIZESHADERARBPROC) dasWglGetProcAddress("glSpecializeShaderARB");
    (*fptr)(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
}

void glMakeTextureHandleResidentARB ( GLuint64 handle ) {
    static PFNGLMAKETEXTUREHANDLERESIDENTARBPROC fptr = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) dasWglGetProcAddress("glMakeTextureHandleResidentARB");
    (*fptr)(handle);
}

void glUniformui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value ) {
    static PFNGLUNIFORMUI64VNVPROC fptr = (PFNGLUNIFORMUI64VNVPROC) dasWglGetProcAddress("glUniformui64vNV");
    (*fptr)(location, count, value);
}

void glUniform3d ( GLint location, GLdouble x, GLdouble y, GLdouble z ) {
    static PFNGLUNIFORM3DPROC fptr = (PFNGLUNIFORM3DPROC) dasWglGetProcAddress("glUniform3d");
    (*fptr)(location, x, y, z);
}

void glViewportArrayv ( GLuint first, GLsizei count, const GLfloat * v ) {
    static PFNGLVIEWPORTARRAYVPROC fptr = (PFNGLVIEWPORTARRAYVPROC) dasWglGetProcAddress("glViewportArrayv");
    (*fptr)(first, count, v);
}

void glFramebufferTextureLayer ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer ) {
    static PFNGLFRAMEBUFFERTEXTURELAYERPROC fptr = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) dasWglGetProcAddress("glFramebufferTextureLayer");
    (*fptr)(target, attachment, texture, level, layer);
}

void glGetShaderPrecisionFormat ( GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision ) {
    static PFNGLGETSHADERPRECISIONFORMATPROC fptr = (PFNGLGETSHADERPRECISIONFORMATPROC) dasWglGetProcAddress("glGetShaderPrecisionFormat");
    (*fptr)(shadertype, precisiontype, range, precision);
}

void glUniform3dv ( GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLUNIFORM3DVPROC fptr = (PFNGLUNIFORM3DVPROC) dasWglGetProcAddress("glUniform3dv");
    (*fptr)(location, count, value);
}

void glMultiTexEnvfvEXT ( GLenum texunit, GLenum target, GLenum pname, const GLfloat * params ) {
    static PFNGLMULTITEXENVFVEXTPROC fptr = (PFNGLMULTITEXENVFVEXTPROC) dasWglGetProcAddress("glMultiTexEnvfvEXT");
    (*fptr)(texunit, target, pname, params);
}

void glVertexAttribP4ui ( GLuint index, GLenum type, bool normalized, GLuint value ) {
    static PFNGLVERTEXATTRIBP4UIPROC fptr = (PFNGLVERTEXATTRIBP4UIPROC) dasWglGetProcAddress("glVertexAttribP4ui");
    (*fptr)(index, type, normalized, value);
}

GLfloat glGetPathLengthNV ( GLuint path, GLsizei startSegment, GLsizei numSegments ) {
    static PFNGLGETPATHLENGTHNVPROC fptr = (PFNGLGETPATHLENGTHNVPROC) dasWglGetProcAddress("glGetPathLengthNV");
    return (*fptr)(path, startSegment, numSegments);
}

void glCompressedTexImage2D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data ) {
    static PFNGLCOMPRESSEDTEXIMAGE2DPROC fptr = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) dasWglGetProcAddress("glCompressedTexImage2D");
    (*fptr)(target, level, internalformat, width, height, border, imageSize, data);
}

void glNamedFramebufferRenderbufferEXT ( GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer ) {
    static PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) dasWglGetProcAddress("glNamedFramebufferRenderbufferEXT");
    (*fptr)(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferRenderbuffer ( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer ) {
    static PFNGLFRAMEBUFFERRENDERBUFFERPROC fptr = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) dasWglGetProcAddress("glFramebufferRenderbuffer");
    (*fptr)(target, attachment, renderbuffertarget, renderbuffer);
}

void glBlendBarrierNV (  ) {
    static PFNGLBLENDBARRIERNVPROC fptr = (PFNGLBLENDBARRIERNVPROC) dasWglGetProcAddress("glBlendBarrierNV");
    (*fptr)();
}

void glGetQueryObjectiv ( GLuint id, GLenum pname, GLint * params ) {
    static PFNGLGETQUERYOBJECTIVPROC fptr = (PFNGLGETQUERYOBJECTIVPROC) dasWglGetProcAddress("glGetQueryObjectiv");
    (*fptr)(id, pname, params);
}

void glGetNamedBufferSubData ( GLuint buffer, GLintptr offset, GLsizeiptr size, void * data ) {
    static PFNGLGETNAMEDBUFFERSUBDATAPROC fptr = (PFNGLGETNAMEDBUFFERSUBDATAPROC) dasWglGetProcAddress("glGetNamedBufferSubData");
    (*fptr)(buffer, offset, size, data);
}

void glBufferStorage ( GLenum target, GLsizeiptr size, const void * data, GLbitfield flags ) {
    static PFNGLBUFFERSTORAGEPROC fptr = (PFNGLBUFFERSTORAGEPROC) dasWglGetProcAddress("glBufferStorage");
    (*fptr)(target, size, data, flags);
}

void glNamedFramebufferReadBuffer ( GLuint framebuffer, GLenum src ) {
    static PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC fptr = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) dasWglGetProcAddress("glNamedFramebufferReadBuffer");
    (*fptr)(framebuffer, src);
}

void glDepthRangeIndexeddNV ( GLuint index, GLdouble n, GLdouble f ) {
    static PFNGLDEPTHRANGEINDEXEDDNVPROC fptr = (PFNGLDEPTHRANGEINDEXEDDNVPROC) dasWglGetProcAddress("glDepthRangeIndexeddNV");
    (*fptr)(index, n, f);
}

void glMultiTexSubImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLMULTITEXSUBIMAGE3DEXTPROC fptr = (PFNGLMULTITEXSUBIMAGE3DEXTPROC) dasWglGetProcAddress("glMultiTexSubImage3DEXT");
    (*fptr)(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glGetMultiTexParameterIuivEXT ( GLenum texunit, GLenum target, GLenum pname, GLuint * params ) {
    static PFNGLGETMULTITEXPARAMETERIUIVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) dasWglGetProcAddress("glGetMultiTexParameterIuivEXT");
    (*fptr)(texunit, target, pname, params);
}

void glClearNamedFramebufferfi ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERFIPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) dasWglGetProcAddress("glClearNamedFramebufferfi");
    (*fptr)(framebuffer, buffer, drawbuffer, depth, stencil);
}

void glVertexAttribL2i64vNV ( GLuint index, const GLint64EXT * v ) {
    static PFNGLVERTEXATTRIBL2I64VNVPROC fptr = (PFNGLVERTEXATTRIBL2I64VNVPROC) dasWglGetProcAddress("glVertexAttribL2i64vNV");
    (*fptr)(index, v);
}

void glGetShaderInfoLog ( GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog ) {
    static PFNGLGETSHADERINFOLOGPROC fptr = (PFNGLGETSHADERINFOLOGPROC) dasWglGetProcAddress("glGetShaderInfoLog");
    (*fptr)(shader, bufSize, length, infoLog);
}

void glGetBooleanIndexedvEXT ( GLenum target, GLuint index, GLboolean * data ) {
    static PFNGLGETBOOLEANINDEXEDVEXTPROC fptr = (PFNGLGETBOOLEANINDEXEDVEXTPROC) dasWglGetProcAddress("glGetBooleanIndexedvEXT");
    (*fptr)(target, index, data);
}

void glClearNamedFramebufferiv ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERIVPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) dasWglGetProcAddress("glClearNamedFramebufferiv");
    (*fptr)(framebuffer, buffer, drawbuffer, value);
}

void glGenerateTextureMipmap ( GLuint texture ) {
    static PFNGLGENERATETEXTUREMIPMAPPROC fptr = (PFNGLGENERATETEXTUREMIPMAPPROC) dasWglGetProcAddress("glGenerateTextureMipmap");
    (*fptr)(texture);
}

void glTextureAttachMemoryNV ( GLuint texture, GLuint memory, GLuint64 offset ) {
    static PFNGLTEXTUREATTACHMEMORYNVPROC fptr = (PFNGLTEXTUREATTACHMEMORYNVPROC) dasWglGetProcAddress("glTextureAttachMemoryNV");
    (*fptr)(texture, memory, offset);
}

void glSpecializeShader ( GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue ) {
    static PFNGLSPECIALIZESHADERPROC fptr = (PFNGLSPECIALIZESHADERPROC) dasWglGetProcAddress("glSpecializeShader");
    (*fptr)(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
}

void glProgramUniform2iEXT ( GLuint program, GLint location, GLint v0, GLint v1 ) {
    static PFNGLPROGRAMUNIFORM2IEXTPROC fptr = (PFNGLPROGRAMUNIFORM2IEXTPROC) dasWglGetProcAddress("glProgramUniform2iEXT");
    (*fptr)(program, location, v0, v1);
}

void glTextureStorage3DMultisampleEXT ( GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations ) {
    static PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC fptr = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC) dasWglGetProcAddress("glTextureStorage3DMultisampleEXT");
    (*fptr)(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glDrawElementsInstancedBaseVertex ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex ) {
    static PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) dasWglGetProcAddress("glDrawElementsInstancedBaseVertex");
    (*fptr)(mode, count, type, indices, instancecount, basevertex);
}

void glProgramUniform1fEXT ( GLuint program, GLint location, GLfloat v0 ) {
    static PFNGLPROGRAMUNIFORM1FEXTPROC fptr = (PFNGLPROGRAMUNIFORM1FEXTPROC) dasWglGetProcAddress("glProgramUniform1fEXT");
    (*fptr)(program, location, v0);
}

void glGenRenderbuffers ( GLsizei n, GLuint * renderbuffers ) {
    static PFNGLGENRENDERBUFFERSPROC fptr = (PFNGLGENRENDERBUFFERSPROC) dasWglGetProcAddress("glGenRenderbuffers");
    (*fptr)(n, renderbuffers);
}

void glGetNamedProgramivEXT ( GLuint program, GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETNAMEDPROGRAMIVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMIVEXTPROC) dasWglGetProcAddress("glGetNamedProgramivEXT");
    (*fptr)(program, target, pname, params);
}

void glGetMultiTexLevelParameterfvEXT ( GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat * params ) {
    static PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC fptr = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) dasWglGetProcAddress("glGetMultiTexLevelParameterfvEXT");
    (*fptr)(texunit, target, level, pname, params);
}

void glDrawElementsInstancedEXT ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount ) {
    static PFNGLDRAWELEMENTSINSTANCEDEXTPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) dasWglGetProcAddress("glDrawElementsInstancedEXT");
    (*fptr)(mode, count, type, indices, primcount);
}

void glClearNamedFramebufferfv ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERFVPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) dasWglGetProcAddress("glClearNamedFramebufferfv");
    (*fptr)(framebuffer, buffer, drawbuffer, value);
}

void glProgramUniform4ui64ARB ( GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w ) {
    static PFNGLPROGRAMUNIFORM4UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM4UI64ARBPROC) dasWglGetProcAddress("glProgramUniform4ui64ARB");
    (*fptr)(program, location, x, y, z, w);
}

void * glMapBuffer ( GLenum target, GLenum access ) {
    static PFNGLMAPBUFFERPROC fptr = (PFNGLMAPBUFFERPROC) dasWglGetProcAddress("glMapBuffer");
    return (*fptr)(target, access);
}

void glSamplerParameterIuiv ( GLuint sampler, GLenum pname, const GLuint * param ) {
    static PFNGLSAMPLERPARAMETERIUIVPROC fptr = (PFNGLSAMPLERPARAMETERIUIVPROC) dasWglGetProcAddress("glSamplerParameterIuiv");
    (*fptr)(sampler, pname, param);
}

void glEndConditionalRender (  ) {
    static PFNGLENDCONDITIONALRENDERPROC fptr = (PFNGLENDCONDITIONALRENDERPROC) dasWglGetProcAddress("glEndConditionalRender");
    (*fptr)();
}

void glProgramUniform2d ( GLuint program, GLint location, GLdouble v0, GLdouble v1 ) {
    static PFNGLPROGRAMUNIFORM2DPROC fptr = (PFNGLPROGRAMUNIFORM2DPROC) dasWglGetProcAddress("glProgramUniform2d");
    (*fptr)(program, location, v0, v1);
}

void * glMapNamedBufferRangeEXT ( GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access ) {
    static PFNGLMAPNAMEDBUFFERRANGEEXTPROC fptr = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC) dasWglGetProcAddress("glMapNamedBufferRangeEXT");
    return (*fptr)(buffer, offset, length, access);
}

void glBindBuffer ( GLenum target, GLuint buffer ) {
    static PFNGLBINDBUFFERPROC fptr = (PFNGLBINDBUFFERPROC) dasWglGetProcAddress("glBindBuffer");
    (*fptr)(target, buffer);
}

void glDeleteSamplers ( GLsizei count, const GLuint * samplers ) {
    static PFNGLDELETESAMPLERSPROC fptr = (PFNGLDELETESAMPLERSPROC) dasWglGetProcAddress("glDeleteSamplers");
    (*fptr)(count, samplers);
}

void glProgramUniformMatrix2dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) dasWglGetProcAddress("glProgramUniformMatrix2dv");
    (*fptr)(program, location, count, transpose, value);
}

void glClearNamedBufferSubData ( GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data ) {
    static PFNGLCLEARNAMEDBUFFERSUBDATAPROC fptr = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) dasWglGetProcAddress("glClearNamedBufferSubData");
    (*fptr)(buffer, internalformat, offset, size, format, type, data);
}

void glUniform4i64vNV ( GLint location, GLsizei count, const GLint64EXT * value ) {
    static PFNGLUNIFORM4I64VNVPROC fptr = (PFNGLUNIFORM4I64VNVPROC) dasWglGetProcAddress("glUniform4i64vNV");
    (*fptr)(location, count, value);
}

void glProgramUniform2f ( GLuint program, GLint location, GLfloat v0, GLfloat v1 ) {
    static PFNGLPROGRAMUNIFORM2FPROC fptr = (PFNGLPROGRAMUNIFORM2FPROC) dasWglGetProcAddress("glProgramUniform2f");
    (*fptr)(program, location, v0, v1);
}

GLboolean glIsPointInFillPathNV ( GLuint path, GLuint mask, GLfloat x, GLfloat y ) {
    static PFNGLISPOINTINFILLPATHNVPROC fptr = (PFNGLISPOINTINFILLPATHNVPROC) dasWglGetProcAddress("glIsPointInFillPathNV");
    return (*fptr)(path, mask, x, y);
}

void glProgramUniform3ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value ) {
    static PFNGLPROGRAMUNIFORM3IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3IVEXTPROC) dasWglGetProcAddress("glProgramUniform3ivEXT");
    (*fptr)(program, location, count, value);
}

void glGetnUniformdv ( GLuint program, GLint location, GLsizei bufSize, GLdouble * params ) {
    static PFNGLGETNUNIFORMDVPROC fptr = (PFNGLGETNUNIFORMDVPROC) dasWglGetProcAddress("glGetnUniformdv");
    (*fptr)(program, location, bufSize, params);
}

void glGetnUniformfv ( GLuint program, GLint location, GLsizei bufSize, GLfloat * params ) {
    static PFNGLGETNUNIFORMFVPROC fptr = (PFNGLGETNUNIFORMFVPROC) dasWglGetProcAddress("glGetnUniformfv");
    (*fptr)(program, location, bufSize, params);
}

void glPathParameteriNV ( GLuint path, GLenum pname, GLint value ) {
    static PFNGLPATHPARAMETERINVPROC fptr = (PFNGLPATHPARAMETERINVPROC) dasWglGetProcAddress("glPathParameteriNV");
    (*fptr)(path, pname, value);
}

void glClientAttribDefaultEXT ( GLbitfield mask ) {
    static PFNGLCLIENTATTRIBDEFAULTEXTPROC fptr = (PFNGLCLIENTATTRIBDEFAULTEXTPROC) dasWglGetProcAddress("glClientAttribDefaultEXT");
    (*fptr)(mask);
}

void glClearNamedBufferSubDataEXT ( GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data ) {
    static PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC fptr = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) dasWglGetProcAddress("glClearNamedBufferSubDataEXT");
    (*fptr)(buffer, internalformat, offset, size, format, type, data);
}

void glTexStorage3D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth ) {
    static PFNGLTEXSTORAGE3DPROC fptr = (PFNGLTEXSTORAGE3DPROC) dasWglGetProcAddress("glTexStorage3D");
    (*fptr)(target, levels, internalformat, width, height, depth);
}

void glGetnTexImage ( GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels ) {
    static PFNGLGETNTEXIMAGEPROC fptr = (PFNGLGETNTEXIMAGEPROC) dasWglGetProcAddress("glGetnTexImage");
    (*fptr)(target, level, format, type, bufSize, pixels);
}

void glGetActiveUniform ( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name ) {
    static PFNGLGETACTIVEUNIFORMPROC fptr = (PFNGLGETACTIVEUNIFORMPROC) dasWglGetProcAddress("glGetActiveUniform");
    (*fptr)(program, index, bufSize, length, size, type, name);
}

void glInvalidateBufferData ( GLuint buffer ) {
    static PFNGLINVALIDATEBUFFERDATAPROC fptr = (PFNGLINVALIDATEBUFFERDATAPROC) dasWglGetProcAddress("glInvalidateBufferData");
    (*fptr)(buffer);
}

void glGetNamedBufferParameteriv ( GLuint buffer, GLenum pname, GLint * params ) {
    static PFNGLGETNAMEDBUFFERPARAMETERIVPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetNamedBufferParameteriv");
    (*fptr)(buffer, pname, params);
}

void glGetnUniformiv ( GLuint program, GLint location, GLsizei bufSize, GLint * params ) {
    static PFNGLGETNUNIFORMIVPROC fptr = (PFNGLGETNUNIFORMIVPROC) dasWglGetProcAddress("glGetnUniformiv");
    (*fptr)(program, location, bufSize, params);
}

void glMultiTexGeniEXT ( GLenum texunit, GLenum coord, GLenum pname, GLint param ) {
    static PFNGLMULTITEXGENIEXTPROC fptr = (PFNGLMULTITEXGENIEXTPROC) dasWglGetProcAddress("glMultiTexGeniEXT");
    (*fptr)(texunit, coord, pname, param);
}

void glProgramUniform4uiEXT ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3 ) {
    static PFNGLPROGRAMUNIFORM4UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM4UIEXTPROC) dasWglGetProcAddress("glProgramUniform4uiEXT");
    (*fptr)(program, location, v0, v1, v2, v3);
}

void glPathDashArrayNV ( GLuint path, GLsizei dashCount, const GLfloat * dashArray ) {
    static PFNGLPATHDASHARRAYNVPROC fptr = (PFNGLPATHDASHARRAYNVPROC) dasWglGetProcAddress("glPathDashArrayNV");
    (*fptr)(path, dashCount, dashArray);
}

void glCompressedTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data ) {
    static PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC fptr = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) dasWglGetProcAddress("glCompressedTexSubImage3D");
    (*fptr)(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

GLboolean glIsShader ( GLuint shader ) {
    static PFNGLISSHADERPROC fptr = (PFNGLISSHADERPROC) dasWglGetProcAddress("glIsShader");
    return (*fptr)(shader);
}

void glVertexAttribI2iv ( GLuint index, const GLint * v ) {
    static PFNGLVERTEXATTRIBI2IVPROC fptr = (PFNGLVERTEXATTRIBI2IVPROC) dasWglGetProcAddress("glVertexAttribI2iv");
    (*fptr)(index, v);
}

void glGetTextureParameterIuivEXT ( GLuint texture, GLenum target, GLenum pname, GLuint * params ) {
    static PFNGLGETTEXTUREPARAMETERIUIVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) dasWglGetProcAddress("glGetTextureParameterIuivEXT");
    (*fptr)(texture, target, pname, params);
}

void glNamedRenderbufferStorage ( GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) dasWglGetProcAddress("glNamedRenderbufferStorage");
    (*fptr)(renderbuffer, internalformat, width, height);
}

void glTextureParameterf ( GLuint texture, GLenum pname, GLfloat param ) {
    static PFNGLTEXTUREPARAMETERFPROC fptr = (PFNGLTEXTUREPARAMETERFPROC) dasWglGetProcAddress("glTextureParameterf");
    (*fptr)(texture, pname, param);
}

void glDrawCommandsNV ( GLenum primitiveMode, GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, GLuint count ) {
    static PFNGLDRAWCOMMANDSNVPROC fptr = (PFNGLDRAWCOMMANDSNVPROC) dasWglGetProcAddress("glDrawCommandsNV");
    (*fptr)(primitiveMode, buffer, indirects, sizes, count);
}

void glProgramUniformMatrix2dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2dvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glBlendColor ( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha ) {
    static PFNGLBLENDCOLORPROC fptr = (PFNGLBLENDCOLORPROC) dasWglGetProcAddress("glBlendColor");
    (*fptr)(red, green, blue, alpha);
}

void glUniform4fv ( GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLUNIFORM4FVPROC fptr = (PFNGLUNIFORM4FVPROC) dasWglGetProcAddress("glUniform4fv");
    (*fptr)(location, count, value);
}

void glVertexAttribL4ui64vNV ( GLuint index, const GLuint64EXT * v ) {
    static PFNGLVERTEXATTRIBL4UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL4UI64VNVPROC) dasWglGetProcAddress("glVertexAttribL4ui64vNV");
    (*fptr)(index, v);
}

void glCompressedTexImage1D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data ) {
    static PFNGLCOMPRESSEDTEXIMAGE1DPROC fptr = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) dasWglGetProcAddress("glCompressedTexImage1D");
    (*fptr)(target, level, internalformat, width, border, imageSize, data);
}

void glVertexAttribL4d ( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w ) {
    static PFNGLVERTEXATTRIBL4DPROC fptr = (PFNGLVERTEXATTRIBL4DPROC) dasWglGetProcAddress("glVertexAttribL4d");
    (*fptr)(index, x, y, z, w);
}

void glProgramUniform1dEXT ( GLuint program, GLint location, GLdouble x ) {
    static PFNGLPROGRAMUNIFORM1DEXTPROC fptr = (PFNGLPROGRAMUNIFORM1DEXTPROC) dasWglGetProcAddress("glProgramUniform1dEXT");
    (*fptr)(program, location, x);
}

void glPrimitiveRestartIndex ( GLuint index ) {
    static PFNGLPRIMITIVERESTARTINDEXPROC fptr = (PFNGLPRIMITIVERESTARTINDEXPROC) dasWglGetProcAddress("glPrimitiveRestartIndex");
    (*fptr)(index);
}

void glTransformFeedbackBufferRange ( GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size ) {
    static PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC fptr = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) dasWglGetProcAddress("glTransformFeedbackBufferRange");
    (*fptr)(xfb, index, buffer, offset, size);
}

void glVertexAttribL3d ( GLuint index, GLdouble x, GLdouble y, GLdouble z ) {
    static PFNGLVERTEXATTRIBL3DPROC fptr = (PFNGLVERTEXATTRIBL3DPROC) dasWglGetProcAddress("glVertexAttribL3d");
    (*fptr)(index, x, y, z);
}

GLuint64 glGetTextureSamplerHandleARB ( GLuint texture, GLuint sampler ) {
    static PFNGLGETTEXTURESAMPLERHANDLEARBPROC fptr = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC) dasWglGetProcAddress("glGetTextureSamplerHandleARB");
    return (*fptr)(texture, sampler);
}

void glDetachShader ( GLuint program, GLuint shader ) {
    static PFNGLDETACHSHADERPROC fptr = (PFNGLDETACHSHADERPROC) dasWglGetProcAddress("glDetachShader");
    (*fptr)(program, shader);
}

void glMultiDrawMeshTasksIndirectCountNV ( GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride ) {
    static PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC fptr = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) dasWglGetProcAddress("glMultiDrawMeshTasksIndirectCountNV");
    (*fptr)(indirect, drawcount, maxdrawcount, stride);
}

void glGetQueryIndexediv ( GLenum target, GLuint index, GLenum pname, GLint * params ) {
    static PFNGLGETQUERYINDEXEDIVPROC fptr = (PFNGLGETQUERYINDEXEDIVPROC) dasWglGetProcAddress("glGetQueryIndexediv");
    (*fptr)(target, index, pname, params);
}

GLboolean glPointAlongPathNV ( GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY ) {
    static PFNGLPOINTALONGPATHNVPROC fptr = (PFNGLPOINTALONGPATHNVPROC) dasWglGetProcAddress("glPointAlongPathNV");
    return (*fptr)(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

void glEnableClientStateIndexedEXT ( GLenum array, GLuint index ) {
    static PFNGLENABLECLIENTSTATEINDEXEDEXTPROC fptr = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) dasWglGetProcAddress("glEnableClientStateIndexedEXT");
    (*fptr)(array, index);
}

void glGetActiveUniformBlockName ( GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName ) {
    static PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC fptr = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) dasWglGetProcAddress("glGetActiveUniformBlockName");
    (*fptr)(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glFramebufferTexture3D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset ) {
    static PFNGLFRAMEBUFFERTEXTURE3DPROC fptr = (PFNGLFRAMEBUFFERTEXTURE3DPROC) dasWglGetProcAddress("glFramebufferTexture3D");
    (*fptr)(target, attachment, textarget, texture, level, zoffset);
}

void glInvalidateTexSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth ) {
    static PFNGLINVALIDATETEXSUBIMAGEPROC fptr = (PFNGLINVALIDATETEXSUBIMAGEPROC) dasWglGetProcAddress("glInvalidateTexSubImage");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

void glCopyNamedBufferSubData ( GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size ) {
    static PFNGLCOPYNAMEDBUFFERSUBDATAPROC fptr = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) dasWglGetProcAddress("glCopyNamedBufferSubData");
    (*fptr)(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glNamedRenderbufferStorageMultisampleEXT ( GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) dasWglGetProcAddress("glNamedRenderbufferStorageMultisampleEXT");
    (*fptr)(renderbuffer, samples, internalformat, width, height);
}

void glDepthRangeArraydvNV ( GLuint first, GLsizei count, const GLdouble * v ) {
    static PFNGLDEPTHRANGEARRAYDVNVPROC fptr = (PFNGLDEPTHRANGEARRAYDVNVPROC) dasWglGetProcAddress("glDepthRangeArraydvNV");
    (*fptr)(first, count, v);
}

void glEnableVertexAttribArray ( GLuint index ) {
    static PFNGLENABLEVERTEXATTRIBARRAYPROC fptr = (PFNGLENABLEVERTEXATTRIBARRAYPROC) dasWglGetProcAddress("glEnableVertexAttribArray");
    (*fptr)(index);
}

void glDeleteShader ( GLuint shader ) {
    static PFNGLDELETESHADERPROC fptr = (PFNGLDELETESHADERPROC) dasWglGetProcAddress("glDeleteShader");
    (*fptr)(shader);
}

void glEndConditionalRenderNV (  ) {
    static PFNGLENDCONDITIONALRENDERNVPROC fptr = (PFNGLENDCONDITIONALRENDERNVPROC) dasWglGetProcAddress("glEndConditionalRenderNV");
    (*fptr)();
}

void glVertexAttribPointer ( GLuint index, GLint size, GLenum type, bool normalized, GLsizei stride, const void * pointer ) {
    static PFNGLVERTEXATTRIBPOINTERPROC fptr = (PFNGLVERTEXATTRIBPOINTERPROC) dasWglGetProcAddress("glVertexAttribPointer");
    (*fptr)(index, size, type, normalized, stride, pointer);
}

void glUniform4ui64ARB ( GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w ) {
    static PFNGLUNIFORM4UI64ARBPROC fptr = (PFNGLUNIFORM4UI64ARBPROC) dasWglGetProcAddress("glUniform4ui64ARB");
    (*fptr)(location, x, y, z, w);
}

void glGetInternalformatSampleivNV ( GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint * params ) {
    static PFNGLGETINTERNALFORMATSAMPLEIVNVPROC fptr = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) dasWglGetProcAddress("glGetInternalformatSampleivNV");
    (*fptr)(target, internalformat, samples, pname, count, params);
}

void glDrawArraysIndirect ( GLenum mode, const void * indirect ) {
    static PFNGLDRAWARRAYSINDIRECTPROC fptr = (PFNGLDRAWARRAYSINDIRECTPROC) dasWglGetProcAddress("glDrawArraysIndirect");
    (*fptr)(mode, indirect);
}

void glGetNamedProgramLocalParameterdvEXT ( GLuint program, GLenum target, GLuint index, GLdouble * params ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) dasWglGetProcAddress("glGetNamedProgramLocalParameterdvEXT");
    (*fptr)(program, target, index, params);
}

void glDeleteVertexArrays ( GLsizei n, const GLuint * arrays ) {
    static PFNGLDELETEVERTEXARRAYSPROC fptr = (PFNGLDELETEVERTEXARRAYSPROC) dasWglGetProcAddress("glDeleteVertexArrays");
    (*fptr)(n, arrays);
}

void glProgramUniformMatrix4x2dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) dasWglGetProcAddress("glProgramUniformMatrix4x2dv");
    (*fptr)(program, location, count, transpose, value);
}

void glCompressedMultiTexSubImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexSubImage1DEXT");
    (*fptr)(texunit, target, level, xoffset, width, format, imageSize, bits);
}

void glProgramUniform4fEXT ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 ) {
    static PFNGLPROGRAMUNIFORM4FEXTPROC fptr = (PFNGLPROGRAMUNIFORM4FEXTPROC) dasWglGetProcAddress("glProgramUniform4fEXT");
    (*fptr)(program, location, v0, v1, v2, v3);
}

void glDeletePerfQueryINTEL ( GLuint queryHandle ) {
    static PFNGLDELETEPERFQUERYINTELPROC fptr = (PFNGLDELETEPERFQUERYINTELPROC) dasWglGetProcAddress("glDeletePerfQueryINTEL");
    (*fptr)(queryHandle);
}

void glDrawCommandsAddressNV ( GLenum primitiveMode, const GLuint64 * indirects, const GLsizei * sizes, GLuint count ) {
    static PFNGLDRAWCOMMANDSADDRESSNVPROC fptr = (PFNGLDRAWCOMMANDSADDRESSNVPROC) dasWglGetProcAddress("glDrawCommandsAddressNV");
    (*fptr)(primitiveMode, indirects, sizes, count);
}

void glProgramUniform1fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORM1FVPROC fptr = (PFNGLPROGRAMUNIFORM1FVPROC) dasWglGetProcAddress("glProgramUniform1fv");
    (*fptr)(program, location, count, value);
}

void glShadingRateSampleOrderCustomNV ( GLenum rate, GLuint samples, const GLint * locations ) {
    static PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC fptr = (PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) dasWglGetProcAddress("glShadingRateSampleOrderCustomNV");
    (*fptr)(rate, samples, locations);
}

void glGetSynciv ( GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values ) {
    static PFNGLGETSYNCIVPROC fptr = (PFNGLGETSYNCIVPROC) dasWglGetProcAddress("glGetSynciv");
    (*fptr)(sync, pname, count, length, values);
}

void glDrawArraysInstancedEXT ( GLenum mode, GLint start, GLsizei count, GLsizei primcount ) {
    static PFNGLDRAWARRAYSINSTANCEDEXTPROC fptr = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) dasWglGetProcAddress("glDrawArraysInstancedEXT");
    (*fptr)(mode, start, count, primcount);
}

void glBlendEquationi ( GLuint buf, GLenum mode ) {
    static PFNGLBLENDEQUATIONIPROC fptr = (PFNGLBLENDEQUATIONIPROC) dasWglGetProcAddress("glBlendEquationi");
    (*fptr)(buf, mode);
}

void glGetVertexAttribPointerv ( GLuint index, GLenum pname, void ** pointer ) {
    static PFNGLGETVERTEXATTRIBPOINTERVPROC fptr = (PFNGLGETVERTEXATTRIBPOINTERVPROC) dasWglGetProcAddress("glGetVertexAttribPointerv");
    (*fptr)(index, pname, pointer);
}

void glUniform1ui64NV ( GLint location, GLuint64EXT x ) {
    static PFNGLUNIFORM1UI64NVPROC fptr = (PFNGLUNIFORM1UI64NVPROC) dasWglGetProcAddress("glUniform1ui64NV");
    (*fptr)(location, x);
}

void glTextureParameteriEXT ( GLuint texture, GLenum target, GLenum pname, GLint param ) {
    static PFNGLTEXTUREPARAMETERIEXTPROC fptr = (PFNGLTEXTUREPARAMETERIEXTPROC) dasWglGetProcAddress("glTextureParameteriEXT");
    (*fptr)(texture, target, pname, param);
}

void glGetMultiTexLevelParameterivEXT ( GLenum texunit, GLenum target, GLint level, GLenum pname, GLint * params ) {
    static PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC fptr = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetMultiTexLevelParameterivEXT");
    (*fptr)(texunit, target, level, pname, params);
}

void glNamedBufferDataEXT ( GLuint buffer, GLsizeiptr size, const void * data, GLenum usage ) {
    static PFNGLNAMEDBUFFERDATAEXTPROC fptr = (PFNGLNAMEDBUFFERDATAEXTPROC) dasWglGetProcAddress("glNamedBufferDataEXT");
    (*fptr)(buffer, size, data, usage);
}

void glVertexAttribIFormatNV ( GLuint index, GLint size, GLenum type, GLsizei stride ) {
    static PFNGLVERTEXATTRIBIFORMATNVPROC fptr = (PFNGLVERTEXATTRIBIFORMATNVPROC) dasWglGetProcAddress("glVertexAttribIFormatNV");
    (*fptr)(index, size, type, stride);
}

void glVertexAttribI2uiv ( GLuint index, const GLuint * v ) {
    static PFNGLVERTEXATTRIBI2UIVPROC fptr = (PFNGLVERTEXATTRIBI2UIVPROC) dasWglGetProcAddress("glVertexAttribI2uiv");
    (*fptr)(index, v);
}

void glTexImage2DMultisample ( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations ) {
    static PFNGLTEXIMAGE2DMULTISAMPLEPROC fptr = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) dasWglGetProcAddress("glTexImage2DMultisample");
    (*fptr)(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glProgramUniformMatrix2fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) dasWglGetProcAddress("glProgramUniformMatrix2fv");
    (*fptr)(program, location, count, transpose, value);
}

void glTextureParameteri ( GLuint texture, GLenum pname, GLint param ) {
    static PFNGLTEXTUREPARAMETERIPROC fptr = (PFNGLTEXTUREPARAMETERIPROC) dasWglGetProcAddress("glTextureParameteri");
    (*fptr)(texture, pname, param);
}

void glMatrixTranslatedEXT ( GLenum mode, GLdouble x, GLdouble y, GLdouble z ) {
    static PFNGLMATRIXTRANSLATEDEXTPROC fptr = (PFNGLMATRIXTRANSLATEDEXTPROC) dasWglGetProcAddress("glMatrixTranslatedEXT");
    (*fptr)(mode, x, y, z);
}

void glProgramUniform1uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLPROGRAMUNIFORM1UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1UIVEXTPROC) dasWglGetProcAddress("glProgramUniform1uivEXT");
    (*fptr)(program, location, count, value);
}

void glProgramUniformMatrix3x4dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) dasWglGetProcAddress("glProgramUniformMatrix3x4dv");
    (*fptr)(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2x4dvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glNamedFramebufferTextureEXT ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) dasWglGetProcAddress("glNamedFramebufferTextureEXT");
    (*fptr)(framebuffer, attachment, texture, level);
}

void glMatrixFrustumEXT ( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar ) {
    static PFNGLMATRIXFRUSTUMEXTPROC fptr = (PFNGLMATRIXFRUSTUMEXTPROC) dasWglGetProcAddress("glMatrixFrustumEXT");
    (*fptr)(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixMultTransposedEXT ( GLenum mode, const GLdouble * m ) {
    static PFNGLMATRIXMULTTRANSPOSEDEXTPROC fptr = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) dasWglGetProcAddress("glMatrixMultTransposedEXT");
    (*fptr)(mode, m);
}

void glGetTransformFeedbackVarying ( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name ) {
    static PFNGLGETTRANSFORMFEEDBACKVARYINGPROC fptr = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) dasWglGetProcAddress("glGetTransformFeedbackVarying");
    (*fptr)(program, index, bufSize, length, size, type, name);
}

void glFramebufferDrawBuffersEXT ( GLuint framebuffer, GLsizei n, const GLenum * bufs ) {
    static PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC fptr = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) dasWglGetProcAddress("glFramebufferDrawBuffersEXT");
    (*fptr)(framebuffer, n, bufs);
}

GLenum glPathGlyphIndexRangeNV ( GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint * baseAndCount ) {
    static PFNGLPATHGLYPHINDEXRANGENVPROC fptr = (PFNGLPATHGLYPHINDEXRANGENVPROC) dasWglGetProcAddress("glPathGlyphIndexRangeNV");
    return (*fptr)(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
}

void glShaderBinary ( GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length ) {
    static PFNGLSHADERBINARYPROC fptr = (PFNGLSHADERBINARYPROC) dasWglGetProcAddress("glShaderBinary");
    (*fptr)(count, shaders, binaryFormat, binary, length);
}

void glDisableClientStateIndexedEXT ( GLenum array, GLuint index ) {
    static PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC fptr = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) dasWglGetProcAddress("glDisableClientStateIndexedEXT");
    (*fptr)(array, index);
}

void glDepthRangeIndexed ( GLuint index, GLdouble n, GLdouble f ) {
    static PFNGLDEPTHRANGEINDEXEDPROC fptr = (PFNGLDEPTHRANGEINDEXEDPROC) dasWglGetProcAddress("glDepthRangeIndexed");
    (*fptr)(index, n, f);
}

void glPointParameteriv ( GLenum pname, const GLint * params ) {
    static PFNGLPOINTPARAMETERIVPROC fptr = (PFNGLPOINTPARAMETERIVPROC) dasWglGetProcAddress("glPointParameteriv");
    (*fptr)(pname, params);
}

void glGetPerfMonitorCounterDataAMD ( GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten ) {
    static PFNGLGETPERFMONITORCOUNTERDATAAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) dasWglGetProcAddress("glGetPerfMonitorCounterDataAMD");
    (*fptr)(monitor, pname, dataSize, data, bytesWritten);
}

void glMatrixLoadTransposedEXT ( GLenum mode, const GLdouble * m ) {
    static PFNGLMATRIXLOADTRANSPOSEDEXTPROC fptr = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) dasWglGetProcAddress("glMatrixLoadTransposedEXT");
    (*fptr)(mode, m);
}

GLuint glCreateShaderProgramEXT ( GLenum type, const GLchar * string ) {
    static PFNGLCREATESHADERPROGRAMEXTPROC fptr = (PFNGLCREATESHADERPROGRAMEXTPROC) dasWglGetProcAddress("glCreateShaderProgramEXT");
    return (*fptr)(type, string);
}

void glPathCommandsNV ( GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords ) {
    static PFNGLPATHCOMMANDSNVPROC fptr = (PFNGLPATHCOMMANDSNVPROC) dasWglGetProcAddress("glPathCommandsNV");
    (*fptr)(path, numCommands, commands, numCoords, coordType, coords);
}

void glGetActiveSubroutineUniformName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name ) {
    static PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC fptr = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) dasWglGetProcAddress("glGetActiveSubroutineUniformName");
    (*fptr)(program, shadertype, index, bufSize, length, name);
}

void glVertexArrayVertexBuffer ( GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride ) {
    static PFNGLVERTEXARRAYVERTEXBUFFERPROC fptr = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) dasWglGetProcAddress("glVertexArrayVertexBuffer");
    (*fptr)(vaobj, bindingindex, buffer, offset, stride);
}

void glShadingRateImageBarrierNV ( bool synchronize ) {
    static PFNGLSHADINGRATEIMAGEBARRIERNVPROC fptr = (PFNGLSHADINGRATEIMAGEBARRIERNVPROC) dasWglGetProcAddress("glShadingRateImageBarrierNV");
    (*fptr)(synchronize);
}

void glMultiDrawArraysIndirectBindlessCountNV ( GLenum mode, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC) dasWglGetProcAddress("glMultiDrawArraysIndirectBindlessCountNV");
    (*fptr)(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glSignalVkFenceNV ( GLuint64 vkFence ) {
    static PFNGLSIGNALVKFENCENVPROC fptr = (PFNGLSIGNALVKFENCENVPROC) dasWglGetProcAddress("glSignalVkFenceNV");
    (*fptr)(vkFence);
}

void glDrawElementsBaseVertex ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex ) {
    static PFNGLDRAWELEMENTSBASEVERTEXPROC fptr = (PFNGLDRAWELEMENTSBASEVERTEXPROC) dasWglGetProcAddress("glDrawElementsBaseVertex");
    (*fptr)(mode, count, type, indices, basevertex);
}

GLuint glGetDebugMessageLogARB ( GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog ) {
    static PFNGLGETDEBUGMESSAGELOGARBPROC fptr = (PFNGLGETDEBUGMESSAGELOGARBPROC) dasWglGetProcAddress("glGetDebugMessageLogARB");
    return (*fptr)(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glInvalidateNamedFramebufferData ( GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments ) {
    static PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC fptr = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) dasWglGetProcAddress("glInvalidateNamedFramebufferData");
    (*fptr)(framebuffer, numAttachments, attachments);
}

void glTextureParameterivEXT ( GLuint texture, GLenum target, GLenum pname, const GLint * params ) {
    static PFNGLTEXTUREPARAMETERIVEXTPROC fptr = (PFNGLTEXTUREPARAMETERIVEXTPROC) dasWglGetProcAddress("glTextureParameterivEXT");
    (*fptr)(texture, target, pname, params);
}

void glGetFramebufferParameterivMESA ( GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC fptr = (PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) dasWglGetProcAddress("glGetFramebufferParameterivMESA");
    (*fptr)(target, pname, params);
}

void glGetNamedBufferParameterui64vNV ( GLuint buffer, GLenum pname, GLuint64EXT * params ) {
    static PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC) dasWglGetProcAddress("glGetNamedBufferParameterui64vNV");
    (*fptr)(buffer, pname, params);
}

void glVertexAttribL2ui64vNV ( GLuint index, const GLuint64EXT * v ) {
    static PFNGLVERTEXATTRIBL2UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL2UI64VNVPROC) dasWglGetProcAddress("glVertexAttribL2ui64vNV");
    (*fptr)(index, v);
}

void glMultiDrawArraysIndirectCount ( GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC) dasWglGetProcAddress("glMultiDrawArraysIndirectCount");
    (*fptr)(mode, indirect, drawcount, maxdrawcount, stride);
}

void glBindFragDataLocationIndexed ( GLuint program, GLuint colorNumber, GLuint index, const GLchar * name ) {
    static PFNGLBINDFRAGDATALOCATIONINDEXEDPROC fptr = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) dasWglGetProcAddress("glBindFragDataLocationIndexed");
    (*fptr)(program, colorNumber, index, name);
}

void glGetBufferParameteriv ( GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETBUFFERPARAMETERIVPROC fptr = (PFNGLGETBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetBufferParameteriv");
    (*fptr)(target, pname, params);
}

void glUniform4dv ( GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLUNIFORM4DVPROC fptr = (PFNGLUNIFORM4DVPROC) dasWglGetProcAddress("glUniform4dv");
    (*fptr)(location, count, value);
}

void glGetnUniformfvARB ( GLuint program, GLint location, GLsizei bufSize, GLfloat * params ) {
    static PFNGLGETNUNIFORMFVARBPROC fptr = (PFNGLGETNUNIFORMFVARBPROC) dasWglGetProcAddress("glGetnUniformfvARB");
    (*fptr)(program, location, bufSize, params);
}

void glEndQuery ( GLenum target ) {
    static PFNGLENDQUERYPROC fptr = (PFNGLENDQUERYPROC) dasWglGetProcAddress("glEndQuery");
    (*fptr)(target);
}

void glGetInternalformativ ( GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params ) {
    static PFNGLGETINTERNALFORMATIVPROC fptr = (PFNGLGETINTERNALFORMATIVPROC) dasWglGetProcAddress("glGetInternalformativ");
    (*fptr)(target, internalformat, pname, count, params);
}

void glEnableVertexArrayAttribEXT ( GLuint vaobj, GLuint index ) {
    static PFNGLENABLEVERTEXARRAYATTRIBEXTPROC fptr = (PFNGLENABLEVERTEXARRAYATTRIBEXTPROC) dasWglGetProcAddress("glEnableVertexArrayAttribEXT");
    (*fptr)(vaobj, index);
}

GLboolean glIsStateNV ( GLuint state ) {
    static PFNGLISSTATENVPROC fptr = (PFNGLISSTATENVPROC) dasWglGetProcAddress("glIsStateNV");
    return (*fptr)(state);
}

void glUniform4iv ( GLint location, GLsizei count, const GLint * value ) {
    static PFNGLUNIFORM4IVPROC fptr = (PFNGLUNIFORM4IVPROC) dasWglGetProcAddress("glUniform4iv");
    (*fptr)(location, count, value);
}

void glProgramUniform3i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2 ) {
    static PFNGLPROGRAMUNIFORM3IPROC fptr = (PFNGLPROGRAMUNIFORM3IPROC) dasWglGetProcAddress("glProgramUniform3i");
    (*fptr)(program, location, v0, v1, v2);
}

void glProgramUniform4i ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3 ) {
    static PFNGLPROGRAMUNIFORM4IPROC fptr = (PFNGLPROGRAMUNIFORM4IPROC) dasWglGetProcAddress("glProgramUniform4i");
    (*fptr)(program, location, v0, v1, v2, v3);
}

void glProgramUniform3dEXT ( GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z ) {
    static PFNGLPROGRAMUNIFORM3DEXTPROC fptr = (PFNGLPROGRAMUNIFORM3DEXTPROC) dasWglGetProcAddress("glProgramUniform3dEXT");
    (*fptr)(program, location, x, y, z);
}

void glProgramUniformMatrix4dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4dvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glGetPathMetricRangeNV ( GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics ) {
    static PFNGLGETPATHMETRICRANGENVPROC fptr = (PFNGLGETPATHMETRICRANGENVPROC) dasWglGetProcAddress("glGetPathMetricRangeNV");
    (*fptr)(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glVertexAttribL3i64vNV ( GLuint index, const GLint64EXT * v ) {
    static PFNGLVERTEXATTRIBL3I64VNVPROC fptr = (PFNGLVERTEXATTRIBL3I64VNVPROC) dasWglGetProcAddress("glVertexAttribL3i64vNV");
    (*fptr)(index, v);
}

void glViewportSwizzleNV ( GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew ) {
    static PFNGLVIEWPORTSWIZZLENVPROC fptr = (PFNGLVIEWPORTSWIZZLENVPROC) dasWglGetProcAddress("glViewportSwizzleNV");
    (*fptr)(index, swizzlex, swizzley, swizzlez, swizzlew);
}

void glGetActiveUniformName ( GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName ) {
    static PFNGLGETACTIVEUNIFORMNAMEPROC fptr = (PFNGLGETACTIVEUNIFORMNAMEPROC) dasWglGetProcAddress("glGetActiveUniformName");
    (*fptr)(program, uniformIndex, bufSize, length, uniformName);
}

void glCreateStatesNV ( GLsizei n, GLuint * states ) {
    static PFNGLCREATESTATESNVPROC fptr = (PFNGLCREATESTATESNVPROC) dasWglGetProcAddress("glCreateStatesNV");
    (*fptr)(n, states);
}

void glVertexAttribDivisor ( GLuint index, GLuint divisor ) {
    static PFNGLVERTEXATTRIBDIVISORPROC fptr = (PFNGLVERTEXATTRIBDIVISORPROC) dasWglGetProcAddress("glVertexAttribDivisor");
    (*fptr)(index, divisor);
}

void glEnablei ( GLenum target, GLuint index ) {
    static PFNGLENABLEIPROC fptr = (PFNGLENABLEIPROC) dasWglGetProcAddress("glEnablei");
    (*fptr)(target, index);
}

void glGetNextPerfQueryIdINTEL ( GLuint queryId, GLuint * nextQueryId ) {
    static PFNGLGETNEXTPERFQUERYIDINTELPROC fptr = (PFNGLGETNEXTPERFQUERYIDINTELPROC) dasWglGetProcAddress("glGetNextPerfQueryIdINTEL");
    (*fptr)(queryId, nextQueryId);
}

void glVertexAttribP1uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value ) {
    static PFNGLVERTEXATTRIBP1UIVPROC fptr = (PFNGLVERTEXATTRIBP1UIVPROC) dasWglGetProcAddress("glVertexAttribP1uiv");
    (*fptr)(index, type, normalized, value);
}

void glGetPathDashArrayNV ( GLuint path, GLfloat * dashArray ) {
    static PFNGLGETPATHDASHARRAYNVPROC fptr = (PFNGLGETPATHDASHARRAYNVPROC) dasWglGetProcAddress("glGetPathDashArrayNV");
    (*fptr)(path, dashArray);
}

void glGetQueryObjecti64v ( GLuint id, GLenum pname, GLint64 * params ) {
    static PFNGLGETQUERYOBJECTI64VPROC fptr = (PFNGLGETQUERYOBJECTI64VPROC) dasWglGetProcAddress("glGetQueryObjecti64v");
    (*fptr)(id, pname, params);
}

void glGetIntegerui64vNV ( GLenum value, GLuint64EXT * result ) {
    static PFNGLGETINTEGERUI64VNVPROC fptr = (PFNGLGETINTEGERUI64VNVPROC) dasWglGetProcAddress("glGetIntegerui64vNV");
    (*fptr)(value, result);
}

void glVertexAttribBinding ( GLuint attribindex, GLuint bindingindex ) {
    static PFNGLVERTEXATTRIBBINDINGPROC fptr = (PFNGLVERTEXATTRIBBINDINGPROC) dasWglGetProcAddress("glVertexAttribBinding");
    (*fptr)(attribindex, bindingindex);
}

void glDrawBuffers ( GLsizei n, const GLenum * bufs ) {
    static PFNGLDRAWBUFFERSPROC fptr = (PFNGLDRAWBUFFERSPROC) dasWglGetProcAddress("glDrawBuffers");
    (*fptr)(n, bufs);
}

void glFlushMappedNamedBufferRange ( GLuint buffer, GLintptr offset, GLsizeiptr length ) {
    static PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC fptr = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) dasWglGetProcAddress("glFlushMappedNamedBufferRange");
    (*fptr)(buffer, offset, length);
}

void glClearNamedBufferData ( GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data ) {
    static PFNGLCLEARNAMEDBUFFERDATAPROC fptr = (PFNGLCLEARNAMEDBUFFERDATAPROC) dasWglGetProcAddress("glClearNamedBufferData");
    (*fptr)(buffer, internalformat, format, type, data);
}

void glRenderbufferStorage ( GLenum target, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLRENDERBUFFERSTORAGEPROC fptr = (PFNGLRENDERBUFFERSTORAGEPROC) dasWglGetProcAddress("glRenderbufferStorage");
    (*fptr)(target, internalformat, width, height);
}

void glProgramUniform2ui64ARB ( GLuint program, GLint location, GLuint64 x, GLuint64 y ) {
    static PFNGLPROGRAMUNIFORM2UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM2UI64ARBPROC) dasWglGetProcAddress("glProgramUniform2ui64ARB");
    (*fptr)(program, location, x, y);
}

void glVertexAttribI2ui ( GLuint index, GLuint x, GLuint y ) {
    static PFNGLVERTEXATTRIBI2UIPROC fptr = (PFNGLVERTEXATTRIBI2UIPROC) dasWglGetProcAddress("glVertexAttribI2ui");
    (*fptr)(index, x, y);
}

void glVertexAttrib4dv ( GLuint index, const GLdouble * v ) {
    static PFNGLVERTEXATTRIB4DVPROC fptr = (PFNGLVERTEXATTRIB4DVPROC) dasWglGetProcAddress("glVertexAttrib4dv");
    (*fptr)(index, v);
}

void glVertexAttrib4bv ( GLuint index, const GLbyte * v ) {
    static PFNGLVERTEXATTRIB4BVPROC fptr = (PFNGLVERTEXATTRIB4BVPROC) dasWglGetProcAddress("glVertexAttrib4bv");
    (*fptr)(index, v);
}

void glVertexAttrib4fv ( GLuint index, const GLfloat * v ) {
    static PFNGLVERTEXATTRIB4FVPROC fptr = (PFNGLVERTEXATTRIB4FVPROC) dasWglGetProcAddress("glVertexAttrib4fv");
    (*fptr)(index, v);
}

void glProgramUniform1iv ( GLuint program, GLint location, GLsizei count, const GLint * value ) {
    static PFNGLPROGRAMUNIFORM1IVPROC fptr = (PFNGLPROGRAMUNIFORM1IVPROC) dasWglGetProcAddress("glProgramUniform1iv");
    (*fptr)(program, location, count, value);
}

void glSamplerParameterIiv ( GLuint sampler, GLenum pname, const GLint * param ) {
    static PFNGLSAMPLERPARAMETERIIVPROC fptr = (PFNGLSAMPLERPARAMETERIIVPROC) dasWglGetProcAddress("glSamplerParameterIiv");
    (*fptr)(sampler, pname, param);
}

void glBlendEquationiARB ( GLuint buf, GLenum mode ) {
    static PFNGLBLENDEQUATIONIARBPROC fptr = (PFNGLBLENDEQUATIONIARBPROC) dasWglGetProcAddress("glBlendEquationiARB");
    (*fptr)(buf, mode);
}

void glNamedFramebufferTexture ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTUREPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) dasWglGetProcAddress("glNamedFramebufferTexture");
    (*fptr)(framebuffer, attachment, texture, level);
}

void glUniformMatrix3fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLUNIFORMMATRIX3FVPROC fptr = (PFNGLUNIFORMMATRIX3FVPROC) dasWglGetProcAddress("glUniformMatrix3fv");
    (*fptr)(location, count, transpose, value);
}

void glUniformMatrix3dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLUNIFORMMATRIX3DVPROC fptr = (PFNGLUNIFORMMATRIX3DVPROC) dasWglGetProcAddress("glUniformMatrix3dv");
    (*fptr)(location, count, transpose, value);
}

void glBufferData ( GLenum target, GLsizeiptr size, const void * data, GLenum usage ) {
    static PFNGLBUFFERDATAPROC fptr = (PFNGLBUFFERDATAPROC) dasWglGetProcAddress("glBufferData");
    (*fptr)(target, size, data, usage);
}

void glProgramUniformMatrix4x2fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) dasWglGetProcAddress("glProgramUniformMatrix4x2fv");
    (*fptr)(program, location, count, transpose, value);
}

void glBlendFuncSeparate ( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha ) {
    static PFNGLBLENDFUNCSEPARATEPROC fptr = (PFNGLBLENDFUNCSEPARATEPROC) dasWglGetProcAddress("glBlendFuncSeparate");
    (*fptr)(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glProgramUniformHandleui64ARB ( GLuint program, GLint location, GLuint64 value ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) dasWglGetProcAddress("glProgramUniformHandleui64ARB");
    (*fptr)(program, location, value);
}

void glUniform4ui64vARB ( GLint location, GLsizei count, const GLuint64 * value ) {
    static PFNGLUNIFORM4UI64VARBPROC fptr = (PFNGLUNIFORM4UI64VARBPROC) dasWglGetProcAddress("glUniform4ui64vARB");
    (*fptr)(location, count, value);
}

void glVertexAttrib4iv ( GLuint index, const GLint * v ) {
    static PFNGLVERTEXATTRIB4IVPROC fptr = (PFNGLVERTEXATTRIB4IVPROC) dasWglGetProcAddress("glVertexAttrib4iv");
    (*fptr)(index, v);
}

void glProgramUniform1dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORM1DVPROC fptr = (PFNGLPROGRAMUNIFORM1DVPROC) dasWglGetProcAddress("glProgramUniform1dv");
    (*fptr)(program, location, count, value);
}

void glVertexAttrib4sv ( GLuint index, const GLshort * v ) {
    static PFNGLVERTEXATTRIB4SVPROC fptr = (PFNGLVERTEXATTRIB4SVPROC) dasWglGetProcAddress("glVertexAttrib4sv");
    (*fptr)(index, v);
}

void glSelectPerfMonitorCountersAMD ( GLuint monitor, bool enable, GLuint group, GLint numCounters, GLuint * counterList ) {
    static PFNGLSELECTPERFMONITORCOUNTERSAMDPROC fptr = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) dasWglGetProcAddress("glSelectPerfMonitorCountersAMD");
    (*fptr)(monitor, enable, group, numCounters, counterList);
}

void glTextureSubImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXTURESUBIMAGE3DEXTPROC fptr = (PFNGLTEXTURESUBIMAGE3DEXTPROC) dasWglGetProcAddress("glTextureSubImage3DEXT");
    (*fptr)(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

GLsync glFenceSync ( GLenum condition, GLbitfield flags ) {
    static PFNGLFENCESYNCPROC fptr = (PFNGLFENCESYNCPROC) dasWglGetProcAddress("glFenceSync");
    return (*fptr)(condition, flags);
}

void glMultiTexImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLMULTITEXIMAGE2DEXTPROC fptr = (PFNGLMULTITEXIMAGE2DEXTPROC) dasWglGetProcAddress("glMultiTexImage2DEXT");
    (*fptr)(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

void glGetObjectLabel ( GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label ) {
    static PFNGLGETOBJECTLABELPROC fptr = (PFNGLGETOBJECTLABELPROC) dasWglGetProcAddress("glGetObjectLabel");
    (*fptr)(identifier, name, bufSize, length, label);
}

void glCompressedTextureSubImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) dasWglGetProcAddress("glCompressedTextureSubImage1DEXT");
    (*fptr)(texture, target, level, xoffset, width, format, imageSize, bits);
}

void glCompressedMultiTexImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexImage3DEXT");
    (*fptr)(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

void glCompressedMultiTexImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexImage1DEXT");
    (*fptr)(texunit, target, level, internalformat, width, border, imageSize, bits);
}

void glProgramUniformMatrix3fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3fvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glProgramUniform2dEXT ( GLuint program, GLint location, GLdouble x, GLdouble y ) {
    static PFNGLPROGRAMUNIFORM2DEXTPROC fptr = (PFNGLPROGRAMUNIFORM2DEXTPROC) dasWglGetProcAddress("glProgramUniform2dEXT");
    (*fptr)(program, location, x, y);
}

void glVertexAttrib4uiv ( GLuint index, const GLuint * v ) {
    static PFNGLVERTEXATTRIB4UIVPROC fptr = (PFNGLVERTEXATTRIB4UIVPROC) dasWglGetProcAddress("glVertexAttrib4uiv");
    (*fptr)(index, v);
}

void glProgramUniform2dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORM2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2DVEXTPROC) dasWglGetProcAddress("glProgramUniform2dvEXT");
    (*fptr)(program, location, count, value);
}

void glVertexArrayVertexAttribIFormatEXT ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribIFormatEXT");
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
}

void glMultiDrawArraysIndirectBindlessNV ( GLenum mode, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC) dasWglGetProcAddress("glMultiDrawArraysIndirectBindlessNV");
    (*fptr)(mode, indirect, drawCount, stride, vertexBufferCount);
}

void glCreateProgramPipelines ( GLsizei n, GLuint * pipelines ) {
    static PFNGLCREATEPROGRAMPIPELINESPROC fptr = (PFNGLCREATEPROGRAMPIPELINESPROC) dasWglGetProcAddress("glCreateProgramPipelines");
    (*fptr)(n, pipelines);
}

void glFragmentCoverageColorNV ( GLuint color ) {
    static PFNGLFRAGMENTCOVERAGECOLORNVPROC fptr = (PFNGLFRAGMENTCOVERAGECOLORNVPROC) dasWglGetProcAddress("glFragmentCoverageColorNV");
    (*fptr)(color);
}

void glDisableIndexedEXT ( GLenum target, GLuint index ) {
    static PFNGLDISABLEINDEXEDEXTPROC fptr = (PFNGLDISABLEINDEXEDEXTPROC) dasWglGetProcAddress("glDisableIndexedEXT");
    (*fptr)(target, index);
}

void glValidateProgram ( GLuint program ) {
    static PFNGLVALIDATEPROGRAMPROC fptr = (PFNGLVALIDATEPROGRAMPROC) dasWglGetProcAddress("glValidateProgram");
    (*fptr)(program);
}

void glUniform4ui ( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3 ) {
    static PFNGLUNIFORM4UIPROC fptr = (PFNGLUNIFORM4UIPROC) dasWglGetProcAddress("glUniform4ui");
    (*fptr)(location, v0, v1, v2, v3);
}

void glProgramUniform4f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 ) {
    static PFNGLPROGRAMUNIFORM4FPROC fptr = (PFNGLPROGRAMUNIFORM4FPROC) dasWglGetProcAddress("glProgramUniform4f");
    (*fptr)(program, location, v0, v1, v2, v3);
}

void glProgramUniformMatrix3x4fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) dasWglGetProcAddress("glProgramUniformMatrix3x4fv");
    (*fptr)(program, location, count, transpose, value);
}

void glNamedProgramLocalParameter4dvEXT ( GLuint program, GLenum target, GLuint index, const GLdouble * params ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameter4dvEXT");
    (*fptr)(program, target, index, params);
}

void glDrawCommandsStatesAddressNV ( const GLuint64 * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count ) {
    static PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC fptr = (PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC) dasWglGetProcAddress("glDrawCommandsStatesAddressNV");
    (*fptr)(indirects, sizes, states, fbos, count);
}

void glGetPerfMonitorCountersAMD ( GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters ) {
    static PFNGLGETPERFMONITORCOUNTERSAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERSAMDPROC) dasWglGetProcAddress("glGetPerfMonitorCountersAMD");
    (*fptr)(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glProgramUniform2ui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value ) {
    static PFNGLPROGRAMUNIFORM2UI64VNVPROC fptr = (PFNGLPROGRAMUNIFORM2UI64VNVPROC) dasWglGetProcAddress("glProgramUniform2ui64vNV");
    (*fptr)(program, location, count, value);
}

void glResolveDepthValuesNV (  ) {
    static PFNGLRESOLVEDEPTHVALUESNVPROC fptr = (PFNGLRESOLVEDEPTHVALUESNVPROC) dasWglGetProcAddress("glResolveDepthValuesNV");
    (*fptr)();
}

void glUniformui64NV ( GLint location, GLuint64EXT value ) {
    static PFNGLUNIFORMUI64NVPROC fptr = (PFNGLUNIFORMUI64NVPROC) dasWglGetProcAddress("glUniformui64NV");
    (*fptr)(location, value);
}

void glDrawArraysInstanced ( GLenum mode, GLint first, GLsizei count, GLsizei instancecount ) {
    static PFNGLDRAWARRAYSINSTANCEDPROC fptr = (PFNGLDRAWARRAYSINSTANCEDPROC) dasWglGetProcAddress("glDrawArraysInstanced");
    (*fptr)(mode, first, count, instancecount);
}

void glUniformHandleui64vNV ( GLint location, GLsizei count, const GLuint64 * value ) {
    static PFNGLUNIFORMHANDLEUI64VNVPROC fptr = (PFNGLUNIFORMHANDLEUI64VNVPROC) dasWglGetProcAddress("glUniformHandleui64vNV");
    (*fptr)(location, count, value);
}

void glGetRenderbufferParameteriv ( GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETRENDERBUFFERPARAMETERIVPROC fptr = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetRenderbufferParameteriv");
    (*fptr)(target, pname, params);
}

void glProgramUniform3f ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2 ) {
    static PFNGLPROGRAMUNIFORM3FPROC fptr = (PFNGLPROGRAMUNIFORM3FPROC) dasWglGetProcAddress("glProgramUniform3f");
    (*fptr)(program, location, v0, v1, v2);
}

void glProgramUniform4d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3 ) {
    static PFNGLPROGRAMUNIFORM4DPROC fptr = (PFNGLPROGRAMUNIFORM4DPROC) dasWglGetProcAddress("glProgramUniform4d");
    (*fptr)(program, location, v0, v1, v2, v3);
}

void glDrawElementsInstancedBaseVertexBaseInstance ( GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance ) {
    static PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC fptr = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) dasWglGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance");
    (*fptr)(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glGetProgramInfoLog ( GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog ) {
    static PFNGLGETPROGRAMINFOLOGPROC fptr = (PFNGLGETPROGRAMINFOLOGPROC) dasWglGetProcAddress("glGetProgramInfoLog");
    (*fptr)(program, bufSize, length, infoLog);
}

void glMemoryBarrier ( GLbitfield barriers ) {
    static PFNGLMEMORYBARRIERPROC fptr = (PFNGLMEMORYBARRIERPROC) dasWglGetProcAddress("glMemoryBarrier");
    (*fptr)(barriers);
}

void glRenderbufferStorageMultisampleAdvancedAMD ( GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC fptr = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) dasWglGetProcAddress("glRenderbufferStorageMultisampleAdvancedAMD");
    (*fptr)(target, samples, storageSamples, internalformat, width, height);
}

void glMultiTexEnvivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLint * params ) {
    static PFNGLMULTITEXENVIVEXTPROC fptr = (PFNGLMULTITEXENVIVEXTPROC) dasWglGetProcAddress("glMultiTexEnvivEXT");
    (*fptr)(texunit, target, pname, params);
}

void glGetTextureParameteriv ( GLuint texture, GLenum pname, GLint * params ) {
    static PFNGLGETTEXTUREPARAMETERIVPROC fptr = (PFNGLGETTEXTUREPARAMETERIVPROC) dasWglGetProcAddress("glGetTextureParameteriv");
    (*fptr)(texture, pname, params);
}

GLboolean glUnmapNamedBufferEXT ( GLuint buffer ) {
    static PFNGLUNMAPNAMEDBUFFEREXTPROC fptr = (PFNGLUNMAPNAMEDBUFFEREXTPROC) dasWglGetProcAddress("glUnmapNamedBufferEXT");
    return (*fptr)(buffer);
}

GLVULKANPROCNV glGetVkProcAddrNV ( const GLchar * name ) {
    static PFNGLGETVKPROCADDRNVPROC fptr = (PFNGLGETVKPROCADDRNVPROC) dasWglGetProcAddress("glGetVkProcAddrNV");
    return (*fptr)(name);
}

void glMatrixMultdEXT ( GLenum mode, const GLdouble * m ) {
    static PFNGLMATRIXMULTDEXTPROC fptr = (PFNGLMATRIXMULTDEXTPROC) dasWglGetProcAddress("glMatrixMultdEXT");
    (*fptr)(mode, m);
}

void glPathParameterfvNV ( GLuint path, GLenum pname, const GLfloat * value ) {
    static PFNGLPATHPARAMETERFVNVPROC fptr = (PFNGLPATHPARAMETERFVNVPROC) dasWglGetProcAddress("glPathParameterfvNV");
    (*fptr)(path, pname, value);
}

void glGetMultiTexEnvivEXT ( GLenum texunit, GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETMULTITEXENVIVEXTPROC fptr = (PFNGLGETMULTITEXENVIVEXTPROC) dasWglGetProcAddress("glGetMultiTexEnvivEXT");
    (*fptr)(texunit, target, pname, params);
}

void glVertexAttribLFormatNV ( GLuint index, GLint size, GLenum type, GLsizei stride ) {
    static PFNGLVERTEXATTRIBLFORMATNVPROC fptr = (PFNGLVERTEXATTRIBLFORMATNVPROC) dasWglGetProcAddress("glVertexAttribLFormatNV");
    (*fptr)(index, size, type, stride);
}

void glNamedFramebufferRenderbuffer ( GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer ) {
    static PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC fptr = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) dasWglGetProcAddress("glNamedFramebufferRenderbuffer");
    (*fptr)(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void glProgramUniform3d ( GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2 ) {
    static PFNGLPROGRAMUNIFORM3DPROC fptr = (PFNGLPROGRAMUNIFORM3DPROC) dasWglGetProcAddress("glProgramUniform3d");
    (*fptr)(program, location, v0, v1, v2);
}

void glGetnCompressedTexImageARB ( GLenum target, GLint lod, GLsizei bufSize, void * img ) {
    static PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC fptr = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) dasWglGetProcAddress("glGetnCompressedTexImageARB");
    (*fptr)(target, lod, bufSize, img);
}

void glProvokingVertex ( GLenum mode ) {
    static PFNGLPROVOKINGVERTEXPROC fptr = (PFNGLPROVOKINGVERTEXPROC) dasWglGetProcAddress("glProvokingVertex");
    (*fptr)(mode);
}

void glPointParameterfv ( GLenum pname, const GLfloat * params ) {
    static PFNGLPOINTPARAMETERFVPROC fptr = (PFNGLPOINTPARAMETERFVPROC) dasWglGetProcAddress("glPointParameterfv");
    (*fptr)(pname, params);
}

void glUniform3ui64NV ( GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z ) {
    static PFNGLUNIFORM3UI64NVPROC fptr = (PFNGLUNIFORM3UI64NVPROC) dasWglGetProcAddress("glUniform3ui64NV");
    (*fptr)(location, x, y, z);
}

void glBeginQuery ( GLenum target, GLuint id ) {
    static PFNGLBEGINQUERYPROC fptr = (PFNGLBEGINQUERYPROC) dasWglGetProcAddress("glBeginQuery");
    (*fptr)(target, id);
}

void glTexturePageCommitmentMemNV ( GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, bool commit ) {
    static PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC fptr = (PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) dasWglGetProcAddress("glTexturePageCommitmentMemNV");
    (*fptr)(texture, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
}

void glClearBufferuiv ( GLenum buffer, GLint drawbuffer, const GLuint * value ) {
    static PFNGLCLEARBUFFERUIVPROC fptr = (PFNGLCLEARBUFFERUIVPROC) dasWglGetProcAddress("glClearBufferuiv");
    (*fptr)(buffer, drawbuffer, value);
}

void glProgramUniformMatrix4dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) dasWglGetProcAddress("glProgramUniformMatrix4dv");
    (*fptr)(program, location, count, transpose, value);
}

void glProgramUniform1ui ( GLuint program, GLint location, GLuint v0 ) {
    static PFNGLPROGRAMUNIFORM1UIPROC fptr = (PFNGLPROGRAMUNIFORM1UIPROC) dasWglGetProcAddress("glProgramUniform1ui");
    (*fptr)(program, location, v0);
}

void glNamedBufferStorageEXT ( GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags ) {
    static PFNGLNAMEDBUFFERSTORAGEEXTPROC fptr = (PFNGLNAMEDBUFFERSTORAGEEXTPROC) dasWglGetProcAddress("glNamedBufferStorageEXT");
    (*fptr)(buffer, size, data, flags);
}

void glProgramUniform3ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2 ) {
    static PFNGLPROGRAMUNIFORM3UIPROC fptr = (PFNGLPROGRAMUNIFORM3UIPROC) dasWglGetProcAddress("glProgramUniform3ui");
    (*fptr)(program, location, v0, v1, v2);
}

GLboolean glIsBufferResidentNV ( GLenum target ) {
    static PFNGLISBUFFERRESIDENTNVPROC fptr = (PFNGLISBUFFERRESIDENTNVPROC) dasWglGetProcAddress("glIsBufferResidentNV");
    return (*fptr)(target);
}

void glGetTransformFeedbackiv ( GLuint xfb, GLenum pname, GLint * param ) {
    static PFNGLGETTRANSFORMFEEDBACKIVPROC fptr = (PFNGLGETTRANSFORMFEEDBACKIVPROC) dasWglGetProcAddress("glGetTransformFeedbackiv");
    (*fptr)(xfb, pname, param);
}

void glGetPerfMonitorCounterInfoAMD ( GLuint group, GLuint counter, GLenum pname, void * data ) {
    static PFNGLGETPERFMONITORCOUNTERINFOAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) dasWglGetProcAddress("glGetPerfMonitorCounterInfoAMD");
    (*fptr)(group, counter, pname, data);
}

void glNamedFramebufferTexture3DEXT ( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) dasWglGetProcAddress("glNamedFramebufferTexture3DEXT");
    (*fptr)(framebuffer, attachment, textarget, texture, level, zoffset);
}

GLushort glGetStageIndexNV ( GLenum shadertype ) {
    static PFNGLGETSTAGEINDEXNVPROC fptr = (PFNGLGETSTAGEINDEXNVPROC) dasWglGetProcAddress("glGetStageIndexNV");
    return (*fptr)(shadertype);
}

void glColorFormatNV ( GLint size, GLenum type, GLsizei stride ) {
    static PFNGLCOLORFORMATNVPROC fptr = (PFNGLCOLORFORMATNVPROC) dasWglGetProcAddress("glColorFormatNV");
    (*fptr)(size, type, stride);
}

GLint glGetFragDataLocation ( GLuint program, const GLchar * name ) {
    static PFNGLGETFRAGDATALOCATIONPROC fptr = (PFNGLGETFRAGDATALOCATIONPROC) dasWglGetProcAddress("glGetFragDataLocation");
    return (*fptr)(program, name);
}

void glMultiTexParameterivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLint * params ) {
    static PFNGLMULTITEXPARAMETERIVEXTPROC fptr = (PFNGLMULTITEXPARAMETERIVEXTPROC) dasWglGetProcAddress("glMultiTexParameterivEXT");
    (*fptr)(texunit, target, pname, params);
}

void glTextureParameterIuivEXT ( GLuint texture, GLenum target, GLenum pname, const GLuint * params ) {
    static PFNGLTEXTUREPARAMETERIUIVEXTPROC fptr = (PFNGLTEXTUREPARAMETERIUIVEXTPROC) dasWglGetProcAddress("glTextureParameterIuivEXT");
    (*fptr)(texture, target, pname, params);
}

void glProgramUniform3ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value ) {
    static PFNGLPROGRAMUNIFORM3UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM3UI64VARBPROC) dasWglGetProcAddress("glProgramUniform3ui64vARB");
    (*fptr)(program, location, count, value);
}

void glGetMultiTexEnvfvEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat * params ) {
    static PFNGLGETMULTITEXENVFVEXTPROC fptr = (PFNGLGETMULTITEXENVFVEXTPROC) dasWglGetProcAddress("glGetMultiTexEnvfvEXT");
    (*fptr)(texunit, target, pname, params);
}

void glMakeImageHandleResidentARB ( GLuint64 handle, GLenum access ) {
    static PFNGLMAKEIMAGEHANDLERESIDENTARBPROC fptr = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) dasWglGetProcAddress("glMakeImageHandleResidentARB");
    (*fptr)(handle, access);
}

void glVertexAttribL2d ( GLuint index, GLdouble x, GLdouble y ) {
    static PFNGLVERTEXATTRIBL2DPROC fptr = (PFNGLVERTEXATTRIBL2DPROC) dasWglGetProcAddress("glVertexAttribL2d");
    (*fptr)(index, x, y);
}

void glCompressedTexSubImage2D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data ) {
    static PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC fptr = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) dasWglGetProcAddress("glCompressedTexSubImage2D");
    (*fptr)(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glProgramUniformui64NV ( GLuint program, GLint location, GLuint64EXT value ) {
    static PFNGLPROGRAMUNIFORMUI64NVPROC fptr = (PFNGLPROGRAMUNIFORMUI64NVPROC) dasWglGetProcAddress("glProgramUniformui64NV");
    (*fptr)(program, location, value);
}

void glEndTransformFeedback (  ) {
    static PFNGLENDTRANSFORMFEEDBACKPROC fptr = (PFNGLENDTRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glEndTransformFeedback");
    (*fptr)();
}

void glActiveShaderProgram ( GLuint pipeline, GLuint program ) {
    static PFNGLACTIVESHADERPROGRAMPROC fptr = (PFNGLACTIVESHADERPROGRAMPROC) dasWglGetProcAddress("glActiveShaderProgram");
    (*fptr)(pipeline, program);
}

void glUniform2ui64ARB ( GLint location, GLuint64 x, GLuint64 y ) {
    static PFNGLUNIFORM2UI64ARBPROC fptr = (PFNGLUNIFORM2UI64ARBPROC) dasWglGetProcAddress("glUniform2ui64ARB");
    (*fptr)(location, x, y);
}

void glProgramUniform1ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value ) {
    static PFNGLPROGRAMUNIFORM1UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM1UI64VARBPROC) dasWglGetProcAddress("glProgramUniform1ui64vARB");
    (*fptr)(program, location, count, value);
}

void glBeginPerfMonitorAMD ( GLuint monitor ) {
    static PFNGLBEGINPERFMONITORAMDPROC fptr = (PFNGLBEGINPERFMONITORAMDPROC) dasWglGetProcAddress("glBeginPerfMonitorAMD");
    (*fptr)(monitor);
}

GLboolean glUnmapBuffer ( GLenum target ) {
    static PFNGLUNMAPBUFFERPROC fptr = (PFNGLUNMAPBUFFERPROC) dasWglGetProcAddress("glUnmapBuffer");
    return (*fptr)(target);
}

void glCopyTextureSubImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height ) {
    static PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) dasWglGetProcAddress("glCopyTextureSubImage2DEXT");
    (*fptr)(texture, target, level, xoffset, yoffset, x, y, width, height);
}

void glProgramUniform1uiEXT ( GLuint program, GLint location, GLuint v0 ) {
    static PFNGLPROGRAMUNIFORM1UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM1UIEXTPROC) dasWglGetProcAddress("glProgramUniform1uiEXT");
    (*fptr)(program, location, v0);
}

void glVertexArrayIndexOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYINDEXOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYINDEXOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayIndexOffsetEXT");
    (*fptr)(vaobj, buffer, type, stride, offset);
}

void glGetInteger64i_v ( GLenum target, GLuint index, GLint64 * data ) {
    static PFNGLGETINTEGER64I_VPROC fptr = (PFNGLGETINTEGER64I_VPROC) dasWglGetProcAddress("glGetInteger64i_v");
    (*fptr)(target, index, data);
}

void glNamedProgramStringEXT ( GLuint program, GLenum target, GLenum format, GLsizei len, const void * string ) {
    static PFNGLNAMEDPROGRAMSTRINGEXTPROC fptr = (PFNGLNAMEDPROGRAMSTRINGEXTPROC) dasWglGetProcAddress("glNamedProgramStringEXT");
    (*fptr)(program, target, format, len, string);
}

void glMultiTexSubImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLMULTITEXSUBIMAGE2DEXTPROC fptr = (PFNGLMULTITEXSUBIMAGE2DEXTPROC) dasWglGetProcAddress("glMultiTexSubImage2DEXT");
    (*fptr)(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glBeginConditionalRenderNV ( GLuint id, GLenum mode ) {
    static PFNGLBEGINCONDITIONALRENDERNVPROC fptr = (PFNGLBEGINCONDITIONALRENDERNVPROC) dasWglGetProcAddress("glBeginConditionalRenderNV");
    (*fptr)(id, mode);
}

void glDepthBoundsdNV ( GLdouble zmin, GLdouble zmax ) {
    static PFNGLDEPTHBOUNDSDNVPROC fptr = (PFNGLDEPTHBOUNDSDNVPROC) dasWglGetProcAddress("glDepthBoundsdNV");
    (*fptr)(zmin, zmax);
}

void glGetNamedBufferParameteri64v ( GLuint buffer, GLenum pname, GLint64 * params ) {
    static PFNGLGETNAMEDBUFFERPARAMETERI64VPROC fptr = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) dasWglGetProcAddress("glGetNamedBufferParameteri64v");
    (*fptr)(buffer, pname, params);
}

void glUniform3i64vNV ( GLint location, GLsizei count, const GLint64EXT * value ) {
    static PFNGLUNIFORM3I64VNVPROC fptr = (PFNGLUNIFORM3I64VNVPROC) dasWglGetProcAddress("glUniform3i64vNV");
    (*fptr)(location, count, value);
}

void glGetnUniformi64vARB ( GLuint program, GLint location, GLsizei bufSize, GLint64 * params ) {
    static PFNGLGETNUNIFORMI64VARBPROC fptr = (PFNGLGETNUNIFORMI64VARBPROC) dasWglGetProcAddress("glGetnUniformi64vARB");
    (*fptr)(program, location, bufSize, params);
}

void glProgramUniform2i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value ) {
    static PFNGLPROGRAMUNIFORM2I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM2I64VARBPROC) dasWglGetProcAddress("glProgramUniform2i64vARB");
    (*fptr)(program, location, count, value);
}

void glGetDoubleIndexedvEXT ( GLenum target, GLuint index, GLdouble * data ) {
    static PFNGLGETDOUBLEINDEXEDVEXTPROC fptr = (PFNGLGETDOUBLEINDEXEDVEXTPROC) dasWglGetProcAddress("glGetDoubleIndexedvEXT");
    (*fptr)(target, index, data);
}

void glFramebufferTextureARB ( GLenum target, GLenum attachment, GLuint texture, GLint level ) {
    static PFNGLFRAMEBUFFERTEXTUREARBPROC fptr = (PFNGLFRAMEBUFFERTEXTUREARBPROC) dasWglGetProcAddress("glFramebufferTextureARB");
    (*fptr)(target, attachment, texture, level);
}

void glGetPointeri_vEXT ( GLenum pname, GLuint index, void ** params ) {
    static PFNGLGETPOINTERI_VEXTPROC fptr = (PFNGLGETPOINTERI_VEXTPROC) dasWglGetProcAddress("glGetPointeri_vEXT");
    (*fptr)(pname, index, params);
}

void glSecondaryColorFormatNV ( GLint size, GLenum type, GLsizei stride ) {
    static PFNGLSECONDARYCOLORFORMATNVPROC fptr = (PFNGLSECONDARYCOLORFORMATNVPROC) dasWglGetProcAddress("glSecondaryColorFormatNV");
    (*fptr)(size, type, stride);
}

void glMultiDrawElementsIndirectBindlessCountNV ( GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC) dasWglGetProcAddress("glMultiDrawElementsIndirectBindlessCountNV");
    (*fptr)(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

void glTextureStorage3DMultisample ( GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations ) {
    static PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC fptr = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) dasWglGetProcAddress("glTextureStorage3DMultisample");
    (*fptr)(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glScissorArrayv ( GLuint first, GLsizei count, const GLint * v ) {
    static PFNGLSCISSORARRAYVPROC fptr = (PFNGLSCISSORARRAYVPROC) dasWglGetProcAddress("glScissorArrayv");
    (*fptr)(first, count, v);
}

void glMatrixLoad3x2fNV ( GLenum matrixMode, const GLfloat * m ) {
    static PFNGLMATRIXLOAD3X2FNVPROC fptr = (PFNGLMATRIXLOAD3X2FNVPROC) dasWglGetProcAddress("glMatrixLoad3x2fNV");
    (*fptr)(matrixMode, m);
}

void glProgramUniform1fvEXT ( GLuint program, GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORM1FVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1FVEXTPROC) dasWglGetProcAddress("glProgramUniform1fvEXT");
    (*fptr)(program, location, count, value);
}

void glTransformFeedbackVaryings ( GLuint program, GLsizei count, const GLchar *const * varyings, GLenum bufferMode ) {
    static PFNGLTRANSFORMFEEDBACKVARYINGSPROC fptr = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) dasWglGetProcAddress("glTransformFeedbackVaryings");
    (*fptr)(program, count, varyings, bufferMode);
}

void glBufferAddressRangeNV ( GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length ) {
    static PFNGLBUFFERADDRESSRANGENVPROC fptr = (PFNGLBUFFERADDRESSRANGENVPROC) dasWglGetProcAddress("glBufferAddressRangeNV");
    (*fptr)(pname, index, address, length);
}

GLint glGetAttribLocation ( GLuint program, const GLchar * name ) {
    static PFNGLGETATTRIBLOCATIONPROC fptr = (PFNGLGETATTRIBLOCATIONPROC) dasWglGetProcAddress("glGetAttribLocation");
    return (*fptr)(program, name);
}

void glVertexAttrib4usv ( GLuint index, const GLushort * v ) {
    static PFNGLVERTEXATTRIB4USVPROC fptr = (PFNGLVERTEXATTRIB4USVPROC) dasWglGetProcAddress("glVertexAttrib4usv");
    (*fptr)(index, v);
}

void glEnableClientStateiEXT ( GLenum array, GLuint index ) {
    static PFNGLENABLECLIENTSTATEIEXTPROC fptr = (PFNGLENABLECLIENTSTATEIEXTPROC) dasWglGetProcAddress("glEnableClientStateiEXT");
    (*fptr)(array, index);
}

GLboolean glIsProgram ( GLuint program ) {
    static PFNGLISPROGRAMPROC fptr = (PFNGLISPROGRAMPROC) dasWglGetProcAddress("glIsProgram");
    return (*fptr)(program);
}

void glUniform1i64vNV ( GLint location, GLsizei count, const GLint64EXT * value ) {
    static PFNGLUNIFORM1I64VNVPROC fptr = (PFNGLUNIFORM1I64VNVPROC) dasWglGetProcAddress("glUniform1i64vNV");
    (*fptr)(location, count, value);
}

void glProgramUniform3iv ( GLuint program, GLint location, GLsizei count, const GLint * value ) {
    static PFNGLPROGRAMUNIFORM3IVPROC fptr = (PFNGLPROGRAMUNIFORM3IVPROC) dasWglGetProcAddress("glProgramUniform3iv");
    (*fptr)(program, location, count, value);
}

void glUniform2ui64vNV ( GLint location, GLsizei count, const GLuint64EXT * value ) {
    static PFNGLUNIFORM2UI64VNVPROC fptr = (PFNGLUNIFORM2UI64VNVPROC) dasWglGetProcAddress("glUniform2ui64vNV");
    (*fptr)(location, count, value);
}

void glNamedRenderbufferStorageEXT ( GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) dasWglGetProcAddress("glNamedRenderbufferStorageEXT");
    (*fptr)(renderbuffer, internalformat, width, height);
}

void glBeginPerfQueryINTEL ( GLuint queryHandle ) {
    static PFNGLBEGINPERFQUERYINTELPROC fptr = (PFNGLBEGINPERFQUERYINTELPROC) dasWglGetProcAddress("glBeginPerfQueryINTEL");
    (*fptr)(queryHandle);
}

void glVertexAttrib4ubv ( GLuint index, const GLubyte * v ) {
    static PFNGLVERTEXATTRIB4UBVPROC fptr = (PFNGLVERTEXATTRIB4UBVPROC) dasWglGetProcAddress("glVertexAttrib4ubv");
    (*fptr)(index, v);
}

void glGetTextureParameterfv ( GLuint texture, GLenum pname, GLfloat * params ) {
    static PFNGLGETTEXTUREPARAMETERFVPROC fptr = (PFNGLGETTEXTUREPARAMETERFVPROC) dasWglGetProcAddress("glGetTextureParameterfv");
    (*fptr)(texture, pname, params);
}

void glClearNamedBufferDataEXT ( GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data ) {
    static PFNGLCLEARNAMEDBUFFERDATAEXTPROC fptr = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC) dasWglGetProcAddress("glClearNamedBufferDataEXT");
    (*fptr)(buffer, internalformat, format, type, data);
}

void glVertexArrayVertexAttribBindingEXT ( GLuint vaobj, GLuint attribindex, GLuint bindingindex ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribBindingEXT");
    (*fptr)(vaobj, attribindex, bindingindex);
}

void glMultiTexImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLMULTITEXIMAGE3DEXTPROC fptr = (PFNGLMULTITEXIMAGE3DEXTPROC) dasWglGetProcAddress("glMultiTexImage3DEXT");
    (*fptr)(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glBindVertexBuffer ( GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride ) {
    static PFNGLBINDVERTEXBUFFERPROC fptr = (PFNGLBINDVERTEXBUFFERPROC) dasWglGetProcAddress("glBindVertexBuffer");
    (*fptr)(bindingindex, buffer, offset, stride);
}

void glGetNamedRenderbufferParameteriv ( GLuint renderbuffer, GLenum pname, GLint * params ) {
    static PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC fptr = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetNamedRenderbufferParameteriv");
    (*fptr)(renderbuffer, pname, params);
}

void glProgramUniformMatrix3x4fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3x4fvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glTextureStorage2DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLTEXTURESTORAGE2DEXTPROC fptr = (PFNGLTEXTURESTORAGE2DEXTPROC) dasWglGetProcAddress("glTextureStorage2DEXT");
    (*fptr)(texture, target, levels, internalformat, width, height);
}

void glVertexAttrib2dv ( GLuint index, const GLdouble * v ) {
    static PFNGLVERTEXATTRIB2DVPROC fptr = (PFNGLVERTEXATTRIB2DVPROC) dasWglGetProcAddress("glVertexAttrib2dv");
    (*fptr)(index, v);
}

void glVertexAttrib2fv ( GLuint index, const GLfloat * v ) {
    static PFNGLVERTEXATTRIB2FVPROC fptr = (PFNGLVERTEXATTRIB2FVPROC) dasWglGetProcAddress("glVertexAttrib2fv");
    (*fptr)(index, v);
}

void glProgramUniform3fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORM3FVPROC fptr = (PFNGLPROGRAMUNIFORM3FVPROC) dasWglGetProcAddress("glProgramUniform3fv");
    (*fptr)(program, location, count, value);
}

void glVertexArrayVertexBuffers ( GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides ) {
    static PFNGLVERTEXARRAYVERTEXBUFFERSPROC fptr = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) dasWglGetProcAddress("glVertexArrayVertexBuffers");
    (*fptr)(vaobj, first, count, buffers, offsets, strides);
}

void glProgramUniformHandleui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * values ) {
    static PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC fptr = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) dasWglGetProcAddress("glProgramUniformHandleui64vARB");
    (*fptr)(program, location, count, values);
}

void glTextureSubImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXTURESUBIMAGE1DEXTPROC fptr = (PFNGLTEXTURESUBIMAGE1DEXTPROC) dasWglGetProcAddress("glTextureSubImage1DEXT");
    (*fptr)(texture, target, level, xoffset, width, format, type, pixels);
}

void glVertexArrayVertexOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayVertexOffsetEXT");
    (*fptr)(vaobj, buffer, size, type, stride, offset);
}

void glProgramUniform3i64ARB ( GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z ) {
    static PFNGLPROGRAMUNIFORM3I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM3I64ARBPROC) dasWglGetProcAddress("glProgramUniform3i64ARB");
    (*fptr)(program, location, x, y, z);
}

void glGetQueryBufferObjectui64v ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset ) {
    static PFNGLGETQUERYBUFFEROBJECTUI64VPROC fptr = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) dasWglGetProcAddress("glGetQueryBufferObjectui64v");
    (*fptr)(id, buffer, pname, offset);
}

GLuint64 glGetTextureSamplerHandleNV ( GLuint texture, GLuint sampler ) {
    static PFNGLGETTEXTURESAMPLERHANDLENVPROC fptr = (PFNGLGETTEXTURESAMPLERHANDLENVPROC) dasWglGetProcAddress("glGetTextureSamplerHandleNV");
    return (*fptr)(texture, sampler);
}

void glGetnUniformuiv ( GLuint program, GLint location, GLsizei bufSize, GLuint * params ) {
    static PFNGLGETNUNIFORMUIVPROC fptr = (PFNGLGETNUNIFORMUIVPROC) dasWglGetProcAddress("glGetnUniformuiv");
    (*fptr)(program, location, bufSize, params);
}

void glBlendParameteriNV ( GLenum pname, GLint value ) {
    static PFNGLBLENDPARAMETERINVPROC fptr = (PFNGLBLENDPARAMETERINVPROC) dasWglGetProcAddress("glBlendParameteriNV");
    (*fptr)(pname, value);
}

void glGetPerfMonitorCounterStringAMD ( GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString ) {
    static PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC fptr = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) dasWglGetProcAddress("glGetPerfMonitorCounterStringAMD");
    (*fptr)(group, counter, bufSize, length, counterString);
}

void glTexStorage1D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width ) {
    static PFNGLTEXSTORAGE1DPROC fptr = (PFNGLTEXSTORAGE1DPROC) dasWglGetProcAddress("glTexStorage1D");
    (*fptr)(target, levels, internalformat, width);
}

void glTextureImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXTUREIMAGE1DEXTPROC fptr = (PFNGLTEXTUREIMAGE1DEXTPROC) dasWglGetProcAddress("glTextureImage1DEXT");
    (*fptr)(texture, target, level, internalformat, width, border, format, type, pixels);
}

void glProgramUniformMatrix4fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) dasWglGetProcAddress("glProgramUniformMatrix4fv");
    (*fptr)(program, location, count, transpose, value);
}

void glDeleteBuffers ( GLsizei n, const GLuint * buffers ) {
    static PFNGLDELETEBUFFERSPROC fptr = (PFNGLDELETEBUFFERSPROC) dasWglGetProcAddress("glDeleteBuffers");
    (*fptr)(n, buffers);
}

void * glMapBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access ) {
    static PFNGLMAPBUFFERRANGEPROC fptr = (PFNGLMAPBUFFERRANGEPROC) dasWglGetProcAddress("glMapBufferRange");
    return (*fptr)(target, offset, length, access);
}

void glGetMultisamplefv ( GLenum pname, GLuint index, GLfloat * val ) {
    static PFNGLGETMULTISAMPLEFVPROC fptr = (PFNGLGETMULTISAMPLEFVPROC) dasWglGetProcAddress("glGetMultisamplefv");
    (*fptr)(pname, index, val);
}

void glDebugMessageInsert ( GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf ) {
    static PFNGLDEBUGMESSAGEINSERTPROC fptr = (PFNGLDEBUGMESSAGEINSERTPROC) dasWglGetProcAddress("glDebugMessageInsert");
    (*fptr)(source, type, id, severity, length, buf);
}

void glFlushMappedBufferRange ( GLenum target, GLintptr offset, GLsizeiptr length ) {
    static PFNGLFLUSHMAPPEDBUFFERRANGEPROC fptr = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) dasWglGetProcAddress("glFlushMappedBufferRange");
    (*fptr)(target, offset, length);
}

GLboolean glIsTransformFeedback ( GLuint id ) {
    static PFNGLISTRANSFORMFEEDBACKPROC fptr = (PFNGLISTRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glIsTransformFeedback");
    return (*fptr)(id);
}

void glGetFloatIndexedvEXT ( GLenum target, GLuint index, GLfloat * data ) {
    static PFNGLGETFLOATINDEXEDVEXTPROC fptr = (PFNGLGETFLOATINDEXEDVEXTPROC) dasWglGetProcAddress("glGetFloatIndexedvEXT");
    (*fptr)(target, index, data);
}

void glMakeImageHandleNonResidentNV ( GLuint64 handle ) {
    static PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC fptr = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) dasWglGetProcAddress("glMakeImageHandleNonResidentNV");
    (*fptr)(handle);
}

void glUniform1i64NV ( GLint location, GLint64EXT x ) {
    static PFNGLUNIFORM1I64NVPROC fptr = (PFNGLUNIFORM1I64NVPROC) dasWglGetProcAddress("glUniform1i64NV");
    (*fptr)(location, x);
}

void glFlushMappedNamedBufferRangeEXT ( GLuint buffer, GLintptr offset, GLsizeiptr length ) {
    static PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC fptr = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) dasWglGetProcAddress("glFlushMappedNamedBufferRangeEXT");
    (*fptr)(buffer, offset, length);
}

void glGetTextureParameterIuiv ( GLuint texture, GLenum pname, GLuint * params ) {
    static PFNGLGETTEXTUREPARAMETERIUIVPROC fptr = (PFNGLGETTEXTUREPARAMETERIUIVPROC) dasWglGetProcAddress("glGetTextureParameterIuiv");
    (*fptr)(texture, pname, params);
}

void glUniformMatrix4x2dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLUNIFORMMATRIX4X2DVPROC fptr = (PFNGLUNIFORMMATRIX4X2DVPROC) dasWglGetProcAddress("glUniformMatrix4x2dv");
    (*fptr)(location, count, transpose, value);
}

void glEndPerfQueryINTEL ( GLuint queryHandle ) {
    static PFNGLENDPERFQUERYINTELPROC fptr = (PFNGLENDPERFQUERYINTELPROC) dasWglGetProcAddress("glEndPerfQueryINTEL");
    (*fptr)(queryHandle);
}

void glDrawMeshTasksNV ( GLuint first, GLuint count ) {
    static PFNGLDRAWMESHTASKSNVPROC fptr = (PFNGLDRAWMESHTASKSNVPROC) dasWglGetProcAddress("glDrawMeshTasksNV");
    (*fptr)(first, count);
}

GLenum glPathGlyphIndexArrayNV ( GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale ) {
    static PFNGLPATHGLYPHINDEXARRAYNVPROC fptr = (PFNGLPATHGLYPHINDEXARRAYNVPROC) dasWglGetProcAddress("glPathGlyphIndexArrayNV");
    return (*fptr)(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

void glSampleCoverage ( GLfloat value, bool invert ) {
    static PFNGLSAMPLECOVERAGEPROC fptr = (PFNGLSAMPLECOVERAGEPROC) dasWglGetProcAddress("glSampleCoverage");
    (*fptr)(value, invert);
}

void glBlendFunci ( GLuint buf, GLenum src, GLenum dst ) {
    static PFNGLBLENDFUNCIPROC fptr = (PFNGLBLENDFUNCIPROC) dasWglGetProcAddress("glBlendFunci");
    (*fptr)(buf, src, dst);
}

void glMultiTexParameterIuivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLuint * params ) {
    static PFNGLMULTITEXPARAMETERIUIVEXTPROC fptr = (PFNGLMULTITEXPARAMETERIUIVEXTPROC) dasWglGetProcAddress("glMultiTexParameterIuivEXT");
    (*fptr)(texunit, target, pname, params);
}

void glStencilThenCoverFillPathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues ) {
    static PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) dasWglGetProcAddress("glStencilThenCoverFillPathInstancedNV");
    (*fptr)(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverStrokePathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues ) {
    static PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) dasWglGetProcAddress("glStencilThenCoverStrokePathInstancedNV");
    (*fptr)(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void glVertexAttribP2ui ( GLuint index, GLenum type, bool normalized, GLuint value ) {
    static PFNGLVERTEXATTRIBP2UIPROC fptr = (PFNGLVERTEXATTRIBP2UIPROC) dasWglGetProcAddress("glVertexAttribP2ui");
    (*fptr)(index, type, normalized, value);
}

void glBlendEquationSeparate ( GLenum modeRGB, GLenum modeAlpha ) {
    static PFNGLBLENDEQUATIONSEPARATEPROC fptr = (PFNGLBLENDEQUATIONSEPARATEPROC) dasWglGetProcAddress("glBlendEquationSeparate");
    (*fptr)(modeRGB, modeAlpha);
}

void glDebugMessageInsertARB ( GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf ) {
    static PFNGLDEBUGMESSAGEINSERTARBPROC fptr = (PFNGLDEBUGMESSAGEINSERTARBPROC) dasWglGetProcAddress("glDebugMessageInsertARB");
    (*fptr)(source, type, id, severity, length, buf);
}

void glVertexArrayVertexAttribDivisorEXT ( GLuint vaobj, GLuint index, GLuint divisor ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribDivisorEXT");
    (*fptr)(vaobj, index, divisor);
}

void glMultiTexImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLMULTITEXIMAGE1DEXTPROC fptr = (PFNGLMULTITEXIMAGE1DEXTPROC) dasWglGetProcAddress("glMultiTexImage1DEXT");
    (*fptr)(texunit, target, level, internalformat, width, border, format, type, pixels);
}

void glProgramUniform2ui64NV ( GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y ) {
    static PFNGLPROGRAMUNIFORM2UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM2UI64NVPROC) dasWglGetProcAddress("glProgramUniform2ui64NV");
    (*fptr)(program, location, x, y);
}

void glNormalFormatNV ( GLenum type, GLsizei stride ) {
    static PFNGLNORMALFORMATNVPROC fptr = (PFNGLNORMALFORMATNVPROC) dasWglGetProcAddress("glNormalFormatNV");
    (*fptr)(type, stride);
}

void glGetActiveSubroutineUniformiv ( GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values ) {
    static PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC fptr = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) dasWglGetProcAddress("glGetActiveSubroutineUniformiv");
    (*fptr)(program, shadertype, index, pname, values);
}

void glVertexAttribL1d ( GLuint index, GLdouble x ) {
    static PFNGLVERTEXATTRIBL1DPROC fptr = (PFNGLVERTEXATTRIBL1DPROC) dasWglGetProcAddress("glVertexAttribL1d");
    (*fptr)(index, x);
}

void glUniformMatrix3x4dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLUNIFORMMATRIX3X4DVPROC fptr = (PFNGLUNIFORMMATRIX3X4DVPROC) dasWglGetProcAddress("glUniformMatrix3x4dv");
    (*fptr)(location, count, transpose, value);
}

void glPathStencilDepthOffsetNV ( GLfloat factor, GLfloat units ) {
    static PFNGLPATHSTENCILDEPTHOFFSETNVPROC fptr = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC) dasWglGetProcAddress("glPathStencilDepthOffsetNV");
    (*fptr)(factor, units);
}

void glTextureImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXTUREIMAGE2DEXTPROC fptr = (PFNGLTEXTUREIMAGE2DEXTPROC) dasWglGetProcAddress("glTextureImage2DEXT");
    (*fptr)(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

void glMatrixLoadTranspose3x3fNV ( GLenum matrixMode, const GLfloat * m ) {
    static PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC fptr = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) dasWglGetProcAddress("glMatrixLoadTranspose3x3fNV");
    (*fptr)(matrixMode, m);
}

void glBlendEquationSeparatei ( GLuint buf, GLenum modeRGB, GLenum modeAlpha ) {
    static PFNGLBLENDEQUATIONSEPARATEIPROC fptr = (PFNGLBLENDEQUATIONSEPARATEIPROC) dasWglGetProcAddress("glBlendEquationSeparatei");
    (*fptr)(buf, modeRGB, modeAlpha);
}

void glCoverageModulationTableNV ( GLsizei n, const GLfloat * v ) {
    static PFNGLCOVERAGEMODULATIONTABLENVPROC fptr = (PFNGLCOVERAGEMODULATIONTABLENVPROC) dasWglGetProcAddress("glCoverageModulationTableNV");
    (*fptr)(n, v);
}

void glUniform2i64vARB ( GLint location, GLsizei count, const GLint64 * value ) {
    static PFNGLUNIFORM2I64VARBPROC fptr = (PFNGLUNIFORM2I64VARBPROC) dasWglGetProcAddress("glUniform2i64vARB");
    (*fptr)(location, count, value);
}

void glFramebufferSampleLocationsfvARB ( GLenum target, GLuint start, GLsizei count, const GLfloat * v ) {
    static PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC fptr = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) dasWglGetProcAddress("glFramebufferSampleLocationsfvARB");
    (*fptr)(target, start, count, v);
}

void glProgramUniformMatrix2x3fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2x3fvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glProgramUniform4dEXT ( GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w ) {
    static PFNGLPROGRAMUNIFORM4DEXTPROC fptr = (PFNGLPROGRAMUNIFORM4DEXTPROC) dasWglGetProcAddress("glProgramUniform4dEXT");
    (*fptr)(program, location, x, y, z, w);
}

void glGetPerfQueryIdByNameINTEL ( GLchar * queryName, GLuint * queryId ) {
    static PFNGLGETPERFQUERYIDBYNAMEINTELPROC fptr = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC) dasWglGetProcAddress("glGetPerfQueryIdByNameINTEL");
    (*fptr)(queryName, queryId);
}

void glGetVertexArrayPointervEXT ( GLuint vaobj, GLenum pname, void ** param ) {
    static PFNGLGETVERTEXARRAYPOINTERVEXTPROC fptr = (PFNGLGETVERTEXARRAYPOINTERVEXTPROC) dasWglGetProcAddress("glGetVertexArrayPointervEXT");
    (*fptr)(vaobj, pname, param);
}

void glFramebufferTexture1D ( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level ) {
    static PFNGLFRAMEBUFFERTEXTURE1DPROC fptr = (PFNGLFRAMEBUFFERTEXTURE1DPROC) dasWglGetProcAddress("glFramebufferTexture1D");
    (*fptr)(target, attachment, textarget, texture, level);
}

void glGetVertexArrayIndexed64iv ( GLuint vaobj, GLuint index, GLenum pname, GLint64 * param ) {
    static PFNGLGETVERTEXARRAYINDEXED64IVPROC fptr = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) dasWglGetProcAddress("glGetVertexArrayIndexed64iv");
    (*fptr)(vaobj, index, pname, param);
}

void glBindTransformFeedback ( GLenum target, GLuint id ) {
    static PFNGLBINDTRANSFORMFEEDBACKPROC fptr = (PFNGLBINDTRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glBindTransformFeedback");
    (*fptr)(target, id);
}

void glGetTextureImage ( GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels ) {
    static PFNGLGETTEXTUREIMAGEPROC fptr = (PFNGLGETTEXTUREIMAGEPROC) dasWglGetProcAddress("glGetTextureImage");
    (*fptr)(texture, level, format, type, bufSize, pixels);
}

GLuint glGetSubroutineIndex ( GLuint program, GLenum shadertype, const GLchar * name ) {
    static PFNGLGETSUBROUTINEINDEXPROC fptr = (PFNGLGETSUBROUTINEINDEXPROC) dasWglGetProcAddress("glGetSubroutineIndex");
    return (*fptr)(program, shadertype, name);
}

void glBindSamplers ( GLuint first, GLsizei count, const GLuint * samplers ) {
    static PFNGLBINDSAMPLERSPROC fptr = (PFNGLBINDSAMPLERSPROC) dasWglGetProcAddress("glBindSamplers");
    (*fptr)(first, count, samplers);
}

void glTexCoordFormatNV ( GLint size, GLenum type, GLsizei stride ) {
    static PFNGLTEXCOORDFORMATNVPROC fptr = (PFNGLTEXCOORDFORMATNVPROC) dasWglGetProcAddress("glTexCoordFormatNV");
    (*fptr)(size, type, stride);
}

void glDisableVertexAttribArray ( GLuint index ) {
    static PFNGLDISABLEVERTEXATTRIBARRAYPROC fptr = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) dasWglGetProcAddress("glDisableVertexAttribArray");
    (*fptr)(index);
}

void glProgramUniform2uiEXT ( GLuint program, GLint location, GLuint v0, GLuint v1 ) {
    static PFNGLPROGRAMUNIFORM2UIEXTPROC fptr = (PFNGLPROGRAMUNIFORM2UIEXTPROC) dasWglGetProcAddress("glProgramUniform2uiEXT");
    (*fptr)(program, location, v0, v1);
}

void glStencilThenCoverStrokePathNV ( GLuint path, GLint reference, GLuint mask, GLenum coverMode ) {
    static PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC fptr = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) dasWglGetProcAddress("glStencilThenCoverStrokePathNV");
    (*fptr)(path, reference, mask, coverMode);
}

void glGetVertexAttribIuiv ( GLuint index, GLenum pname, GLuint * params ) {
    static PFNGLGETVERTEXATTRIBIUIVPROC fptr = (PFNGLGETVERTEXATTRIBIUIVPROC) dasWglGetProcAddress("glGetVertexAttribIuiv");
    (*fptr)(index, pname, params);
}

void glBindTextureUnit ( GLuint unit, GLuint texture ) {
    static PFNGLBINDTEXTUREUNITPROC fptr = (PFNGLBINDTEXTUREUNITPROC) dasWglGetProcAddress("glBindTextureUnit");
    (*fptr)(unit, texture);
}

void glSubpixelPrecisionBiasNV ( GLuint xbits, GLuint ybits ) {
    static PFNGLSUBPIXELPRECISIONBIASNVPROC fptr = (PFNGLSUBPIXELPRECISIONBIASNVPROC) dasWglGetProcAddress("glSubpixelPrecisionBiasNV");
    (*fptr)(xbits, ybits);
}

GLboolean glIsFramebuffer ( GLuint framebuffer ) {
    static PFNGLISFRAMEBUFFERPROC fptr = (PFNGLISFRAMEBUFFERPROC) dasWglGetProcAddress("glIsFramebuffer");
    return (*fptr)(framebuffer);
}

void glMatrixMultTransposefEXT ( GLenum mode, const GLfloat * m ) {
    static PFNGLMATRIXMULTTRANSPOSEFEXTPROC fptr = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) dasWglGetProcAddress("glMatrixMultTransposefEXT");
    (*fptr)(mode, m);
}

void glPushClientAttribDefaultEXT ( GLbitfield mask ) {
    static PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC fptr = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) dasWglGetProcAddress("glPushClientAttribDefaultEXT");
    (*fptr)(mask);
}

void glProgramUniform4ui64NV ( GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w ) {
    static PFNGLPROGRAMUNIFORM4UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM4UI64NVPROC) dasWglGetProcAddress("glProgramUniform4ui64NV");
    (*fptr)(program, location, x, y, z, w);
}

void glDeleteNamedStringARB ( GLint namelen, const GLchar * name ) {
    static PFNGLDELETENAMEDSTRINGARBPROC fptr = (PFNGLDELETENAMEDSTRINGARBPROC) dasWglGetProcAddress("glDeleteNamedStringARB");
    (*fptr)(namelen, name);
}

void glProgramUniform3dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORM3DVPROC fptr = (PFNGLPROGRAMUNIFORM3DVPROC) dasWglGetProcAddress("glProgramUniform3dv");
    (*fptr)(program, location, count, value);
}

void glPathSubCoordsNV ( GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords ) {
    static PFNGLPATHSUBCOORDSNVPROC fptr = (PFNGLPATHSUBCOORDSNVPROC) dasWglGetProcAddress("glPathSubCoordsNV");
    (*fptr)(path, coordStart, numCoords, coordType, coords);
}

void glBindBufferBase ( GLenum target, GLuint index, GLuint buffer ) {
    static PFNGLBINDBUFFERBASEPROC fptr = (PFNGLBINDBUFFERBASEPROC) dasWglGetProcAddress("glBindBufferBase");
    (*fptr)(target, index, buffer);
}

void glMemoryBarrierByRegion ( GLbitfield barriers ) {
    static PFNGLMEMORYBARRIERBYREGIONPROC fptr = (PFNGLMEMORYBARRIERBYREGIONPROC) dasWglGetProcAddress("glMemoryBarrierByRegion");
    (*fptr)(barriers);
}

void glProgramUniform3iEXT ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2 ) {
    static PFNGLPROGRAMUNIFORM3IEXTPROC fptr = (PFNGLPROGRAMUNIFORM3IEXTPROC) dasWglGetProcAddress("glProgramUniform3iEXT");
    (*fptr)(program, location, v0, v1, v2);
}

void glFramebufferParameteri ( GLenum target, GLenum pname, GLint param ) {
    static PFNGLFRAMEBUFFERPARAMETERIPROC fptr = (PFNGLFRAMEBUFFERPARAMETERIPROC) dasWglGetProcAddress("glFramebufferParameteri");
    (*fptr)(target, pname, param);
}

void glEGLImageTargetTexStorageEXT ( GLenum target, GLeglImageOES image, const GLint * attrib_list ) {
    static PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC fptr = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) dasWglGetProcAddress("glEGLImageTargetTexStorageEXT");
    (*fptr)(target, image, attrib_list);
}

void glMakeTextureHandleResidentNV ( GLuint64 handle ) {
    static PFNGLMAKETEXTUREHANDLERESIDENTNVPROC fptr = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) dasWglGetProcAddress("glMakeTextureHandleResidentNV");
    (*fptr)(handle);
}

void glClearTexSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data ) {
    static PFNGLCLEARTEXSUBIMAGEPROC fptr = (PFNGLCLEARTEXSUBIMAGEPROC) dasWglGetProcAddress("glClearTexSubImage");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

void glVertexAttribL1ui64NV ( GLuint index, GLuint64EXT x ) {
    static PFNGLVERTEXATTRIBL1UI64NVPROC fptr = (PFNGLVERTEXATTRIBL1UI64NVPROC) dasWglGetProcAddress("glVertexAttribL1ui64NV");
    (*fptr)(index, x);
}

void glNamedFramebufferParameteri ( GLuint framebuffer, GLenum pname, GLint param ) {
    static PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC fptr = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) dasWglGetProcAddress("glNamedFramebufferParameteri");
    (*fptr)(framebuffer, pname, param);
}

void glProgramUniform1i64NV ( GLuint program, GLint location, GLint64EXT x ) {
    static PFNGLPROGRAMUNIFORM1I64NVPROC fptr = (PFNGLPROGRAMUNIFORM1I64NVPROC) dasWglGetProcAddress("glProgramUniform1i64NV");
    (*fptr)(program, location, x);
}

void glVertexAttrib2sv ( GLuint index, const GLshort * v ) {
    static PFNGLVERTEXATTRIB2SVPROC fptr = (PFNGLVERTEXATTRIB2SVPROC) dasWglGetProcAddress("glVertexAttrib2sv");
    (*fptr)(index, v);
}

void glMatrixMultTranspose3x3fNV ( GLenum matrixMode, const GLfloat * m ) {
    static PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC fptr = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) dasWglGetProcAddress("glMatrixMultTranspose3x3fNV");
    (*fptr)(matrixMode, m);
}

void glPathSubCommandsNV ( GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords ) {
    static PFNGLPATHSUBCOMMANDSNVPROC fptr = (PFNGLPATHSUBCOMMANDSNVPROC) dasWglGetProcAddress("glPathSubCommandsNV");
    (*fptr)(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

void glCoverageModulationNV ( GLenum components ) {
    static PFNGLCOVERAGEMODULATIONNVPROC fptr = (PFNGLCOVERAGEMODULATIONNVPROC) dasWglGetProcAddress("glCoverageModulationNV");
    (*fptr)(components);
}

void glBufferAttachMemoryNV ( GLenum target, GLuint memory, GLuint64 offset ) {
    static PFNGLBUFFERATTACHMEMORYNVPROC fptr = (PFNGLBUFFERATTACHMEMORYNVPROC) dasWglGetProcAddress("glBufferAttachMemoryNV");
    (*fptr)(target, memory, offset);
}

void glGetProgramInterfaceiv ( GLuint program, GLenum programInterface, GLenum pname, GLint * params ) {
    static PFNGLGETPROGRAMINTERFACEIVPROC fptr = (PFNGLGETPROGRAMINTERFACEIVPROC) dasWglGetProcAddress("glGetProgramInterfaceiv");
    (*fptr)(program, programInterface, pname, params);
}

GLboolean glIsNamedBufferResidentNV ( GLuint buffer ) {
    static PFNGLISNAMEDBUFFERRESIDENTNVPROC fptr = (PFNGLISNAMEDBUFFERRESIDENTNVPROC) dasWglGetProcAddress("glIsNamedBufferResidentNV");
    return (*fptr)(buffer);
}

void glDispatchCompute ( GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z ) {
    static PFNGLDISPATCHCOMPUTEPROC fptr = (PFNGLDISPATCHCOMPUTEPROC) dasWglGetProcAddress("glDispatchCompute");
    (*fptr)(num_groups_x, num_groups_y, num_groups_z);
}

void glGetnTexImageARB ( GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img ) {
    static PFNGLGETNTEXIMAGEARBPROC fptr = (PFNGLGETNTEXIMAGEARBPROC) dasWglGetProcAddress("glGetnTexImageARB");
    (*fptr)(target, level, format, type, bufSize, img);
}

void glTexBuffer ( GLenum target, GLenum internalformat, GLuint buffer ) {
    static PFNGLTEXBUFFERPROC fptr = (PFNGLTEXBUFFERPROC) dasWglGetProcAddress("glTexBuffer");
    (*fptr)(target, internalformat, buffer);
}

void glClipControl ( GLenum origin, GLenum depth ) {
    static PFNGLCLIPCONTROLPROC fptr = (PFNGLCLIPCONTROLPROC) dasWglGetProcAddress("glClipControl");
    (*fptr)(origin, depth);
}

void glVertexAttribDivisorARB ( GLuint index, GLuint divisor ) {
    static PFNGLVERTEXATTRIBDIVISORARBPROC fptr = (PFNGLVERTEXATTRIBDIVISORARBPROC) dasWglGetProcAddress("glVertexAttribDivisorARB");
    (*fptr)(index, divisor);
}

void glProgramUniformMatrix2x4fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2x4fvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glBeginConditionalRender ( GLuint id, GLenum mode ) {
    static PFNGLBEGINCONDITIONALRENDERPROC fptr = (PFNGLBEGINCONDITIONALRENDERPROC) dasWglGetProcAddress("glBeginConditionalRender");
    (*fptr)(id, mode);
}

void glInsertEventMarkerEXT ( GLsizei length, const GLchar * marker ) {
    static PFNGLINSERTEVENTMARKEREXTPROC fptr = (PFNGLINSERTEVENTMARKEREXTPROC) dasWglGetProcAddress("glInsertEventMarkerEXT");
    (*fptr)(length, marker);
}

void glFramebufferFetchBarrierEXT (  ) {
    static PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC fptr = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) dasWglGetProcAddress("glFramebufferFetchBarrierEXT");
    (*fptr)();
}

void glUniform2i64vNV ( GLint location, GLsizei count, const GLint64EXT * value ) {
    static PFNGLUNIFORM2I64VNVPROC fptr = (PFNGLUNIFORM2I64VNVPROC) dasWglGetProcAddress("glUniform2i64vNV");
    (*fptr)(location, count, value);
}

void glTextureStorage3DEXT ( GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth ) {
    static PFNGLTEXTURESTORAGE3DEXTPROC fptr = (PFNGLTEXTURESTORAGE3DEXTPROC) dasWglGetProcAddress("glTextureStorage3DEXT");
    (*fptr)(texture, target, levels, internalformat, width, height, depth);
}

void glCreateFramebuffers ( GLsizei n, GLuint * framebuffers ) {
    static PFNGLCREATEFRAMEBUFFERSPROC fptr = (PFNGLCREATEFRAMEBUFFERSPROC) dasWglGetProcAddress("glCreateFramebuffers");
    (*fptr)(n, framebuffers);
}

void glCompressedTexSubImage1D ( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data ) {
    static PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC fptr = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) dasWglGetProcAddress("glCompressedTexSubImage1D");
    (*fptr)(target, level, xoffset, width, format, imageSize, data);
}

GLenum glGetGraphicsResetStatusARB (  ) {
    static PFNGLGETGRAPHICSRESETSTATUSARBPROC fptr = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) dasWglGetProcAddress("glGetGraphicsResetStatusARB");
    return (*fptr)();
}

void glGetNamedProgramStringEXT ( GLuint program, GLenum target, GLenum pname, void * string ) {
    static PFNGLGETNAMEDPROGRAMSTRINGEXTPROC fptr = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) dasWglGetProcAddress("glGetNamedProgramStringEXT");
    (*fptr)(program, target, pname, string);
}

void glMatrixLoad3x3fNV ( GLenum matrixMode, const GLfloat * m ) {
    static PFNGLMATRIXLOAD3X3FNVPROC fptr = (PFNGLMATRIXLOAD3X3FNVPROC) dasWglGetProcAddress("glMatrixLoad3x3fNV");
    (*fptr)(matrixMode, m);
}

void glUniformMatrix4x2fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLUNIFORMMATRIX4X2FVPROC fptr = (PFNGLUNIFORMMATRIX4X2FVPROC) dasWglGetProcAddress("glUniformMatrix4x2fv");
    (*fptr)(location, count, transpose, value);
}

void glCommandListSegmentsNV ( GLuint list, GLuint segments ) {
    static PFNGLCOMMANDLISTSEGMENTSNVPROC fptr = (PFNGLCOMMANDLISTSEGMENTSNVPROC) dasWglGetProcAddress("glCommandListSegmentsNV");
    (*fptr)(list, segments);
}

void glEnableIndexedEXT ( GLenum target, GLuint index ) {
    static PFNGLENABLEINDEXEDEXTPROC fptr = (PFNGLENABLEINDEXEDEXTPROC) dasWglGetProcAddress("glEnableIndexedEXT");
    (*fptr)(target, index);
}

void glUniform2ui64vARB ( GLint location, GLsizei count, const GLuint64 * value ) {
    static PFNGLUNIFORM2UI64VARBPROC fptr = (PFNGLUNIFORM2UI64VARBPROC) dasWglGetProcAddress("glUniform2ui64vARB");
    (*fptr)(location, count, value);
}

void glViewportIndexedfv ( GLuint index, const GLfloat * v ) {
    static PFNGLVIEWPORTINDEXEDFVPROC fptr = (PFNGLVIEWPORTINDEXEDFVPROC) dasWglGetProcAddress("glViewportIndexedfv");
    (*fptr)(index, v);
}

void glGetObjectLabelEXT ( GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label ) {
    static PFNGLGETOBJECTLABELEXTPROC fptr = (PFNGLGETOBJECTLABELEXTPROC) dasWglGetProcAddress("glGetObjectLabelEXT");
    (*fptr)(type, object, bufSize, length, label);
}

void glColorMaski ( GLuint index, bool r, bool g, bool b, bool a ) {
    static PFNGLCOLORMASKIPROC fptr = (PFNGLCOLORMASKIPROC) dasWglGetProcAddress("glColorMaski");
    (*fptr)(index, r, g, b, a);
}

void glDrawTransformFeedbackStream ( GLenum mode, GLuint id, GLuint stream ) {
    static PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) dasWglGetProcAddress("glDrawTransformFeedbackStream");
    (*fptr)(mode, id, stream);
}

void glCompressedTexImage3D ( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data ) {
    static PFNGLCOMPRESSEDTEXIMAGE3DPROC fptr = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) dasWglGetProcAddress("glCompressedTexImage3D");
    (*fptr)(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCreateVertexArrays ( GLsizei n, GLuint * arrays ) {
    static PFNGLCREATEVERTEXARRAYSPROC fptr = (PFNGLCREATEVERTEXARRAYSPROC) dasWglGetProcAddress("glCreateVertexArrays");
    (*fptr)(n, arrays);
}

void glCompressedMultiTexImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexImage2DEXT");
    (*fptr)(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

void glDrawElementsIndirect ( GLenum mode, GLenum type, const void * indirect ) {
    static PFNGLDRAWELEMENTSINDIRECTPROC fptr = (PFNGLDRAWELEMENTSINDIRECTPROC) dasWglGetProcAddress("glDrawElementsIndirect");
    (*fptr)(mode, type, indirect);
}

void glGetActiveAtomicCounterBufferiv ( GLuint program, GLuint bufferIndex, GLenum pname, GLint * params ) {
    static PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC fptr = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) dasWglGetProcAddress("glGetActiveAtomicCounterBufferiv");
    (*fptr)(program, bufferIndex, pname, params);
}

void glGetActiveUniformsiv ( GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params ) {
    static PFNGLGETACTIVEUNIFORMSIVPROC fptr = (PFNGLGETACTIVEUNIFORMSIVPROC) dasWglGetProcAddress("glGetActiveUniformsiv");
    (*fptr)(program, uniformCount, uniformIndices, pname, params);
}

void glBindTextures ( GLuint first, GLsizei count, const GLuint * textures ) {
    static PFNGLBINDTEXTURESPROC fptr = (PFNGLBINDTEXTURESPROC) dasWglGetProcAddress("glBindTextures");
    (*fptr)(first, count, textures);
}

void glGetNamedBufferSubDataEXT ( GLuint buffer, GLintptr offset, GLsizeiptr size, void * data ) {
    static PFNGLGETNAMEDBUFFERSUBDATAEXTPROC fptr = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) dasWglGetProcAddress("glGetNamedBufferSubDataEXT");
    (*fptr)(buffer, offset, size, data);
}

void glProgramUniform2fEXT ( GLuint program, GLint location, GLfloat v0, GLfloat v1 ) {
    static PFNGLPROGRAMUNIFORM2FEXTPROC fptr = (PFNGLPROGRAMUNIFORM2FEXTPROC) dasWglGetProcAddress("glProgramUniform2fEXT");
    (*fptr)(program, location, v0, v1);
}

void glProgramUniformMatrix4x3dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4x3dvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glPolygonOffsetClampEXT ( GLfloat factor, GLfloat units, GLfloat clamp ) {
    static PFNGLPOLYGONOFFSETCLAMPEXTPROC fptr = (PFNGLPOLYGONOFFSETCLAMPEXTPROC) dasWglGetProcAddress("glPolygonOffsetClampEXT");
    (*fptr)(factor, units, clamp);
}

void glMatrixMult3x2fNV ( GLenum matrixMode, const GLfloat * m ) {
    static PFNGLMATRIXMULT3X2FNVPROC fptr = (PFNGLMATRIXMULT3X2FNVPROC) dasWglGetProcAddress("glMatrixMult3x2fNV");
    (*fptr)(matrixMode, m);
}

GLboolean glIsEnabledIndexedEXT ( GLenum target, GLuint index ) {
    static PFNGLISENABLEDINDEXEDEXTPROC fptr = (PFNGLISENABLEDINDEXEDEXTPROC) dasWglGetProcAddress("glIsEnabledIndexedEXT");
    return (*fptr)(target, index);
}

GLboolean glIsPathNV ( GLuint path ) {
    static PFNGLISPATHNVPROC fptr = (PFNGLISPATHNVPROC) dasWglGetProcAddress("glIsPathNV");
    return (*fptr)(path);
}

GLuint glCreateShaderProgramv ( GLenum type, GLsizei count, const GLchar *const * strings ) {
    static PFNGLCREATESHADERPROGRAMVPROC fptr = (PFNGLCREATESHADERPROGRAMVPROC) dasWglGetProcAddress("glCreateShaderProgramv");
    return (*fptr)(type, count, strings);
}

void glUniformMatrix3x4fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLUNIFORMMATRIX3X4FVPROC fptr = (PFNGLUNIFORMMATRIX3X4FVPROC) dasWglGetProcAddress("glUniformMatrix3x4fv");
    (*fptr)(location, count, transpose, value);
}

void glViewportIndexedf ( GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h ) {
    static PFNGLVIEWPORTINDEXEDFPROC fptr = (PFNGLVIEWPORTINDEXEDFPROC) dasWglGetProcAddress("glViewportIndexedf");
    (*fptr)(index, x, y, w, h);
}

void glBindImageTextures ( GLuint first, GLsizei count, const GLuint * textures ) {
    static PFNGLBINDIMAGETEXTURESPROC fptr = (PFNGLBINDIMAGETEXTURESPROC) dasWglGetProcAddress("glBindImageTextures");
    (*fptr)(first, count, textures);
}

GLenum glCheckFramebufferStatus ( GLenum target ) {
    static PFNGLCHECKFRAMEBUFFERSTATUSPROC fptr = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) dasWglGetProcAddress("glCheckFramebufferStatus");
    return (*fptr)(target);
}

void glTextureParameterIiv ( GLuint texture, GLenum pname, const GLint * params ) {
    static PFNGLTEXTUREPARAMETERIIVPROC fptr = (PFNGLTEXTUREPARAMETERIIVPROC) dasWglGetProcAddress("glTextureParameterIiv");
    (*fptr)(texture, pname, params);
}

void glCopyTextureSubImage1DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width ) {
    static PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) dasWglGetProcAddress("glCopyTextureSubImage1DEXT");
    (*fptr)(texture, target, level, xoffset, x, y, width);
}

void glPathParameterivNV ( GLuint path, GLenum pname, const GLint * value ) {
    static PFNGLPATHPARAMETERIVNVPROC fptr = (PFNGLPATHPARAMETERIVNVPROC) dasWglGetProcAddress("glPathParameterivNV");
    (*fptr)(path, pname, value);
}

GLint glGetUniformLocation ( GLuint program, const GLchar * name ) {
    static PFNGLGETUNIFORMLOCATIONPROC fptr = (PFNGLGETUNIFORMLOCATIONPROC) dasWglGetProcAddress("glGetUniformLocation");
    return (*fptr)(program, name);
}

void glUniformHandleui64vARB ( GLint location, GLsizei count, const GLuint64 * value ) {
    static PFNGLUNIFORMHANDLEUI64VARBPROC fptr = (PFNGLUNIFORMHANDLEUI64VARBPROC) dasWglGetProcAddress("glUniformHandleui64vARB");
    (*fptr)(location, count, value);
}

void glMatrixLoadTransposefEXT ( GLenum mode, const GLfloat * m ) {
    static PFNGLMATRIXLOADTRANSPOSEFEXTPROC fptr = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) dasWglGetProcAddress("glMatrixLoadTransposefEXT");
    (*fptr)(mode, m);
}

void glMultiTexCoordPointerEXT ( GLenum texunit, GLint size, GLenum type, GLsizei stride, const void * pointer ) {
    static PFNGLMULTITEXCOORDPOINTEREXTPROC fptr = (PFNGLMULTITEXCOORDPOINTEREXTPROC) dasWglGetProcAddress("glMultiTexCoordPointerEXT");
    (*fptr)(texunit, size, type, stride, pointer);
}

void glGetFramebufferParameterivEXT ( GLuint framebuffer, GLenum pname, GLint * params ) {
    static PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetFramebufferParameterivEXT");
    (*fptr)(framebuffer, pname, params);
}

void glMakeNamedBufferNonResidentNV ( GLuint buffer ) {
    static PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC fptr = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC) dasWglGetProcAddress("glMakeNamedBufferNonResidentNV");
    (*fptr)(buffer);
}

void glVertexAttribL3i64NV ( GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z ) {
    static PFNGLVERTEXATTRIBL3I64NVPROC fptr = (PFNGLVERTEXATTRIBL3I64NVPROC) dasWglGetProcAddress("glVertexAttribL3i64NV");
    (*fptr)(index, x, y, z);
}

void glTextureStorage2DMultisample ( GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations ) {
    static PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC fptr = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) dasWglGetProcAddress("glTextureStorage2DMultisample");
    (*fptr)(texture, samples, internalformat, width, height, fixedsamplelocations);
}

void glBlendEquation ( GLenum mode ) {
    static PFNGLBLENDEQUATIONPROC fptr = (PFNGLBLENDEQUATIONPROC) dasWglGetProcAddress("glBlendEquation");
    (*fptr)(mode);
}

GLuint64 glGetTextureHandleNV ( GLuint texture ) {
    static PFNGLGETTEXTUREHANDLENVPROC fptr = (PFNGLGETTEXTUREHANDLENVPROC) dasWglGetProcAddress("glGetTextureHandleNV");
    return (*fptr)(texture);
}

void glFramebufferTexture ( GLenum target, GLenum attachment, GLuint texture, GLint level ) {
    static PFNGLFRAMEBUFFERTEXTUREPROC fptr = (PFNGLFRAMEBUFFERTEXTUREPROC) dasWglGetProcAddress("glFramebufferTexture");
    (*fptr)(target, attachment, texture, level);
}

void glProgramBinary ( GLuint program, GLenum binaryFormat, const void * binary, GLsizei length ) {
    static PFNGLPROGRAMBINARYPROC fptr = (PFNGLPROGRAMBINARYPROC) dasWglGetProcAddress("glProgramBinary");
    (*fptr)(program, binaryFormat, binary, length);
}

void glGetTextureParameterfvEXT ( GLuint texture, GLenum target, GLenum pname, GLfloat * params ) {
    static PFNGLGETTEXTUREPARAMETERFVEXTPROC fptr = (PFNGLGETTEXTUREPARAMETERFVEXTPROC) dasWglGetProcAddress("glGetTextureParameterfvEXT");
    (*fptr)(texture, target, pname, params);
}

void glDepthRangef ( GLfloat n, GLfloat f ) {
    static PFNGLDEPTHRANGEFPROC fptr = (PFNGLDEPTHRANGEFPROC) dasWglGetProcAddress("glDepthRangef");
    (*fptr)(n, f);
}

void glUniform4i64NV ( GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w ) {
    static PFNGLUNIFORM4I64NVPROC fptr = (PFNGLUNIFORM4I64NVPROC) dasWglGetProcAddress("glUniform4i64NV");
    (*fptr)(location, x, y, z, w);
}

void glNamedFramebufferTexture2DEXT ( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) dasWglGetProcAddress("glNamedFramebufferTexture2DEXT");
    (*fptr)(framebuffer, attachment, textarget, texture, level);
}

void glNamedBufferPageCommitmentEXT ( GLuint buffer, GLintptr offset, GLsizeiptr size, bool commit ) {
    static PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC fptr = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) dasWglGetProcAddress("glNamedBufferPageCommitmentEXT");
    (*fptr)(buffer, offset, size, commit);
}

void glProgramUniform1uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLPROGRAMUNIFORM1UIVPROC fptr = (PFNGLPROGRAMUNIFORM1UIVPROC) dasWglGetProcAddress("glProgramUniform1uiv");
    (*fptr)(program, location, count, value);
}

void glProgramUniform2ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value ) {
    static PFNGLPROGRAMUNIFORM2IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM2IVEXTPROC) dasWglGetProcAddress("glProgramUniform2ivEXT");
    (*fptr)(program, location, count, value);
}

void glGetNamedProgramLocalParameterIuivEXT ( GLuint program, GLenum target, GLuint index, GLuint * params ) {
    static PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC fptr = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) dasWglGetProcAddress("glGetNamedProgramLocalParameterIuivEXT");
    (*fptr)(program, target, index, params);
}

void glCoverFillPathNV ( GLuint path, GLenum coverMode ) {
    static PFNGLCOVERFILLPATHNVPROC fptr = (PFNGLCOVERFILLPATHNVPROC) dasWglGetProcAddress("glCoverFillPathNV");
    (*fptr)(path, coverMode);
}

void glGetShadingRateImagePaletteNV ( GLuint viewport, GLuint entry, GLenum * rate ) {
    static PFNGLGETSHADINGRATEIMAGEPALETTENVPROC fptr = (PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) dasWglGetProcAddress("glGetShadingRateImagePaletteNV");
    (*fptr)(viewport, entry, rate);
}

void * glMapNamedBufferRange ( GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access ) {
    static PFNGLMAPNAMEDBUFFERRANGEPROC fptr = (PFNGLMAPNAMEDBUFFERRANGEPROC) dasWglGetProcAddress("glMapNamedBufferRange");
    return (*fptr)(buffer, offset, length, access);
}

void glProgramUniform4fv ( GLuint program, GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORM4FVPROC fptr = (PFNGLPROGRAMUNIFORM4FVPROC) dasWglGetProcAddress("glProgramUniform4fv");
    (*fptr)(program, location, count, value);
}

void glCopyTextureSubImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height ) {
    static PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) dasWglGetProcAddress("glCopyTextureSubImage3DEXT");
    (*fptr)(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glGetUniformSubroutineuiv ( GLenum shadertype, GLint location, GLuint * params ) {
    static PFNGLGETUNIFORMSUBROUTINEUIVPROC fptr = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) dasWglGetProcAddress("glGetUniformSubroutineuiv");
    (*fptr)(shadertype, location, params);
}

void glGetBufferParameteri64v ( GLenum target, GLenum pname, GLint64 * params ) {
    static PFNGLGETBUFFERPARAMETERI64VPROC fptr = (PFNGLGETBUFFERPARAMETERI64VPROC) dasWglGetProcAddress("glGetBufferParameteri64v");
    (*fptr)(target, pname, params);
}

void glGetCompressedTextureSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels ) {
    static PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC fptr = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) dasWglGetProcAddress("glGetCompressedTextureSubImage");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

void glVertexArrayVertexAttribLOffsetEXT ( GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribLOffsetEXT");
    (*fptr)(vaobj, buffer, index, size, type, stride, offset);
}

void glTextureBufferEXT ( GLuint texture, GLenum target, GLenum internalformat, GLuint buffer ) {
    static PFNGLTEXTUREBUFFEREXTPROC fptr = (PFNGLTEXTUREBUFFEREXTPROC) dasWglGetProcAddress("glTextureBufferEXT");
    (*fptr)(texture, target, internalformat, buffer);
}

void glClearDepthf ( GLfloat d ) {
    static PFNGLCLEARDEPTHFPROC fptr = (PFNGLCLEARDEPTHFPROC) dasWglGetProcAddress("glClearDepthf");
    (*fptr)(d);
}

void glGetDoublei_vEXT ( GLenum pname, GLuint index, GLdouble * params ) {
    static PFNGLGETDOUBLEI_VEXTPROC fptr = (PFNGLGETDOUBLEI_VEXTPROC) dasWglGetProcAddress("glGetDoublei_vEXT");
    (*fptr)(pname, index, params);
}

void glProgramUniformMatrix2x4dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) dasWglGetProcAddress("glProgramUniformMatrix2x4dv");
    (*fptr)(program, location, count, transpose, value);
}

void glTexStorage2D ( GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLTEXSTORAGE2DPROC fptr = (PFNGLTEXSTORAGE2DPROC) dasWglGetProcAddress("glTexStorage2D");
    (*fptr)(target, levels, internalformat, width, height);
}

void glVertexAttribP3uiv ( GLuint index, GLenum type, bool normalized, const GLuint * value ) {
    static PFNGLVERTEXATTRIBP3UIVPROC fptr = (PFNGLVERTEXATTRIBP3UIVPROC) dasWglGetProcAddress("glVertexAttribP3uiv");
    (*fptr)(index, type, normalized, value);
}

void glGetPathSpacingNV ( GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing ) {
    static PFNGLGETPATHSPACINGNVPROC fptr = (PFNGLGETPATHSPACINGNVPROC) dasWglGetProcAddress("glGetPathSpacingNV");
    (*fptr)(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glVertexAttribIPointer ( GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer ) {
    static PFNGLVERTEXATTRIBIPOINTERPROC fptr = (PFNGLVERTEXATTRIBIPOINTERPROC) dasWglGetProcAddress("glVertexAttribIPointer");
    (*fptr)(index, size, type, stride, pointer);
}

void glProgramParameteriARB ( GLuint program, GLenum pname, GLint value ) {
    static PFNGLPROGRAMPARAMETERIARBPROC fptr = (PFNGLPROGRAMPARAMETERIARBPROC) dasWglGetProcAddress("glProgramParameteriARB");
    (*fptr)(program, pname, value);
}

void glMultiDrawElementsBaseVertex ( GLenum mode, const GLsizei * count, GLenum type, const void *const * indices, GLsizei drawcount, const GLint * basevertex ) {
    static PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC fptr = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) dasWglGetProcAddress("glMultiDrawElementsBaseVertex");
    (*fptr)(mode, count, type, indices, drawcount, basevertex);
}

void glBindFramebuffer ( GLenum target, GLuint framebuffer ) {
    static PFNGLBINDFRAMEBUFFERPROC fptr = (PFNGLBINDFRAMEBUFFERPROC) dasWglGetProcAddress("glBindFramebuffer");
    (*fptr)(target, framebuffer);
}

void glGetFramebufferParameteriv ( GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETFRAMEBUFFERPARAMETERIVPROC fptr = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) dasWglGetProcAddress("glGetFramebufferParameteriv");
    (*fptr)(target, pname, params);
}

void glGetUniformuiv ( GLuint program, GLint location, GLuint * params ) {
    static PFNGLGETUNIFORMUIVPROC fptr = (PFNGLGETUNIFORMUIVPROC) dasWglGetProcAddress("glGetUniformuiv");
    (*fptr)(program, location, params);
}

void glVertexAttribL3dv ( GLuint index, const GLdouble * v ) {
    static PFNGLVERTEXATTRIBL3DVPROC fptr = (PFNGLVERTEXATTRIBL3DVPROC) dasWglGetProcAddress("glVertexAttribL3dv");
    (*fptr)(index, v);
}

void glPathGlyphRangeNV ( GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale ) {
    static PFNGLPATHGLYPHRANGENVPROC fptr = (PFNGLPATHGLYPHRANGENVPROC) dasWglGetProcAddress("glPathGlyphRangeNV");
    (*fptr)(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glSamplerParameteri ( GLuint sampler, GLenum pname, GLint param ) {
    static PFNGLSAMPLERPARAMETERIPROC fptr = (PFNGLSAMPLERPARAMETERIPROC) dasWglGetProcAddress("glSamplerParameteri");
    (*fptr)(sampler, pname, param);
}

void glTextureView ( GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers ) {
    static PFNGLTEXTUREVIEWPROC fptr = (PFNGLTEXTUREVIEWPROC) dasWglGetProcAddress("glTextureView");
    (*fptr)(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glDeleteStatesNV ( GLsizei n, const GLuint * states ) {
    static PFNGLDELETESTATESNVPROC fptr = (PFNGLDELETESTATESNVPROC) dasWglGetProcAddress("glDeleteStatesNV");
    (*fptr)(n, states);
}

void glCallCommandListNV ( GLuint list ) {
    static PFNGLCALLCOMMANDLISTNVPROC fptr = (PFNGLCALLCOMMANDLISTNVPROC) dasWglGetProcAddress("glCallCommandListNV");
    (*fptr)(list);
}

void glTextureBarrier (  ) {
    static PFNGLTEXTUREBARRIERPROC fptr = (PFNGLTEXTUREBARRIERPROC) dasWglGetProcAddress("glTextureBarrier");
    (*fptr)();
}

GLboolean glIsSampler ( GLuint sampler ) {
    static PFNGLISSAMPLERPROC fptr = (PFNGLISSAMPLERPROC) dasWglGetProcAddress("glIsSampler");
    return (*fptr)(sampler);
}

GLsync glCreateSyncFromCLeventARB ( struct _cl_context * context, struct _cl_event * event, GLbitfield flags ) {
    static PFNGLCREATESYNCFROMCLEVENTARBPROC fptr = (PFNGLCREATESYNCFROMCLEVENTARBPROC) dasWglGetProcAddress("glCreateSyncFromCLeventARB");
    return (*fptr)(context, event, flags);
}

void glGetQueryiv ( GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETQUERYIVPROC fptr = (PFNGLGETQUERYIVPROC) dasWglGetProcAddress("glGetQueryiv");
    (*fptr)(target, pname, params);
}

void glCompressedTextureSubImage2DEXT ( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) dasWglGetProcAddress("glCompressedTextureSubImage2DEXT");
    (*fptr)(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

void glNamedCopyBufferSubDataEXT ( GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size ) {
    static PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC fptr = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) dasWglGetProcAddress("glNamedCopyBufferSubDataEXT");
    (*fptr)(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glMatrixPushEXT ( GLenum mode ) {
    static PFNGLMATRIXPUSHEXTPROC fptr = (PFNGLMATRIXPUSHEXTPROC) dasWglGetProcAddress("glMatrixPushEXT");
    (*fptr)(mode);
}

void glProgramUniform4i64vARB ( GLuint program, GLint location, GLsizei count, const GLint64 * value ) {
    static PFNGLPROGRAMUNIFORM4I64VARBPROC fptr = (PFNGLPROGRAMUNIFORM4I64VARBPROC) dasWglGetProcAddress("glProgramUniform4i64vARB");
    (*fptr)(program, location, count, value);
}

GLint glGetFragDataIndex ( GLuint program, const GLchar * name ) {
    static PFNGLGETFRAGDATAINDEXPROC fptr = (PFNGLGETFRAGDATAINDEXPROC) dasWglGetProcAddress("glGetFragDataIndex");
    return (*fptr)(program, name);
}

void glTexParameterIiv ( GLenum target, GLenum pname, const GLint * params ) {
    static PFNGLTEXPARAMETERIIVPROC fptr = (PFNGLTEXPARAMETERIIVPROC) dasWglGetProcAddress("glTexParameterIiv");
    (*fptr)(target, pname, params);
}

void glProgramUniform1ivEXT ( GLuint program, GLint location, GLsizei count, const GLint * value ) {
    static PFNGLPROGRAMUNIFORM1IVEXTPROC fptr = (PFNGLPROGRAMUNIFORM1IVEXTPROC) dasWglGetProcAddress("glProgramUniform1ivEXT");
    (*fptr)(program, location, count, value);
}

void glQueryCounter ( GLuint id, GLenum target ) {
    static PFNGLQUERYCOUNTERPROC fptr = (PFNGLQUERYCOUNTERPROC) dasWglGetProcAddress("glQueryCounter");
    (*fptr)(id, target);
}

GLint glGetSubroutineUniformLocation ( GLuint program, GLenum shadertype, const GLchar * name ) {
    static PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC fptr = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) dasWglGetProcAddress("glGetSubroutineUniformLocation");
    return (*fptr)(program, shadertype, name);
}

void glGenerateMultiTexMipmapEXT ( GLenum texunit, GLenum target ) {
    static PFNGLGENERATEMULTITEXMIPMAPEXTPROC fptr = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC) dasWglGetProcAddress("glGenerateMultiTexMipmapEXT");
    (*fptr)(texunit, target);
}

void glProgramUniformMatrix2x3dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2x3dvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glProgramUniform4i64NV ( GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w ) {
    static PFNGLPROGRAMUNIFORM4I64NVPROC fptr = (PFNGLPROGRAMUNIFORM4I64NVPROC) dasWglGetProcAddress("glProgramUniform4i64NV");
    (*fptr)(program, location, x, y, z, w);
}

void glNamedStringARB ( GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string ) {
    static PFNGLNAMEDSTRINGARBPROC fptr = (PFNGLNAMEDSTRINGARBPROC) dasWglGetProcAddress("glNamedStringARB");
    (*fptr)(type, namelen, name, stringlen, string);
}

void glGetnUniformuivARB ( GLuint program, GLint location, GLsizei bufSize, GLuint * params ) {
    static PFNGLGETNUNIFORMUIVARBPROC fptr = (PFNGLGETNUNIFORMUIVARBPROC) dasWglGetProcAddress("glGetnUniformuivARB");
    (*fptr)(program, location, bufSize, params);
}

void glGenFramebuffers ( GLsizei n, GLuint * framebuffers ) {
    static PFNGLGENFRAMEBUFFERSPROC fptr = (PFNGLGENFRAMEBUFFERSPROC) dasWglGetProcAddress("glGenFramebuffers");
    (*fptr)(n, framebuffers);
}

void glPathGlyphsNV ( GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale ) {
    static PFNGLPATHGLYPHSNVPROC fptr = (PFNGLPATHGLYPHSNVPROC) dasWglGetProcAddress("glPathGlyphsNV");
    (*fptr)(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

void glDispatchComputeIndirect ( GLintptr indirect ) {
    static PFNGLDISPATCHCOMPUTEINDIRECTPROC fptr = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) dasWglGetProcAddress("glDispatchComputeIndirect");
    (*fptr)(indirect);
}

void glGetUniformIndices ( GLuint program, GLsizei uniformCount, const GLchar *const * uniformNames, GLuint * uniformIndices ) {
    static PFNGLGETUNIFORMINDICESPROC fptr = (PFNGLGETUNIFORMINDICESPROC) dasWglGetProcAddress("glGetUniformIndices");
    (*fptr)(program, uniformCount, uniformNames, uniformIndices);
}

void glVertexArrayVertexAttribLFormatEXT ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribLFormatEXT");
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
}

void glInvalidateSubFramebuffer ( GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height ) {
    static PFNGLINVALIDATESUBFRAMEBUFFERPROC fptr = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) dasWglGetProcAddress("glInvalidateSubFramebuffer");
    (*fptr)(target, numAttachments, attachments, x, y, width, height);
}

void glPushDebugGroup ( GLenum source, GLuint id, GLsizei length, const GLchar * message ) {
    static PFNGLPUSHDEBUGGROUPPROC fptr = (PFNGLPUSHDEBUGGROUPPROC) dasWglGetProcAddress("glPushDebugGroup");
    (*fptr)(source, id, length, message);
}

void glFramebufferReadBufferEXT ( GLuint framebuffer, GLenum mode ) {
    static PFNGLFRAMEBUFFERREADBUFFEREXTPROC fptr = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC) dasWglGetProcAddress("glFramebufferReadBufferEXT");
    (*fptr)(framebuffer, mode);
}

void glSamplerParameterf ( GLuint sampler, GLenum pname, GLfloat param ) {
    static PFNGLSAMPLERPARAMETERFPROC fptr = (PFNGLSAMPLERPARAMETERFPROC) dasWglGetProcAddress("glSamplerParameterf");
    (*fptr)(sampler, pname, param);
}

void glVertexAttribL2i64NV ( GLuint index, GLint64EXT x, GLint64EXT y ) {
    static PFNGLVERTEXATTRIBL2I64NVPROC fptr = (PFNGLVERTEXATTRIBL2I64NVPROC) dasWglGetProcAddress("glVertexAttribL2i64NV");
    (*fptr)(index, x, y);
}

void glReadnPixels ( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data ) {
    static PFNGLREADNPIXELSPROC fptr = (PFNGLREADNPIXELSPROC) dasWglGetProcAddress("glReadnPixels");
    (*fptr)(x, y, width, height, format, type, bufSize, data);
}

void glGetActiveAttrib ( GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name ) {
    static PFNGLGETACTIVEATTRIBPROC fptr = (PFNGLGETACTIVEATTRIBPROC) dasWglGetProcAddress("glGetActiveAttrib");
    (*fptr)(program, index, bufSize, length, size, type, name);
}

void glGetProgramBinary ( GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary ) {
    static PFNGLGETPROGRAMBINARYPROC fptr = (PFNGLGETPROGRAMBINARYPROC) dasWglGetProcAddress("glGetProgramBinary");
    (*fptr)(program, bufSize, length, binaryFormat, binary);
}

void glTexPageCommitmentARB ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, bool commit ) {
    static PFNGLTEXPAGECOMMITMENTARBPROC fptr = (PFNGLTEXPAGECOMMITMENTARBPROC) dasWglGetProcAddress("glTexPageCommitmentARB");
    (*fptr)(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

void glVertexAttribL3ui64NV ( GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z ) {
    static PFNGLVERTEXATTRIBL3UI64NVPROC fptr = (PFNGLVERTEXATTRIBL3UI64NVPROC) dasWglGetProcAddress("glVertexAttribL3ui64NV");
    (*fptr)(index, x, y, z);
}

void glMultiDrawArraysIndirectCountARB ( GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride ) {
    static PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC fptr = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) dasWglGetProcAddress("glMultiDrawArraysIndirectCountARB");
    (*fptr)(mode, indirect, drawcount, maxdrawcount, stride);
}

void glReleaseShaderCompiler (  ) {
    static PFNGLRELEASESHADERCOMPILERPROC fptr = (PFNGLRELEASESHADERCOMPILERPROC) dasWglGetProcAddress("glReleaseShaderCompiler");
    (*fptr)();
}

void glTransformFeedbackBufferBase ( GLuint xfb, GLuint index, GLuint buffer ) {
    static PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC fptr = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) dasWglGetProcAddress("glTransformFeedbackBufferBase");
    (*fptr)(xfb, index, buffer);
}

void glPrimitiveBoundingBoxARB ( GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW ) {
    static PFNGLPRIMITIVEBOUNDINGBOXARBPROC fptr = (PFNGLPRIMITIVEBOUNDINGBOXARBPROC) dasWglGetProcAddress("glPrimitiveBoundingBoxARB");
    (*fptr)(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void glProgramUniform4dv ( GLuint program, GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORM4DVPROC fptr = (PFNGLPROGRAMUNIFORM4DVPROC) dasWglGetProcAddress("glProgramUniform4dv");
    (*fptr)(program, location, count, value);
}

void glGetCompressedMultiTexImageEXT ( GLenum texunit, GLenum target, GLint lod, void * img ) {
    static PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC fptr = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) dasWglGetProcAddress("glGetCompressedMultiTexImageEXT");
    (*fptr)(texunit, target, lod, img);
}

void glVertexArrayBindVertexBufferEXT ( GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride ) {
    static PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC fptr = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC) dasWglGetProcAddress("glVertexArrayBindVertexBufferEXT");
    (*fptr)(vaobj, bindingindex, buffer, offset, stride);
}

void glGetCoverageModulationTableNV ( GLsizei bufSize, GLfloat * v ) {
    static PFNGLGETCOVERAGEMODULATIONTABLENVPROC fptr = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC) dasWglGetProcAddress("glGetCoverageModulationTableNV");
    (*fptr)(bufSize, v);
}

void glPointParameteri ( GLenum pname, GLint param ) {
    static PFNGLPOINTPARAMETERIPROC fptr = (PFNGLPOINTPARAMETERIPROC) dasWglGetProcAddress("glPointParameteri");
    (*fptr)(pname, param);
}

void glDebugMessageCallback ( GLDEBUGPROC callback, const void * userParam ) {
    static PFNGLDEBUGMESSAGECALLBACKPROC fptr = (PFNGLDEBUGMESSAGECALLBACKPROC) dasWglGetProcAddress("glDebugMessageCallback");
    (*fptr)(callback, userParam);
}

void glMatrixTranslatefEXT ( GLenum mode, GLfloat x, GLfloat y, GLfloat z ) {
    static PFNGLMATRIXTRANSLATEFEXTPROC fptr = (PFNGLMATRIXTRANSLATEFEXTPROC) dasWglGetProcAddress("glMatrixTranslatefEXT");
    (*fptr)(mode, x, y, z);
}

void glGetMultiTexParameterivEXT ( GLenum texunit, GLenum target, GLenum pname, GLint * params ) {
    static PFNGLGETMULTITEXPARAMETERIVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetMultiTexParameterivEXT");
    (*fptr)(texunit, target, pname, params);
}

void glCompressedMultiTexSubImage3DEXT ( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC fptr = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) dasWglGetProcAddress("glCompressedMultiTexSubImage3DEXT");
    (*fptr)(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

void glTextureBuffer ( GLuint texture, GLenum internalformat, GLuint buffer ) {
    static PFNGLTEXTUREBUFFERPROC fptr = (PFNGLTEXTUREBUFFERPROC) dasWglGetProcAddress("glTextureBuffer");
    (*fptr)(texture, internalformat, buffer);
}

void glVertexArrayTexCoordOffsetEXT ( GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayTexCoordOffsetEXT");
    (*fptr)(vaobj, buffer, size, type, stride, offset);
}

void glProgramUniformMatrix2x4fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) dasWglGetProcAddress("glProgramUniformMatrix2x4fv");
    (*fptr)(program, location, count, transpose, value);
}

void glProgramUniform4iv ( GLuint program, GLint location, GLsizei count, const GLint * value ) {
    static PFNGLPROGRAMUNIFORM4IVPROC fptr = (PFNGLPROGRAMUNIFORM4IVPROC) dasWglGetProcAddress("glProgramUniform4iv");
    (*fptr)(program, location, count, value);
}

void glProgramUniform4uivEXT ( GLuint program, GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLPROGRAMUNIFORM4UIVEXTPROC fptr = (PFNGLPROGRAMUNIFORM4UIVEXTPROC) dasWglGetProcAddress("glProgramUniform4uivEXT");
    (*fptr)(program, location, count, value);
}

void glStencilFuncSeparate ( GLenum face, GLenum func, GLint ref, GLuint mask ) {
    static PFNGLSTENCILFUNCSEPARATEPROC fptr = (PFNGLSTENCILFUNCSEPARATEPROC) dasWglGetProcAddress("glStencilFuncSeparate");
    (*fptr)(face, func, ref, mask);
}

void glScissorIndexedv ( GLuint index, const GLint * v ) {
    static PFNGLSCISSORINDEXEDVPROC fptr = (PFNGLSCISSORINDEXEDVPROC) dasWglGetProcAddress("glScissorIndexedv");
    (*fptr)(index, v);
}

void glGetUniformui64vNV ( GLuint program, GLint location, GLuint64EXT * params ) {
    static PFNGLGETUNIFORMUI64VNVPROC fptr = (PFNGLGETUNIFORMUI64VNVPROC) dasWglGetProcAddress("glGetUniformui64vNV");
    (*fptr)(program, location, params);
}

void glVertexAttribL1ui64vARB ( GLuint index, const GLuint64EXT * v ) {
    static PFNGLVERTEXATTRIBL1UI64VARBPROC fptr = (PFNGLVERTEXATTRIBL1UI64VARBPROC) dasWglGetProcAddress("glVertexAttribL1ui64vARB");
    (*fptr)(index, v);
}

void glPointParameterf ( GLenum pname, GLfloat param ) {
    static PFNGLPOINTPARAMETERFPROC fptr = (PFNGLPOINTPARAMETERFPROC) dasWglGetProcAddress("glPointParameterf");
    (*fptr)(pname, param);
}

void glDrawArraysInstancedBaseInstance ( GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance ) {
    static PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC fptr = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) dasWglGetProcAddress("glDrawArraysInstancedBaseInstance");
    (*fptr)(mode, first, count, instancecount, baseinstance);
}

void glTextureSubImage1D ( GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXTURESUBIMAGE1DPROC fptr = (PFNGLTEXTURESUBIMAGE1DPROC) dasWglGetProcAddress("glTextureSubImage1D");
    (*fptr)(texture, level, xoffset, width, format, type, pixels);
}

void glFramebufferTextureLayerARB ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer ) {
    static PFNGLFRAMEBUFFERTEXTURELAYERARBPROC fptr = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) dasWglGetProcAddress("glFramebufferTextureLayerARB");
    (*fptr)(target, attachment, texture, level, layer);
}

void glTexturePageCommitmentEXT ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, bool commit ) {
    static PFNGLTEXTUREPAGECOMMITMENTEXTPROC fptr = (PFNGLTEXTUREPAGECOMMITMENTEXTPROC) dasWglGetProcAddress("glTexturePageCommitmentEXT");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

void glNamedProgramLocalParameterI4ivEXT ( GLuint program, GLenum target, GLuint index, const GLint * params ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParameterI4ivEXT");
    (*fptr)(program, target, index, params);
}

void glWindowRectanglesEXT ( GLenum mode, GLsizei count, const GLint * box ) {
    static PFNGLWINDOWRECTANGLESEXTPROC fptr = (PFNGLWINDOWRECTANGLESEXTPROC) dasWglGetProcAddress("glWindowRectanglesEXT");
    (*fptr)(mode, count, box);
}

void glMatrixMult3x3fNV ( GLenum matrixMode, const GLfloat * m ) {
    static PFNGLMATRIXMULT3X3FNVPROC fptr = (PFNGLMATRIXMULT3X3FNVPROC) dasWglGetProcAddress("glMatrixMult3x3fNV");
    (*fptr)(matrixMode, m);
}

void glGetUniformi64vNV ( GLuint program, GLint location, GLint64EXT * params ) {
    static PFNGLGETUNIFORMI64VNVPROC fptr = (PFNGLGETUNIFORMI64VNVPROC) dasWglGetProcAddress("glGetUniformi64vNV");
    (*fptr)(program, location, params);
}

void glEnableVertexArrayEXT ( GLuint vaobj, GLenum array ) {
    static PFNGLENABLEVERTEXARRAYEXTPROC fptr = (PFNGLENABLEVERTEXARRAYEXTPROC) dasWglGetProcAddress("glEnableVertexArrayEXT");
    (*fptr)(vaobj, array);
}

void glAttachShader ( GLuint program, GLuint shader ) {
    static PFNGLATTACHSHADERPROC fptr = (PFNGLATTACHSHADERPROC) dasWglGetProcAddress("glAttachShader");
    (*fptr)(program, shader);
}

void glGetMultiTexGenfvEXT ( GLenum texunit, GLenum coord, GLenum pname, GLfloat * params ) {
    static PFNGLGETMULTITEXGENFVEXTPROC fptr = (PFNGLGETMULTITEXGENFVEXTPROC) dasWglGetProcAddress("glGetMultiTexGenfvEXT");
    (*fptr)(texunit, coord, pname, params);
}

void glGetTextureSubImage ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels ) {
    static PFNGLGETTEXTURESUBIMAGEPROC fptr = (PFNGLGETTEXTURESUBIMAGEPROC) dasWglGetProcAddress("glGetTextureSubImage");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
}

void glWaitVkSemaphoreNV ( GLuint64 vkSemaphore ) {
    static PFNGLWAITVKSEMAPHORENVPROC fptr = (PFNGLWAITVKSEMAPHORENVPROC) dasWglGetProcAddress("glWaitVkSemaphoreNV");
    (*fptr)(vkSemaphore);
}

void glDeleteRenderbuffers ( GLsizei n, const GLuint * renderbuffers ) {
    static PFNGLDELETERENDERBUFFERSPROC fptr = (PFNGLDELETERENDERBUFFERSPROC) dasWglGetProcAddress("glDeleteRenderbuffers");
    (*fptr)(n, renderbuffers);
}

void glViewportPositionWScaleNV ( GLuint index, GLfloat xcoeff, GLfloat ycoeff ) {
    static PFNGLVIEWPORTPOSITIONWSCALENVPROC fptr = (PFNGLVIEWPORTPOSITIONWSCALENVPROC) dasWglGetProcAddress("glViewportPositionWScaleNV");
    (*fptr)(index, xcoeff, ycoeff);
}

void glCoverStrokePathNV ( GLuint path, GLenum coverMode ) {
    static PFNGLCOVERSTROKEPATHNVPROC fptr = (PFNGLCOVERSTROKEPATHNVPROC) dasWglGetProcAddress("glCoverStrokePathNV");
    (*fptr)(path, coverMode);
}

void glMatrixLoadIdentityEXT ( GLenum mode ) {
    static PFNGLMATRIXLOADIDENTITYEXTPROC fptr = (PFNGLMATRIXLOADIDENTITYEXTPROC) dasWglGetProcAddress("glMatrixLoadIdentityEXT");
    (*fptr)(mode);
}

void glUniform4i64vARB ( GLint location, GLsizei count, const GLint64 * value ) {
    static PFNGLUNIFORM4I64VARBPROC fptr = (PFNGLUNIFORM4I64VARBPROC) dasWglGetProcAddress("glUniform4i64vARB");
    (*fptr)(location, count, value);
}

void glGenVertexArrays ( GLsizei n, GLuint * arrays ) {
    static PFNGLGENVERTEXARRAYSPROC fptr = (PFNGLGENVERTEXARRAYSPROC) dasWglGetProcAddress("glGenVertexArrays");
    (*fptr)(n, arrays);
}

void glClearNamedFramebufferuiv ( GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value ) {
    static PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC fptr = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) dasWglGetProcAddress("glClearNamedFramebufferuiv");
    (*fptr)(framebuffer, buffer, drawbuffer, value);
}

GLboolean glIsEnabledi ( GLenum target, GLuint index ) {
    static PFNGLISENABLEDIPROC fptr = (PFNGLISENABLEDIPROC) dasWglGetProcAddress("glIsEnabledi");
    return (*fptr)(target, index);
}

void glVertexAttribL4dv ( GLuint index, const GLdouble * v ) {
    static PFNGLVERTEXATTRIBL4DVPROC fptr = (PFNGLVERTEXATTRIBL4DVPROC) dasWglGetProcAddress("glVertexAttribL4dv");
    (*fptr)(index, v);
}

void glProgramUniform1i64ARB ( GLuint program, GLint location, GLint64 x ) {
    static PFNGLPROGRAMUNIFORM1I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM1I64ARBPROC) dasWglGetProcAddress("glProgramUniform1i64ARB");
    (*fptr)(program, location, x);
}

void glClearDepthdNV ( GLdouble depth ) {
    static PFNGLCLEARDEPTHDNVPROC fptr = (PFNGLCLEARDEPTHDNVPROC) dasWglGetProcAddress("glClearDepthdNV");
    (*fptr)(depth);
}

void glDeleteProgram ( GLuint program ) {
    static PFNGLDELETEPROGRAMPROC fptr = (PFNGLDELETEPROGRAMPROC) dasWglGetProcAddress("glDeleteProgram");
    (*fptr)(program);
}

void glGetFramebufferAttachmentParameteriv ( GLenum target, GLenum attachment, GLenum pname, GLint * params ) {
    static PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC fptr = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) dasWglGetProcAddress("glGetFramebufferAttachmentParameteriv");
    (*fptr)(target, attachment, pname, params);
}

void glMaxShaderCompilerThreadsKHR ( GLuint count ) {
    static PFNGLMAXSHADERCOMPILERTHREADSKHRPROC fptr = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) dasWglGetProcAddress("glMaxShaderCompilerThreadsKHR");
    (*fptr)(count);
}

void glGenQueries ( GLsizei n, GLuint * ids ) {
    static PFNGLGENQUERIESPROC fptr = (PFNGLGENQUERIESPROC) dasWglGetProcAddress("glGenQueries");
    (*fptr)(n, ids);
}

void glGetVertexAttribdv ( GLuint index, GLenum pname, GLdouble * params ) {
    static PFNGLGETVERTEXATTRIBDVPROC fptr = (PFNGLGETVERTEXATTRIBDVPROC) dasWglGetProcAddress("glGetVertexAttribdv");
    (*fptr)(index, pname, params);
}

void glGetVertexAttribfv ( GLuint index, GLenum pname, GLfloat * params ) {
    static PFNGLGETVERTEXATTRIBFVPROC fptr = (PFNGLGETVERTEXATTRIBFVPROC) dasWglGetProcAddress("glGetVertexAttribfv");
    (*fptr)(index, pname, params);
}

void glDeleteFramebuffers ( GLsizei n, const GLuint * framebuffers ) {
    static PFNGLDELETEFRAMEBUFFERSPROC fptr = (PFNGLDELETEFRAMEBUFFERSPROC) dasWglGetProcAddress("glDeleteFramebuffers");
    (*fptr)(n, framebuffers);
}

void glProgramUniform4ui ( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3 ) {
    static PFNGLPROGRAMUNIFORM4UIPROC fptr = (PFNGLPROGRAMUNIFORM4UIPROC) dasWglGetProcAddress("glProgramUniform4ui");
    (*fptr)(program, location, v0, v1, v2, v3);
}

void glMultiTexParameterIivEXT ( GLenum texunit, GLenum target, GLenum pname, const GLint * params ) {
    static PFNGLMULTITEXPARAMETERIIVEXTPROC fptr = (PFNGLMULTITEXPARAMETERIIVEXTPROC) dasWglGetProcAddress("glMultiTexParameterIivEXT");
    (*fptr)(texunit, target, pname, params);
}

void glTextureRenderbufferEXT ( GLuint texture, GLenum target, GLuint renderbuffer ) {
    static PFNGLTEXTURERENDERBUFFEREXTPROC fptr = (PFNGLTEXTURERENDERBUFFEREXTPROC) dasWglGetProcAddress("glTextureRenderbufferEXT");
    (*fptr)(texture, target, renderbuffer);
}

void glGetVertexAttribiv ( GLuint index, GLenum pname, GLint * params ) {
    static PFNGLGETVERTEXATTRIBIVPROC fptr = (PFNGLGETVERTEXATTRIBIVPROC) dasWglGetProcAddress("glGetVertexAttribiv");
    (*fptr)(index, pname, params);
}

void glGetInteger64v ( GLenum pname, GLint64 * data ) {
    static PFNGLGETINTEGER64VPROC fptr = (PFNGLGETINTEGER64VPROC) dasWglGetProcAddress("glGetInteger64v");
    (*fptr)(pname, data);
}

void glGetIntegerIndexedvEXT ( GLenum target, GLuint index, GLint * data ) {
    static PFNGLGETINTEGERINDEXEDVEXTPROC fptr = (PFNGLGETINTEGERINDEXEDVEXTPROC) dasWglGetProcAddress("glGetIntegerIndexedvEXT");
    (*fptr)(target, index, data);
}

void glFramebufferDrawBufferEXT ( GLuint framebuffer, GLenum mode ) {
    static PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC fptr = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) dasWglGetProcAddress("glFramebufferDrawBufferEXT");
    (*fptr)(framebuffer, mode);
}

void glVertexArrayAttribLFormat ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset ) {
    static PFNGLVERTEXARRAYATTRIBLFORMATPROC fptr = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) dasWglGetProcAddress("glVertexArrayAttribLFormat");
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
}

void glGetShaderSource ( GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source ) {
    static PFNGLGETSHADERSOURCEPROC fptr = (PFNGLGETSHADERSOURCEPROC) dasWglGetProcAddress("glGetShaderSource");
    (*fptr)(shader, bufSize, length, source);
}

void glProgramUniform4i64ARB ( GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w ) {
    static PFNGLPROGRAMUNIFORM4I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM4I64ARBPROC) dasWglGetProcAddress("glProgramUniform4i64ARB");
    (*fptr)(program, location, x, y, z, w);
}

GLint glGetProgramResourceLocationIndex ( GLuint program, GLenum programInterface, const GLchar * name ) {
    static PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC fptr = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) dasWglGetProcAddress("glGetProgramResourceLocationIndex");
    return (*fptr)(program, programInterface, name);
}

void glProgramUniformMatrix2x3dv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) dasWglGetProcAddress("glProgramUniformMatrix2x3dv");
    (*fptr)(program, location, count, transpose, value);
}

void glProgramUniform2i64ARB ( GLuint program, GLint location, GLint64 x, GLint64 y ) {
    static PFNGLPROGRAMUNIFORM2I64ARBPROC fptr = (PFNGLPROGRAMUNIFORM2I64ARBPROC) dasWglGetProcAddress("glProgramUniform2i64ARB");
    (*fptr)(program, location, x, y);
}

void glVertexAttribI1iv ( GLuint index, const GLint * v ) {
    static PFNGLVERTEXATTRIBI1IVPROC fptr = (PFNGLVERTEXATTRIBI1IVPROC) dasWglGetProcAddress("glVertexAttribI1iv");
    (*fptr)(index, v);
}

void glNamedFramebufferDrawBuffer ( GLuint framebuffer, GLenum buf ) {
    static PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC fptr = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) dasWglGetProcAddress("glNamedFramebufferDrawBuffer");
    (*fptr)(framebuffer, buf);
}

void glNamedFramebufferSampleLocationsfvARB ( GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v ) {
    static PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC fptr = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) dasWglGetProcAddress("glNamedFramebufferSampleLocationsfvARB");
    (*fptr)(framebuffer, start, count, v);
}

void glGetProgramiv ( GLuint program, GLenum pname, GLint * params ) {
    static PFNGLGETPROGRAMIVPROC fptr = (PFNGLGETPROGRAMIVPROC) dasWglGetProcAddress("glGetProgramiv");
    (*fptr)(program, pname, params);
}

void glGetCompressedTexImage ( GLenum target, GLint level, void * img ) {
    static PFNGLGETCOMPRESSEDTEXIMAGEPROC fptr = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) dasWglGetProcAddress("glGetCompressedTexImage");
    (*fptr)(target, level, img);
}

void glVertexAttribL2ui64NV ( GLuint index, GLuint64EXT x, GLuint64EXT y ) {
    static PFNGLVERTEXATTRIBL2UI64NVPROC fptr = (PFNGLVERTEXATTRIBL2UI64NVPROC) dasWglGetProcAddress("glVertexAttribL2ui64NV");
    (*fptr)(index, x, y);
}

void glTexParameterIuiv ( GLenum target, GLenum pname, const GLuint * params ) {
    static PFNGLTEXPARAMETERIUIVPROC fptr = (PFNGLTEXPARAMETERIUIVPROC) dasWglGetProcAddress("glTexParameterIuiv");
    (*fptr)(target, pname, params);
}

void glTextureSubImage2D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXTURESUBIMAGE2DPROC fptr = (PFNGLTEXTURESUBIMAGE2DPROC) dasWglGetProcAddress("glTextureSubImage2D");
    (*fptr)(texture, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glUniform1uiv ( GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLUNIFORM1UIVPROC fptr = (PFNGLUNIFORM1UIVPROC) dasWglGetProcAddress("glUniform1uiv");
    (*fptr)(location, count, value);
}

void glVertexArrayAttribIFormat ( GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset ) {
    static PFNGLVERTEXARRAYATTRIBIFORMATPROC fptr = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) dasWglGetProcAddress("glVertexArrayAttribIFormat");
    (*fptr)(vaobj, attribindex, size, type, relativeoffset);
}

GLenum glGetGraphicsResetStatus (  ) {
    static PFNGLGETGRAPHICSRESETSTATUSPROC fptr = (PFNGLGETGRAPHICSRESETSTATUSPROC) dasWglGetProcAddress("glGetGraphicsResetStatus");
    return (*fptr)();
}

void glMultiTexGendvEXT ( GLenum texunit, GLenum coord, GLenum pname, const GLdouble * params ) {
    static PFNGLMULTITEXGENDVEXTPROC fptr = (PFNGLMULTITEXGENDVEXTPROC) dasWglGetProcAddress("glMultiTexGendvEXT");
    (*fptr)(texunit, coord, pname, params);
}

GLboolean glIsVertexArray ( GLuint array ) {
    static PFNGLISVERTEXARRAYPROC fptr = (PFNGLISVERTEXARRAYPROC) dasWglGetProcAddress("glIsVertexArray");
    return (*fptr)(array);
}

void glProgramUniform3fEXT ( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2 ) {
    static PFNGLPROGRAMUNIFORM3FEXTPROC fptr = (PFNGLPROGRAMUNIFORM3FEXTPROC) dasWglGetProcAddress("glProgramUniform3fEXT");
    (*fptr)(program, location, v0, v1, v2);
}

void glUniform2ui ( GLint location, GLuint v0, GLuint v1 ) {
    static PFNGLUNIFORM2UIPROC fptr = (PFNGLUNIFORM2UIPROC) dasWglGetProcAddress("glUniform2ui");
    (*fptr)(location, v0, v1);
}

void glGetShadingRateSampleLocationivNV ( GLenum rate, GLuint samples, GLuint index, GLint * location ) {
    static PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC fptr = (PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) dasWglGetProcAddress("glGetShadingRateSampleLocationivNV");
    (*fptr)(rate, samples, index, location);
}

void glBlitFramebuffer ( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter ) {
    static PFNGLBLITFRAMEBUFFERPROC fptr = (PFNGLBLITFRAMEBUFFERPROC) dasWglGetProcAddress("glBlitFramebuffer");
    (*fptr)(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glUniform2dv ( GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLUNIFORM2DVPROC fptr = (PFNGLUNIFORM2DVPROC) dasWglGetProcAddress("glUniform2dv");
    (*fptr)(location, count, value);
}

void glDisableVertexArrayEXT ( GLuint vaobj, GLenum array ) {
    static PFNGLDISABLEVERTEXARRAYEXTPROC fptr = (PFNGLDISABLEVERTEXARRAYEXTPROC) dasWglGetProcAddress("glDisableVertexArrayEXT");
    (*fptr)(vaobj, array);
}

GLboolean glIsCommandListNV ( GLuint list ) {
    static PFNGLISCOMMANDLISTNVPROC fptr = (PFNGLISCOMMANDLISTNVPROC) dasWglGetProcAddress("glIsCommandListNV");
    return (*fptr)(list);
}

void glGetBufferParameterui64vNV ( GLenum target, GLenum pname, GLuint64EXT * params ) {
    static PFNGLGETBUFFERPARAMETERUI64VNVPROC fptr = (PFNGLGETBUFFERPARAMETERUI64VNVPROC) dasWglGetProcAddress("glGetBufferParameterui64vNV");
    (*fptr)(target, pname, params);
}

void glTextureParameterfvEXT ( GLuint texture, GLenum target, GLenum pname, const GLfloat * params ) {
    static PFNGLTEXTUREPARAMETERFVEXTPROC fptr = (PFNGLTEXTUREPARAMETERFVEXTPROC) dasWglGetProcAddress("glTextureParameterfvEXT");
    (*fptr)(texture, target, pname, params);
}

void glGetnUniformdvARB ( GLuint program, GLint location, GLsizei bufSize, GLdouble * params ) {
    static PFNGLGETNUNIFORMDVARBPROC fptr = (PFNGLGETNUNIFORMDVARBPROC) dasWglGetProcAddress("glGetnUniformdvARB");
    (*fptr)(program, location, bufSize, params);
}

void glUniformHandleui64ARB ( GLint location, GLuint64 value ) {
    static PFNGLUNIFORMHANDLEUI64ARBPROC fptr = (PFNGLUNIFORMHANDLEUI64ARBPROC) dasWglGetProcAddress("glUniformHandleui64ARB");
    (*fptr)(location, value);
}

void glUniform2iv ( GLint location, GLsizei count, const GLint * value ) {
    static PFNGLUNIFORM2IVPROC fptr = (PFNGLUNIFORM2IVPROC) dasWglGetProcAddress("glUniform2iv");
    (*fptr)(location, count, value);
}

void glPathCoordsNV ( GLuint path, GLsizei numCoords, GLenum coordType, const void * coords ) {
    static PFNGLPATHCOORDSNVPROC fptr = (PFNGLPATHCOORDSNVPROC) dasWglGetProcAddress("glPathCoordsNV");
    (*fptr)(path, numCoords, coordType, coords);
}

void glStencilFillPathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues ) {
    static PFNGLSTENCILFILLPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC) dasWglGetProcAddress("glStencilFillPathInstancedNV");
    (*fptr)(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glGetPathParameterfvNV ( GLuint path, GLenum pname, GLfloat * value ) {
    static PFNGLGETPATHPARAMETERFVNVPROC fptr = (PFNGLGETPATHPARAMETERFVNVPROC) dasWglGetProcAddress("glGetPathParameterfvNV");
    (*fptr)(path, pname, value);
}

void glConservativeRasterParameterfNV ( GLenum pname, GLfloat value ) {
    static PFNGLCONSERVATIVERASTERPARAMETERFNVPROC fptr = (PFNGLCONSERVATIVERASTERPARAMETERFNVPROC) dasWglGetProcAddress("glConservativeRasterParameterfNV");
    (*fptr)(pname, value);
}

void glProgramUniformMatrix2fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix2fvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glBindMultiTextureEXT ( GLenum texunit, GLenum target, GLuint texture ) {
    static PFNGLBINDMULTITEXTUREEXTPROC fptr = (PFNGLBINDMULTITEXTUREEXTPROC) dasWglGetProcAddress("glBindMultiTextureEXT");
    (*fptr)(texunit, target, texture);
}

void glTexSubImage3D ( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXSUBIMAGE3DPROC fptr = (PFNGLTEXSUBIMAGE3DPROC) dasWglGetProcAddress("glTexSubImage3D");
    (*fptr)(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glGetQueryObjectuiv ( GLuint id, GLenum pname, GLuint * params ) {
    static PFNGLGETQUERYOBJECTUIVPROC fptr = (PFNGLGETQUERYOBJECTUIVPROC) dasWglGetProcAddress("glGetQueryObjectuiv");
    (*fptr)(id, pname, params);
}

void glMultiTexBufferEXT ( GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer ) {
    static PFNGLMULTITEXBUFFEREXTPROC fptr = (PFNGLMULTITEXBUFFEREXTPROC) dasWglGetProcAddress("glMultiTexBufferEXT");
    (*fptr)(texunit, target, internalformat, buffer);
}

void glCreateCommandListsNV ( GLsizei n, GLuint * lists ) {
    static PFNGLCREATECOMMANDLISTSNVPROC fptr = (PFNGLCREATECOMMANDLISTSNVPROC) dasWglGetProcAddress("glCreateCommandListsNV");
    (*fptr)(n, lists);
}

void glPatchParameterfv ( GLenum pname, const GLfloat * values ) {
    static PFNGLPATCHPARAMETERFVPROC fptr = (PFNGLPATCHPARAMETERFVPROC) dasWglGetProcAddress("glPatchParameterfv");
    (*fptr)(pname, values);
}

void glUniformMatrix2dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLUNIFORMMATRIX2DVPROC fptr = (PFNGLUNIFORMMATRIX2DVPROC) dasWglGetProcAddress("glUniformMatrix2dv");
    (*fptr)(location, count, transpose, value);
}

void glGetIntegerui64i_vNV ( GLenum value, GLuint index, GLuint64EXT * result ) {
    static PFNGLGETINTEGERUI64I_VNVPROC fptr = (PFNGLGETINTEGERUI64I_VNVPROC) dasWglGetProcAddress("glGetIntegerui64i_vNV");
    (*fptr)(value, index, result);
}

void glMatrixScalefEXT ( GLenum mode, GLfloat x, GLfloat y, GLfloat z ) {
    static PFNGLMATRIXSCALEFEXTPROC fptr = (PFNGLMATRIXSCALEFEXTPROC) dasWglGetProcAddress("glMatrixScalefEXT");
    (*fptr)(mode, x, y, z);
}

void glVertexAttribL1dv ( GLuint index, const GLdouble * v ) {
    static PFNGLVERTEXATTRIBL1DVPROC fptr = (PFNGLVERTEXATTRIBL1DVPROC) dasWglGetProcAddress("glVertexAttribL1dv");
    (*fptr)(index, v);
}

void glValidateProgramPipeline ( GLuint pipeline ) {
    static PFNGLVALIDATEPROGRAMPIPELINEPROC fptr = (PFNGLVALIDATEPROGRAMPIPELINEPROC) dasWglGetProcAddress("glValidateProgramPipeline");
    (*fptr)(pipeline);
}

void glTextureParameterIuiv ( GLuint texture, GLenum pname, const GLuint * params ) {
    static PFNGLTEXTUREPARAMETERIUIVPROC fptr = (PFNGLTEXTUREPARAMETERIUIVPROC) dasWglGetProcAddress("glTextureParameterIuiv");
    (*fptr)(texture, pname, params);
}

void glProgramUniformui64vNV ( GLuint program, GLint location, GLsizei count, const GLuint64EXT * value ) {
    static PFNGLPROGRAMUNIFORMUI64VNVPROC fptr = (PFNGLPROGRAMUNIFORMUI64VNVPROC) dasWglGetProcAddress("glProgramUniformui64vNV");
    (*fptr)(program, location, count, value);
}

GLboolean glIsProgramPipeline ( GLuint pipeline ) {
    static PFNGLISPROGRAMPIPELINEPROC fptr = (PFNGLISPROGRAMPIPELINEPROC) dasWglGetProcAddress("glIsProgramPipeline");
    return (*fptr)(pipeline);
}

void glResetMemoryObjectParameterNV ( GLuint memory, GLenum pname ) {
    static PFNGLRESETMEMORYOBJECTPARAMETERNVPROC fptr = (PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) dasWglGetProcAddress("glResetMemoryObjectParameterNV");
    (*fptr)(memory, pname);
}

void glCompressedTextureSubImage3D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data ) {
    static PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC fptr = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) dasWglGetProcAddress("glCompressedTextureSubImage3D");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glVertexArrayVertexAttribOffsetEXT ( GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, bool normalized, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayVertexAttribOffsetEXT");
    (*fptr)(vaobj, buffer, index, size, type, normalized, stride, offset);
}

void glNamedBufferPageCommitmentMemNV ( GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, bool commit ) {
    static PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC fptr = (PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) dasWglGetProcAddress("glNamedBufferPageCommitmentMemNV");
    (*fptr)(buffer, offset, size, memory, memOffset, commit);
}

void glUniformMatrix2x4dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLUNIFORMMATRIX2X4DVPROC fptr = (PFNGLUNIFORMMATRIX2X4DVPROC) dasWglGetProcAddress("glUniformMatrix2x4dv");
    (*fptr)(location, count, transpose, value);
}

void glProgramUniform4uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLPROGRAMUNIFORM4UIVPROC fptr = (PFNGLPROGRAMUNIFORM4UIVPROC) dasWglGetProcAddress("glProgramUniform4uiv");
    (*fptr)(program, location, count, value);
}

void glMultiDrawElementsIndirect ( GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) dasWglGetProcAddress("glMultiDrawElementsIndirect");
    (*fptr)(mode, type, indirect, drawcount, stride);
}

void glScissorIndexed ( GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height ) {
    static PFNGLSCISSORINDEXEDPROC fptr = (PFNGLSCISSORINDEXEDPROC) dasWglGetProcAddress("glScissorIndexed");
    (*fptr)(index, left, bottom, width, height);
}

void glDispatchComputeGroupSizeARB ( GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z ) {
    static PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC fptr = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) dasWglGetProcAddress("glDispatchComputeGroupSizeARB");
    (*fptr)(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

void glVertexArrayElementBuffer ( GLuint vaobj, GLuint buffer ) {
    static PFNGLVERTEXARRAYELEMENTBUFFERPROC fptr = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) dasWglGetProcAddress("glVertexArrayElementBuffer");
    (*fptr)(vaobj, buffer);
}

void glProgramUniform3dvEXT ( GLuint program, GLint location, GLsizei count, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORM3DVEXTPROC fptr = (PFNGLPROGRAMUNIFORM3DVEXTPROC) dasWglGetProcAddress("glProgramUniform3dvEXT");
    (*fptr)(program, location, count, value);
}

void glGetMemoryObjectDetachedResourcesuivNV ( GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint * params ) {
    static PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC fptr = (PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) dasWglGetProcAddress("glGetMemoryObjectDetachedResourcesuivNV");
    (*fptr)(memory, pname, first, count, params);
}

void glResumeTransformFeedback (  ) {
    static PFNGLRESUMETRANSFORMFEEDBACKPROC fptr = (PFNGLRESUMETRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glResumeTransformFeedback");
    (*fptr)();
}

void glEndQueryIndexed ( GLenum target, GLuint index ) {
    static PFNGLENDQUERYINDEXEDPROC fptr = (PFNGLENDQUERYINDEXEDPROC) dasWglGetProcAddress("glEndQueryIndexed");
    (*fptr)(target, index);
}

void glProgramUniform4iEXT ( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3 ) {
    static PFNGLPROGRAMUNIFORM4IEXTPROC fptr = (PFNGLPROGRAMUNIFORM4IEXTPROC) dasWglGetProcAddress("glProgramUniform4iEXT");
    (*fptr)(program, location, v0, v1, v2, v3);
}

void glMakeBufferResidentNV ( GLenum target, GLenum access ) {
    static PFNGLMAKEBUFFERRESIDENTNVPROC fptr = (PFNGLMAKEBUFFERRESIDENTNVPROC) dasWglGetProcAddress("glMakeBufferResidentNV");
    (*fptr)(target, access);
}

void glRasterSamplesEXT ( GLuint samples, bool fixedsamplelocations ) {
    static PFNGLRASTERSAMPLESEXTPROC fptr = (PFNGLRASTERSAMPLESEXTPROC) dasWglGetProcAddress("glRasterSamplesEXT");
    (*fptr)(samples, fixedsamplelocations);
}

void glProgramUniformMatrix2x3fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) dasWglGetProcAddress("glProgramUniformMatrix2x3fv");
    (*fptr)(program, location, count, transpose, value);
}

void glGetNamedFramebufferAttachmentParameterivEXT ( GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params ) {
    static PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT");
    (*fptr)(framebuffer, attachment, pname, params);
}

GLuint glCreateShader ( GLenum type ) {
    static PFNGLCREATESHADERPROC fptr = (PFNGLCREATESHADERPROC) dasWglGetProcAddress("glCreateShader");
    return (*fptr)(type);
}

void glProgramUniform1ui64ARB ( GLuint program, GLint location, GLuint64 x ) {
    static PFNGLPROGRAMUNIFORM1UI64ARBPROC fptr = (PFNGLPROGRAMUNIFORM1UI64ARBPROC) dasWglGetProcAddress("glProgramUniform1ui64ARB");
    (*fptr)(program, location, x);
}

void glBindBuffersBase ( GLenum target, GLuint first, GLsizei count, const GLuint * buffers ) {
    static PFNGLBINDBUFFERSBASEPROC fptr = (PFNGLBINDBUFFERSBASEPROC) dasWglGetProcAddress("glBindBuffersBase");
    (*fptr)(target, first, count, buffers);
}

void glGetNamedBufferPointervEXT ( GLuint buffer, GLenum pname, void ** params ) {
    static PFNGLGETNAMEDBUFFERPOINTERVEXTPROC fptr = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) dasWglGetProcAddress("glGetNamedBufferPointervEXT");
    (*fptr)(buffer, pname, params);
}

void glActiveProgramEXT ( GLuint program ) {
    static PFNGLACTIVEPROGRAMEXTPROC fptr = (PFNGLACTIVEPROGRAMEXTPROC) dasWglGetProcAddress("glActiveProgramEXT");
    (*fptr)(program);
}

void glVertexAttribI1ui ( GLuint index, GLuint x ) {
    static PFNGLVERTEXATTRIBI1UIPROC fptr = (PFNGLVERTEXATTRIBI1UIPROC) dasWglGetProcAddress("glVertexAttribI1ui");
    (*fptr)(index, x);
}

void glMatrixRotatedEXT ( GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z ) {
    static PFNGLMATRIXROTATEDEXTPROC fptr = (PFNGLMATRIXROTATEDEXTPROC) dasWglGetProcAddress("glMatrixRotatedEXT");
    (*fptr)(mode, angle, x, y, z);
}

void * glMapNamedBuffer ( GLuint buffer, GLenum access ) {
    static PFNGLMAPNAMEDBUFFERPROC fptr = (PFNGLMAPNAMEDBUFFERPROC) dasWglGetProcAddress("glMapNamedBuffer");
    return (*fptr)(buffer, access);
}

void glGetNamedRenderbufferParameterivEXT ( GLuint renderbuffer, GLenum pname, GLint * params ) {
    static PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC fptr = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetNamedRenderbufferParameterivEXT");
    (*fptr)(renderbuffer, pname, params);
}

void glFogCoordFormatNV ( GLenum type, GLsizei stride ) {
    static PFNGLFOGCOORDFORMATNVPROC fptr = (PFNGLFOGCOORDFORMATNVPROC) dasWglGetProcAddress("glFogCoordFormatNV");
    (*fptr)(type, stride);
}

void glBindSampler ( GLuint unit, GLuint sampler ) {
    static PFNGLBINDSAMPLERPROC fptr = (PFNGLBINDSAMPLERPROC) dasWglGetProcAddress("glBindSampler");
    (*fptr)(unit, sampler);
}

void glTextureImage3DEXT ( GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXTUREIMAGE3DEXTPROC fptr = (PFNGLTEXTUREIMAGE3DEXTPROC) dasWglGetProcAddress("glTextureImage3DEXT");
    (*fptr)(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glDepthRangedNV ( GLdouble zNear, GLdouble zFar ) {
    static PFNGLDEPTHRANGEDNVPROC fptr = (PFNGLDEPTHRANGEDNVPROC) dasWglGetProcAddress("glDepthRangedNV");
    (*fptr)(zNear, zFar);
}

void glProgramUniformMatrix4x2fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4x2fvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glGetBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, void * data ) {
    static PFNGLGETBUFFERSUBDATAPROC fptr = (PFNGLGETBUFFERSUBDATAPROC) dasWglGetProcAddress("glGetBufferSubData");
    (*fptr)(target, offset, size, data);
}

void glProgramUniform2uiv ( GLuint program, GLint location, GLsizei count, const GLuint * value ) {
    static PFNGLPROGRAMUNIFORM2UIVPROC fptr = (PFNGLPROGRAMUNIFORM2UIVPROC) dasWglGetProcAddress("glProgramUniform2uiv");
    (*fptr)(program, location, count, value);
}

void glCopyPathNV ( GLuint resultPath, GLuint srcPath ) {
    static PFNGLCOPYPATHNVPROC fptr = (PFNGLCOPYPATHNVPROC) dasWglGetProcAddress("glCopyPathNV");
    (*fptr)(resultPath, srcPath);
}

void glUniform2fv ( GLint location, GLsizei count, const GLfloat * value ) {
    static PFNGLUNIFORM2FVPROC fptr = (PFNGLUNIFORM2FVPROC) dasWglGetProcAddress("glUniform2fv");
    (*fptr)(location, count, value);
}

void glMatrixScaledEXT ( GLenum mode, GLdouble x, GLdouble y, GLdouble z ) {
    static PFNGLMATRIXSCALEDEXTPROC fptr = (PFNGLMATRIXSCALEDEXTPROC) dasWglGetProcAddress("glMatrixScaledEXT");
    (*fptr)(mode, x, y, z);
}

void glListDrawCommandsStatesClientNV ( GLuint list, GLuint segment, const void ** indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count ) {
    static PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC fptr = (PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC) dasWglGetProcAddress("glListDrawCommandsStatesClientNV");
    (*fptr)(list, segment, indirects, sizes, states, fbos, count);
}

void glCopyMultiTexImage2DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border ) {
    static PFNGLCOPYMULTITEXIMAGE2DEXTPROC fptr = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC) dasWglGetProcAddress("glCopyMultiTexImage2DEXT");
    (*fptr)(texunit, target, level, internalformat, x, y, width, height, border);
}

void glMultiDrawElementsIndirectBindlessNV ( GLenum mode, GLenum type, const void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC) dasWglGetProcAddress("glMultiDrawElementsIndirectBindlessNV");
    (*fptr)(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

void glGetCompressedTextureImage ( GLuint texture, GLint level, GLsizei bufSize, void * pixels ) {
    static PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC fptr = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) dasWglGetProcAddress("glGetCompressedTextureImage");
    (*fptr)(texture, level, bufSize, pixels);
}

void glProgramUniform4i64vNV ( GLuint program, GLint location, GLsizei count, const GLint64EXT * value ) {
    static PFNGLPROGRAMUNIFORM4I64VNVPROC fptr = (PFNGLPROGRAMUNIFORM4I64VNVPROC) dasWglGetProcAddress("glProgramUniform4i64vNV");
    (*fptr)(program, location, count, value);
}

void glTransformPathNV ( GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues ) {
    static PFNGLTRANSFORMPATHNVPROC fptr = (PFNGLTRANSFORMPATHNVPROC) dasWglGetProcAddress("glTransformPathNV");
    (*fptr)(resultPath, srcPath, transformType, transformValues);
}

void glStencilFillPathNV ( GLuint path, GLenum fillMode, GLuint mask ) {
    static PFNGLSTENCILFILLPATHNVPROC fptr = (PFNGLSTENCILFILLPATHNVPROC) dasWglGetProcAddress("glStencilFillPathNV");
    (*fptr)(path, fillMode, mask);
}

void glProgramUniformMatrix3x2fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3x2fvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glGetProgramResourceiv ( GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params ) {
    static PFNGLGETPROGRAMRESOURCEIVPROC fptr = (PFNGLGETPROGRAMRESOURCEIVPROC) dasWglGetProcAddress("glGetProgramResourceiv");
    (*fptr)(program, programInterface, index, propCount, props, count, length, params);
}

void glMakeBufferNonResidentNV ( GLenum target ) {
    static PFNGLMAKEBUFFERNONRESIDENTNVPROC fptr = (PFNGLMAKEBUFFERNONRESIDENTNVPROC) dasWglGetProcAddress("glMakeBufferNonResidentNV");
    (*fptr)(target);
}

void glVertexAttribL1ui64vNV ( GLuint index, const GLuint64EXT * v ) {
    static PFNGLVERTEXATTRIBL1UI64VNVPROC fptr = (PFNGLVERTEXATTRIBL1UI64VNVPROC) dasWglGetProcAddress("glVertexAttribL1ui64vNV");
    (*fptr)(index, v);
}

void glLabelObjectEXT ( GLenum type, GLuint object, GLsizei length, const GLchar * label ) {
    static PFNGLLABELOBJECTEXTPROC fptr = (PFNGLLABELOBJECTEXTPROC) dasWglGetProcAddress("glLabelObjectEXT");
    (*fptr)(type, object, length, label);
}

GLboolean glIsNamedStringARB ( GLint namelen, const GLchar * name ) {
    static PFNGLISNAMEDSTRINGARBPROC fptr = (PFNGLISNAMEDSTRINGARBPROC) dasWglGetProcAddress("glIsNamedStringARB");
    return (*fptr)(namelen, name);
}

void glGetTextureLevelParameterivEXT ( GLuint texture, GLenum target, GLint level, GLenum pname, GLint * params ) {
    static PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) dasWglGetProcAddress("glGetTextureLevelParameterivEXT");
    (*fptr)(texture, target, level, pname, params);
}

void glUniformMatrix2fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLUNIFORMMATRIX2FVPROC fptr = (PFNGLUNIFORMMATRIX2FVPROC) dasWglGetProcAddress("glUniformMatrix2fv");
    (*fptr)(location, count, transpose, value);
}

void glGetSamplerParameterfv ( GLuint sampler, GLenum pname, GLfloat * params ) {
    static PFNGLGETSAMPLERPARAMETERFVPROC fptr = (PFNGLGETSAMPLERPARAMETERFVPROC) dasWglGetProcAddress("glGetSamplerParameterfv");
    (*fptr)(sampler, pname, params);
}

GLboolean glIsImageHandleResidentARB ( GLuint64 handle ) {
    static PFNGLISIMAGEHANDLERESIDENTARBPROC fptr = (PFNGLISIMAGEHANDLERESIDENTARBPROC) dasWglGetProcAddress("glIsImageHandleResidentARB");
    return (*fptr)(handle);
}

void glCompileShaderIncludeARB ( GLuint shader, GLsizei count, const GLchar *const * path, const GLint * length ) {
    static PFNGLCOMPILESHADERINCLUDEARBPROC fptr = (PFNGLCOMPILESHADERINCLUDEARBPROC) dasWglGetProcAddress("glCompileShaderIncludeARB");
    (*fptr)(shader, count, path, length);
}

void glMatrixLoadfEXT ( GLenum mode, const GLfloat * m ) {
    static PFNGLMATRIXLOADFEXTPROC fptr = (PFNGLMATRIXLOADFEXTPROC) dasWglGetProcAddress("glMatrixLoadfEXT");
    (*fptr)(mode, m);
}

void glGetCompressedTextureImageEXT ( GLuint texture, GLenum target, GLint lod, void * img ) {
    static PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC fptr = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) dasWglGetProcAddress("glGetCompressedTextureImageEXT");
    (*fptr)(texture, target, lod, img);
}

void glSignalVkSemaphoreNV ( GLuint64 vkSemaphore ) {
    static PFNGLSIGNALVKSEMAPHORENVPROC fptr = (PFNGLSIGNALVKSEMAPHORENVPROC) dasWglGetProcAddress("glSignalVkSemaphoreNV");
    (*fptr)(vkSemaphore);
}

void glVertexArrayNormalOffsetEXT ( GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset ) {
    static PFNGLVERTEXARRAYNORMALOFFSETEXTPROC fptr = (PFNGLVERTEXARRAYNORMALOFFSETEXTPROC) dasWglGetProcAddress("glVertexArrayNormalOffsetEXT");
    (*fptr)(vaobj, buffer, type, stride, offset);
}

void glCreateBuffers ( GLsizei n, GLuint * buffers ) {
    static PFNGLCREATEBUFFERSPROC fptr = (PFNGLCREATEBUFFERSPROC) dasWglGetProcAddress("glCreateBuffers");
    (*fptr)(n, buffers);
}

GLuint glGetUniformBlockIndex ( GLuint program, const GLchar * uniformBlockName ) {
    static PFNGLGETUNIFORMBLOCKINDEXPROC fptr = (PFNGLGETUNIFORMBLOCKINDEXPROC) dasWglGetProcAddress("glGetUniformBlockIndex");
    return (*fptr)(program, uniformBlockName);
}

void glDrawCommandsStatesNV ( GLuint buffer, const GLintptr * indirects, const GLsizei * sizes, const GLuint * states, const GLuint * fbos, GLuint count ) {
    static PFNGLDRAWCOMMANDSSTATESNVPROC fptr = (PFNGLDRAWCOMMANDSSTATESNVPROC) dasWglGetProcAddress("glDrawCommandsStatesNV");
    (*fptr)(buffer, indirects, sizes, states, fbos, count);
}

void glNamedBufferPageCommitmentARB ( GLuint buffer, GLintptr offset, GLsizeiptr size, bool commit ) {
    static PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC fptr = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) dasWglGetProcAddress("glNamedBufferPageCommitmentARB");
    (*fptr)(buffer, offset, size, commit);
}

void glMultiTexParameterfEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat param ) {
    static PFNGLMULTITEXPARAMETERFEXTPROC fptr = (PFNGLMULTITEXPARAMETERFEXTPROC) dasWglGetProcAddress("glMultiTexParameterfEXT");
    (*fptr)(texunit, target, pname, param);
}

void glRenderbufferStorageMultisampleCoverageNV ( GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC fptr = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) dasWglGetProcAddress("glRenderbufferStorageMultisampleCoverageNV");
    (*fptr)(target, coverageSamples, colorSamples, internalformat, width, height);
}

void glUniformMatrix2x4fv ( GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLUNIFORMMATRIX2X4FVPROC fptr = (PFNGLUNIFORMMATRIX2X4FVPROC) dasWglGetProcAddress("glUniformMatrix2x4fv");
    (*fptr)(location, count, transpose, value);
}

void glMakeImageHandleResidentNV ( GLuint64 handle, GLenum access ) {
    static PFNGLMAKEIMAGEHANDLERESIDENTNVPROC fptr = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) dasWglGetProcAddress("glMakeImageHandleResidentNV");
    (*fptr)(handle, access);
}

void glProgramUniformMatrix3x4dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3x4dvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glGetQueryBufferObjectiv ( GLuint id, GLuint buffer, GLenum pname, GLintptr offset ) {
    static PFNGLGETQUERYBUFFEROBJECTIVPROC fptr = (PFNGLGETQUERYBUFFEROBJECTIVPROC) dasWglGetProcAddress("glGetQueryBufferObjectiv");
    (*fptr)(id, buffer, pname, offset);
}

void glFramebufferTextureMultiviewOVR ( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews ) {
    static PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC fptr = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) dasWglGetProcAddress("glFramebufferTextureMultiviewOVR");
    (*fptr)(target, attachment, texture, level, baseViewIndex, numViews);
}

void glGetTextureLevelParameterfv ( GLuint texture, GLint level, GLenum pname, GLfloat * params ) {
    static PFNGLGETTEXTURELEVELPARAMETERFVPROC fptr = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) dasWglGetProcAddress("glGetTextureLevelParameterfv");
    (*fptr)(texture, level, pname, params);
}

GLuint64 glGetTextureHandleARB ( GLuint texture ) {
    static PFNGLGETTEXTUREHANDLEARBPROC fptr = (PFNGLGETTEXTUREHANDLEARBPROC) dasWglGetProcAddress("glGetTextureHandleARB");
    return (*fptr)(texture);
}

void glBlendFunciARB ( GLuint buf, GLenum src, GLenum dst ) {
    static PFNGLBLENDFUNCIARBPROC fptr = (PFNGLBLENDFUNCIARBPROC) dasWglGetProcAddress("glBlendFunciARB");
    (*fptr)(buf, src, dst);
}

void glNamedFramebufferParameteriEXT ( GLuint framebuffer, GLenum pname, GLint param ) {
    static PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC) dasWglGetProcAddress("glNamedFramebufferParameteriEXT");
    (*fptr)(framebuffer, pname, param);
}

void glMakeNamedBufferResidentNV ( GLuint buffer, GLenum access ) {
    static PFNGLMAKENAMEDBUFFERRESIDENTNVPROC fptr = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC) dasWglGetProcAddress("glMakeNamedBufferResidentNV");
    (*fptr)(buffer, access);
}

void glCoverFillPathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues ) {
    static PFNGLCOVERFILLPATHINSTANCEDNVPROC fptr = (PFNGLCOVERFILLPATHINSTANCEDNVPROC) dasWglGetProcAddress("glCoverFillPathInstancedNV");
    (*fptr)(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glVertexArrayVertexBindingDivisorEXT ( GLuint vaobj, GLuint bindingindex, GLuint divisor ) {
    static PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC fptr = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC) dasWglGetProcAddress("glVertexArrayVertexBindingDivisorEXT");
    (*fptr)(vaobj, bindingindex, divisor);
}

void glVertexAttribI4usv ( GLuint index, const GLushort * v ) {
    static PFNGLVERTEXATTRIBI4USVPROC fptr = (PFNGLVERTEXATTRIBI4USVPROC) dasWglGetProcAddress("glVertexAttribI4usv");
    (*fptr)(index, v);
}

void glVertexAttribI4uiv ( GLuint index, const GLuint * v ) {
    static PFNGLVERTEXATTRIBI4UIVPROC fptr = (PFNGLVERTEXATTRIBI4UIVPROC) dasWglGetProcAddress("glVertexAttribI4uiv");
    (*fptr)(index, v);
}

void glProgramUniformMatrix4x3fvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix4x3fvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glNamedBufferSubData ( GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data ) {
    static PFNGLNAMEDBUFFERSUBDATAPROC fptr = (PFNGLNAMEDBUFFERSUBDATAPROC) dasWglGetProcAddress("glNamedBufferSubData");
    (*fptr)(buffer, offset, size, data);
}

void glBindBuffersRange ( GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes ) {
    static PFNGLBINDBUFFERSRANGEPROC fptr = (PFNGLBINDBUFFERSRANGEPROC) dasWglGetProcAddress("glBindBuffersRange");
    (*fptr)(target, first, count, buffers, offsets, sizes);
}

void glMultiDrawElementsIndirectCount ( GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride ) {
    static PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC fptr = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC) dasWglGetProcAddress("glMultiDrawElementsIndirectCount");
    (*fptr)(mode, type, indirect, drawcount, maxdrawcount, stride);
}

void glUniform1ui64ARB ( GLint location, GLuint64 x ) {
    static PFNGLUNIFORM1UI64ARBPROC fptr = (PFNGLUNIFORM1UI64ARBPROC) dasWglGetProcAddress("glUniform1ui64ARB");
    (*fptr)(location, x);
}

void glStencilStrokePathInstancedNV ( GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues ) {
    static PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC fptr = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) dasWglGetProcAddress("glStencilStrokePathInstancedNV");
    (*fptr)(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glGetMultiTexParameterfvEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat * params ) {
    static PFNGLGETMULTITEXPARAMETERFVEXTPROC fptr = (PFNGLGETMULTITEXPARAMETERFVEXTPROC) dasWglGetProcAddress("glGetMultiTexParameterfvEXT");
    (*fptr)(texunit, target, pname, params);
}

void glGetBooleani_v ( GLenum target, GLuint index, GLboolean * data ) {
    static PFNGLGETBOOLEANI_VPROC fptr = (PFNGLGETBOOLEANI_VPROC) dasWglGetProcAddress("glGetBooleani_v");
    (*fptr)(target, index, data);
}

void glDrawMeshTasksIndirectNV ( GLintptr indirect ) {
    static PFNGLDRAWMESHTASKSINDIRECTNVPROC fptr = (PFNGLDRAWMESHTASKSINDIRECTNVPROC) dasWglGetProcAddress("glDrawMeshTasksIndirectNV");
    (*fptr)(indirect);
}

void glGetSamplerParameterIiv ( GLuint sampler, GLenum pname, GLint * params ) {
    static PFNGLGETSAMPLERPARAMETERIIVPROC fptr = (PFNGLGETSAMPLERPARAMETERIIVPROC) dasWglGetProcAddress("glGetSamplerParameterIiv");
    (*fptr)(sampler, pname, params);
}

void glGetVertexAttribLdv ( GLuint index, GLenum pname, GLdouble * params ) {
    static PFNGLGETVERTEXATTRIBLDVPROC fptr = (PFNGLGETVERTEXATTRIBLDVPROC) dasWglGetProcAddress("glGetVertexAttribLdv");
    (*fptr)(index, pname, params);
}

void glMultiTexGenivEXT ( GLenum texunit, GLenum coord, GLenum pname, const GLint * params ) {
    static PFNGLMULTITEXGENIVEXTPROC fptr = (PFNGLMULTITEXGENIVEXTPROC) dasWglGetProcAddress("glMultiTexGenivEXT");
    (*fptr)(texunit, coord, pname, params);
}

void glCopyMultiTexImage1DEXT ( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border ) {
    static PFNGLCOPYMULTITEXIMAGE1DEXTPROC fptr = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC) dasWglGetProcAddress("glCopyMultiTexImage1DEXT");
    (*fptr)(texunit, target, level, internalformat, x, y, width, border);
}

void glUniform2i64NV ( GLint location, GLint64EXT x, GLint64EXT y ) {
    static PFNGLUNIFORM2I64NVPROC fptr = (PFNGLUNIFORM2I64NVPROC) dasWglGetProcAddress("glUniform2i64NV");
    (*fptr)(location, x, y);
}

void glVertexAttribL1i64NV ( GLuint index, GLint64EXT x ) {
    static PFNGLVERTEXATTRIBL1I64NVPROC fptr = (PFNGLVERTEXATTRIBL1I64NVPROC) dasWglGetProcAddress("glVertexAttribL1i64NV");
    (*fptr)(index, x);
}

void glVertexFormatNV ( GLint size, GLenum type, GLsizei stride ) {
    static PFNGLVERTEXFORMATNVPROC fptr = (PFNGLVERTEXFORMATNVPROC) dasWglGetProcAddress("glVertexFormatNV");
    (*fptr)(size, type, stride);
}

void glGenTransformFeedbacks ( GLsizei n, GLuint * ids ) {
    static PFNGLGENTRANSFORMFEEDBACKSPROC fptr = (PFNGLGENTRANSFORMFEEDBACKSPROC) dasWglGetProcAddress("glGenTransformFeedbacks");
    (*fptr)(n, ids);
}

void glBeginQueryIndexed ( GLenum target, GLuint index, GLuint id ) {
    static PFNGLBEGINQUERYINDEXEDPROC fptr = (PFNGLBEGINQUERYINDEXEDPROC) dasWglGetProcAddress("glBeginQueryIndexed");
    (*fptr)(target, index, id);
}

GLenum glPathMemoryGlyphIndexArrayNV ( GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale ) {
    static PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC fptr = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) dasWglGetProcAddress("glPathMemoryGlyphIndexArrayNV");
    return (*fptr)(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

void glPauseTransformFeedback (  ) {
    static PFNGLPAUSETRANSFORMFEEDBACKPROC fptr = (PFNGLPAUSETRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glPauseTransformFeedback");
    (*fptr)();
}

void glDeleteProgramPipelines ( GLsizei n, const GLuint * pipelines ) {
    static PFNGLDELETEPROGRAMPIPELINESPROC fptr = (PFNGLDELETEPROGRAMPIPELINESPROC) dasWglGetProcAddress("glDeleteProgramPipelines");
    (*fptr)(n, pipelines);
}

void glVertexArrayAttribBinding ( GLuint vaobj, GLuint attribindex, GLuint bindingindex ) {
    static PFNGLVERTEXARRAYATTRIBBINDINGPROC fptr = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) dasWglGetProcAddress("glVertexArrayAttribBinding");
    (*fptr)(vaobj, attribindex, bindingindex);
}

void glDebugMessageControl ( GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, bool enabled ) {
    static PFNGLDEBUGMESSAGECONTROLPROC fptr = (PFNGLDEBUGMESSAGECONTROLPROC) dasWglGetProcAddress("glDebugMessageControl");
    (*fptr)(source, type, severity, count, ids, enabled);
}

void glCopyTextureSubImage3D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height ) {
    static PFNGLCOPYTEXTURESUBIMAGE3DPROC fptr = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) dasWglGetProcAddress("glCopyTextureSubImage3D");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glVertexAttribFormat ( GLuint attribindex, GLint size, GLenum type, bool normalized, GLuint relativeoffset ) {
    static PFNGLVERTEXATTRIBFORMATPROC fptr = (PFNGLVERTEXATTRIBFORMATPROC) dasWglGetProcAddress("glVertexAttribFormat");
    (*fptr)(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribLFormat ( GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset ) {
    static PFNGLVERTEXATTRIBLFORMATPROC fptr = (PFNGLVERTEXATTRIBLFORMATPROC) dasWglGetProcAddress("glVertexAttribLFormat");
    (*fptr)(attribindex, size, type, relativeoffset);
}

void glDeletePerfMonitorsAMD ( GLsizei n, GLuint * monitors ) {
    static PFNGLDELETEPERFMONITORSAMDPROC fptr = (PFNGLDELETEPERFMONITORSAMDPROC) dasWglGetProcAddress("glDeletePerfMonitorsAMD");
    (*fptr)(n, monitors);
}

void glGetMultiTexGendvEXT ( GLenum texunit, GLenum coord, GLenum pname, GLdouble * params ) {
    static PFNGLGETMULTITEXGENDVEXTPROC fptr = (PFNGLGETMULTITEXGENDVEXTPROC) dasWglGetProcAddress("glGetMultiTexGendvEXT");
    (*fptr)(texunit, coord, pname, params);
}

void glGetPerfCounterInfoINTEL ( GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue ) {
    static PFNGLGETPERFCOUNTERINFOINTELPROC fptr = (PFNGLGETPERFCOUNTERINFOINTELPROC) dasWglGetProcAddress("glGetPerfCounterInfoINTEL");
    (*fptr)(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glProgramUniform1ui64NV ( GLuint program, GLint location, GLuint64EXT x ) {
    static PFNGLPROGRAMUNIFORM1UI64NVPROC fptr = (PFNGLPROGRAMUNIFORM1UI64NVPROC) dasWglGetProcAddress("glProgramUniform1ui64NV");
    (*fptr)(program, location, x);
}

void glSamplerParameterfv ( GLuint sampler, GLenum pname, const GLfloat * param ) {
    static PFNGLSAMPLERPARAMETERFVPROC fptr = (PFNGLSAMPLERPARAMETERFVPROC) dasWglGetProcAddress("glSamplerParameterfv");
    (*fptr)(sampler, pname, param);
}

void glGetSamplerParameteriv ( GLuint sampler, GLenum pname, GLint * params ) {
    static PFNGLGETSAMPLERPARAMETERIVPROC fptr = (PFNGLGETSAMPLERPARAMETERIVPROC) dasWglGetProcAddress("glGetSamplerParameteriv");
    (*fptr)(sampler, pname, params);
}

void glNamedBufferSubDataEXT ( GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data ) {
    static PFNGLNAMEDBUFFERSUBDATAEXTPROC fptr = (PFNGLNAMEDBUFFERSUBDATAEXTPROC) dasWglGetProcAddress("glNamedBufferSubDataEXT");
    (*fptr)(buffer, offset, size, data);
}

void glScissorExclusiveArrayvNV ( GLuint first, GLsizei count, const GLint * v ) {
    static PFNGLSCISSOREXCLUSIVEARRAYVNVPROC fptr = (PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) dasWglGetProcAddress("glScissorExclusiveArrayvNV");
    (*fptr)(first, count, v);
}

void glEvaluateDepthValuesARB (  ) {
    static PFNGLEVALUATEDEPTHVALUESARBPROC fptr = (PFNGLEVALUATEDEPTHVALUESARBPROC) dasWglGetProcAddress("glEvaluateDepthValuesARB");
    (*fptr)();
}

void glClearTexImage ( GLuint texture, GLint level, GLenum format, GLenum type, const void * data ) {
    static PFNGLCLEARTEXIMAGEPROC fptr = (PFNGLCLEARTEXIMAGEPROC) dasWglGetProcAddress("glClearTexImage");
    (*fptr)(texture, level, format, type, data);
}

void glGetTransformFeedbacki_v ( GLuint xfb, GLenum pname, GLuint index, GLint * param ) {
    static PFNGLGETTRANSFORMFEEDBACKI_VPROC fptr = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) dasWglGetProcAddress("glGetTransformFeedbacki_v");
    (*fptr)(xfb, pname, index, param);
}

void glVertexAttribI3iv ( GLuint index, const GLint * v ) {
    static PFNGLVERTEXATTRIBI3IVPROC fptr = (PFNGLVERTEXATTRIBI3IVPROC) dasWglGetProcAddress("glVertexAttribI3iv");
    (*fptr)(index, v);
}

void glMultiDrawMeshTasksIndirectNV ( GLintptr indirect, GLsizei drawcount, GLsizei stride ) {
    static PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC fptr = (PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) dasWglGetProcAddress("glMultiDrawMeshTasksIndirectNV");
    (*fptr)(indirect, drawcount, stride);
}

void glDepthRangeArrayv ( GLuint first, GLsizei count, const GLdouble * v ) {
    static PFNGLDEPTHRANGEARRAYVPROC fptr = (PFNGLDEPTHRANGEARRAYVPROC) dasWglGetProcAddress("glDepthRangeArrayv");
    (*fptr)(first, count, v);
}

void glVertexAttribL4ui64NV ( GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w ) {
    static PFNGLVERTEXATTRIBL4UI64NVPROC fptr = (PFNGLVERTEXATTRIBL4UI64NVPROC) dasWglGetProcAddress("glVertexAttribL4ui64NV");
    (*fptr)(index, x, y, z, w);
}

void glTextureSubImage3D ( GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels ) {
    static PFNGLTEXTURESUBIMAGE3DPROC fptr = (PFNGLTEXTURESUBIMAGE3DPROC) dasWglGetProcAddress("glTextureSubImage3D");
    (*fptr)(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glNamedFramebufferTextureFaceEXT ( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) dasWglGetProcAddress("glNamedFramebufferTextureFaceEXT");
    (*fptr)(framebuffer, attachment, texture, level, face);
}

void glMultiTexEnvfEXT ( GLenum texunit, GLenum target, GLenum pname, GLfloat param ) {
    static PFNGLMULTITEXENVFEXTPROC fptr = (PFNGLMULTITEXENVFEXTPROC) dasWglGetProcAddress("glMultiTexEnvfEXT");
    (*fptr)(texunit, target, pname, param);
}

GLuint glCreateProgram (  ) {
    static PFNGLCREATEPROGRAMPROC fptr = (PFNGLCREATEPROGRAMPROC) dasWglGetProcAddress("glCreateProgram");
    return (*fptr)();
}

void glProgramUniformMatrix3x2fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) dasWglGetProcAddress("glProgramUniformMatrix3x2fv");
    (*fptr)(program, location, count, transpose, value);
}

void glBufferSubData ( GLenum target, GLintptr offset, GLsizeiptr size, const void * data ) {
    static PFNGLBUFFERSUBDATAPROC fptr = (PFNGLBUFFERSUBDATAPROC) dasWglGetProcAddress("glBufferSubData");
    (*fptr)(target, offset, size, data);
}

void glVertexAttribFormatNV ( GLuint index, GLint size, GLenum type, bool normalized, GLsizei stride ) {
    static PFNGLVERTEXATTRIBFORMATNVPROC fptr = (PFNGLVERTEXATTRIBFORMATNVPROC) dasWglGetProcAddress("glVertexAttribFormatNV");
    (*fptr)(index, size, type, normalized, stride);
}

void glProgramUniformMatrix4x3fv ( GLuint program, GLint location, GLsizei count, bool transpose, const GLfloat * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) dasWglGetProcAddress("glProgramUniformMatrix4x3fv");
    (*fptr)(program, location, count, transpose, value);
}

void glMultiTexEnviEXT ( GLenum texunit, GLenum target, GLenum pname, GLint param ) {
    static PFNGLMULTITEXENVIEXTPROC fptr = (PFNGLMULTITEXENVIEXTPROC) dasWglGetProcAddress("glMultiTexEnviEXT");
    (*fptr)(texunit, target, pname, param);
}

void glCompressedTextureImage1DEXT ( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * bits ) {
    static PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC fptr = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) dasWglGetProcAddress("glCompressedTextureImage1DEXT");
    (*fptr)(texture, target, level, internalformat, width, border, imageSize, bits);
}

void glClearBufferiv ( GLenum buffer, GLint drawbuffer, const GLint * value ) {
    static PFNGLCLEARBUFFERIVPROC fptr = (PFNGLCLEARBUFFERIVPROC) dasWglGetProcAddress("glClearBufferiv");
    (*fptr)(buffer, drawbuffer, value);
}

void glVertexAttribI1uiv ( GLuint index, const GLuint * v ) {
    static PFNGLVERTEXATTRIBI1UIVPROC fptr = (PFNGLVERTEXATTRIBI1UIVPROC) dasWglGetProcAddress("glVertexAttribI1uiv");
    (*fptr)(index, v);
}

GLboolean glUnmapNamedBuffer ( GLuint buffer ) {
    static PFNGLUNMAPNAMEDBUFFERPROC fptr = (PFNGLUNMAPNAMEDBUFFERPROC) dasWglGetProcAddress("glUnmapNamedBuffer");
    return (*fptr)(buffer);
}

void glVertexAttribL1i64vNV ( GLuint index, const GLint64EXT * v ) {
    static PFNGLVERTEXATTRIBL1I64VNVPROC fptr = (PFNGLVERTEXATTRIBL1I64VNVPROC) dasWglGetProcAddress("glVertexAttribL1i64vNV");
    (*fptr)(index, v);
}

void glNamedProgramLocalParametersI4ivEXT ( GLuint program, GLenum target, GLuint index, GLsizei count, const GLint * params ) {
    static PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC fptr = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) dasWglGetProcAddress("glNamedProgramLocalParametersI4ivEXT");
    (*fptr)(program, target, index, count, params);
}

void glDrawTransformFeedbackInstanced ( GLenum mode, GLuint id, GLsizei instancecount ) {
    static PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC fptr = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) dasWglGetProcAddress("glDrawTransformFeedbackInstanced");
    (*fptr)(mode, id, instancecount);
}

void glNamedFramebufferTexture1DEXT ( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level ) {
    static PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC fptr = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) dasWglGetProcAddress("glNamedFramebufferTexture1DEXT");
    (*fptr)(framebuffer, attachment, textarget, texture, level);
}

void glCopyBufferSubData ( GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size ) {
    static PFNGLCOPYBUFFERSUBDATAPROC fptr = (PFNGLCOPYBUFFERSUBDATAPROC) dasWglGetProcAddress("glCopyBufferSubData");
    (*fptr)(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glUniformMatrix2x3dv ( GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLUNIFORMMATRIX2X3DVPROC fptr = (PFNGLUNIFORMMATRIX2X3DVPROC) dasWglGetProcAddress("glUniformMatrix2x3dv");
    (*fptr)(location, count, transpose, value);
}

void glTextureStorage1D ( GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width ) {
    static PFNGLTEXTURESTORAGE1DPROC fptr = (PFNGLTEXTURESTORAGE1DPROC) dasWglGetProcAddress("glTextureStorage1D");
    (*fptr)(texture, levels, internalformat, width);
}

void glGetNamedStringivARB ( GLint namelen, const GLchar * name, GLenum pname, GLint * params ) {
    static PFNGLGETNAMEDSTRINGIVARBPROC fptr = (PFNGLGETNAMEDSTRINGIVARBPROC) dasWglGetProcAddress("glGetNamedStringivARB");
    (*fptr)(namelen, name, pname, params);
}

void glNamedRenderbufferStorageMultisampleAdvancedAMD ( GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height ) {
    static PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC fptr = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) dasWglGetProcAddress("glNamedRenderbufferStorageMultisampleAdvancedAMD");
    (*fptr)(renderbuffer, samples, storageSamples, internalformat, width, height);
}

void glStencilOpSeparate ( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass ) {
    static PFNGLSTENCILOPSEPARATEPROC fptr = (PFNGLSTENCILOPSEPARATEPROC) dasWglGetProcAddress("glStencilOpSeparate");
    (*fptr)(face, sfail, dpfail, dppass);
}

void glGetUniformdv ( GLuint program, GLint location, GLdouble * params ) {
    static PFNGLGETUNIFORMDVPROC fptr = (PFNGLGETUNIFORMDVPROC) dasWglGetProcAddress("glGetUniformdv");
    (*fptr)(program, location, params);
}

void glGetUniformfv ( GLuint program, GLint location, GLfloat * params ) {
    static PFNGLGETUNIFORMFVPROC fptr = (PFNGLGETUNIFORMFVPROC) dasWglGetProcAddress("glGetUniformfv");
    (*fptr)(program, location, params);
}

void glVertexAttribI4ubv ( GLuint index, const GLubyte * v ) {
    static PFNGLVERTEXATTRIBI4UBVPROC fptr = (PFNGLVERTEXATTRIBI4UBVPROC) dasWglGetProcAddress("glVertexAttribI4ubv");
    (*fptr)(index, v);
}

void glBindFragDataLocation ( GLuint program, GLuint color, const GLchar * name ) {
    static PFNGLBINDFRAGDATALOCATIONPROC fptr = (PFNGLBINDFRAGDATALOCATIONPROC) dasWglGetProcAddress("glBindFragDataLocation");
    (*fptr)(program, color, name);
}

void glGetObjectPtrLabel ( const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label ) {
    static PFNGLGETOBJECTPTRLABELPROC fptr = (PFNGLGETOBJECTPTRLABELPROC) dasWglGetProcAddress("glGetObjectPtrLabel");
    (*fptr)(ptr, bufSize, length, label);
}

void glMultiTexGendEXT ( GLenum texunit, GLenum coord, GLenum pname, GLdouble param ) {
    static PFNGLMULTITEXGENDEXTPROC fptr = (PFNGLMULTITEXGENDEXTPROC) dasWglGetProcAddress("glMultiTexGendEXT");
    (*fptr)(texunit, coord, pname, param);
}

void glBeginTransformFeedback ( GLenum primitiveMode ) {
    static PFNGLBEGINTRANSFORMFEEDBACKPROC fptr = (PFNGLBEGINTRANSFORMFEEDBACKPROC) dasWglGetProcAddress("glBeginTransformFeedback");
    (*fptr)(primitiveMode);
}

void glShadingRateImagePaletteNV ( GLuint viewport, GLuint first, GLsizei count, const GLenum * rates ) {
    static PFNGLSHADINGRATEIMAGEPALETTENVPROC fptr = (PFNGLSHADINGRATEIMAGEPALETTENVPROC) dasWglGetProcAddress("glShadingRateImagePaletteNV");
    (*fptr)(viewport, first, count, rates);
}

void glProgramUniformMatrix3x2dvEXT ( GLuint program, GLint location, GLsizei count, bool transpose, const GLdouble * value ) {
    static PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC fptr = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) dasWglGetProcAddress("glProgramUniformMatrix3x2dvEXT");
    (*fptr)(program, location, count, transpose, value);
}

void glProgramUniform4ui64vARB ( GLuint program, GLint location, GLsizei count, const GLuint64 * value ) {
    static PFNGLPROGRAMUNIFORM4UI64VARBPROC fptr = (PFNGLPROGRAMUNIFORM4UI64VARBPROC) dasWglGetProcAddress("glProgramUniform4ui64vARB");
    (*fptr)(program, location, count, value);
}

void glDeleteCommandListsNV ( GLsizei n, const GLuint * lists ) {
    static PFNGLDELETECOMMANDLISTSNVPROC fptr = (PFNGLDELETECOMMANDLISTSNVPROC) dasWglGetProcAddress("glDeleteCommandListsNV");
    (*fptr)(n, lists);
}

GLuint64 glGetImageHandleNV ( GLuint texture, GLint level, bool layered, GLint layer, GLenum format ) {
    static PFNGLGETIMAGEHANDLENVPROC fptr = (PFNGLGETIMAGEHANDLENVPROC) dasWglGetProcAddress("glGetImageHandleNV");
    return (*fptr)(texture, level, layered, layer, format);
}

void glGetActiveSubroutineName ( GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name ) {
    static PFNGLGETACTIVESUBROUTINENAMEPROC fptr = (PFNGLGETACTIVESUBROUTINENAMEPROC) dasWglGetProcAddress("glGetActiveSubroutineName");
    (*fptr)(program, shadertype, index, bufSize, length, name);
}

void glCreateTextures ( GLenum target, GLsizei n, GLuint * textures ) {
    static PFNGLCREATETEXTURESPROC fptr = (PFNGLCREATETEXTURESPROC) dasWglGetProcAddress("glCreateTextures");
    (*fptr)(target, n, textures);
}

