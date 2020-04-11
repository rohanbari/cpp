#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t1, t2, nextTerm, terms;

	t1 = t2 = nextTerm = 1;

	cout << "Input your desired terms: ";
	cin >> terms;

	while (nextTerm <= terms) {
		cout << nextTerm << " ";

		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}

	return 0;
}
