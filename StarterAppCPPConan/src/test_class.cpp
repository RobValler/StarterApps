/*****************************************************************
 * Copyright (C) 2017 Robert Valler - All rights reserved.
 *
 * This file is part of the project: StarterApp
 *
 * This project can not be copied and/or distributed
 * without the express permission of the copyright holder
 *****************************************************************/

#include "test_class.h"

#include <iostream>

int CTestClass::Start() {

    std::cout << "Start" << std::endl;
    return 0;
}

int CTestClass::Stop() {

    std::cout << "Stop" << std::endl;
    return 0;
}
