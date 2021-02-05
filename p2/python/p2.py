# INITIALIZE VARIABLES
num_prev = 1;       # first Fibonacci number
num_next = 2;       # second Fibonacci number
num_term = 10;      # total number of terms

# MAIN PROGRAM
if __name__ == "__main__":
    summation = num_next

    for _ in range(3, num_term + 1):
        temp = num_next
        num_next += num_prev
        num_prev = temp
        if num_next % 2 == 0: summation += num_next
    
    print(summation)
