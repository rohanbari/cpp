#include <iostream>

using namespace std;

bool isPrime(int);

int main(void) {
	int number;
	bool flag = false;

	cout << "Enter a number to check: ";
	cin >> number;

	for (int i = 2; i <= (number / 2); i++) {
		if (isPrime(i)) {
			if (isPrime(number - i))
				cout << number << " = " << i << " + " << number - i << endl;
				flag = true;
		}
	}

	if (!flag) {
		cout << "The given number cannot be proceeded as two prime numbers." << endl;
	}
}

bool isPrime(int n) {
	bool isPrime = true;

	for (int i = 2; i <= (n / 2); i++) {
		if (n % i == 0) {
			isPrime = false;
			break;
		}
	}

	return isPrime;
}
