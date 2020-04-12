#include <iostream>
#include <cmath>

using namespace std;

int calculate(int &, int &);

int main(void) {
	int power, limit;

	cout << "Input a common power: ";
	cin >> power;

	cout << "Sum limitation: ";
	cin >> limit;

	if (power <= 0)
		cout << "Please input non-negative integers only.";
	else if (power == 0)
		cout << "Result = 0";
	else {
		cout << "The sum of 1^" << power << " + 2^"
			 << power << " + 3^" << power << "... is: " << calculate(power, limit);
	}

	return 0;
}

int calculate(int & x, int & lim) {
	int sum = 0;

	for (int i = 1; i <= lim; i++) {
		sum += pow(i, x);
	}

	return sum;
}
