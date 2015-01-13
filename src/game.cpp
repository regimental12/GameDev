#include "game.h"


/**
 *  Initialise variables and create needed objects
 */
Game::Game()
{
    running = true;
    surface = NULL;
    time = new Time();
    camera = new Camera();
}

Game::~Game()
{
}


/**
 * Intialise SDL and create openGL context.
 * load, compile and linking of shaders. 
 * Image loading also done.
 */
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

    glEnable(GL_DEPTH_TEST);
    std::cout << "init\n";
    std::cout << "OpenGL version: " << glGetString(GL_VERSION) << std::endl;
    std::cout << "GLSL version: " << glGetString(GL_SHADING_LANGUAGE_VERSION) << std::endl;
    std::cout << "Vendor: " << glGetString(GL_VENDOR) << std::endl;
    std::cout << "Renderer: " << glGetString(GL_RENDERER) << std::endl;

    shader.loadShader("shaders/Vertex.vert", "shaders/Fragment.frag");
    loadCube();
    texture = iLoader.loadTexture("images/wall.jpg");
    width = iLoader.getwidth();
    height = iLoader.getheight();
     std::cout << texture << "\n";
    
    texture2 = iLoader.loadTexture("images/container.jpg");
    width2 = iLoader.getwidth();
    height2 = iLoader.getheight();
     std::cout << texture2 << "\n";
}

/**
 * Delete openGL context and cleanup SDL
 */
void Game::cleanup()
{
    SDL_GL_DeleteContext(glContext);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

/**
 * Main game loop
*/
void Game::gameloop()
{
    while (running)
    {
        time->DeltaTime();
        while (SDL_PollEvent(&mainEvent))
        {
            switch (mainEvent.type)
            {
                case SDL_QUIT:
                    running = false;
                    break;
            }
        }

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        camera->handleMovement(&mainEvent);
        camera->update();
	//SDL_WarpMouseInWindow(window , 1024/2 , 768/2);

        render();
        time->CapFrameRate();

        SDL_GL_SwapWindow(window);
    }
}

/**
 *  Render function all drawing code currently in here
 */

void Game::render()
{
  /**
   * create and fill two 3 dimensional arrays.
   */
    glm::vec3 cubePositions[10] [10] [10] ;
	   for(int x = 0 ; x < 10 ; x++ )
	   {
	     for ( int y = 0 ; y < 10 ;y++)
	     {
	       for (int z = 0 ;z < 10 ; z++)
	       {
		cubePositions[x][y][z] =  glm::vec3(x, y , z);
	       }
	     }
	   }
	   
	   glm::vec3 cubePositions2[10] [10] [10] ;
	   for(int x = 0 ; x < 10 ; x++ )
	   {
	     for ( int y = 0 ; y < 10 ;y++)
	     {
	       for (int z = 0 ;z < 10 ; z++)
	       {
		cubePositions2[x][y][z] =  glm::vec3(x+10, y+10 , z+10);
	       }
	     }
	   }
    
    shader.use();
    
    /*glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, texture);
    glUniform1i(glGetUniformLocation(shader.program, "ourTexture1"), 0);
    glActiveTexture(GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, texture2);
    glUniform1i(glGetUniformLocation(shader.program, "ourTexture2"), 1);*/

   
    GLint modelLoc = glGetUniformLocation(shader.program, "model");
    GLint viewLoc = glGetUniformLocation(shader.program, "view");
    GLint projLoc = glGetUniformLocation(shader.program, "projection");

    glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(camera->view));
    glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(camera->projection));
/**
 * Loop through both arrays and render.
 */
    glBindVertexArray(VAO);
	  for(int x = 0 ; x < 10 ; x++ )
	   {
	     for ( int y = 0 ; y < 10;y++)
	     {
	       for (int z = 0 ;z < 10; z++)
	       {
		  glBindTexture(GL_TEXTURE_2D, texture);
		  glm::mat4 model;
		  model = glm::translate(model, cubePositions[x][y][z]);
		  glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
		  glDrawArrays(GL_TRIANGLES, 0, 36);
		  glBindTexture(GL_TEXTURE_2D , 0);
		}
	     }
	   }
    glBindVertexArray(0);

    glBindVertexArray(VAO);
	  for(int x = 0 ; x < 10 ; x++ )
	   {
	     for ( int y = 0 ; y < 10;y++)
	     {
	       for (int z = 0 ;z < 10; z++)
	       {
		 glBindTexture(GL_TEXTURE_2D, texture2);
		  glm::mat4 model;
		  model = glm::translate(model, cubePositions2[x][y][z]);
		  glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
		  glDrawArrays(GL_TRIANGLES, 0, 36);
		  glBindTexture(GL_TEXTURE_2D , 0);
		}
	     }
	   }
    glBindVertexArray(0);
}

/**
 * Function to load and pass vertices to the Gpu
*/
void Game::loadCube()
{
    GLfloat vertices[] = {
            -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
            0.5f, -0.5f, -0.5f,  1.0f, 0.0f,
            0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
            0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
            -0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
            -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,

            -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
            0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
            0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
            0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
            -0.5f,  0.5f,  0.5f,  0.0f, 1.0f,
            -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,

            -0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
            -0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
            -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
            -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
            -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
            -0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

            0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
            0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
            0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
            0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
            0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
            0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

            -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
            0.5f, -0.5f, -0.5f,  1.0f, 1.0f,
            0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
            0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
            -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
            -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,

            -0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
            0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
            0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
            0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
            -0.5f,  0.5f,  0.5f,  0.0f, 0.0f,
            -0.5f,  0.5f, -0.5f,  0.0f, 1.0f
    };

    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    // Bind our Vertex Array Object first, then bind and set our buffers and pointers.
    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    // Position attribute
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
    glEnableVertexAttribArray(0);
    // TexCoord attribute
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
    glEnableVertexAttribArray(2);

    glBindVertexArray(0);
}