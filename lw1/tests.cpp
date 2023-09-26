#include <gtest/gtest.h>
#include "solution.cpp"

TEST(test01, basic_test_set)
{
    ASSERT_TRUE(solution(2,7)==1);
}

TEST(test02, basic_test_set)
{
    ASSERT_TRUE(solution(5,100)==314);
}

TEST(test03, basic_test_set)
{
    ASSERT_TRUE(solution(91,140)==204);
}

TEST(test04, basic_test_set)
{
    ASSERT_TRUE(solution(76,77)==7);
}

TEST(test05, basic_test_set)
{
    ASSERT_TRUE(solution(1,4)==5);
}

TEST(test06, basic_test_set)
{
    ASSERT_TRUE(solution(4,1732)==6652);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
