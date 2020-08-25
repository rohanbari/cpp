#include <iostream>
#include <cstring>

int toNumber(int[], int);

int main(void)
{
	const int length = 4;
	int array[length] = {1, 0, 0, 1};

	std::cout << toNumber(array, length);

	return 0;
}

int toNumber(int binaryDigit[], int numberDigit) {
	std::string binStr = "";

	for (int i = 0; i < numberDigit; i++) {
		if (binaryDigit[i] == 0)
			binStr += "0";
		else
			binStr += "1";
	}

	return std::stoi(binStr);
}