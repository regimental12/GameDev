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
/** @bug
 * Does not wotk as expected. Wanted a function that would act like Unity3ds Time.deltatime
 */
void Time::DeltaTime()
{
    currentFrame = SDL_GetTicks();
    deltaTime = (currentFrame - lastFrame) ;
    lastFrame = currentFrame;
}
/**
 * Basic frame rate cap.
 */
void Time::CapFrameRate()
{
    if(maxFPS > (deltaTime - lastFrame))
    {
        SDL_Delay(maxFPS);
    }
}