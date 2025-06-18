#include "optimus.h"

//Returns an int 
int getIntFromInput() {
	int number = 0;
	cout << "Enter a number" << endl;
	cin >> number;
	if (cin) {
		return number;
	}
	return static_cast<int>(ReturnValues::FAIL);
}

bool isPrimeNumber() {
	int number = getIntFromInput();
	for (int i = 1; i <= number; i++) {
		
	}
}

int main() {
	int returnValue = isPrimeNumber();
	return returnValue;
}
