#include <cmath>
#include "groot.h"

//Returns a double 
double getDoubleFromInput() {
	double number = 0;
	cout << "Enter a number" << endl;
	cin >> number;
	if (cin) {
		return number;
	}
	return static_cast<int>(ReturnValues::FAIL);
}

int root() {
	double number = getDoubleFromInput();
	if (number < 0) {
		cout << "The input cannot be square rooted " << endl;
		return static_cast<int>(ReturnValues::FAIL);
	}
	cout << "The square root is: " << sqrt(number) << endl;
	return static_cast<int>(ReturnValues::SUCCESS);
}

int main() {
	int returnValue = root();

	return returnValue;
}
