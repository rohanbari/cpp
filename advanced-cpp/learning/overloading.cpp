#include <iostream>

using namespace std;

class parent {
public:
	void overload(int) {
		cout << "The value was an integer." << endl;
	}
};

class child : public parent {
public:
	void overload(string) {
		cout << "The value was a string." << endl;
	}
};

int main(void) {
	child c;

	c.overload("hello");
	c.parent::overload(200);

	return 0;
}