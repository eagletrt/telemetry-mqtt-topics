cmake_minimum_required(VERSION 3.26)

project(telemetry-mqtt-topics)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc/topics)

file(GLOB SOURCES "src/*.cpp" "src/topics/*.cpp")

add_library(mqtt-topics ${SOURCES})

