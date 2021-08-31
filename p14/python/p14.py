## IMPORT LIBRARIES
import numpy as np

## VARIABLES
LIMIT = 10**6

## FUNCTIONS
def is_even(x):
    """
    This function checks evenness of number x
    """
    check = False
    if x % 2 == 0:
        check = True
    return check

## MAIN PROGRAM
if __name__ == "__main__":
    # Set the initial starting number
    N = 2

    num_list = np.zeros((LIMIT,), dtype = int)
    num_list [0] = 1

    while N < LIMIT:

        n = N
        # Set the initial number of terms
        n_terms = 1

        while num_list[int(n - 1)] == 0:
            # Generate the next number in
            # the sequence
            if is_even(n):
                n = n / 2
            else:
                n = 3 * n + 1
            n_terms += 1

        num_list [int(N - 1)] = n_terms + num_list [int(n - 1)]

        # Increase starting number N by 1
        N += 1

