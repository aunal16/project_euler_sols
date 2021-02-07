/* IMPORT LIBRARIES */
#include <stdio.h>
#include <math.h>

/* INITIALIZE NUMBER TO BE FACTORIZED */
int num = 13195;

/* FUNCTIONS DECLARATIONS */
int eliminate_prime(int, int);

/* MAIN PROGRAM */
int main(void)
{
	int largest = 1;
	int my_num = num;

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
	int i;
	int sqrt_num = sqrt(my_num);
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

	printf("The largest prime number that divides %d is %d\n", num, largest);

	return 0;
}


int eliminate_prime(int x, int y)
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
