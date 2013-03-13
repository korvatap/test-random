/*
 * main.cpp
 *
 *  Created on: Feb 8, 2013
 *      Author: Stateplex Team
 */
#include <iostream>
#include "calculate.h"
#include "gtest/gtest.h"


TEST(FunctionTests, SummationTest)
{
	int first = 5;
	int second = 4;
	int sum;

	Calculate ctor;
	sum = ctor.sum(first, second);

	ASSERT_EQ(9, sum);
}

TEST(FunctionTests, SubstractTest)
{
	int first = 14;
	int second = 6;
	int sum;

	Calculate ctor;
	sum = ctor.sub(first, second);

	ASSERT_EQ(8, sum);
}

TEST(FunctionTests, MultiplyTest)
{
	int first = 345;
	int second = 345;
	int sum;

	Calculate ctor;
	sum = ctor.multiply(first, second);

	ASSERT_EQ(119025, sum);
}
