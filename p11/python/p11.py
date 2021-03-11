## IMPORT LIBRARIES
import numpy as np

## VARIABLES
ADJ = 4

## OPEN, READ, CLOSE TXT (SAVE GRID)
# Open the txt file for reading and read lines
f = open("../grid.txt", "r")
lines = f.readlines()

# Create an array to hold the numbers
grid_size = len(lines)
grid = np.empty([grid_size, grid_size])

# Convert strings of the input file into integers
# and store them in the array (grid) created.
for i in range(grid_size):
    line_list       = (lines[i]).split()
    line_int_list   = list(map(int, line_list))
    grid[i] = line_int_list

# Close the txt file.
f.close()


## MAIN FUNCTION
if __name__ == "__main__":
    # Since all elements are nonnegative, set the
    # initial maximum to 0.
    cur_max = 0

    for i in range(grid_size - ADJ + 1):
        for j in range(grid_size - ADJ + 1):
            prod_row = grid[i][j+0] * grid[i][j+1] *\
                    grid[i][j+2] * grid[i][j+3]
            prod_col = grid[i+0][j] * grid[i+1][j] *\
                    grid[i+2][j] * grid[i+3][j]
            prod_dia = grid[i][j] * grid[i+1][j+1] *\
                    grid[i+2][j+2] * grid[i+3][j+3]

            max_one = max(prod_row, prod_col, prod_dia)

            if cur_max < max_one:
                    cur_max = max_one

    print("Maximmum product is:", cur_max)
