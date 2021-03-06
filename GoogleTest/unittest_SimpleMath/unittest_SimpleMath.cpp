// unittest_SimpleMath.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <gtest/gtest.h>
#include "simplemath.h"

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(testMath, myCubeTest1)
{
	EXPECT_EQ(100, cubic(10)) << "passed success!!";
}

TEST(testMath, myCubeTest2)
{
	EXPECT_EQ(1000, cubic(10));
}
