# IMPORT LIBRARIES
import math

# INITIALIZE NUMBER TO BE FACTORIZED
num = 13195

def eliminate_prime(x, y):
    # This function divides x to y as long as x is divisible by y.
    # Therefore, the returned value is not divisible by y anymore.
    while x % y == 0:
        x /= y
    return (y, int(x))

if __name__ == "__main__":
    largest = 1
    my_num = num

    # Remove 2s from the number so that it becomes odd
    if num % 2 == 0: largest, my_num = eliminate_prime(my_num, 2)

    # From now on, the number is guaranteed to be odd. The algo
    # rith below uses an algorithm to go up until sqrt(num); ho
    # wever, it damages the case for my_num = 3 or 5 since thei
    # r square root is smaller than 3 (does not enter for loop.
    # Thus, my_num == 3 and my_num == 5 cases must be handled m
    # anually.
    for i in range(3, int(math.sqrt(my_num))+1, 2):
        if my_num % i == 0:
            largest, my_num = eliminate_prime(my_num, i)

    if my_num == 3 or my_num == 5: largest = my_num
    if largest == 1: largest = num

    print("The largest prime number that divides", num, "is", largest)
