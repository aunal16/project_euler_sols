## IMPORT LIBRARIES
import numpy as np

## GLOBAL VARIABLES
LIMIT = 500

## VARIABLES
search = True
triang_num = 1  # first triangle number
counter = 2     # first number to add first triangle_num

## FUNCTIONS
def is_even(x):
    pass

def find_num_of_divisors(x):
    num_divisor = 2 # divisible by 1, and itself
    if is_even(x):
        num_divisor += 1 # also divisible by 2
        # start checking divisors from 3 until sqrt(x)
        for num in range(3, int(np.sqrt(x)) + 1):
            if x % num == 0:
                num_divisor += 1
    else:
        # start checking divisors from 3 until sqrt(x) by +2
        for num in range(3, int(np.sqrt(x)) + 1, 2):
            if x % num == 0:
                num_divisor += 1

    return num_divisor

## MAIN PROGRAM
if __name__ == "__main__":
    while search:
        # Find the next triangle number
        triang_num += counter

        # Increase counter by 1 for the next loop
        counter += 1

        # Find the number of divisors of triang_num
        num_of_divisors = find_num_of_divisors(triang_num)
        if num_of_divisors > LIMIT:
            search = False

    print("First triangle number to have over 500 divisors is", triang_num)
