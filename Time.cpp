#include "Time.h"

Time::Time()
{
    deltaTime = 0.0f;
    lastFrame = 0.0f;
    currentFrame = 0.0f;
}

Time::~Time()
{
}

void Time::DeltaTime()
{
    currentFrame = SDL_GetTicks();
    deltaTime = currentFrame - lastFrame;
    lastFrame = currentFrame;
}

void Time::CapFrameRate()
{
    currentFrame = SDL_GetTicks();
    if (1000 / 30 < (SDL_GetTicks() - currentFrame))
    {
        SDL_Delay((currentFrame - lastFrame) / 1000);
    }
    DeltaTime();
}