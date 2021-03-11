# IMPORT LIBRARIES
import numpy as np

# Open the grid.txt file for reading
f = open("../grid.txt", "r")

if __name__ == "__main__":
    lines = f.readlines()

    grid = np.array([])

    for line in lines:
        line_list       = line.split()
        line_int_list   = list(map(int, line_list))
        print(line_int_list)
    f.close()
