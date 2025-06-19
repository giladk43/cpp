#include <iostream>

constexpr int TABLE_SIZE = 11;

//Prints the multiplication table
void multiplicationTable();

using std::cin;
using std::cout;
using std::endl;

void multiplicationTable() {
	for (int i = 1; i <= TABLE_SIZE; i++) {
		for (int j = 1; j <= TABLE_SIZE; j++) {
			cout << " " << i * j;
		}
		cout << endl;
	}
}

int main() {
	multiplicationTable();
	return 0;
}
