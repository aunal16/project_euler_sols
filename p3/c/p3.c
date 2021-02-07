/* IMPORT LIBRARIES */
#include <stdio.h>
#include <math.h>

/* INITIALIZE NUMBER TO BE FACTORIZED */
unsigned long num = 600851475143;

/* FUNCTIONS DECLARATIONS */
unsigned long eliminate_prime(unsigned long, unsigned long);

/* MAIN PROGRAM */
int main(void)
{
	unsigned long largest = 1;
	unsigned long my_num = num;

	/* Remove 2s from the number so that it becomes odd */
	if (num%2 == 0)
	{
		largest = 2;
		my_num = eliminate_prime(my_num, 2);
	}

	/* From now on, the number is guaranteed to be odd. The algo
	 * rithm below uses an algorithm to go up until sqrt(num); h
	 * owever, it damages the case for my_num = 3 or 5 since the
	 * ir square root is smaller than 3 (does not enter for loop.
	 * Thus, my_num == 3 and my_num == 5 cases must be handled m
	 * anually
	 */
	unsigned long i;
	unsigned long sqrt_num = sqrt(my_num);
	for(i=3; i <= sqrt_num; i++)
	{
		if (my_num % i == 0)
		{
			largest = i;
			my_num = eliminate_prime(my_num, i);
		}
	}

	if ((my_num == 3) || (my_num == 5))
		largest = my_num;
	if (largest == 1)
		largest = num;

	printf("The largest prime number that divides %lu is %lu\n", num, largest);

	return 0;
}


unsigned long eliminate_prime(unsigned long x, unsigned long y)
{
	/* This function divides x to y as long as x is divisible by y.
	 * Therefore, the returned value is not divisible by y anymore.
	 */
	while ( x % y == 0)
	{
		x /= y;
	}
	
	return x;
}
