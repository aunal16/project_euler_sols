## IMPORT LIBRARIES
import numpy as np
from collections import deque

## VARIABLES
LEN_NUM = 50

## OPEN, READ, CLOSE TXT FILE (SAVE NUMBERS)
#  Open the txt file for reading and read lines
fin   = open("../numbers.txt", "r")
lines = fin.readlines()

#Create an array to hold the numbers and digits
arr_size   = len(lines)
arr_nums   = np.empty([arr_size, 1])
arr_digits = np.empty([arr_size, LEN_NUM])

# Convert strings of the input file into integers
# and store them in array_nums. Furher, arr_digit
for i in range(arr_size):
    line_int_str    = (lines[i]).split("\n")[0]
    line_int        = int(line_int_str)
    line_digits_str = list(line_int_str)
    line_digits     = list(map(int, line_digits_str))

    arr_nums[i]     = line_int
    arr_digits[i, ] = line_digits

## FUNCTIONS

## MAIN PROGRAM
if __name__ == "__main__":
    # # # # # # # # # #

    # FIRST method: sum elements of arr_nums
    # Since this method requires storing very large
    # numbers, it may cause overflow in some other
    # programming languages, but not in python.
    # print the first ten digits
    print("%d" %(int(str(int(sum(arr_nums)))[:10])))

    # # # # # # # # # #

    # SECOND method: sum elements of arr_digits
    # This method is easier to generalize since it does
    # not handle very much numbers (max can be 9 * 100
    # + 99 = 999).
    digit_vector = np.zeros(10)
    carry = 0
    sum_vector  = sum(arr_digits)
    for i in range(LEN_NUM - 1, -1, -1):
        if i > 9:
            carry = np.floor((sum_vector[i] + carry) / 10)
        else:   
            digit_vector[i] = (sum_vector[i] + carry) % 10
            carry = np.floor( (sum_vector[i] + carry) / 10)

    while carry != 0:
        digit_vector = deque(digit_vector)
        digit_vector.rotate(1)
        digit_vector = list(digit_vector)
       
        digit_vector[i] = carry % 10
        carry = np.floor(carry / 10 )

    digit_vector = [int(x) for x in digit_vector]
    
    # print the first ten digits
    print(*digit_vector, sep = "")
