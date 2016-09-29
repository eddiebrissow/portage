cmake_minimum_required(VERSION 2.6)
project(portage)

# includes cmake/FindSDL2.cmake
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories (${INCLUDE_DIR})
include_directories(${SDL2_INCLUDE_DIR})
file(GLOB_RECURSE sources ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE includes ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(portage ${sources} ${includes})
target_link_libraries(portage ${SDL2_LIBRARY} ${SDL2IMAGE_LIBRARY})