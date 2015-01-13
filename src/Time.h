/**
 * Class to limit and control frame rate / camera movement speed,
 * or aleast atempt to.
 * Never quite got the \c Deltatime() function to work correctly.
*/
#ifndef TIME_H
#define TIME_H


#include "SDL2/SDL.h"
#include "GL/glew.h"
#include "GL/glu.h"

class Time
{
public:
    Time();
    ~Time();

    void DeltaTime();
    void CapFrameRate();

    GLfloat deltaTime;
    GLfloat lastFrame;

    GLfloat currentFrame;
    int maxFPS;
};

#endif