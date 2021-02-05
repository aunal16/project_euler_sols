# INITIALIZE VARIABLES
num_prev = 1        # first Fibonacci number
num_next = 2        # second Fibonacci number
num_lim = 4000000   # limit for the largest Fibonacci number

# MAIN PROGRAM
if __name__ == "__main__":
    summation = 0

    while num_next <= num_lim:
        if num_next % 2 == 0: summation += num_next
        temp = num_next
        num_next += num_prev
        num_prev = temp
        
    print(summation)
