cmake_minimum_required(VERSION 3.15)
project(factorypattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(factorypattern main.cpp pizza.cpp pizza.h cheesepizza.cpp cheesepizza.h veggiepizza.cpp veggiepizza.h clampizza.cpp clampizza.h simplepizzafactory.cpp simplepizzafactory.h pizzastore.cpp pizzastore.h)