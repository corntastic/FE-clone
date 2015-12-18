#include "gtest/gtest.h"
#include "fe/example_library.h"

TEST(ExampleFunctionTest, Doubles) {
  EXPECT_EQ(0, fe::example_function(0));
  EXPECT_EQ(4, fe::example_function(2));
}
