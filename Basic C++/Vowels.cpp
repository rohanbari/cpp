#include <iostream>

using namespace std;

bool checkType(char &);

int main(void) {
	char ch;

recurse:
	cout << "Input a character: ";
	cin >> ch;

	if (isdigit(ch)) {
		cout << "Please input only a letter." << endl << endl;
		goto recurse;
	}

	if (checkType(ch)) {
		cout << "The character is a vowel letter." << endl;
	} else {
		cout << "The character is a consonant letter." << endl;
	}

	return 0;
}

bool checkType(char & c) {
	int lowerVowel = {c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'};
	int upperVowel = {c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'};

	if (lowerVowel || upperVowel) {
		return true;
	} else {
		return false;
	}
}
