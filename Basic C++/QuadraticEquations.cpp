#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	signed int a, b, c, x1, x2, discriminant;

	cout << "Enter the coefficients of a, b, c respectively: ";
	cin >> a >> b >> c;

	discriminant = pow(b, 2) - 4 * a * c;

	if (discriminant > 0) {
		x1 = (- b + sqrt(discriminant)) / 2 * a;
		x2 = (- b - sqrt(discriminant)) / 2 * a;

		cout << "The value of the roots ALPHA and BETA are; "
			 << x1 << " & " << x2 << " respectively." << endl;
	} else if (discriminant == 0) {
		x1 = -b / 2 * a;

		cout << "Both roots are equal. ROOTS: " << x1 << " " << x1 << endl;
	} else {
		cout << "The value is imaginary." << endl;
	}

	return 0;
}