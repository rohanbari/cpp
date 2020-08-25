#include <iostream>

// Calculates the power in mathematical term.
long double power(int, int);

int main(void)
{
	long double sum = 0, fact = 1;
	int x = 0;

	std::cout << "Enter the value of X: ";
	std::cin >> x;

	if (x < 0)
	{
		std::cout << "The value should be non-negative integer." << std::endl;
		return -1;
	}

	for (int i = 0; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
			fact *= j;
		sum += (power(x, i) / fact); // x ^ i / i! algorithm
	}

	std::cout << "The e^" << x << " = " << sum << std::endl;

	return 0;
}

long double power(int base, int pow)
{
	long double res = 1;

	for (int i = 1; i <= pow; i++)
	{
		res *= base;
	}
	return res;
}