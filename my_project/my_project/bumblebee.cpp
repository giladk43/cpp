#include <exception> // for std::exception
#include <iostream>
#include "optimus.h"

using std::cin;
using std::cout;
using std::endl;

//Exception for when the input is bigger than the array size
class ArraySizeSmallException : public std::exception
{
public:
	const char* what() const noexcept override { return "The array size is too small excepetion found"; }
};
//Exception for an invalid input
class InvalidInputException : public std::exception
{
public:
	const char* what() const noexcept override { return "Invalid input excepetion found"; }
};

//Returns an int 
int getIntFromInput() {
	int number = 0;
	cout << "Enter the size of the array number" << endl;
	if (!(cin >> number)) {
		throw InvalidInputException();
	}
	return number;
}

// Fills the array with prime numbers
void fillArray(int arraySize, int primeArray[]) {
	int index = 1; // Will go up by one everytime in the while
	int indexArray = 0;
	while (indexArray < arraySize) {
		if (isPrimeNumber(index)) {
			primeArray[indexArray] = index;
			indexArray++;
		}
		index++;
	}
}

//Prints the array
void printArray(int primeArray[], int arraySize) {
	cout << "The prime numbers until that point are:" << endl;
	for (int i = 0; i < arraySize; i++) {
		cout << primeArray[i] << endl;
	}
}

//Main function that combines all of the other functions together
void fillAndPrintArray() {
	try {
		int arraySize = getIntFromInput();
		if (arraySize <= 0) {
			throw ArraySizeSmallException();
		}
		int* primeArray = new int[arraySize];
		fillArray(arraySize, primeArray);
		printArray(primeArray, arraySize);
		delete[] primeArray;
	}
	catch (const InvalidInputException& exception) {
		cout << "The input is not valid" << endl;
	}
	catch (const ArraySizeSmallException& exception) {
		cout << "This number cannot be the input for the size of an array" << endl;
	}
}

int main() {
	fillAndPrintArray();
	return 0;
}
