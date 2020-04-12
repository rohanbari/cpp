#include <iostream>

using namespace std;

int main(void) {
	int limit;

loop:
	cout << "Input the limit for the array: ";
	cin >> limit;

	if (limit <= 0) {
		cout << "Please enter only nonnegative nonzero numbers." << endl << endl;
		goto loop;
	}

	float array[limit];

	for (int i = 0; i < limit; i++) {
		cout << "Value for " << i << " array element: ";
		cin >> array[i];
	}

	cout << "Last array element was: " << array[limit - 1];

	return 0;
}
