#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	float power = 1, sum = 1, limit;

	cout << "Enter the limit: ";
	cin >> limit;

	for (; power <= limit; power++) {
		sum += pow((1 / power), power);
	}

	cout << "The sum is: " << (sum);

	return 0;
}