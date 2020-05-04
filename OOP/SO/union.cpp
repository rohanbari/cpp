#include <iostream>

union Data {
	int a;
	int b;
	Data()
	{
		a = 1;
		b = 0.5;
	}
};

int main()
{

	Data udata;
	udata.a = 999999999;

	std::cout << &udata.a << "\t" << &udata.b << std::endl;
	return 0;
}