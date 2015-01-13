#include "shader.h"

#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <cstring>

Shader::Shader()
{

}

void Shader::loadShader(const GLchar *vertexShaderSource, const GLchar *fragmentShaderSource)
{
    try
    {
        std::ifstream vShaderFile(vertexShaderSource );
        std::ifstream fShaderFile(fragmentShaderSource);

        std::stringstream vShaderStream, fShaderStream;

        vShaderStream << vShaderFile.rdbuf();
        fShaderStream << fShaderFile.rdbuf();

        vShaderFile.close();
        fShaderFile.close();

        vertexCode = vShaderStream.str();
        fragmentCode = fShaderStream.str();
    }
    catch (std::exception e)
    {
        std::cout << "ERROR::SHADER::FILES NOT READ" << std::endl;
    }
    const GLchar *vShaderCode = vertexCode.c_str();
    const GLchar *fShaderCode = fragmentCode.c_str();
    
    /*int* length1 =strlen( vertexCode);
    int* length2 = strlen(fragmentCode);*/

    GLuint vertex, fragment;
    GLint success;
    GLchar infoLog[512];
    GLint* wibble = NULL;
    int dribble = 512;
    wibble = &dribble;

    vertex = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex, 1, &vShaderCode, 0);
    glCompileShader(vertex);

    glGetShaderiv(vertex, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vertex, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
    }

    fragment = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment, 1, &fShaderCode, 0);
    glCompileShader(fragment);

    glGetShaderiv(fragment, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vertex, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
    }

    this->program = glCreateProgram();
    glAttachShader(this->program, vertex);
    glAttachShader(this->program, fragment);
    glLinkProgram(this->program);

    glGetProgramiv(this->program , GL_LINK_STATUS , &success);
    if(!success)
    {
        glGetProgramInfoLog(this->program , 512 , NULL , infoLog);
        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAIL\n" << infoLog << std::endl;
    }

    glDeleteShader(vertex);
    glDeleteShader(fragment);
}

void Shader::use()
{
    glUseProgram(this->program);
}