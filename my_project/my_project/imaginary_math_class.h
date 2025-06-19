#ifndef MY_IMAGINARY_NUMBER_H
#define MY_IMAGINARY_NUMBER_H

class ImaginaryNumber {
public:
	ImaginaryNumber();
	ImaginaryNumber(const ImaginaryNumber& other);
	ImaginaryNumber(int real, int imaginary);
	
	//Get Functions
	int getReal() const;
	int getImaginary() const;
	
	//Set Functions
	void setReal(int real);
	void setImaginary(int imaginary);


	//Operations on Imaginary Numbers
	ImaginaryNumber operator+(const ImaginaryNumber& other);
	ImaginaryNumber operator-(const ImaginaryNumber& other);
	ImaginaryNumber operator*(const ImaginaryNumber& other);
	bool operator==(const ImaginaryNumber& other);

	//Print Number
	void printImaginary();

	//Destructor
	~ImaginaryNumber();

private:
	int m_real;
	int m_imaginary;
};


class ImaginaryException : public std::exception {};

#endif //MY_IMAGINARY_NUMBER_H
