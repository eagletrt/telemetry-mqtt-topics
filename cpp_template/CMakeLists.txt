cmake_minimum_required(VERSION 3.16)

project(telemetry-mqtt-topics VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(INCLUDE_DIR_INTERNAL
        ${CMAKE_CURRENT_LIST_DIR}/inc
        )

include_directories(
        ${INCLUDE_DIR_INTERNAL}
)

file(GLOB SOURCE_FILES
        "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp"
        )

get_property(DIRS DIRECTORY ${CMAKE_CURRENT_LIST_DIR} PROPERTY INCLUDE_DIRECTORIES)

set(
        MQTT_TOPICS_INCLUDE_DIRS
        ${DIRS}
        PARENT_SCOPE
)

set(MQTT_TOPICS_INCLUDE_DIR ${INCLUDE_DIR_INTERNAL} PARENT_SCOPE)
add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

target_include_directories(telemetry-mqtt-topics PUBLIC ${INCLUDE_DIR_INTERNAL})
target_link_libraries(${PROJECT_NAME})