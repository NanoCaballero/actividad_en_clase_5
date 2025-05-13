#include <gtest/gtest.h>
#include "multiplicar.h"

TEST(MultTest, HandlesPositiveInput)
{
int mult = mult(5, 2);

EXPECT_EQ(mult, 10);
}
