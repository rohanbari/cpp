#include <iostream>

using namespace std;

int main(void) {
	int val1, val2;

	cout << "Input two values respectively to be swapped: ";
	cin >> val1 >> val2;

	cout << "Before swapping: " << val1 << " " << val2 << endl;

	val1 = val1 + val2;
	val2 = val1 - val2;
	val1 = val1 - val2;

	cout << "After swapping: " << val1 << " " << val2 << endl;

	return 0;
}
