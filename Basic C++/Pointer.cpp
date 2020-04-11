#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str, str2;

	cout << "Input your name: ";
	cin >> str;

	str2 = str;

	cout << &str2 << endl;
	cout << &str << endl;

	return 0;
}
