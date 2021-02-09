# GLOBAL VARIABLES
limit = 100

# MAIN PROGRAM
if __name__ == "__main__":
    sum = 0
    for i in range(1, limit):
        for j in range(i + 1, limit + 1):
            sum += i * j

    sum *= 2
    print(sum)
