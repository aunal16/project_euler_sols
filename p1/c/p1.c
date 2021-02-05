/* IMPORT LIBRARIES */
#include <stdio.h>

/* INITIALIZE VARIABLES */
int num1 = 3;		// smaller num
int num2 = 5;		// larger num
int num_final = 1000;	// limit num

int main(void)
{
	/* Assuming num_final > num1 */
	int sum = 3;
	int i;
	for(i  = 4; i < num_final; i++)
	{
		if((i % num1 == 0) || (i % num2 == 0))
		{
			sum += i;
		}
	}
	printf("The summation of the integers up to %d are %d\n", num_final, sum);
}

