/*
 * test_addNum.cpp
 *
 *  Created on: Aug 9, 2019
 *      Author: 310098657
 */
#include "gtest/gtest.h"
#include "codeCoverage.h"



//TEST(decision, fun) {
//  EXPECT_EQ(fun(6,14), 3);
//}
//
//TEST(decision1, fun) {
//  EXPECT_EQ(fun(6,16), 3);
//}

TEST(cov, covFunc) {
  EXPECT_EQ(covFunc(0,1), 5);
}
TEST(cov1, covFunc) {
  EXPECT_EQ(covFunc(0,0), 0);
}
TEST(cov2, covFunc) {
  EXPECT_EQ(covFunc(1,0), 5);
}
TEST(cov3, covFunc) {
  EXPECT_EQ(covFunc(1,1), 5);
}
