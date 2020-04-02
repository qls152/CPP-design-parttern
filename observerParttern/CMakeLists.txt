cmake_minimum_required(VERSION 3.15)
project(observerParttern)

set(CMAKE_CXX_STANDARD 14)

add_executable(observerParttern main.cpp subject.h observe.h data.h weatherdata.cpp weatherdata.h currentconditiondisplay.cpp currentconditiondisplay.h forecastdisplay.cpp forecastdisplay.h statisticsdisplay.cpp statisticsdisplay.h)