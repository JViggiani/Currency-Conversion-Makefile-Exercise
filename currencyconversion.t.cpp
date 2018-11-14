#include <currencyconversion.h>
#include <gtest/gtest.h>

TEST(currencyConversionTest, positiveInput){
    EXPECT_DOUBLE_EQ(15, currencyConversion(5,3));
    EXPECT_DOUBLE_EQ(100, currencyConversion(50,2));
    EXPECT_DOUBLE_EQ(0, currencyConversion(2,0));
    EXPECT_DOUBLE_EQ(0, currencyConversion(0,0));
}

TEST(currencyConversionTest, negativeInput){
    EXPECT_DOUBLE_EQ(-15, currencyConversion(-5,3));
    EXPECT_DOUBLE_EQ(100, currencyConversion(-50,-2));
    EXPECT_DOUBLE_EQ(0, currencyConversion(-50,-0));
    EXPECT_DOUBLE_EQ(0, currencyConversion(-0,-0));
}

TEST(currencyConversionTest, fractionalInput){
    EXPECT_DOUBLE_EQ(1, currencyConversion(0.5,2));
    EXPECT_DOUBLE_EQ(-1, currencyConversion(-0.5,2));
    EXPECT_DOUBLE_EQ(0.16, currencyConversion(0.8, 0.2));
    EXPECT_DOUBLE_EQ(1.08, currencyConversion(-0.6, -1.8));
    EXPECT_DOUBLE_EQ(8.64,currencyConversion(-2.4, 3.6));
}
