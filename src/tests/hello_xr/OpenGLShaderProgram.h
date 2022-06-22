#pragma once

#include <GLES3/gl3.h>
#include "Shader.h"

struct OpenGLShaderProgram
{
    Shader vertex;
    Shader fragment;
    GLuint programID;
};