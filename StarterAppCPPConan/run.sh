#!/bin/sh
set -e
cd build
conan install .. 

# conanfile.txt
cmake ..
make -j16

# conanfile.py
#conan build .. 
#conan create .. user/develop
