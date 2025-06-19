#include <exception> // for std::exception
#include <iostream>
#include "imaginary_math_class.h"

//In it Functions
ImaginaryNumber::ImaginaryNumber() : m_real(0), m_imaginary(0){

}
ImaginaryNumber::ImaginaryNumber(const ImaginaryNumber& other) : m_real(other.m_real), m_imaginary(other.m_imaginary) {

}

ImaginaryNumber::ImaginaryNumber(int real, int imaginary) : m_real(real), m_imaginary(imaginary) {

}

//Get Functions
int ImaginaryNumber::getReal() const {
	return m_real;
}

int ImaginaryNumber::getImaginary() const {
	return m_imaginary;
}

//Set Functions
void ImaginaryNumber::setReal(int real) {
	m_real = real;
}

void ImaginaryNumber::setImaginary(int imaginary) {
	m_imaginary = imaginary;
}

//Operator functions
ImaginaryNumber ImaginaryNumber::operator+(const ImaginaryNumber& other) {
	return ImaginaryNumber((m_real + other.m_real), (m_imaginary + other.m_imaginary));
}

ImaginaryNumber ImaginaryNumber::operator-(const ImaginaryNumber& other) {
	return ImaginaryNumber((m_real - other.m_real), (m_imaginary - other.m_imaginary));
}

ImaginaryNumber ImaginaryNumber::operator*(const ImaginaryNumber& other) {
	return ImaginaryNumber((m_real * other.m_real - m_imaginary * other.m_imaginary), (m_real * other.m_imaginary + m_imaginary * other.m_real));
}

bool ImaginaryNumber::operator==(const ImaginaryNumber& other) {
	return ((m_real == other.m_real) && (m_imaginary == other.m_imaginary));
}

//Print Function
void ImaginaryNumber::printImaginary() {
	std::cout << "The imaginary number is " + m_real + '+' + m_imaginary;
}