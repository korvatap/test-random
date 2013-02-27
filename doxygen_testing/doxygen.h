/**
 * Doxygen testing class, this is brief description
 *
 * @file doxygen.h
 * @author Team Stateplex
 * @date 8.2.2013
 * @see doxygen.cpp
 *
*/

#ifndef INCLUDED_DOXYGEN_H
#define INCLUDED_DOXYGEN_H

#include <string>

class Doxygen {

public:

	template<class T> inline void changeVariables(T& variable, T& variable2);

	void printMysteriousText(const std::string &mstr);

        void printSetti();

private:
        int setti;

        int getSetti();

};

/*** Inline implementations ***/

/** 
 * A template function that switches values between variables
 *
 * @param variable as an undefined variable
 * @param variable2 as an undefined variable
*/
template<class T>
inline void changeVariables(T& variable, T& variable2)
{
        T temp;
        temp = variable;
        variable = variable2;
        variable2 = temp;
};

#endif
