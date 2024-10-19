/*****************************************************************

 *****************************************************************/

#include <gtest/gtest.h>

#include "parm_handl.h"

int main(int argc, char *argv[])
{
    int result;
    testing::InitGoogleTest(&argc, argv);
    CParmHandler::GetInstance().m_argc = argc;
    CParmHandler::GetInstance().m_argv = argv;

    ///< Test filters
//    ::testing::GTEST_FLAG(filter) = "*Test_*";
    result = RUN_ALL_TESTS();
    return result;
}
