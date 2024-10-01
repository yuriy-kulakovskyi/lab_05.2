#include <gtest/gtest.h>
#include "../include/main.h"
#include <cmath>

TEST(SeriesTest, TestA) {
  double x = 0.5;
  int n = 1;
  double a = x;

  A(x, n, a);
  EXPECT_NEAR(a, -0.0416667, 1e-5);
}

TEST(SeriesTest, TestS) {
  double x = 0.5;
  double eps = 1e-5;
  int n = 0;
  double s = 0;

  S(x, eps, n, s);

  EXPECT_NEAR(s, atan(x), eps);
  EXPECT_GT(n, 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}