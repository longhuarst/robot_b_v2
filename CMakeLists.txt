cmake_minimum_required(VERSION 3.5)
project(robot_b_v2)

set(CMAKE_CXX_STANDARD 11)

add_executable(robot_b_v2 main.cpp control_b.c control_b.h)