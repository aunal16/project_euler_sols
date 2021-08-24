## IMPORT LIBRARIES
import numpy as np

## VARIABLES
LEN_NUM = 50

## OPEN, READ, CLOSE TXT FILE (SAVE NUMBERS)
#  Open the txt file for reading and read lines
fin = open("../numbers.txt", "r")
lines = fin.readlines()

#Create an array to hold the numbers and digits
arr_size = len(lines)
arr_nums = np.empty([arr_size, 1])
arr_digits = np.empty([arr_size, LEN_NUM])

# Convert strings of the input file into integers
# and store them in array_nums. Furher, arr_digit
for i in range(arr_size):
    line_int_str    = (lines[i]).split("\n")[0]
    line_int        = int(line_int_str)
    line_digits_str = list(line_int_str)
    line_digits     = list(map(int, line_digits_str))

    arr_nums[i]   = line_int
    arr_digits[i, ] = line_digits

## FUNCTIONS

## MAIN PROGRAM
if __name__ == "__main__":
    print(arr_digits)
