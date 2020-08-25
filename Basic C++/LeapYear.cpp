#include <iostream>

int main(void) {
	int year;

	std::cout << "Enter a year: ";
	std::cin >> year;

	if (year <= 0) {
		std::cout << "Year number must be a positive integer." << std::endl;
		return -1;
	}

	if (year % 400 == 0 || year % 4 == 0 && !(year % 100 == 0))
		std::cout << "The year " << year << " was a leap year." << std::endl;
	else
		std::cout << "Not a leap year!" << std::endl;

	return 0;
}