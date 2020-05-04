#include <iostream>

using namespace std;
const int N = 64;

int main(void)
{
	char input[N], option;

	do
	{
	end:
		fflush(stdin);

		cout << endl
			 << "Input your string: ";
		cin.get(input, N);

		for (int i = 0; input[i] != '\0'; i++)
		{
			if (int(input[i]) >= 65 && int(input[i]) <= 118)
			{
				// OK
			}
			else
			{
				cout << "Invalid character entered. Only Alphabets." << endl
					 << endl;
				goto end;
			}
		}

		for (int i = 0; input[i] != '\0'; i++)
		{
			if (int(input[i]) >= 88 && int(input[i]) <= 91)
			{
				input[i] = char(int(input[i]) - 23);
			}
			else
			{
				input[i] = char(int(input[i]) + 3);
			}
		}

		cout << input << endl;

		for (int i = 0; input[i] != '\0'; i++)
		{
			if (int(input[i]) >= 65 && int(input[i]) <= 67)
			{
				input[i] = char(int(input[i]) + 23);
			}
			else
			{
				input[i] = char(int(input[i]) - 3);
			}
		}
		cout << input << endl
			 << endl;

		cout << "Do you want to play again? (Y/n): ";
		cin >> option;

	} while (option == 'Y' || option == 'y');

	return 0;
}
