#include <iostream>
#include <stdlib.h>
#include "string_basic.h"

using std::cin;
using std::cout;
using std::endl;

//In it Functions
String::String(char* string) {
	malloc (char)
}
String::String(const String& other) : m_string(other.m_string) {

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


