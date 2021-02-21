# IMPORT LIBRARIES
import math

# INITIAL VARIABLES
total = 1000
c = 499

# FUNCTIONS
def pythagorean_test(small, medium, large):
    if (large**2 == small**2 + medium**2):
        return True
    else:
        return False

# MAIN PROGRAM
if __name__ == "__main__":    
    while c > 0:
        a_plus_b = total - c
        for a in range(1, math.ceil(a_plus_b / 2)):
            b = a_plus_b - a
            if pythagorean_test(a, b, c):
                print("a:", a,"b:", b,"c:", c)
                print("a x b x c = ", a*b*c)
                break
        c -= 1

