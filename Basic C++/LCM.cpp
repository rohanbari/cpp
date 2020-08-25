#include <iostream>

using namespace std;

int main(void) {
	int x1, x2, LCM;

	cout << "Input first and second values respectively: ";
	cin >> x1 >> x2;

	if (x1 == x2) {
		cout << "LCM is = 1";
		exit(0);
	}

	LCM = (x1 > x2) ? x1 : x2;

	while (true) {
		if (LCM % x1 == 0 && LCM % x2 == 0) {
			cout << "LCM is = " << LCM;
			break;
		} else
			LCM++;
	}

	return 0;
}
