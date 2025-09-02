#*****************************************************************
#* Copyright (C) 2017- Robert Valler - All rights reserved.
#*
#* This file is part of the project: StarterApp
#*
#* This project can not be copied and/or distributed
#* without the express permission of the copyright holder
#*****************************************************************
cmake_minimum_required(VERSION 3.22.0)
project ( starter_app_conan )
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
set (CMAKE_CXX_STANDARD 17)
set (Wall)
set (W1)
set (Wfloat-conversion)

# packages
find_package(Boost 1.88.0 REQUIRED COMPONENTS boost)

#INCLUDES

#CONFIG FILES
 file(GLOB_RECURSE CONFIG
     ${CMAKE_SOURCE_DIR}/conanfile.py
     ${CMAKE_SOURCE_DIR}/create.sh
 )

#SOURCE FILES
file(GLOB_RECURSE SOURCES
    ${CMAKE_SOURCE_DIR}/src/*.cpp
)

file(GLOB_RECURSE HEADERS
    ${CMAKE_SOURCE_DIR}/src/*.h
)

#GENERATE
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${CONFIG})
target_link_libraries(${PROJECT_NAME} PRIVATE
                ${CMAKE_THREAD_LIBS_INIT}
                Boost::boost
)
