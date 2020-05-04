#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int max;

	for (int i = 0; argv[i] != NULL; i++) {
		cout << argv[i];
	}

	cout << "Your limit: ";
	cin >> max;

	if (max > 10)
	{
		cout << "Number should be <= 10." << endl;
		exit(0);
	}

	int space = max;

	for (int i = max; i != 0; i--, space--)
	{
		for (int a = space; a != 0; a--)
		{
			cout << " ";
		}

		for (int b = i; b <= max; b++)
		{
			cout << b;
		}

		for (int n = max; n != i; n--)
		{
			cout << (n - 1);
		}

		cout << endl;
	}

	return 0;
}