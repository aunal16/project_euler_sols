/* IMPORT LIBRARIES */
#include <stdio.h>

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
	printf("Sum: %d\n", sum);

	return 0;
}


