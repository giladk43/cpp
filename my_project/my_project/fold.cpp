#include "fold.h"

void multiplication_table() {
	int i = 1;
	int j = 1;
	for (i = 1; i <= TABLE_SIZE; i++)
	{
		for (j = 1; j <= TABLE_SIZE; j++)
		{
			std::cout << " " << i * j;
		}
		std::cout << "" << std::endl;
	}
}

int main() {
	multiplication_table();
	return SUCCESS;
}
