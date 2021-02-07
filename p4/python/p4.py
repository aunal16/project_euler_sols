# VARIABLES
palindromes = set()
# Smallest and largest 2-digit number
digit = 3
n_min = 10**(digit-1)
n_max = 10**(digit)

# FUNCTIONS
def is_palindrome(x):
    x_str = str(x)
    check = True

    for i in range(int(len(x_str)/2)):
        if x_str[i] != x_str[-1-i]: check = False

    return check

# MAIN PROGRAM
if __name__ == "__main__":
    for i in range(n_min, n_max):
        for j in range(n_min, n_max):
            multiplication = i * j
            if is_palindrome(multiplication):
                palindromes.add(multiplication)

    print("Maximum palindrome that is a multiplication of " + str(digit) + "-digit numbers is", max(palindromes))
