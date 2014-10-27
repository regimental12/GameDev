#ifndef IMAGELOADER_H
#define IMAGELOADER_H


#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "GL/glew.h"
#include "GL/glu.h"
#include <iostream>

class imageLoader
{
public:
    imageLoader();
    ~imageLoader();

    GLuint loadTexture(std::string path);

    int getwidth() { return width; }
    int getheight() { return height; }

    GLuint getTexture() { return texture; }


private:
    GLuint texture;
    SDL_Surface* surface;
    int width , height;
};

#endif