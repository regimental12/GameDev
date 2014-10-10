#include "game.h"

Game::Game()
{
    running = true;
}

Game::~Game()
{
}

void Game::init()
{
    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow("Voxel Game" , SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 768, SDL_WINDOW_OPENGL);

    glContext = SDL_GL_CreateContext(window);

    glewInit();

    glClearColor(1.0, 1.0, 1.0, 1.0);

    glClear(GL_COLOR_BUFFER_BIT);
}

void Game::cleanup()
{
    SDL_GL_DeleteContext(glContext);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Game::gameloop()
{
    while(running)
    {
        while(SDL_PollEvent(&mainEvent))
        {
            switch (mainEvent.type)
            {
                case SDL_QUIT:
                    running = false;
                    break;
            }
        }
        SDL_GL_SwapWindow(window);
    }
    cleanup();
}