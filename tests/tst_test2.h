#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "func.h"
}

TEST(func, no_sol)
{
  vr res = variable(2, 2, 1);
  EXPECT_EQ(0, res.vr_count);
    /*ASSERT_THAT(0, Eq(0)); */
}

TEST(func, one_sol) {
    vr res = variable(16, -8, 1);
    EXPECT_EQ(1, res.vr_count);
    EXPECT_DOUBLE_EQ(0.25, res.x1);
}

TEST(func, two_sols_1) {
    vr res = variable(2, 5, -7);
    EXPECT_EQ(2, res.vr_count);
    EXPECT_DOUBLE_EQ(1.0, res.x1);
    EXPECT_DOUBLE_EQ(-3.5, res.x2);
}

TEST(func, two_sols_2) {
    vr res = variable(1, 4, 0);
    EXPECT_EQ(2, res.vr_count);
    EXPECT_DOUBLE_EQ(-4.0, res.x1);
    EXPECT_DOUBLE_EQ(0.0, res.x2);
}

TEST(func, stranger_things_1) {
    vr res = variable(1, 0, 0);
    EXPECT_EQ(1, res.vr_count);
    EXPECT_DOUBLE_EQ(0.0, res.x1);
}

TEST(func, stranger_things_2) {
    vr res = variable(0, 1, 0);
    EXPECT_EQ(1, res.vr_count);
    EXPECT_DOUBLE_EQ(0.0, res.x1);
}

TEST(func, stranger_things_3) {
    vr res = variable(0, 0, 1);
    EXPECT_EQ(0, res.vr_count);
}

TEST(func, stranger_things_4) {
    vr res = variable(0, 0, 0);
    EXPECT_EQ(0, res.vr_count);
}
