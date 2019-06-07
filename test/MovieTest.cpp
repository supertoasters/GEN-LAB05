//
// Created by baribal on 5/17/19.
//

#include "MovieTest.h"
#include "../googletest/include/gtest/gtest.h";

using ::testing::AtLeast;

TEST(PainterTest, CanDrawSomething) {
EXPECT_TRUE(painter.DrawCircle(0, 0, 10));


int main(int argc, char** argv) {
    // The following line must be executed to initialize Google Mock
    // (and Google Test) before running the tests.
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
};