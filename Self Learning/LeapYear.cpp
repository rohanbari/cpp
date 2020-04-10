#include <iostream>

using namespace std;

int main(void) {
	int year;

	cout << "Enter the year you want to check: ";
	cin >> year;

	if (year % 4 >= 1) {
		cout << "The year " << year << " was not a leap year." << endl;
	} else {
		cout << "The year " << year << " was a leap year." << endl;
	}

	return 0;
}
