#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void) {
	ofstream File("hello.txt");

	File << "Content here." << endl;

	File.close();

	return 0;
}
