#include <string>
#include <iostream>
#include <algorithm>

bool is_anagram(std::string s1, std::string s2)
{
	std::sort(s1.begin(), s1.end());
	std::sort(s2.begin(), s2.end());
	return s1 == s2;
}

int main(void)
{
	std::string s1, s2;

	std::cout << "Input first string: ";
	getline(std::cin, s1);

	std::cout << "Input second string: ";
	getline(std::cin, s2);

	if (is_anagram(s1, s2))
		std::cout << "Strings are anagrams." << std::endl;
	else
		std::cout << "Strings are NOT anagrams." << std::endl;

	return 0;
}