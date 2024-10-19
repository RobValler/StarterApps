cmake_minimum_required(VERSION 3.22.0)
project ( starter_app_conan )
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
set (CMAKE_CXX_STANDARD 17)
set (Wall)
set (W1)
set (Wfloat-conversion)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

#PACKAGES
find_package(Threads REQUIRED)

#INCLUDES
include_directories(${CMAKE_SOURCE_DIR}/src})

#SOURCE FILES
file(GLOB SOURCES
    ${CMAKE_SOURCE_DIR}/src/*.cpp
)

file(GLOB HEADERS
    ${CMAKE_SOURCE_DIR}/src/*.h
)

#GENERATE
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} )
target_link_libraries(${PROJECT_NAME}
                ${CMAKE_THREAD_LIBS_INIT}
                CONAN_PKG::boost)

