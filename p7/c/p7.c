/* IMPORT LIBRARIES */
#include <stdio.h>	// for printf
#include <math.h>	// for sqrt

/* GLOBAL VARIABLES */
#define N 10001

/* FUNCTION DECLARATIONS */
int is_prime(int);

/* MAIN PROGRAM */
int main(void)
{
	int count = 0;
	int num = 1;

	while(count < N)
	{
		if(is_prime(num))
			count++;
		num++;
	}

	printf("%dth prime is %d\n", N, num - 1);
}

int is_prime(int x)
{
	if(x == 1)
		return 0;
	if(x == 2)
		return 1;
	if(!(x % 2))
		return 0;

	int check = 1;
	int i;
	for(i = 3; i <= sqrt(x); i+= 2)
		if(x % i == 0)
			check = 0;

	return check;
}
