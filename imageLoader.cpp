#include "imageLoader.h"

imageLoader::imageLoader()
{
    surface = NULL;
    texture = 0;
    width = 0;
    height = 0;
}

imageLoader::~imageLoader()
{
}

GLuint imageLoader::loadTexture(std::string path)
{
    surface = IMG_Load(path.c_str());

    if(surface == NULL)
    {
        std::cout << "loading image failed :: " << IMG_GetError() << std::endl;
    }
    width = surface->w;
    height = surface->h;

    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);

    // Set our texture parameters
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	// Set texture wrapping to GL_REPEAT (usually basic wrapping method)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    // Set texture filtering
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, surface->w, surface->h, 0, GL_RGB, GL_UNSIGNED_BYTE, surface->pixels);

    glGenerateMipmap(GL_TEXTURE_2D);
    SDL_FreeSurface(surface);
    glBindTexture(GL_TEXTURE_2D, 0);

    return texture;

}