#include "groot.h"


double return_double()
{
	double number = 0;
	cout << "Enter a number" << endl;
	cin >> number;
	if (!std::cin.fail()) {
		return number;
	}
	return FAIL;
}

bool is_not_negative(double num)
{
	return num >= 0;
}

void root() {
	double number = return_double();
	if (!is_not_negative(number)) {
		cout << "The input cannot be square rooted " << endl;
		return;
	}
	cout << "The square root is: " << sqrt(number) << endl;
}



int main() {
	root();

	return SUCCESS;
}
