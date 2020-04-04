#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
	float num1, num2, larger;

	cout << "Input value 1 and 2 splitted by space: ";
	cin >> num1 >> num2;

	if (num1 == num2) {
		cout << "The numbers are equal.";

		exit(0);
	}

	if (num1 > num2) {
		larger = num1;
	} else {
		larger = num2;
	}

	cout << "The larger number entered was: " << larger << endl;

	return 0;
}
