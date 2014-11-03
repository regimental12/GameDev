#include "SDL2/SDL.h"
#include "GL/glew.h"
#include "GL/glu.h"

class Time
{
public:
    Time();
    ~Time();

    GLfloat DeltaTime();
    void CapFrameRate();

    GLfloat deltaTime;
    GLfloat lastFrame;

    GLfloat currentFrame;
    int maxFPS;


};