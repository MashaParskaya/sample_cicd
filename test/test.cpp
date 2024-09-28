#include <sum.h>
#include <gtest/gtest.h>

TEST(SumTest, SumOfZeros) {
    EXPECT_EQ(sum(0, 0), 0);
}
