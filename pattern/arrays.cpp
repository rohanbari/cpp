#include <iostream>

bool isEven(char[], char[]);

int main(void)
{
	bool flag = isEven("Hello Worldo", "aeiou");

	if (flag)
		std::cout << "Even" << std::endl;
	else
		std::cout << "Not even." << std::endl;
}

bool isEven(char *toCheck[], char *from[])
{
	int count = 0;

	for (int i = 0; toCheck[i] != '\0'; i++)
	{
		for (int j = 0; from[j] != '\0'; j++)
		{
			if (toCheck[i] == from[j])
			{
				count++;
			}
		}
	}
	std::cout << count << std::endl;

	return (count % 2 == 0) ? true : false;
}