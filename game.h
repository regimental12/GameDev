#ifndef GAME_H
#define GAME_H

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "GL/glew.h"
#include "GL/gl.h"
#include "GL/glu.h"
#include <iostream>
#include "shader.h"


class Game
{
public:
    Game();
    ~Game();
    void init();
    void cleanup();
    void gameloop();
    void render();
    void setupShaders();
    void loadTriangle();
    void loadTexture(std::string path);

private:
    SDL_Window* window;
    SDL_Event mainEvent;
    SDL_GLContext glContext;
    bool running;
    GLint shaderProgram;
    GLuint VBO , VAO , EBO;
    Shader shader;
    GLuint texture;
    SDL_Surface* surface;
};

#endif