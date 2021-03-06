# IMPORT LIBRARIES
# Different methods to be tried for comparison.
# time library measures time for comparison.
import numpy as np
import math
import time

# GLOBAL VARIABLES
num = 7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450
adjacent = 13
# this list is for average time calculation
time_list = list()
CUR_METHOD = 2

# FUNCTIONS
def calculate_adjacent_prod(li, method = 1):
    start_time = time.time()

    if method == 1:
        """ for loop product """
        result = 1
        for x in li:
            result *= x
        time_list.append(time.time() - start_time)
        return result

    if method == 2:
        """ numpy.prod """
        result = np.prod(li)
        time_list.append(time.time() - start_time)
        return result

    if method == 3:
        """ math.prod """
        result = math.prod(li)
        time_list.append(time.time() - start_time)
        return result

# MAIN PROGRAM
if __name__ == "__main__":
    num_str = str(num)
    max_product = 1

    for i in range(len(num_str) - adjacent + 1):
        portion_str = num_str[i : i + adjacent]
        portion_int = list(map(int, list(portion_str)))
        adj_product = calculate_adjacent_prod(portion_int, CUR_METHOD)

        if adj_product > max_product:
            max_product = adj_product

    print(max_product)
    print("Average time of product:", sum(time_list)/len(time_list))
