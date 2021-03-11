# Open the grid.txt file for reading
f = open("../grid.txt", "r")

if __name__ == "__main__":
    print(f.readline())
    f.close()
