#ifndef GAME_H
#define GAME_H

#include "SDL2/SDL.h"
#include "GL/glew.h"
#include "GL/gl.h"
#include "GL/glu.h"
#include <iostream>


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

private:
    SDL_Window* window;
    SDL_Event mainEvent;
    SDL_GLContext glContext;
    bool running;
    GLint shaderProgram;
    GLuint VBO , VAO , EBO;
};

#endif