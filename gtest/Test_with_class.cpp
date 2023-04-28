#include <gtest/gtest.h>
#include "my_class.h"

TEST(StringTest, check){
    MyClass mc("root");
    std::string value = mc.GetId();
    ASSERT_STREQ(value.c_str(),"root");
}

// TEST(MyClassTest, AddTest) {
//     MyClass myClass;
//     EXPECT_EQ(2, myClass.add(1, 1));
// }

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}