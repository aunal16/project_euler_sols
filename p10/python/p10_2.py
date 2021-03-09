# IMPORT LIBRARIES
import numpy as np
import time         # for comparison

# GLOBAL VARIABLES
## LIM_UP = 10
LIM_UP = 2000000

# FUNCTIONS
def is_prime(x):
    """
    This function checks whether x is prime or not and returns True-False
    """
    if (x == 1):                            return False
    if (x == 2) or (x == 3) or (x == 5):    return True
    if (x % 2 == 0):                        return False

    check = True
    for i in range(3, int(np.sqrt(x)) + 1, 2):
        if (x % i == 0):
            check = False

    return check

# MAIN PROGRAM
# Fastest method turned out to be with the input 2 2.
# That is, first storing primes in a numpy array, and
# then summing the elements of the array with numpy.s
# um at the end.
if __name__ == "__main__":
    method = input('Choose the method 1 or 2: ')
    start_time = time.time()

    ## METHOD 1
    # The same method in the original solution.
    # Adds numbers as loop iterates, without storing the primes
    if method == '1':
        summation = 0 
        if LIM_UP >=  2:
            summation = 2
            for num in range(3, LIM_UP + 1, 2):
                if is_prime(num):
                    summation += num

    ## METHOD 2
    # Alternative method that first stores the primes, and then
    # sums them (either with sum or np.sum)
    elif method == '2':
        #primes = [2]
        primes  = np.array([2])

        print("1: Use the built-in sum")
        print("2: Use numpy sum")
        sum_choice = input("Enter the summation method number: ")

        for num in range(3, LIM_UP + 1, 2):
             if is_prime(num):
                 #primes.append(num)
                 np.append(primes, num)
                    
        if sum_choice == '1':
            summation = sum(primes)
        elif sum_choice == '2':
            summation = np.sum(primes)

    print(summation)
    print("Duration: ", time.time() - start_time)


