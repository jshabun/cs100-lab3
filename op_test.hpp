#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateNegNonZero) {
    Op* test = new Op(-9);
    EXPECT_EQ(test->evaluate(), -9);
}

TEST(OpTest, OpStringifyNonZero) {
    Op* test = new Op(8);
   std::string eight = "8";
    EXPECT_EQ(test->stringify(), eight);
}

TEST(OpTest, OpStringifyZero) {
    Op* test = new Op(0);
   std::string zero = "0";
    EXPECT_EQ(test->stringify(), zero);
}

TEST(OpTest, OpStringifyNegNonZero) {
    Op* test = new Op(-9);
   std::string negnine = "-9";
    EXPECT_EQ(test->stringify(), negnine);
}

#endif //__OP_TEST_HPP__

