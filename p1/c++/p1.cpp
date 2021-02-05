/* IMPORT LIBRARIES */
#include <iostream>

/* INITIALIZE VARIABLES */
int num1 = 3;		// smaller num
int num2 = 5;		// larger num
int num_final = 10;	// limit num

/* MAIN PROGRAM */
int main()
{
	/* Assuming num_final > num1 */
	int sum = num1;
	int i;
	for(i = 4; i<num_final; i++)
	{
		if((i % num1 == 0) || (i % num2 == 0))
		{
			sum += i;
		}
	}
	printf("The summation of the integers up to %d are %d\n", num_final, sum);
	return 0;
}
