#include <iostream>

using namespace std;

int reverseNumber(int &);

int main(void) {
	int number, old, result;

	cout << "Input a positive number you want to check: ";
	cin >> number;

	old = number;

	if (number <= 0) {
		cout << "Only (+ve) value required." << endl << endl;
	}

	result = reverseNumber(number);

	if (result == old) {
		cout << "The inputted number is a palindrome." << endl;
	} else {
		cout << "The inputted number is not a palindrome." << endl;
	}

	return 0;
}

int reverseNumber(int & n) {
	int remainder, revNum;

	remainder = revNum = 0; // Initializing both values in a chain

	while (n != 0) {
		remainder = n % 10;
		revNum = revNum * 10 + remainder;
		n /= 10;
	}

	return revNum;
}
