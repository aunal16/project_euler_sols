/* IMPORT LIBRARIES */
#include <iostream>
#include <math.h>
#include <vector>

/* GLOBAL VARIABLES */
#define LIMIT 20
int dividers[LIMIT];

/* FUNCTION PROTOTYPES */
int is_prime(int);
std::vector<int> factorize(int);

int main(void)
{
	for(int k = 2; k < 20; k++)
	{
		std::vector<int> arr = factorize(k);
		for(int i = 0; i < arr.size(); i++)
			printf("%d\t", arr.at(i));
		printf("\n");
	}

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

std::vector<int> factorize(int x)
{
	std::vector<int> array(0);
	if((x == 2) || (x == 3))
	{
		array.push_back(x);
	} else
	{
		int i;
		for(i = 2; i <= sqrt(x); i++)
		{
			while(x % i == 0)
			{
				array.push_back(i);
				x /= i;
			}
		}

		if (is_prime(x))
			array.push_back(x);
	}

	return array;
}
