#include <iostream>

int main(void)
{
	int max, t1, t2, next;
	t1 = t2 = max = next = 1;

	std::cout << "Enter the maximum value for series: ";
	std::cin >> max;

	while (next < max)
	{
		next = t1 + t2;
		t1 = t2;
		t2 = next;

		if (next > max)
			break;
		std::cout << next << ' ';
	}

	return 0;
}
