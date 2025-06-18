#include <cmath>
#include <iostream>
#include "groot.h"

using std::cin;
using std::cout;
using std::endl;

void errorNegativeThrower() {
	throw errorCodes::NEGATIVE_FAIL;
}

//Returns a double 
void getDoubleFromInput(double *number) {
	cout << "Enter a number" << endl;
	if (cin >> *number) {
		return;
	}
	*number = -1; 
}

void printSquareRoot() {
	double number = 0;
	getDoubleFromInput(&number);
	try {
		if (number < 0) {
			errorNegativeThrower();
		}
		cout << "The square root is: " << sqrt(number) << endl;
	}
	catch (errorCodes errorCode) {
		cout << "The input cannot be square rooted " << endl;
	}
}

int main() {
	printSquareRoot();
	return 0;
}
