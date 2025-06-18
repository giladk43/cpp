#include <cmath>
#include "groot.h"

//Returns a double 
double getDoubleFromInput() {
	double number = 0;
	cout << "Enter a number" << endl;
	if (cin >> number) {
		return number;
	}
	return static_cast<int>(ReturnValues::NOT_DOUBLE_FAIL);
}

int printSquareRoot() {
	double number = getDoubleFromInput();
	if (number < 0) {
		cout << "The input cannot be square rooted " << endl;
		return static_cast<int>(ReturnValues::NEGATIVE_FAIL);
	}
	cout << "The square root is: " << sqrt(number) << endl;
	return static_cast<int>(ReturnValues::SUCCESS);
}

int main() {
	return printSquareRoot();
}

