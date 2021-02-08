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

		int count;
		int elem;
		j = 1;
		while(j <= factors[0])
		{
			count = 1;			
			elem = factors[j];
			while((j < factors[0]))
			{
				if(factors[j + 1] == elem)
				{
					count++;
					j++;
				} else
				{
					j++;
				}
			}
			if(count > dividers[elem - 1])
			{
				dividers[elem - 1] = count;
			}
			if(j == factors[0]) {j++;}
		}
		free(factors);
	}

	int number = 1;
	int exponent;
	for(i = 0; i < limit; i++)
	{
		exponent = dividers[i];
		if ( exponent != 0)
			number *= pow(i + 1, exponent);
	}

	printf("Smallest number that can be divided for all [1, %d] is %d\n", limit, number);
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
	if ((x == 2) || (x == 3))
	{
		arr[0]++;
		arr = (int*) realloc(arr, (arr[0] + 1) * sizeof(int));
		arr[arr[0]] = x;
	} else
	{
		int i;
		int sqrt_x = sqrt(x);

		for (i = 2; i <= sqrt_x; i++)
		{
			while(x % i == 0)
			{
				arr[0]++;
				arr = (int*) realloc(arr, (arr[0] + 1) * sizeof(int));
				arr[arr[0]] = i;
				x /= i;
			}
		}

		if (is_prime(x))
		{
			arr[0]++;
			arr = (int*) realloc(arr, (arr[0] + 1) * sizeof(int));
			arr[arr[0]] = x;
		}
	}
}


