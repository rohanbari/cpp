#include <iostream>

using namespace std;

int main(void) {
	int hcf, num1, num2;

	cout << "Input two values for HCF respectively: ";
	cin >> num1 >> num2;

	while (num1 != num2) {
		if (num1 > num2) {
			num1 -= num2;
		} else {
			num2 -= num1;
		}
	}

	cout << "The HCF is: " << num1;

	return 0;
}