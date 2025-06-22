#ifndef MY_STRING_H
#define MY_STRING_H

class String {
public:
	String(const char* string);
	String(const String& other);

	//Get Functions
	char* getString() const;

	//Set Functions
	void setString(char* string);

	//Print Function
	void printString();

	//Destructor
	~String() {free(m_string); std::puts("Freed String"); };


private:
	char* m_string;
};

#endif //MY_STRING_H
