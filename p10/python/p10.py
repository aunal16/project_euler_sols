import numpy as np

## LIM_UP = 10
LIM_UP = 2000000

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
    summation = 0 
    if LIM_UP >=  2:
        summation = 2
        for num in range(3, LIM_UP + 1, 2):
            if is_prime(num):
                summation += num

    print(summation)


