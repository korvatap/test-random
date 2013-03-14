/*
 * main.cpp
 *
 *  Created on: Feb 8, 2013
 *      Author: Stateplex Team
 */
#include <iostream>
#include "calculate.h"
#include "gtest/gtest.h"

class DoxygenTest : public testing::Test {
protected:

	virtual void TestCaseSetUp() { }
	virtual void TestCaseTearDown() { }
	
	virtual void SetUp() 
	{
		first = 345;
	}

	virtual void TearDown() { }

	int first;
	int second;
	int sum;
	Calculate ctor;	
};

TEST_F(DoxygenTest, SummationTest)
{
	second = 4;
	sum = ctor.sum(first, second);

	ASSERT_EQ(349, sum);
}

TEST_F(DoxygenTest, SubstractTest)
{
	second = 6;
	sum = ctor.sub(first, second);

	ASSERT_EQ(339, sum);
}

TEST_F(DoxygenTest, MultiplyTest)
{
	second = 345;
	sum = ctor.multiply(first, second);

	ASSERT_EQ(119025, sum);
}
