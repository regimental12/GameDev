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

    glm::vec3 camPos = glm::vec3(0.0f , 0.0f , 2.0f);
    glm::vec3 camTarget = glm::vec3(0.0f , 0.0f , 0.0f);
    glm::vec3 camDirection = camPos - camTarget;
    glm::vec3 up = glm::vec3(0.0f , 1.0f , 0.0f);
    glm::vec3 camRight = glm::cross(up, camDirection);
    glm::vec3 camUp = glm::cross(camDirection , camRight);
    glm::mat4 view;

    glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 2.0f);
    glm::vec3 cameraDir = glm::vec3(0.0f, 0.0f, 1.0f);
    glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);

    GLfloat cameraSpeed = 0.05f;



};

#endif