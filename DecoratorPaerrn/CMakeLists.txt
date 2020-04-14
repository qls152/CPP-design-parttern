cmake_minimum_required(VERSION 3.15)
project(dp)

set(CMAKE_CXX_STANDARD 14)

add_executable(dp main.cpp beverage.cpp beverage.h espresso.cpp espresso.h houseblend.cpp houseblend.h condimentdecorator.cpp condimentdecorator.h mocha.cpp mocha.h soy.cpp soy.h whip.cpp whip.h)