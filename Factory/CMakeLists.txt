cmake_minimum_required(VERSION 3.14)
project(Factory)

set(CMAKE_CXX_STANDARD 11)
include_directories(pizaa samplefactory)
add_executable(Factory main.cpp pizaa/pizza.cpp pizaa/pizza.h pizaa/cheesepizza.cpp pizaa/cheesepizza.h pizaa/veggiepizza.cpp pizaa/veggiepizza.h samplefactory/simplepizzafactory.cpp samplefactory/simplepizzafactory.h samplefactory/pizzastore.cpp samplefactory/pizzastore.h)