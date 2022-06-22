#pragma once
#include "MeshRenderData.h"
#include <GLES3/gl3.h>

class MeshOpenGLRenderData: public MeshRenderData
{
public:
    GLuint vao, vbo, ibo;
};