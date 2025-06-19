#include <exception> // for std::exception
#include <iostream>
#include "calc.h"
#include "calc_class.h"

using std::cin;
using std::cout;
using std::endl;


//Exception for an invalid input
class InvalidInputException : public std::exception {
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

//Returns a char 
char getCharFromInput() {
	char number = ' ';
	cout << "Enter a char" << endl;
	if (!(cin >> number)) {
		throw InvalidInputException();
	}
	return number;
}

void useCalculator() {
	Calc myCalc;
	try {
		double num1 = getDoubleFromInput();
		double num2 = getDoubleFromInput();
		char operation = getCharFromInput();
		cout << myCalc.calculate(num1, operation, num2);
	}
	catch (const InvalidInputException& exception) {
		cout << "The input is not valid" << endl;
	}
	catch (const InvalidOperationException& exception) {
		std::cout << "The input for the type of operation is not valid" << std::endl;
	}
	catch (const DivideByZeroException& exception) {
		std::cout << "Cannot divide by 0" << std::endl;
	}
}

int main() {
	useCalculator();
	return 0;
}
