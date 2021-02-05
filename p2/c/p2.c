/* IMPORT LIBRARIES */
#include <stdio.h>

/* INITIALIZE VARIARBLES */
int num_prev = 1;	// 1st Fib. number
int num_next = 2;	// 2nd Fib. number
int num_lim = 4000000;	// Limit for max Fib. number

/* MAIN PROGRAM */
int main(void)
{
	int sum = 0;
	int temp;
	while (num_next <= num_lim)
	{
		if (num_next % 2 == 0) sum += num_next;
		temp =  num_next;
		num_next += num_prev;
		num_prev = temp;
	}

	printf("%d\n", sum);
	return 0;
}
