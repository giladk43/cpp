#include <iostream>

using std::cin;
using std::cout;
using std::endl;

namespace {
constexpr int TABLE_SIZE = 11;

//Prints the multiplication table
void multiplicationTable() {
	for (int i = 1; i <= TABLE_SIZE; i++) {
		for (int j = 1; j <= TABLE_SIZE; j++) {
			cout << " " << i * j;
		}
		cout << endl;
	}
}
} //namespace


int main() {
	multiplicationTable();
	return 0;
}
