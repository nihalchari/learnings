#include "gtest/gtest.h"
#include "greatest_num.hpp"
using namespace ::testing;

class GreaterTest : public Test
{
};

TEST(GreaterTest, AisGreater)
{
    EXPECT_EQ(3, greatest__num(3, 1, 2));
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
