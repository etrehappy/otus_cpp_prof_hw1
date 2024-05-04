#include "lib.h"
#include <gtest/gtest.h>

TEST(gtest_version, test_valid_version)
{
    //arrange 
    //act
    //assert 
    EXPECT_GT(version(), 0);
}

int main(int argc, char** argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
