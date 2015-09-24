cmake_minimum_required(VERSION 2.8)
project(Discrim)
add_subdirectory(function)

set(SOURCE_EXE main.cpp)

add_executable(Discrim ${SOURCE_EXE})

target_link_libraries(Discrim function)

#aux_source_directory(. SRC_LIST)
#add_executable(${PROJECT_NAME} ${SRC_LIST})
