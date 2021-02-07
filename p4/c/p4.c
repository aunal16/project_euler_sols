/* IMPORT LIBRARIES */
#include <stdio.h>	// for printf
#include <stdlib.h>	// for malloc
#include <math.h>	// for pow
#include <string.h>	// for strlen

/* GLOBAL VARIABLES */
int digit = 3;

/* FUNCTION PROTOTYPES */
int is_palindrome(int);

/* MAIN PROGRAMS */
int main(void)
{
	int* palindromes =  malloc(sizeof(int));
	const int n_min = pow(10, digit - 1);
	const int n_max = pow(10, digit) - 1;

	int i, j;
	for(i = n_min; i <= n_max; i++)
	{
		for(j = n_min; j <= n_max; j++)
		{
			int multiplication = i * j;
		}
	}
	
	printf("%d\n", is_palindrome(101010));
	return 0;
}

int is_palindrome(int x)
{
	/* Convert int to char* for easier comparison */
	char x_str[2 * digit + 1];
	sprintf(x_str, "%d", x);
	int str_length = strlen(x_str);

	int check = 1;
	int i;
	for(i = 0; i < str_length; i++)
	{
		if(x_str[i] != x_str[str_length - 1 - i]) check  = 0;
	}
	       
	return check;
}
