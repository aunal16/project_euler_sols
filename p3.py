# IMPORT LIBRARIES
import math

# INITIALIZE NUMBER TO BE FACTORIZED
num = 7

def max_prime_for_odd(x):
    

if __name__ == "__main__":
    largest = 1
    if num % 2 == 0:
        largest = 2
        while num % 2 == 0: num /= 2

    # From now on, the number is guaranteed to be odd.
    res = max_prime_for_odd(num)
    if res > largest: largest = res

    print("Largest prime is", largest)
