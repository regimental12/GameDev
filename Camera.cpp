#include "Camera.h"

Camera::Camera()
{
    xPos = 1024/2;
    yPos = 768/2;
    yaw = 90.0f;
    pitch = 0.0f;
    xOffSet = 0;
    yOffSet = 0;
    SDL_ShowCursor(SDL_DISABLE);

    cameraPos = glm::vec3(0.0f, 0.0f, 10.0f);
}

void Camera::handleMovement(SDL_Event *e)
{
        if (e->type == SDL_KEYDOWN && e->key.repeat == 0)
        {
            switch (e->key.keysym.sym)
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

        else if (e->type == SDL_KEYUP && e->key.repeat == 1)
        {
            switch (e->key.keysym.sym)
            {
                case SDLK_UP:
                    cameraPos -= cameraSpeed * cameraDir;
                    break;
                case SDLK_DOWN:
                    cameraPos += cameraSpeed * cameraDir;
                    break;
                case SDLK_LEFT:
                    cameraPos += glm::cross(cameraDir, cameraUp) * cameraSpeed;
                    break;
                case SDLK_RIGHT:
                    cameraPos -= glm::cross(cameraDir, cameraUp) * cameraSpeed;
                    break;
            }
        }

        
        if(e->type == SDL_MOUSEMOTION)
	{
	  SDL_MouseMotionEvent mouse;
	  SDL_GetMouseState(&xPos , &yPos);
	  
	  GLfloat sens = 0.01f;
	  
	  cameraDir.x = cos(xPos * sens);
	  cameraDir.y = sin(yPos * sens);
	}
}


void Camera::update()
{
    view = glm::lookAt(cameraPos , cameraPos + cameraDir , cameraUp);
    projection = glm::perspective(45.0f, (float)1024/(float)768, 0.1f, 1000.0f);    
}


