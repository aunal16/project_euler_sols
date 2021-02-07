

def is_palindrome(x):
    x_str = str(x)
    check = True

    for i in range(int(len(x_str)/2)):
        if x_str[i] != x_str[-1-i]: check = False

    return check

if __name__ == "__main__":

    

