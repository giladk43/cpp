#include <exception> // for std::exception
#include <iostream>
#include "imaginary_number.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
	ImaginaryNumber num1 = ImaginaryNumber(1, 1);
	ImaginaryNumber num2 = ImaginaryNumber(2, 2);
	ImaginaryNumber num3 = ImaginaryNumber();
	ImaginaryNumber num4 = ImaginaryNumber(2, 2);
	num3.printImaginary();
	num3 = num1 + num2;
	num3.printImaginary();
	num3 = num1 - num2;
	num3.printImaginary();
	num3 = num1 * num2;
	num3.printImaginary();
	if (num2 == num3) {
		cout << "Is equal" << endl;
	}
	else {
		cout << "Is not equal" << endl;
	}
	if (num2 == num4) {
		cout << "Is equal" << endl;
	}
	else {
		cout << "Is not equal" << endl;
	}
	num3 = num1;
	num3.printImaginary();
	num3 = num1 + num2 * num2;
	num3.printImaginary();
	return 0;
}