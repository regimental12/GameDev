#include "game.h"

Game* game = new Game();

int main()
{
  /**
   *  Main entry point.
   */
    game->init();
    game->gameloop();
    game->cleanup();
    return 0;
}

