/* IMPORT LIBRARIES */
#include <stdio.h>	// for printf
#include <stdlib.h>	// for malloc
#include <math.h>	// for pow
#include <string.h>	// for strlen

/* GLOBAL VARIABLES */
int digit = 3;

/* FUNCTION PROTOTYPES */
int is_palindrome(int);
int get_max(int*);

/* MAIN PROGRAMS */
int main(void)
{
	/* Store number of elements in the first element. */
	int* palindromes =  (int*) malloc(sizeof(int));
	(*palindromes)++;

	const int n_min = pow(10, digit - 1);
	const int n_max = pow(10, digit) - 1;

	int i, j;
	int num_of_elements;
	for(i = n_min; i <= n_max; i++)
	{
		for(j = n_min; j <= n_max; j++)
		{
			int multiplication = i * j;
			if (is_palindrome(multiplication))
			{
				num_of_elements = palindromes[0];
				palindromes = (int*) realloc(palindromes, (num_of_elements + 1) * sizeof(int));
				(*palindromes)++; // store the increase in the num of elements in the array
				palindromes[num_of_elements - 1] = multiplication;
			}
		}
	}
	int max_element = get_max(palindromes);
	printf("%d\n", max_element);

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

int get_max(int* arr)
{
	int num_of_elements = arr[0];
	int max_num = arr[1];
	int i;
	for(i = 2; i < num_of_elements - 1; i ++)
	{
		if(arr[i] > max_num)
		{
			max_num = arr[i];
		}
	}

	return max_num;
}
