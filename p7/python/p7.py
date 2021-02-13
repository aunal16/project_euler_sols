# # IMPORT LIBRARIES
import numpy as np

# # GLOBAL VARIABLES
n = 10001

# # FUNCTIONS
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

if __name__ == "__main__":
    count = 0
    num = 1
    while count < n:
        if is_prime(num): count += 1
        num += 1

    print(str(n) + "th prime is " + str(num - 1))
