/* IMPORT LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* GLOBAL VARIABLES */
#define limit 10
int dividers[limit];

/* FUNCTION DECLARATIONS */
int is_prime(int);
void factorize(int, int*);

/* MAIN PROGRAM */
int main(void)
{
	
	int i, j;
	for(i = 2; i <= limit; i++)
	{
		int* factors = (int*) malloc(sizeof(int));
		factorize(i, factors);

		free(factors);
	}

	return 0;
}

int is_prime(int x)
{
	if(x == 1)
		return 0;
	if ((x == 2) || (x == 3))
		return 1;
	if (x % 2 == 0)
		return 0;

	int check = 1;
	int i;
	int sqrt_x = sqrt(x);
	for(i = 3; i <= sqrt_x; i += 2)
	{
		if (x % i == 0)
			check = 0;
	}

	return check;
}

void factorize(int x, int* arr)
{
	if (x == 1)
		return NULL;
	if ((x == 2) || (x == 3))

