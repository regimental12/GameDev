#ifndef CAMERA_H
#define CAMERA_H

#include "SDL2/SDL.h"
#include "GL/glew.h"
#include "GL/glu.h"
#include "Time.h"

#define GLM_FORCE_RADIANS

#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

class Camera
{
public:
    Camera();

    glm::vec3 cameraPos ;
    glm::vec3 cameraDir = glm::vec3(0.0f, 0.0f, -1.0f);
    glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);

    GLfloat yaw , pitch;
    int xPos , yPos;
    GLfloat cameraSpeed = 1.0f;

    void handleMovement(SDL_Event *e);
    void update();

    glm::mat4 view;
    glm::mat4 projection;
    Time* time;
};

#endif