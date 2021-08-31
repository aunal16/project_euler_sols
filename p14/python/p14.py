## IMPORT LIBRARIES

## VARIABLES
LIMIT = 15

## FUNCTIONS
def is_even(x):
    """
    This function checks evenness of number x
    """
    check = False
    if x % 2 == 0:
        check = True
    return check

## MAIN PROGRAM
if __name__ == "__main__":
    # Set the initial starting number
    N = 2
    max_n_terms = 1

    while N < LIMIT:

        n = N
        # Set the initial number of terms
        n_terms = 1

        print(n, " -> ", end = "")

        while n != 1:
            # Generate the next number in
            # the sequence
            if is_even(n):
                n = n / 2
            else:
                n = 3 * n + 1

            n_terms += 1
            
            # Print the sequence to check
            print(n, " -> ", end = "")

        if max_n_terms < n_terms:
            max_n_terms = n_terms

        # Increase starting number N by 1
        N += 1

        print(" /// n_terms: ", n_terms)

    print(" /// max_n_terms: ", max_n_terms)





