#include <iostream>

using namespace std;

int main(void) {
	int number;
	bool isPrime;

	cout << "Input a number to check: ";
	cin >> number;

	for (int i = 2; i <= (number / 2); i++) {
		if (i % 2) {
			isPrime = true;
		} else {
			isPrime = false;
		}
	}

	if (isPrime) {
		cout << "The number is a prime number.";
	} else {
		cout << "The number is not a prime number.";
	}

	return 0;
}
