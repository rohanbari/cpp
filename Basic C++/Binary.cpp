#include <iostream>
#include <bitset>

using namespace std;

int main(void) {
	string input;

	cout << "Enter a random sentence: ";
	getline(cin, input);

	for (size_t i = 0; i < input.size(); i++) {
		cout << bitset<8>(input[i]) << " ";
	}

	return 0;
}
