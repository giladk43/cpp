#include <exception> // for std::exception
#include <iostream>
#include "optimus.h"
#include "bumblebee.h"


using std::cin;
using std::cout;
using std::endl;

//Exception for an invalid input
class InvalidInputException : public std::exception
{
public:
	const char* what() const noexcept override { return "Invalid input excepetion found"; }
};

//Exception for when the input is bigger than the array size
class ArraySizeSmallException : public std::exception
{
public:
	const char* what() const noexcept override { return "The array size is too small excepetion found"; }
};



void fillArray(int amount, int* array[]) {

}

void printArray(int array[]) {

}

int main() {
	int test[5] = { 0 };
	cout << test[0];
	return 0;
}
