cmake_minimum_required(VERSION 3.15)
project(Iterpattern)

set(CMAKE_CXX_STANDARD 14)
AUX_SOURCE_DIRECTORY(./ SRC)

add_executable(Iterpattern ${SRC})