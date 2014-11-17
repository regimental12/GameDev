#include "Camera.h"

Camera::Camera()
{
    xPos = 1024/2;
    yPos = 768/2;
    yaw = 90.0f;
    pitch = 0.0f;
    xOffSet = 0;
    yOffSet = 0;

    cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
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
		    //SDL_MOUSEMOTION:
		    if(e->type == SDL_MOUSEMOTION)
		    {
		      cameraDir.x += (e->motion.xrel * 0.01);
		      cameraDir.y += (e->motion.yrel * 0.01);
		    }
        
        /*if(e->type == SDL_MOUSEMOTION)
	{
	  SDL_MouseMotionEvent mouse;
	  SDL_GetMouseState(&xPos , &yPos);
	  
	  GLfloat sens = 0.1f;
	  
	  xPos * sens;
	  yPos * sens;
	  
	  /*if(xPos > 90)
	  {
	    xPos = 90;
	  }
	  if(xPos < -90)
	  {
	    xPos = -90;
	  }
	  if(yPos > 90)
	  {
	    yPos = 90;
	  }
	  if(yPos < -90)
	  {
	    yPos = -90;
	  }
	  cameraDir.x = cos(xPos);
	  cameraDir.y = sin(yPos);
	}*/
}


void Camera::update()
{
    view = glm::lookAt(cameraPos , cameraPos + cameraDir , cameraUp);
    projection = glm::perspective(45.0f, (float)1024/(float)768, 0.1f, 1000.0f);    
}


