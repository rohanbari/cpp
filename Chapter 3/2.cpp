#include <iostream>

using namespace std;

int main(void) {
	int number;

loop:
	cout << "Input your desired number to be printed: ";
	cin >> number;

	if (number <= 0) {
		cout << "ERROR: Please use only a positive integer." << endl << endl;
		goto loop;
	}

	int x, y;

	for (x = 1; x <= number; x++) {
		for (y = 1; y <= x; y++) {
			cout << y << " ";
		}
		cout << endl;
	}

	return 0;
}
