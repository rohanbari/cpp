#include <iostream>

using namespace std;

int main(void) {
	float cel, fah;

	cout << "Input a temperature in Fahrenheit: ";
	cin >> fah;

	cel = (5 * (fah - 32)) / 9;

	printf("Celcius: %.2f\n", cel);

	return 0;
}
