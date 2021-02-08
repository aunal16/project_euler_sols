import numpy as np

limit = 10
dividers = np.zeros(limit)

def is_prime(x):
    if (x == 1):                            return False
    if (x == 2) or (x == 3) or (x == 5):    return True
    if (x % 2 == 0):                        return False

    check = True
    for i in range(3, int(np.sqrt(x)) + 1, 2):
        if (x % i == 0):
            check = False
    
    return check

def factorize(x):
    if (x == 1): return []
    if (x == 2) or (x == 3): return [x]

    factors = np.array([])
    i = 2
    while i < (int(np.sqrt(x)) + 1):
        if (x % i == 0):
            if is_prime(i):
                factors = np.append(factors, i)
                factors = np.append(factors, factorize(x / i))
                break
            else:
                factorize(i)
        else:
            i += 1
    
    if is_prime(x): factors = np.append(factors, x)
    return factors.astype(int)


if __name__ == "__main__":
    for i in range(2, limit + 1):
        factors = factorize(i)
        elems, counts = np.unique(factors, return_counts = True)
        for j in range(len(elems)):
            if (counts[j] > dividers[elems[j] - 1]):
                dividers[elems[j]  - 1] = counts[j]

    number = 1
    for i in range(limit):
        exponent = dividers[i]
        if exponent != 0: number *= (i+1)**exponent
    print("Smallest number that can be divided for all [1," + str(limit) +"] is:", int(number))

