#include <iostream>
#include <vector>

using namespace std;

int base2power(int);

int main(void) {
	string binary;
	int decimal = 0;

	cout << "Enter a binary number to be converted: ";
	cin >> binary;

	size_t len = binary.length();

	char *singleBinary = new char[len];
	strcpy(singleBinary, binary.c_str());

	for (int i = 0; singleBinary[i] != '\0'; i++)
		cout << singleBinary[i] - '0' << endl;
	
	cout << decimal << endl;

	return 0;
}

int base2power(int power) {
	int result = 1;

	for (int i = 1; i <= power; i++)
		result *= 2;

	return result;
}