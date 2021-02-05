/* IMPORT LIBRARIES */
#include <iostream>

/* INITIALIZE VARIABLES */
int num_prev = 1;	// 1st Fibonacci number
int num_next = 2;	// 2nd Fibonacci number
int num_lim = 4000000;	// Limit for the largest Fibonacci number

/* MAIN PROGRAM */
int main(void)
{
	int summation = 0;
	int temp;
	while (num_next <= num_lim)
	{
		if (num_next % 2 == 0) summation += num_next;
		temp = num_next;
		num_next += num_prev;
		num_prev = temp;
	}
	
	std::cout << summation << "\n";
	return 0;
}

