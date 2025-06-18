#include "optimus.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void errorNegativeThrower() {
	throw errorCodes::NEGATIVE_FAIL;
}

//Returns an int 
void getIntFromInput(int* number) {
	cout << "Enter a number" << endl;
	if (cin >> *number) {
		return;
	}
	*number = -1;
}

bool isPrimeNumber() {
	int number = 0;
	getIntFromInput(&number);
	try {
		if (number < 0)
		{
			errorNegativeThrower();
		}
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				cout << "The number is not prime" << endl;
				return false;
			}
		}
		cout << "The number is prime" << endl;
	}
	catch (errorCodes errorCode) {
		cout << "The input is not a valid input" << endl;
	}
	return true;
}

int main() {
	bool returnValue = isPrimeNumber();
	return 0;
}
