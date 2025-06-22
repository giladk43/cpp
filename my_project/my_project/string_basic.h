#ifndef MY_STRING_H
#define MY_STRING_H

class STRING {
public:
	STRING(char* string);
	STRING(const STRING& other);

	//Get Functions
	char* getString() const;

	//Set Functions
	void setString(char* string);

	//Destructor
	~STRING() { free; std::puts("~STRING"); };


private:
	char* m_string;
};

#endif //MY_STRING_H
