#include <gtest/gtest.h>

bool f() {
    return true;
}

TEST(ExampleTests, DemonstrateTestMacros) {
    EXPECT_TRUE(true);
    ASSERT_TRUE(true);

    const bool result = f();
    EXPECT_EQ(true, result);
}