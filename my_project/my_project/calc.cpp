#include <exception> // for std::exception
#include <iostream>
#include "input.h"
#include "calculator.h"

using std::cin;
using std::cout;
using std::endl;

//Uses the calculator class
void useCalculator() {
	Calculator myCalc;
	try {
		double num1 = getDoubleFromInput();
		double num2 = getDoubleFromInput();
		char operation = getOperatorCharFromInput();
		cout << myCalc.calculate(num1, operation, num2);
	}
	catch (const InvalidInputException& exception) {
		cout << exception.what();
	}
	catch (const CalculatorException& exception) {
		cout << exception.what();
	}
}

int main() {
	useCalculator();
	return 0;
}
