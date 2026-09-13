cmake_minimum_required(VERSION 3.31)
project(raylib_example C)
set(CMAKE_C_STANDARD 23)

set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(PLATFORM "Desktop" CACHE STRING "" FORCE)

list(APPEND CMAKE_MODULE_PATH "C:/libs/raylib-src/raylib-6.0/cmake")

add_subdirectory(C:/libs/raylib-src/raylib-6.0/src raylib_build)

add_executable(raylib_example main.c)
target_link_libraries(raylib_example PRIVATE raylib)



