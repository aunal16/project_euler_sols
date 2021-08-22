## IMPORT LIBRARIES
import numpy as np

## GLOBAL VARIABLES
LIMIT = 500

## VARIABLES
search = True
triang_num = 1  # first triangle number
counter = 2     # first number to add first triangle_num

## FUNCTIONS
def find_num_of_divisors(x):
    pass

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
