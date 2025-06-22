#include <exception> // for std::exception
#include <iostream>
#include "string_basic.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
	char x[5] = { 'h', 'i', 'i', 'i', '\0' };
	String test_string = String(x);
	test_string.printString();
	String test2_string = String("hi");
	test2_string.printString();
	String test3 = String(test2_string);
	test3.printString();
	return 0;
}