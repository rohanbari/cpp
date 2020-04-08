#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int deviation, variance = 1, x1, _x, n;

	cout << "Enter the limit for deviation: ";
	cin >> n;

	cout << "Enter the first value: ";
	cin >> x1;

	_x = (1 / n) * x1;

	for (short int i = 1; i <= n; i++) {
		variance += pow((i - _x), 2);
	}

	deviation = variance / n;

	cout << "Deviation is " << deviation;

	return 0;
}
