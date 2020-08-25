#include <iostream>

const int MAX = 100;

int main(void)
{
	char string[MAX];
	int n;

	std::cout << "Enter a string: ";
	std::cin >> string;

	for (int i = 0; string[i] != '\0'; i++)
	{
		n = int(string[i]);
		while (n != 0)
		{
			n /= 2;
			n %= 2;
		}
	}
}