#ifndef MY_FOLD_H
#define MY_FOLD_H
#include <iostream>

enum class ReturnValues : int {
	FAIL = -1,
	SUCCESS
};

using std::cin;
using std::cout;
using std::endl;

//True if the number is prime
bool isPrimeNumber();

#endif //MY_FOLD_H
