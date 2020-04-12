#include <iostream>

using namespace std;

int main(void) {
	int digit, sum = 0, remainder, number;

	cout << "Input a number: ";
	cin >> digit;

	number = digit;

	// Using the algorithm of reversing a number but a little bit different
	while (number != 0) {
		remainder = number % 10;
		sum += remainder * remainder * remainder;
		number /= 10;
	}
	
	if (digit == sum) {
		cout << "The number is an Armstrong number.";
	} else {
		cout << "The number is not an Armstrong number.";
	}

	return 0;
}
