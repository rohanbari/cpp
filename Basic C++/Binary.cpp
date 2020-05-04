#include <iostream>
#include <cstring>

using namespace std;
const int N = 65;

int main(void)
{
	char input[N];
	int in = 0;

	cout << "Input a string: ";
	cin.get(input, N);

	for (int i = 0; i < strlen(input); i++)
	{
		if (in != 0)
			in += int(input[i]) % 2;

		cout << in;
	}

	cout << endl;

	return 0;
}
