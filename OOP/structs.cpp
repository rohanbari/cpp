#include <iostream>

class Edges
{
	std::string src, destin;
	int srcInt, destinInt;

public:
	Edges(std::string s1, std::string s2)
	{
		src = s1;
		destin = s2;

		std::cout << "src: " << src << " destin: " << destin << std::endl;
	}
	Edges(int s1, int s2)
	{
		srcInt = s1;
		destinInt = s2;

		std::cout << "src: " << srcInt << " destin: " << destinInt << std::endl;
	}
};

int main(void)
{
	Edges e0(123, 321);
	Edges e1("hello", "world");

	return 0;
}
