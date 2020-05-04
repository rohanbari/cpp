#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
const char alphanum[] =
	"0123456789"
	"!@#$%^&*"
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"abcdefghijklmnopqrstuvwxyz";

void generate(int, int);
void setOutput(char[]);

main(void)
{
	int length, strings;

	cout << "How many strings & length (sep. by SPACE): ";
	cin >> strings >> length;

	srand(time(0));
	generate(length, strings);

	return 0;
}

void generate(int len, int str)
{
	char array[len];
	int max = sizeof(alphanum) / sizeof(alphanum[0]);
	ofstream output("out.txt");

	for (int k = 1; k <= str; k++)
	{
		for (int i = 0; i < len; i++)
			array[i] = alphanum[(rand() % max) + 1];

		cout << array << endl;
		output << array << endl;
	}
}