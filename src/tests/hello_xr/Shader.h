#pragma once
#include <string>
#include "GLES3/gl3.h"

class Shader
{
private:
	GLint shaderType;
	GLint id;
public:
	Shader();
	Shader(std::string pathArg, GLint typeArg);
	Shader(const char* buffer, GLint typeArg);
	void Compile();
	GLint GetId();
};

