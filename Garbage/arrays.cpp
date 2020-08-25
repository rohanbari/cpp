// A basic legendary program in C++

#include <iostream>

int main(void)
{
	int array[] = {2, 3, 5, 2, 1, 2};
	int max = array[0];
	int iterator = 1;

	for (int i = iterator; i <= max; i++)
	{
		if (i == max)
		{
		}
		else
		{
			std::cout << array[i] << ' ';
		}
	}

	return 0;
}