#cmake_minimum_required(VERSION 3.6)
cmake_minimum_required(VERSION 3.5.1)
project(GAva)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp GAva/src/GACircle.cpp GAva/src/GACircle.h GAva/src/GAColor.cpp GAva/src/GAColor.h GAva/src/GAGameMode.cpp GAva/src/GAGameMode.h)
add_executable(${PROJECT_NAME}  ${SOURCE_FILES})

target_link_libraries( ${PROJECT_NAME} ${OPENGL_gl_LIBRARY} ${GLUT_glut_LIBRARY} )
