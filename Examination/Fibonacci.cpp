#include <iostream>

using namespace std;

int main(void) {
	int terms, nextTerm, x1, x2;

	x1 = x2 = nextTerm = 1;

	cout << "Input the limit for the last term: ";
	cin >> terms;

	while (nextTerm < terms) {
		nextTerm = x1 + x2;
		x1 = x2;
		x2 = nextTerm;

		cout << nextTerm << " ";
	}

	return 0;
}
