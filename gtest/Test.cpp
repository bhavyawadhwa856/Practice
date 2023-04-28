#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

TEST( TestName, Subtest_Fatal){

    ASSERT_EQ(1,2);
    std::cout << "Fatal Test Sucess";

}

TEST( TestName, Subtest_NonFatal){

    EXPECT_EQ(1,2);
    std::cout << "Non Fatal Test Sucess";
    
}

TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}