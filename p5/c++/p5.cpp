/* IMPORT LIBRARIES */
#include <iostream>	//for printf
#include <math.h>	//for sqrt, pow
#include <vector>	//for vector
#include <set>		//for set
#include <algorithm>	//for count

/* GLOBAL VARIABLES */
#define LIMIT 20
int dividers[LIMIT];

/* FUNCTION PROTOTYPES */
int is_prime(int);
std::vector<int> factorize(int);

int main(void)
{
	int i;
	for(i = 2; i <= LIMIT; i ++)
	{
		std::vector<int> factors = factorize(i);
		std::set<int> s(factors.begin(), factors.end());
		int count;

		for(int elem: s)
		{
		
			count = std::count(factors.begin(), factors.end(), elem);
			if(dividers[elem - 1] < count)
				dividers[elem - 1] = count;
		}
	}

	int number = 1;
	int exponent;
	for(i = 0; i < LIMIT; i++)
	{
		exponent = dividers[i];
		if(exponent != 0)
			number *= pow(i + 1, exponent);
	}
	printf("Smallest number that can be divided for all [1, %d] is %d\n", LIMIT, number);

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
