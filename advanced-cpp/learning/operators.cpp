#include <iostream>

using namespace std;

class String {
	char *str;

public:
	void operator=(const char *s) {
		size_t len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}

	String operator+(String &s1) {
		String temp;

		temp.str = strcat(this->str, s1.str);
		return temp;
	}

	String operator+(const char *ch) {
		String temp;

		temp.str = strcat(this->str, ch);
		return temp;
	}

	friend ostream &operator<<(ostream &output, String &D) {
		output << D.str;
		return output;
	}
};
int main() {
	String s1, s2, s3;
	s1 = "Hello";
	s2 = "World";

	s3 = s1 + ", " + s2;
	cout << s3 << endl; // Output should be “Hello, World!”

	return 0;
}
