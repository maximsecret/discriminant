cmake_minimum_required(VERSION 2.6)
project(function)

set(SOURCE_LIB discrim.cpp language.cpp)
add_library(function STATIC ${SOURCE_LIB})
