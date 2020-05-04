#include <iostream>

using namespace std;
const int N = 64;

int main(void)
{
	char input[N];
	int sequence = 1;

	cout << "Input your string: ";
	cin.get(input, N);

	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] == input[i - 1]){
			sequence++;
			input[i] = sequence;
			cout << input[i];
		}
		else
			sequence = 1;
	}
}