/*
 *  Test.cpp
 *
 *  Created on: Feb 21, 2013
 *  Author: Team Stateplex
 */

#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"
#include "calculate.h"
#include <string>

void sumTest() {
        Calculate calc;
        int first = 5;
        int second = 5;

        ASSERTM("Summation was incorrect!", 10 == calc.sum(first, second));

}

void subTest() {
        Calculate calc;
        int first = 5;
        int second = 3;

        ASSERTM("Subtraction was incorrect!", 2 == calc.sub(first, second));
}

void multiplyTest() {
        Calculate calc;
        int first = 5;
        int second = 5;

        ASSERTM("Multiplication was incorrect!", 25 == calc.multiply(first, second));
}

void runSuite(){
	cute::suite s;

	s.push_back(CUTE(sumTest));
	s.push_back(CUTE(subTest));
	s.push_back(CUTE(multiplyTest));

	cute::ide_listener lis;
	cute::makeRunner(lis)(s, "The Suite");
}

int main(){
    runSuite();
    return 0;
}



