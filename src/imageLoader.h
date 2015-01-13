/**
 * Class to handle loading of images.
 * uses SDL to generate an SDL surface then passes it to openGL.
 * returns a GLuint index of the image.
 */

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
    
    GLuint getTexture() { return texture; }
    int getwidth() { return width; }
    int getheight() { return height; }


private:
    GLuint texture;
    SDL_Surface* surface;
    int width , height;
};

#endif