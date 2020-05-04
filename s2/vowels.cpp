#include <iostream>

using namespace std;

int main(void)
{
	char input[128];
	int vowels = 0, consonants = 0;

	cout << "Input a string: ";
	cin.get(input, 128);

	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' ||
			input[i] == 'U' || input[i] == 'a' || input[i] == 'e' || input[i] == 'i' ||
			input[i] == 'o' || input[i] == 'u')
			vowels++;
		else
			consonants++;
	}

	cout << "Total consonants: " << consonants << endl
		 << "Total vowels: " << vowels << endl;

	return 0;
}