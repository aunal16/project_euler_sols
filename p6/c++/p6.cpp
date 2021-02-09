/* IMPORT LIBRARIES */
#include <iostream>

/* GLOBAL VARIABLES */
#define LIMIT 100

/* MAIN PROGRAM */
int main(void)
{
	int sum = 0;
	int i, j;
	for(i = 1; i < LIMIT; i++)
		for(j = i + 1; j <= LIMIT; j++)
			sum += i * j;

	sum *= 2;
	std::cout << "Sum: " << sum << "\n";

	return 0;
}

