#include "Camera.h"

Camera::Camera()
{
    xPos = 1024/2;
    yPos = 768/2;
    yaw = -90.0f;
    pitch = 0.0f;

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



    /*GLfloat xoffset = xpos - lastX;
    GLfloat yoffset = lastY - ypos; // Reversed since y-coordinates go from bottom to left
    lastX = xpos;
    lastY = ypos;*/

   /* GLfloat sensitivity = 0.05f;
    xoffset *= sensitivity;
    yoffset *= sensitivity;*/


}


void Camera::update()
{
    view = glm::lookAt(cameraPos , cameraPos + cameraDir , cameraUp);
    projection = glm::perspective(45.0f, (float)1024/(float)768, 0.1f, 1000.0f);

    SDL_MouseMotionEvent mouse;

    yaw = mouse.x  * 0.5f;
    pitch = mouse.y * 0.5f ;

    // Make sure that when pitch is out of bounds, screen doesn't get flipped
    if(pitch > 89.0f)
        pitch = 89.0f;
    if(pitch < -89.0f)
        pitch = -89.0f;

    glm::vec3 front;
    front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
    front.y = sin(glm::radians(pitch));
    front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
    cameraDir = front;
}


