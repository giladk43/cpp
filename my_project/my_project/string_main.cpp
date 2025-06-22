#include <iostream>
#include "string_basic.h"

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