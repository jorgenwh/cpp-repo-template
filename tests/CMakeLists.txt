cmake_minimum_required(VERSION 3.0)
project(template LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_subdirectory(src)
add_subdirectory(tests)

add_executable(${PROJECT_NAME} src/main.cpp ${SOURCE_FILES})
