/*****************************************************************
 * Copyright (C) 2017- Robert Valler - All rights reserved.
 *
 * This file is part of the project: StarterApp
 *
 * This project can not be copied and/or distributed
 * without the express permission of the copyright holder
 *****************************************************************/

class CParmHandler
{
public:
    static CParmHandler& GetInstance()
    {
        static CParmHandler instance;
        return instance;
    }

    CParmHandler(CParmHandler const&)    = delete;
    void operator=(CParmHandler const&)  = delete;

    int m_argc;
    char **m_argv;

private:
    CParmHandler() {}


};
