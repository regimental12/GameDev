#include "Camera.h"

Camera::Camera()
{
    view = glm::lookAt(cameraPos, cameraPos + cameraDir, cameraUp);
}