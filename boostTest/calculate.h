/*
 * calculate.h
 *
 *  Created on: Feb 11, 2013
 *      Author: Team Stateplex
 */

#ifndef CALCULATE_H_
#define CALCULATE_H_

class Calculate {
public:
	Calculate();
        ~Calculate();
	int sum(int &v1, int &v2);
	int sub(int &v1, int &v2);
	int multiply(int &v1, int &v2);
};


#endif /* CALCULATE_H_ */
