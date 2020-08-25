#include <iostream>

int main(void)
{
	float first, term, diff;

	std::cout << "Required term _ first value _ difference: ";
	std::cin >> term >> first >> diff;

	term = first + (term - 1) * diff;

	std::cout << "The term value is: " << term;

	return 0;
}
