#include <cmath>
#include <exception> // for std::exception
#include <iostream>
#include "groot.h"

using std::cin;
using std::cout;
using std::endl;

//Exception for a negative number
class NegativeException : public std::exception
{
public:
	const char* what() const noexcept override { return "Negative excepetion found"; }
};

//Exception for an invalid input
class InvalidInputException : public std::exception
{
public:
	const char* what() const noexcept override { return "Invalid input excepetion found"; }
};


//Returns a double 
double getDoubleFromInput() {
	double number = 0;
	cout << "Enter a number" << endl;
	if (!(cin >> number)) {
		throw InvalidInputException();
	}
	return number;
}

void printSquareRoot() {
	try {
		double number = getDoubleFromInput();
		if (number < 0) {
			throw NegativeException();
		}
		cout << "The square root is: " << sqrt(number) << endl;
	}
	catch (const NegativeException& exception) {
		cout << "The input is negative" << endl;
	}
	catch (const InvalidInputException& exception) {
		cout << "The input is not valid" << endl;
	}
}

int main() {
	printSquareRoot();
	return 0;
}
