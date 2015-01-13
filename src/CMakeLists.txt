cmake_minimum_required(VERSION 2.8)


add_executable(VoxelGame main.cpp Camera.cpp game.cpp imageLoader.cpp shader.cpp Time.cpp)

INCLUDE(FindPkgConfig)

#find_package(OpenGL REQUIRED)
#find_package(GLEW REQUIRED)

#PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
#PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS} ${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS} )

TARGET_LINK_LIBRARIES(VoxelGame ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES} ${OPENGL_LIBRARIES} ${GLEW_LIBRARIES} ${GLUT_LIBRARY} )
target_include_directories (VoxelGame PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
