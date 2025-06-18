#include <exception> // for std::exception
#include <iostream>
#include "calc_class.h"

double Calc::add(double num1, double num2) {
	return num1 + num2;
}
double Calc::subtract(double num1, double num2) {
	return num1 - num2;
}
double Calc::multiply(double num1, double num2) {
	return num1 * num2;
}
double Calc::divide(double num1, double num2) {
	if (num2 == 0) {
		throw DivideByZeroException();
	}
	return num1 / num2;
}
double Calc::calculate(double num1, char operation, double num2) {
	switch (operation) {
	case '+':
		return Calc::add(num1, num2);
	case '-':
		return Calc::subtract(num1, num2);
	case '*':
		return Calc::multiply(num1, num2);
	case '/':
		return Calc::divide(num1, num2);
	default:
		throw InvalidOperationException();
	}
	return 0;
}
