#include "Camera.h"

Camera::Camera()
{
    xPos = 1024/2;
    yPos = 768/2;
    yaw = -90.0f;
    pitch = 0.0f;
}

void Camera::handleMovement(SDL_Event &e)
{
    if(e.type == SDL_KEYDOWN && e.key.repeat == 0)
    {
        switch (e.key.keysym.sym)
        {
            case SDLK_UP:
                cameraPos += cameraSpeed * cameraDir;
                break;
            case SDLK_DOWN:
                cameraPos -= cameraSpeed * cameraDir;
                break;
            case SDLK_LEFT:
                cameraPos -= glm::cross(cameraDir, cameraUp) * cameraSpeed;
                break;
            case SDLK_RIGHT:
                cameraPos += glm::cross(cameraDir, cameraUp) * cameraSpeed;
                break;
        }
    }
    else if(e.type == SDL_KEYUP && e.key.repeat == 1)
    {
        switch (e.key.keysym.sym)
        {
            case SDLK_UP:
                cameraPos -= cameraSpeed * cameraDir;
                break;
            case SDLK_DOWN:
                cameraPos += cameraSpeed * cameraDir;
                break;
            case SDLK_LEFT:
                cameraPos +=glm::cross(cameraDir, cameraUp) * cameraSpeed;
                break;
            case SDLK_RIGHT:
                cameraPos -=glm::cross(cameraDir, cameraUp) * cameraSpeed;
                break;
        }
    }
}