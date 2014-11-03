#ifndef CAMERA_H
#define CAMERA_H

#include "SDL2/SDL.h"
#include "GL/glew.h"
#include "GL/glu.h"

#define GLM_FORCE_RADIANS

#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

class Camera
{
public:
    Camera();

    glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
    glm::vec3 cameraDir = glm::vec3(0.0f, 0.0f, -1.0f);
    glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);

    GLfloat xPos , yPos , yaw , pitch;
    GLfloat cameraSpeed = 0.5f;

    void handleMovement(SDL_Event &e);
};

#endif