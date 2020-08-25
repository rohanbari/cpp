#include <iostream>

using namespace std;

int reverseNumber(int &);

int main(void) {
	int number;

loop:
	cout << "Enter a number to be reversed: ";
	cin >> number;

	if (number == 0) {
		cout << "The number is zero. Please input a nonzero number." << endl << endl;
		goto loop;
	}

	cout << "The reversed number is: " << reverseNumber(number) << endl;

	return 0;
}

int reverseNumber(int & n) {
	int remainder, revNum = 0;

	while (n != 0) {
		remainder = n % 10;
		revNum = revNum * 10 + remainder;
		n /= 10;
	}

	return revNum;
}
