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
   //     string text = "AAAAAAA";
        
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

void Doxygen::printMysteriousText(const string &mstr)
{
        cout << mstr << endl;
}

void Doxygen::printSetti()
{
        cout << getSetti();
}

int Doxygen::getSetti()
{
        return setti;
}
