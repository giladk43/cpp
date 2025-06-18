#ifndef MY_CALC_CLASS_H
#define MY_CALC_CLASS_H

class Calc {
public:
	// Calculation
	double calculate(double num1, char operation, double num2);

private:
	// Addition
	double add(double num1, double num2);
	// Subtraction
	double subtract(double num1, double num2);
	// Multiplication
	double multiply(double num1, double num2);
	// Division
	double divide(double num1, double num2);
};

//Exception for division with zero
class DivideByZeroException : public std::exception
{
public:
	const char* what() const noexcept override { return "Divided by zero"; }
};


//Exception for a non known operation input
class InvalidOperationException : public std::exception
{
public:
	const char* what() const noexcept override { return "Invalid operation excepetion found"; }
};
#endif //MY_CALC_CLASS_H
