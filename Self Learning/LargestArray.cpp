#include <iostream>

using namespace std;

int main(void) {
	int element;

loop:
	cout << "Input the number of desired elements: ";
	cin >> element;

	if (element <= 0) {
		cout << "Element counting should be a positive nonzero integer." << endl << endl;
		goto loop;
	}

	float array[element];

	for (int i = 0; i < element; i++) {
		cout << "Input value for " << (i + 1) << " array: ";
		cin >> array[i];
	}

	for (int i = 1; i < element; i++) {
		if (array[0] < array[i])
			array[0] = array[i];
	}
	
	cout << "Largest array element: " << array[0];

	return 0;
}
