#include "game.h"

Game::Game()
{
    running = true;
}

Game::~Game()
{
}

void Game::init()
{
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION , 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

    window = SDL_CreateWindow("Voxel Game" , SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 768, SDL_WINDOW_OPENGL);

    glContext = SDL_GL_CreateContext(window);

    glewExperimental = GL_TRUE;
    glewInit();

    glViewport(0, 0, 1024, 768);
    std::cout << "init";
    setupShaders();
    loadTriangle();

}

void Game::cleanup()
{
    SDL_GL_DeleteContext(glContext);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Game::gameloop()
{
    while(running)
    {

        while(SDL_PollEvent(&mainEvent))
        {
            switch (mainEvent.type)
            {
                case SDL_QUIT:
                    running = false;
                    break;
            }
        }

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        render();

        SDL_GL_SwapWindow(window);

    }
}

void Game::setupShaders()
{
    const GLchar* vertexShaderSource = "#version 330 core\n"
            "layout (location = 0) in vec2 position;\n"
            "void main()\n"
            "{\n"
            "gl_Position = vec4(position.x, position.y, 0.0, 1.0);\n"
            "}\0";
    const GLchar* fragmentShaderSource = "#version 330 core\n"
            "out vec4 color;\n"
            "void main()\n"
            "{\n"
            "color = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
            "}\n\0";

    GLint vertexShader = glCreateShader(GL_VERTEX_SHADER);
    GLint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    shaderProgram = glCreateProgram();
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
}

void Game::render()
{
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glUseProgram(shaderProgram);
    glBindVertexArray(VAO);
    //glDrawArrays(GL_TRIANGLES, 0, 3);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
    glBindVertexArray(0);
}

void Game::loadTriangle()
{
    /*GLfloat vertices[] = {
            -0.5f, -0.5f,	// Left (X,Y)
            0.5f, -0.5f, // Right (X,Y)
            0.0f, 0.5f  // Top (X,Y)
    };*/
    GLfloat vertices[] = {
        0.5f, 0.5f,	   // Top Right
        0.5f, -0.5f,   // Bottom Right
        -0.5f, -0.5f,  // Bottom Left
        -0.5f, 0.5f    // top left
    };

    GLuint indices[] = {
            0,1,3,
            1,2,3
    };


    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glGenBuffers(1, &EBO);

    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER , EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER , sizeof(indices) , indices , GL_STATIC_DRAW);

    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, (GLvoid*)0);
    glEnableVertexAttribArray(0);

    glBindVertexArray(0);
}
