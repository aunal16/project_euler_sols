# INITIALIZE VARIABLES
num_prev = 1;       # first Fibonacci number
num_next = 2;       # second Fibonacci number
num_term = 10;      # total number of terms

# MAIN PROGRAM
if __name__ == "__main__":
    #print(str(num_prev) + ", " + str(num_next), end = '')
    summation = num_prev + num_next

    for _ in range(3, num_term + 1):
        temp = num_next
        num_next += num_prev
        num_prev = temp
        #print(", " + str(num_next), end = '')
        summation += num_next
    
    print(summation)
