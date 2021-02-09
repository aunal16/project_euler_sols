/* IMPORT LIBRARIES */
#include <iostream>
#include <math.h>
#include <vector>

/* GLOBAL VARIABLES */
#define LIMIT 20
int dividers[LIMIT];

/* FUNCTION PROTOTYPES */
int is_prime(int);
std::vector<int> factorize(int, int*);

int main(void)
{

	return 0;
}

int is_prime(int x)
{
	if(x == 1)
		return 0;
	if(x == 2)
		return 1;
	if(x % 2 == 0)
		return 0;

	int check = 1;
	int i;
	for(i = 3; i <= sqrt(x); i+= 2)
	{
		if(x % i == 0)
			check = 0;
	}

	return check;
}
