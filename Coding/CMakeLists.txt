cmake_minimum_required(VERSION 2.8.0)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Debug")
endif()

PROJECT(webcrawler)
ADD_SUBDIRECTORY(main)