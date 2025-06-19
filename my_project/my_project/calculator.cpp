#include <exception> // for std::exception
#include <iostream>
#include "calculator.h"

double Calculator::add(double num1, double num2) {
	return num1 + num2;
}
double Calculator::subtract(double num1, double num2) {
	return num1 - num2;
}
double Calculator::multiply(double num1, double num2) {
	return num1 * num2;
}
double Calculator::divide(double num1, double num2) {
	if (num2 == 0) {
		throw DivideByZeroException();
	}
	return num1 / num2;
}
double Calculator::calculate(double num1, char operation, double num2) {
	switch (operation) {
	case '+':
		return add(num1, num2);
	case '-':
		return subtract(num1, num2);
	case '*':
		return multiply(num1, num2);
	case '/':
		return divide(num1, num2);
	default:
		throw InvalidOperationException();
	}
	return 0;
}
