#*****************************************************************
#* Copyright (C) 2017 Robert Valler - All rights reserved.
#*
#* This file is part of the project: StarterApp
#*
#* This project can not be copied and/or distributed
#* without the express permission of the copyright holder
#*****************************************************************
cmake_minimum_required(VERSION 3.22.0)
project ( starter_app_cpp )
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
set (CMAKE_CXX_STANDARD 17)
set (Wall)
set (W1)
set (Wfloat-conversion)

#PACKAGES
find_package(Threads REQUIRED)

#INCLUDES
include_directories(${CMAKE_SOURCE_DIR}/src})

#SOURCE FILES
file(GLOB_RECURSE SOURCES
    ${CMAKE_SOURCE_DIR}/src/*.cpp
)

file(GLOB_RECURSE HEADERS
    ${CMAKE_SOURCE_DIR}/src/*.h
)

#GENERATE
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} )
target_link_libraries(${PROJECT_NAME}
                ${CMAKE_THREAD_LIBS_INIT}
)

