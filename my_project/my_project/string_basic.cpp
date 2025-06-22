#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "string_basic.h"

using std::cin;
using std::cout;
using std::endl;

//In it Functions
String::String(const char* string) {
	int size = strlen(string) + 1;
	m_string = static_cast<char*>(malloc(size));
	strncpy_s(m_string, size,string, size);
}
String::String(const String& other) {
	int size = strlen(other.m_string) + 1;
	m_string = static_cast<char*>(malloc(size));
	strncpy_s(m_string, size, other.m_string, size);
}


//Get Functions
char* String::getString() const {
	return m_string;
}

//Set Functions
void String::setString(char* string) {
	m_string = string;
}

//Print Function
void String::printString() {
	cout << m_string << endl;
}


