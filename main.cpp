#include "game.h"

Game* game = new Game();

int main()
{
    game->init();
    game->gameloop();
    game->cleanup();
    return 0;
}