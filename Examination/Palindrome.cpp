#include <iostream>

using namespace std;

int reverse(int &);

int main(void) {
	int number, dNumber;

loop:
	cout << "Input a number for palindrome check: ";
	cin >> number;

	dNumber = number;

	if (number <= 0) {
		cout << "ERROR: Please use only non-negative nonzero number.";
		goto loop;
	}

	if (dNumber == reverse(number))
		cout << "The number is a palindrome." << endl;
	else
		cout << "The number is not a palindrome." << endl;

	return 0;
}

int reverse(int & x) {
	int reverseNumber = 0, remainder;

	while (x != 0) {
		remainder = x % 10;
		reverseNumber = reverseNumber * 10 + remainder;
		x /= 10;
	}

	return reverseNumber;
}
