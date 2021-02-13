/* IMPORT LIBRARIES */
#include <iostream>	//for printf
#include <math.h>	//for sqrt

/* GLOBAL VARIABLES */
#define LIMIT 10001

/* FUNCTION PROTOTYPES */
int is_prime(int);

/* MAIN FUNCTION */
int main()
{
	int count = 0;
	int num = 1;
	
	while(count < LIMIT)
	{
		if(is_prime(num))
			count++;
		num++;
	}

	std::cout << LIMIT << "th prime is " << (num - 1) << "\n";

	return 0;
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
	for(i = 3; i <= sqrt(x); i += 2)
		if(x % i == 0)
			check = 0;

	return check;
}
