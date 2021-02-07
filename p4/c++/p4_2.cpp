/* LIBRARIES */
#include <iostream>
#include <math.h>
#include <set>
#include <string>

/* GLOBAL VARIABLES */
std::set<int> palindromes;	// empty set
int digit = 3;
int n_min = pow(10, digit-1);
int n_max = pow(10, digit)-1;

/* FUNCTION PROTOTYPES */
int is_palindrome(int);

/* MAIN PROGRAM */
int main(void)
{
	int i, j;
	for(i = n_min; i <= n_max; i++)
	{
		for(j = n_min; j <= n_max; j++)
		{
			int multiplication = i * j;
		}
	}

	return 0;
}

int is_palindrome(int x)
{
	/* Convert int to string for easier comparison */
	std::string x_str= std::to_string(x);
	int str_length = x_str.length();

	int check = 1;
	int i;
	for(i=0; i < str_length; i++)
	{
		if (x_str[i] != x_str[str_length - 1 - i]) check = 0;
	}

	return check;
}
