#include <iostream>
#include <cstring>

int main(void)
{
	const int MAX = 1;
	char str1[MAX];
	char str2[MAX];
	char str3[MAX];
	char temp[MAX];

	std::cout << "Enter a line: ";
	std::cin >> str1 >> str2;

	strcpy(str1, temp);
	// str1 = strcpy(temp,)

	std::cout << str3 << std::endl;

	return 0;
}

// int main(void)
// {
// 	std::string string1 = "";
// 	std::string string2 = "";

// 	std::cout << "Enter the first string: ";
// 	getline(std::cin, string1);

// 	std::cout << "Enter the second string: ";
// 	getline(std::cin, string2);

// 	std::cout << string1 << ' ' << string2 << std::endl;

// 	return 0;
// }