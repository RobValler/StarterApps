#!/bin/sh
set -e
rm -rf build || true
mkdir build
cd build
conan install .. 
cmake -DCMAKE_BUILD_TYPE=Debug ..
make -j16

