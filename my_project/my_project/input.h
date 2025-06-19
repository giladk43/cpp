#ifndef MY_INPUT_H
#define MY_INPUT_H

//Exception for an invalid input
class InvalidInputException : public std::exception {
public:
	const char* what() const noexcept override { return "Invalid input excepetion found"; }
};

//Returns a double 
double getDoubleFromInput();

//Returns a char 
char getOperatorCharFromInput();

#endif //MY_INPUT_H
