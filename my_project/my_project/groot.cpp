#include "groot.h"

float root() {
	float number = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> number;
	return sqrt(number);
}

int main() {
	float number = root();
	std::cout << "The square root is: " << number << std::endl;

	return 0;
}