#include <exception> // for std::exception
#include <iostream>
#include "optimus.h"


using std::cin;
using std::cout;
using std::endl;

//Exception for a number smaller than one
class SmallerThanOneException : public std::exception
{
public:
	const char* what() const noexcept override { return "Smaller than 1 excepetion found";}
};

//Returns an int 
int getIntFromInput() {
	int number = 0;
	cout << "Enter a number" << endl;
	if (!(cin >> number)) {
		throw InvalidInputException();
	}
	return number;
}

void isPrimeNumber() {
	bool is_prime = true;
	try {
		int number = getIntFromInput();
		if (number <= 1) {
			throw SmallerThanOneException();
		}
		for (int i = 2; i < number && is_prime; i++) {
			if (number % i == 0) {
				is_prime = false;
			}
		}
		if (is_prime) {
			cout << "The number is prime" << endl;
		}
		else {
			cout << "The number is not prime" << endl;
		}
	}
	catch (const SmallerThanOneException& exception) {
		cout << "The input is smaller or equal to 1 and not prime" << endl;
	}
	catch (const InvalidInputException& exception) {
		cout << "The input is not valid" << endl;
	}
}

/*
int main() {
	isPrimeNumber();
	return 0;
} */
