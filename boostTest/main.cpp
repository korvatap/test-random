/*
 * main.cpp
 *
 *  Created on: Feb 13, 2013
 *      Author: Team Stateplex
 */

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
#include "calculate.h"

BOOST_AUTO_TEST_CASE(summation)
{
	Calculate c;
	int first = 2;
	int second = 2;
        BOOST_CHECK(c.sum(first, second) == 4);
}

BOOST_AUTO_TEST_CASE(multiplication)
{
        Calculate c;
	int first = 5;
	int second = 3;
        BOOST_CHECK(c.multiply(first, second) == 15);
}

BOOST_AUTO_TEST_CASE(subtraction)
{
	Calculate c;
	int first = 5;
	int second = 3;
        BOOST_CHECK(c.sub(first, second) == 2);
}
