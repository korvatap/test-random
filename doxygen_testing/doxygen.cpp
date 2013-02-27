/** 
* Super description by underground testing mices.
* 
* @file doxygen.cpp
* @author Team Stateplex
* @date 8.2.2013
* @see doxygen.h

* Detailed description starts here.
* This is the detailed description
* which is very nice
*/

#include "doxygen.h"
#include <iostream>

using namespace std;

int main() {

        int first;
	int second;
        
        Doxygen test;

        first = 7;
        second = 8;

        cout << "First: " << first << endl;
        cout << "Second: " << second << endl;

        test.changeVariables(first,second);

        cout << "First: " << first << endl;
        cout << "Second: " << second << endl;
       
        test.printMysteriousText("AAAAA");

        return 0;
}

/**
* Mysterious printing
*
* @param mstr an string argument that will be printed
*/

void Doxygen::printMysteriousText(const string &mstr)
{
        cout << mstr << endl;
}

/**
 * Prints setti variable
*/

void Doxygen::printSetti()
{
        cout << getSetti();
}

/** 
 * Returns the variable setti
 *
 * @return setti integer value
 */

int Doxygen::getSetti()
{
        return setti;
}
