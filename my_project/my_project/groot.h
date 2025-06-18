#ifndef MY_GROOT_H
#define MY_GROOT_H

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

enum class ReturnValues : int {
	SUCCESS = 0,
	NOT_DOUBLE_FAIL,
	NEGATIVE_FAIL
};

//Prints the root of the inputed number
int printSquareRoot();
#endif //MY_GROOT_H

