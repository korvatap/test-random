/*
 * calculate.cpp
 *
 *  Created on: Feb 11, 2013
 *      Author: tapio
 */

#include "calculate.h"


Calculate::~Calculate() {}

Calculate::Calculate() {}

int Calculate::sum(int &v1, int &v2)
{
	return v1+v2;

}

int Calculate::sub(int &v1, int &v2)
{
	return v1-v2;
}

int Calculate::multiply(int &v1, int &v2)
{
	return v1*v2;
}
