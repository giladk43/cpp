#include <iostream>
#include "fold.h"

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
