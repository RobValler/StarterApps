cmake_minimum_required(VERSION 3.5.0)
project ( StarterAppC C)

include_directories(${CMAKE_SOURCE_DIR}/src})

file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/src/*.c)
file(GLOB HEADERS ${CMAKE_SOURCE_DIR}/src/*.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} )
