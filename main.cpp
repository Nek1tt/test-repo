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

TEST(JapaneseTest, full_size) {
    Candle candle{ 0.0, 3.0, 2.0, 3.0 };
    EXPECT_EQ(candle.full_size(), 1.0);
    Candle candle1{ 0.0, 3.0, 3.0, 3.0 };
    EXPECT_EQ(candle1.full_size(), 0.0);
    Candle candle2{ 0.0, 3.0, 4.0, 3.0 };
    EXPECT_EQ(candle2.full_size(), 1.0);
}

TEST(JapaneseTest, body_size) {
    Candle candle{ 0.0, 3.0, 2.0, 3.0 };
    EXPECT_EQ(candle.body_size(), 3.0);
    Candle candle1{ 1.0, 3.0, 3.0, 3.0 };
    EXPECT_EQ(candle1.body_size(), 2.0);
    Candle candle2{ 4.0, 3.0, 4.0, 3.0 };
    EXPECT_EQ(candle2.body_size(), 1.0);
}

TEST(JapaneseTest, is_red) {
    Candle candle{ 4.0, 3.0, 2.0, 3.0 };
    EXPECT_TRUE(candle.is_red());
    Candle candle1{ 4.0, 3.0, 2.0, 5.0 };
    EXPECT_FALSE(candle1.is_red());
    Candle candle2{ 4.0, 3.0, 2.0, 4.0 };
    EXPECT_TRUE(candle.is_red());
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}