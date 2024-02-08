#include <gtest/gtest.h>
#include "math.h"

TEST(AdditionTest, GivenTwoIntegers_WhenAdding_ThenSumIsCorrect)
{   
    int expected_sum{5};
    int first_number{3};
    int second_number{2};

    EXPECT_EQ(expected_sum, Math::addition(first_number, second_number));
}

TEST(SubtractionTest, GivenTwoIntegers_WhenSubtracting_ThenSumIsCorrect)
{   
    int expected_sum{1};
    int first_number{3};
    int second_number{2};

    EXPECT_EQ(expected_sum, Math::subtraction(first_number, second_number));
}
