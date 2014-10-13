#ifndef GAME_H
#define GAME_H

#include "SDL2/SDL.h"
#include "GL/glew.h"
#include "GL/gl.h"

class Game
{
public:

    Game();
    ~Game();
    void init();
    void cleanup();
    void gameloop();
    void triangle();

private:

    SDL_Window* window;
    SDL_Event mainEvent;
    SDL_GLContext glContext;
    bool running;

};

#endif