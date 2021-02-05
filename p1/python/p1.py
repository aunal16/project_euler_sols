# INITIALIZATIONS
num1 = 3        # small num
num2 = 5        # larger num
num_end = 1000    # limit num

# MAIN PROGRAM
if __name__ == "__main__":
    # Assuming num_end > num1
    summation = 3
    for i in range(4, num_end):
        if ((i % num1 == 0) or (i % num2 == 0)):
            summation += i
    
    print("Sum of the multiplies up to", num_end, "is", summation)

