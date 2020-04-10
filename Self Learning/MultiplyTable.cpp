#include <iostream>

using namespace std;

int main(void) {
	int limit;

loop:
	cout << "Input the number of total columns for the table: ";
	cin >> limit;

	if (limit <= 0) {
		cout << "Number should be nonzero positive integer.";
		goto loop;
	}

	for (int i = 1; i <= limit; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << (i * j) << "\t";
		}
		cout << endl;
	}
	
	return 0;
}