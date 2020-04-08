#include <iostream>

using namespace std;

int main(void) {
	int number;

	cout << "Input a number you want to verify: ";
	cin >> number;

	try {
		if (number % 2 == 1) {
			cout << "The number was odd." << endl;
		} else {
			cout << "The number was even." << endl;
		}

	} catch (exception bad_exception) {
		cout << "Please carefully input the number." << endl;
	}

	return 0;
}
