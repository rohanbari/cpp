// (i) = -22.0588
// (ii) = -65.7143

#include <iostream>

using namespace std;

int main(void) {
	float a, b, c, exp;

	cout << "Input value of a, b and c splitted by a space: ";
	cin >> a >> b >> c;

	exp = a / b - c;

	cout << "Expression result = " << exp << endl;

	return 0;
}
