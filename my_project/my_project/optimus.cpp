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


bool isPrimeNumber(int number) {
	bool is_prime = true;
	try {
		if (number <= 1) {
			throw SmallerThanOneException();
		}
		for (int i = 2; i < number && is_prime; i++) {
			if (number % i == 0) {
				is_prime = false;
			}
		}
		if (is_prime) {
			return true;
			//cout << "The number is prime" << endl;
		}
		else {
			return false;
			//cout << "The number is not prime" << endl;
		}
	}
	catch (const SmallerThanOneException& exception) {
		return false;
		//cout << "The input is smaller or equal to 1 and not prime" << endl;
	}
}

/*
int main() {
	isPrimeNumber();
	return 0;
} */
