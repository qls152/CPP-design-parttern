cmake_minimum_required(VERSION 3.15)
project(StateMachine)

set(CMAKE_CXX_STANDARD 14)

AUX_SOURCE_DIRECTORY(. SRC_LIST)

add_executable(StateMachine ${SRC_LIST} state_interface.h NoQuarterState.h HasQuarterState.h SoldState.h SoldOutState.h)