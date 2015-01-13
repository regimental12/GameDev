/**
 * Class to initialise SDL and openGL
 * also contains the main loop and render functions.
 * object is created and used from main.cpp
 */

#ifndef GAME_H
#define GAME_H

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "GL/glew.h"
#include <iostream>
#include "shader.h"
#include "imageLoader.h"
#include "Camera.h"
#include "Time.h"

#define GLM_FORCE_RADIANS

#include "glm/glm.hpp"
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


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
    void loadCube();

private:
    SDL_Window* window;
    SDL_Event mainEvent;
    SDL_GLContext glContext;
    bool running;
    GLint shaderProgram;
    GLuint VBO , VAO , EBO;
    Shader shader;
    imageLoader iLoader;
    GLuint texture;
    GLuint texture2;
    SDL_Surface* surface;
    int width , height , start;
    int width2 , height2;
    Camera* camera;
    Time* time;
};

#endif