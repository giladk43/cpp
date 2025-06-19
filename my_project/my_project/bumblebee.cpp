#include <exception> // for std::exception
#include <iostream>
#include "optimus.h"
#include "bumblebee.h"


using std::cin;
using std::cout;
using std::endl;

//Exception for when the input is bigger than the array size
class ArraySizeSmallException : public std::exception
{
public:
	const char* what() const noexcept override { return "The array size is too small excepetion found"; }
};



void fillArray(int arraySize, int* array[]) {
	int index = 0; // Will go up by one everytime in the while
	int indexArray = 0;
	while (indexArray < arraySize) {
		if (isPrimeNumber(index)) {
			*array[indexArray] = index;
			indexArray++;
		}
		index++;
	}
}

void printArray(int array[]) {

}

int main() {
	int test[5] = { 0 };
	cout << test[0];
	return 0;
}
