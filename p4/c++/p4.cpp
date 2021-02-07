/* IMPORT LIBRARIES */
#include <iostream>
#include <cmath>
#include <string>

/* VARIABLES */
/* Since palindromes set's size is subject to change
 * inside th program, it is allocated dynamically. */
int* palindromes = (int*) malloc(sizeof(int));

/* Smallest and largest n-digit numbers */
int digit = 3;
int n_min = pow(10, digit-1);
int n_max = pow(10, digit);

/* FUNCTIONS PROTOTYPES */
int is_palindrome(int);

/* MAIN PROGRAM */
int main(void)
{
	int i, j;
	for(i = n_min; n_min < n_max; i ++)
	{
		for(j = n_min; n_min < n_max; i++)
		{
			int multiplication = i * j;
			if (is_palindrome ( multiplication))
			{
				palindromes = (int*) realloc( palindromes, sizeof(int) * (sizeof(palindromes) / sizeof(int) + 1));
			}
		}
	}

	std::cout << "Maximum palindrome that is a multiplication of " << digit << "-digit number is " << std::max_element(palindromes, palindromes + sizeof(palindromes)/sizeof(int) - 1);

	return 0;
}

int is_palindrome(int x)
{
	std::string x_str = std::to_string(x);
	int check = 1;

	int i;
	int str_length = x_str.length();
	for (i = 0; i < str_length/2; i++)
	{
		if (x_str[i] != x_str[str_length-1-i])
		{
			check = 0;
		}
	}
	
	return check;
}

