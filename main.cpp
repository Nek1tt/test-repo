#include <vector>
#include <functional>
#include <iostream>
#include <cstdlib>
#include "candle.h"
#include <gtest/gtest.h>

TEST(JapaneseTest, body_contains) {
    Candle candle{ 0.0, 3.0, 3.0, 3.0 };
    EXPECT_TRUE(candle.body_contains(1.5));
    EXPECT_FALSE(candle.body_contains(4.5));
    EXPECT_TRUE(candle.body_contains(3.0));
}

TEST(JapaneseTest, contains) {
    Candle candle{ 0.0, 3.0, 2.0, 3.0 };
    EXPECT_TRUE(candle.contains(2.5));
    EXPECT_FALSE(candle.contains(4.5));
    EXPECT_TRUE(candle.contains(3.0));
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}