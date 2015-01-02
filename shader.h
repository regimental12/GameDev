#ifndef SHADER_H
#define SHADER_H

#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "GL/glew.h"


class Shader
{
public:
    Shader();
    void loadShader(const GLchar *vertexShaderSource, const GLchar *fragmentShaderSource);

    GLuint program;

    void use();

private:
    std::string vertexCode;
    std::string fragmentCode;

};

#endif