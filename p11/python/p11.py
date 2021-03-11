# IMPORT LIBRARIES
import numpy as np

# Open the grid.txt file for reading
f = open("../grid.txt", "r")

if __name__ == "__main__":
    lines = f.readlines()
    grid_size = len(lines)

    grid = np.empty([grid_size, grid_size])

    for i in range(grid_size):
        line_list       = (lines[i]).split()
        line_int_list   = list(map(int, line_list))
        grid[i] = line_int_list

    print(grid)

    f.close()
