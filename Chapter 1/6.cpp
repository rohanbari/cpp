#include <iostream>

using namespace std;

class temp {
	float cel, fah;

	public:
		void getdata(void);
		void setdata(void);
};

void temp :: getdata(void) {
	printf("Temperature: %.2f\n", cel);
}

void temp :: setdata(void) {
	cout << "Input temperature in Fahrenheit: ";
	cin >> fah;
	cel = (5 * (fah - 32)) / 9;
}

int main(void) {
	temp tmp;

	tmp.setdata();
	tmp.getdata();

	return 0;
}
