#include <iostream>

using namespace std;

int main(void) {
	signed int limit, product = 1;

	cout << "Enter the limit value for factorial: ";
	cin >> limit;

	for (signed int i = 1; i <= limit; i++) {
		product *= i;
	}

	cout << "The factorial is: " << product;

	return 0;
}
