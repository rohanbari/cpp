/* 
 * Rev 1: Simple summation
 * Rev 2: Summation with values and 'total' var
 * Rev 3: Summation wtih values and no variables
 * */

#include <iostream>

int main(void)
{
	int n = 0;

	std::cout << "Maximum value to sum: ";
	std::cin >> n;

	int value[n];

	if (n < 0)
	{
		std::cout << "Error: Value should be non-negative integer." << std::endl;
		return -1;
	}

	for (int i = 1; i <= n; i++)
	{
		std::cout << "Value " << i << ": ";
		std::cin >> value[i];

		value[n] += value[i];

		if (i == n)
			std::cout << "Final average: "
					  << (value[i] / n) << std::endl;
	}

	return 0;
}
