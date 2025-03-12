cmake_minimum_required(VERSION 3.24.2)
project(testproj CXX)

set(SOURCES candle.cpp main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
