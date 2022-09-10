cmake_minimum_required(VERSION 3.0.0)
project(Chicken-Remastered VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Chicken-Remastered main.cpp)

add_subdirectory(src)
target_link_libraries(${PROJECT_NAME} chicken henhouse)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
