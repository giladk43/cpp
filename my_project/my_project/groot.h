#ifndef MY_GROOT_H
#define MY_GROOT_H

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

enum class ReturnValues : int {
	FAIL = -1,
	SUCCESS
};

//Prints the root of the inputed number
int root();
#endif //MY_GROOT_H

