cmake_minimum_required(VERSION 3.11...3.22)

project(
  Algorithms
  VERSION 0.1
  DESCRIPTION "Implementation of some algorithms"
  LANGUAGES CXX)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  set(CMAKE_CXX_EXTENSIONS OFF)
  set_property(GLOBAL PROPERTY USE_FOLDERS ON)
  include(CTest)
endif()

add_subdirectory(algorithms)
add_subdirectory(application)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
  add_subdirectory(tests)
endif()
