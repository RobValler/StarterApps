#*****************************************************************
#* Copyright (C) 2017- Robert Valler - All rights reserved.
#*
#* This file is part of the project: StarterApp
#*
#* This project can not be copied and/or distributed
#* without the express permission of the copyright holder
#*****************************************************************
#!/bin/sh
set -e
rm -rf build || true
mkdir build
cd build
conan install .. --build=missing
#cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake -DCMAKE_TOOLCHAIN_FILE=Release/generators/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Debug ..
#make -j16
cmake --build .

