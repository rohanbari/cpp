#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	fstream file("BankDetails.txt", ios::in | ios::out);
	int code, pin;

	while (file >> code >> pin)
	{
		if (pin == 0)
		{
			cout << "New Code : ";
			cin >> code;

			file << code << ' ' << pin << endl;
			pin = 1;

			file.close();

			break;
		}
		else
		{
			// Welcome back code
		}
	}

	return 0;
}
