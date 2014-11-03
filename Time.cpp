#include "Time.h"

Time::Time()
{
    deltaTime = 0.0f;
    lastFrame = 0.0f;
    currentFrame = 0.0f;
    maxFPS = 1000/60;
}

Time::~Time()
{
}

GLfloat Time::DeltaTime()
{
    currentFrame = SDL_GetTicks();
    deltaTime = (currentFrame - lastFrame) / 1000.0f ;
    lastFrame = currentFrame;
    return deltaTime;
}

void Time::CapFrameRate()
{
    if(maxFPS > (deltaTime - lastFrame) )
    {
        SDL_Delay(maxFPS);
    }
}