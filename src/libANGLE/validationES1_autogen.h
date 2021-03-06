// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and gl_angle_ext.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationES1_autogen.h:
//   Validation functions for the OpenGL ES 1.0 entry points.

#ifndef LIBANGLE_VALIDATION_ES1_AUTOGEN_H_
#define LIBANGLE_VALIDATION_ES1_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace gl
{
class Context;

bool ValidateAlphaFunc(const Context *context, AlphaTestFunc funcPacked, GLfloat ref);
bool ValidateAlphaFuncx(const Context *context, AlphaTestFunc funcPacked, GLfixed ref);
bool ValidateClearColorx(const Context *context,
                         GLfixed red,
                         GLfixed green,
                         GLfixed blue,
                         GLfixed alpha);
bool ValidateClearDepthx(const Context *context, GLfixed depth);
bool ValidateClientActiveTexture(const Context *context, GLenum texture);
bool ValidateClipPlanef(const Context *context, GLenum p, const GLfloat *eqn);
bool ValidateClipPlanex(const Context *context, GLenum plane, const GLfixed *equation);
bool ValidateColor4f(const Context *context,
                     GLfloat red,
                     GLfloat green,
                     GLfloat blue,
                     GLfloat alpha);
bool ValidateColor4ub(const Context *context,
                      GLubyte red,
                      GLubyte green,
                      GLubyte blue,
                      GLubyte alpha);
bool ValidateColor4x(const Context *context,
                     GLfixed red,
                     GLfixed green,
                     GLfixed blue,
                     GLfixed alpha);
bool ValidateColorPointer(const Context *context,
                          GLint size,
                          VertexAttribType typePacked,
                          GLsizei stride,
                          const void *pointer);
bool ValidateDepthRangex(const Context *context, GLfixed n, GLfixed f);
bool ValidateDisableClientState(const Context *context, ClientVertexArrayType arrayPacked);
bool ValidateEnableClientState(const Context *context, ClientVertexArrayType arrayPacked);
bool ValidateFogf(const Context *context, GLenum pname, GLfloat param);
bool ValidateFogfv(const Context *context, GLenum pname, const GLfloat *params);
bool ValidateFogx(const Context *context, GLenum pname, GLfixed param);
bool ValidateFogxv(const Context *context, GLenum pname, const GLfixed *param);
bool ValidateFrustumf(const Context *context,
                      GLfloat l,
                      GLfloat r,
                      GLfloat b,
                      GLfloat t,
                      GLfloat n,
                      GLfloat f);
bool ValidateFrustumx(const Context *context,
                      GLfixed l,
                      GLfixed r,
                      GLfixed b,
                      GLfixed t,
                      GLfixed n,
                      GLfixed f);
bool ValidateGetClipPlanef(const Context *context, GLenum plane, const GLfloat *equation);
bool ValidateGetClipPlanex(const Context *context, GLenum plane, const GLfixed *equation);
bool ValidateGetFixedv(const Context *context, GLenum pname, const GLfixed *params);
bool ValidateGetLightfv(const Context *context,
                        GLenum light,
                        LightParameter pnamePacked,
                        const GLfloat *params);
bool ValidateGetLightxv(const Context *context,
                        GLenum light,
                        LightParameter pnamePacked,
                        const GLfixed *params);
bool ValidateGetMaterialfv(const Context *context,
                           GLenum face,
                           MaterialParameter pnamePacked,
                           const GLfloat *params);
bool ValidateGetMaterialxv(const Context *context,
                           GLenum face,
                           MaterialParameter pnamePacked,
                           const GLfixed *params);
bool ValidateGetTexEnvfv(const Context *context,
                         TextureEnvTarget targetPacked,
                         TextureEnvParameter pnamePacked,
                         const GLfloat *params);
bool ValidateGetTexEnviv(const Context *context,
                         TextureEnvTarget targetPacked,
                         TextureEnvParameter pnamePacked,
                         const GLint *params);
bool ValidateGetTexEnvxv(const Context *context,
                         TextureEnvTarget targetPacked,
                         TextureEnvParameter pnamePacked,
                         const GLfixed *params);
bool ValidateGetTexParameterxv(const Context *context,
                               TextureType targetPacked,
                               GLenum pname,
                               const GLfixed *params);
bool ValidateLightModelf(const Context *context, GLenum pname, GLfloat param);
bool ValidateLightModelfv(const Context *context, GLenum pname, const GLfloat *params);
bool ValidateLightModelx(const Context *context, GLenum pname, GLfixed param);
bool ValidateLightModelxv(const Context *context, GLenum pname, const GLfixed *param);
bool ValidateLightf(const Context *context,
                    GLenum light,
                    LightParameter pnamePacked,
                    GLfloat param);
bool ValidateLightfv(const Context *context,
                     GLenum light,
                     LightParameter pnamePacked,
                     const GLfloat *params);
bool ValidateLightx(const Context *context,
                    GLenum light,
                    LightParameter pnamePacked,
                    GLfixed param);
bool ValidateLightxv(const Context *context,
                     GLenum light,
                     LightParameter pnamePacked,
                     const GLfixed *params);
bool ValidateLineWidthx(const Context *context, GLfixed width);
bool ValidateLoadIdentity(const Context *context);
bool ValidateLoadMatrixf(const Context *context, const GLfloat *m);
bool ValidateLoadMatrixx(const Context *context, const GLfixed *m);
bool ValidateLogicOp(const Context *context, LogicalOperation opcodePacked);
bool ValidateMaterialf(const Context *context,
                       GLenum face,
                       MaterialParameter pnamePacked,
                       GLfloat param);
bool ValidateMaterialfv(const Context *context,
                        GLenum face,
                        MaterialParameter pnamePacked,
                        const GLfloat *params);
bool ValidateMaterialx(const Context *context,
                       GLenum face,
                       MaterialParameter pnamePacked,
                       GLfixed param);
bool ValidateMaterialxv(const Context *context,
                        GLenum face,
                        MaterialParameter pnamePacked,
                        const GLfixed *param);
bool ValidateMatrixMode(const Context *context, MatrixType modePacked);
bool ValidateMultMatrixf(const Context *context, const GLfloat *m);
bool ValidateMultMatrixx(const Context *context, const GLfixed *m);
bool ValidateMultiTexCoord4f(const Context *context,
                             GLenum target,
                             GLfloat s,
                             GLfloat t,
                             GLfloat r,
                             GLfloat q);
bool ValidateMultiTexCoord4x(const Context *context,
                             GLenum texture,
                             GLfixed s,
                             GLfixed t,
                             GLfixed r,
                             GLfixed q);
bool ValidateNormal3f(const Context *context, GLfloat nx, GLfloat ny, GLfloat nz);
bool ValidateNormal3x(const Context *context, GLfixed nx, GLfixed ny, GLfixed nz);
bool ValidateNormalPointer(const Context *context,
                           VertexAttribType typePacked,
                           GLsizei stride,
                           const void *pointer);
bool ValidateOrthof(const Context *context,
                    GLfloat l,
                    GLfloat r,
                    GLfloat b,
                    GLfloat t,
                    GLfloat n,
                    GLfloat f);
bool ValidateOrthox(const Context *context,
                    GLfixed l,
                    GLfixed r,
                    GLfixed b,
                    GLfixed t,
                    GLfixed n,
                    GLfixed f);
bool ValidatePointParameterf(const Context *context, PointParameter pnamePacked, GLfloat param);
bool ValidatePointParameterfv(const Context *context,
                              PointParameter pnamePacked,
                              const GLfloat *params);
bool ValidatePointParameterx(const Context *context, PointParameter pnamePacked, GLfixed param);
bool ValidatePointParameterxv(const Context *context,
                              PointParameter pnamePacked,
                              const GLfixed *params);
bool ValidatePointSize(const Context *context, GLfloat size);
bool ValidatePointSizex(const Context *context, GLfixed size);
bool ValidatePolygonOffsetx(const Context *context, GLfixed factor, GLfixed units);
bool ValidatePopMatrix(const Context *context);
bool ValidatePushMatrix(const Context *context);
bool ValidateRotatef(const Context *context, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
bool ValidateRotatex(const Context *context, GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
bool ValidateSampleCoveragex(const Context *context, GLclampx value, GLboolean invert);
bool ValidateScalef(const Context *context, GLfloat x, GLfloat y, GLfloat z);
bool ValidateScalex(const Context *context, GLfixed x, GLfixed y, GLfixed z);
bool ValidateShadeModel(const Context *context, ShadingModel modePacked);
bool ValidateTexCoordPointer(const Context *context,
                             GLint size,
                             VertexAttribType typePacked,
                             GLsizei stride,
                             const void *pointer);
bool ValidateTexEnvf(const Context *context,
                     TextureEnvTarget targetPacked,
                     TextureEnvParameter pnamePacked,
                     GLfloat param);
bool ValidateTexEnvfv(const Context *context,
                      TextureEnvTarget targetPacked,
                      TextureEnvParameter pnamePacked,
                      const GLfloat *params);
bool ValidateTexEnvi(const Context *context,
                     TextureEnvTarget targetPacked,
                     TextureEnvParameter pnamePacked,
                     GLint param);
bool ValidateTexEnviv(const Context *context,
                      TextureEnvTarget targetPacked,
                      TextureEnvParameter pnamePacked,
                      const GLint *params);
bool ValidateTexEnvx(const Context *context,
                     TextureEnvTarget targetPacked,
                     TextureEnvParameter pnamePacked,
                     GLfixed param);
bool ValidateTexEnvxv(const Context *context,
                      TextureEnvTarget targetPacked,
                      TextureEnvParameter pnamePacked,
                      const GLfixed *params);
bool ValidateTexParameterx(const Context *context,
                           TextureType targetPacked,
                           GLenum pname,
                           GLfixed param);
bool ValidateTexParameterxv(const Context *context,
                            TextureType targetPacked,
                            GLenum pname,
                            const GLfixed *params);
bool ValidateTranslatef(const Context *context, GLfloat x, GLfloat y, GLfloat z);
bool ValidateTranslatex(const Context *context, GLfixed x, GLfixed y, GLfixed z);
bool ValidateVertexPointer(const Context *context,
                           GLint size,
                           VertexAttribType typePacked,
                           GLsizei stride,
                           const void *pointer);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_ES1_AUTOGEN_H_
