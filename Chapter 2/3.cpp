#include <iostream>

using namespace std;

int main(void) {
	char ch;
	short ascii;

	cout << "Input a character: ";
	cin >> ch;

	ascii = (int) ch;

	cout << "ASCII code: " << ascii << endl;

	return 0;
}
