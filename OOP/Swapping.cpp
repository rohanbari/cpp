#include <iostream>

using namespace std;

class Number {
	int x, y;

	public:
		void putData(void);
		friend void exchange(int &, int &);
};

void Number:: putData(void) {
	cout << x << " " << y << endl;
}

void exchange(int & a, int & b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

int main(void) {
	Number m = 10, n = 5;

	cout << "Before swap: " << m << " " << n << endl;
	exchange(m, n);

	

	return 0;
}
