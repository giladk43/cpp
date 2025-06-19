#ifndef MY_OPTIMUS_H
#define MY_OPTIMUS_H

//Exception for an invalid input
class InvalidInputException : public std::exception
{
public:
	const char* what() const noexcept override { return "Invalid input excepetion found"; }
};

//True if the number is prime
bool isPrimeNumber(int number);

int getIntFromInput();

#endif //MY_OPTIMUS_H
