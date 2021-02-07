#include <iostream>
#include <set>

std::set<int> palindromes;	// empty set

int main(void)
{
	palindromes.insert(10);
	palindromes.insert(-12);
	palindromes.insert(100);
	palindromes.insert(3);

	/* Set elements are always ordered. Therefore, last 
	 * element is guaranteed to be the largest one.  */
	std::cout << "Max element: " << *palindromes.rbegin() << "\n";

	return 0 ;
}
