#include <iostream>

using namespace std;

class complex
{
	float x, y;

public:
	complex(void) {};
	complex (float a, float b) {
		x = a;
		y = b;
	}
	complex operator+(complex);
	
	void display(void) {
		cout << x << " i" << y << endl;
	}
};

complex complex :: operator+(complex c) {
	complex temp;
	temp.x = x + c.x;
	temp.y = y + c.y;

	return temp;
}

int main(void)
{
	complex a(2, 3.4), b(4, 6.1), c;
	c = a + b;

	c.display();

	return 0;
}
