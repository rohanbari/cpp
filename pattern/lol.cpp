#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
	ifstream in("rule.txt");
	ofstream out("target.txt");

	int w = 72; /*from  www.ja  v  a  2 s. c om*/
	if (argc == 4)
		w = atoi(argv[3]);

	string tmp;
	out.setf(ios_base::right); // Tell the stream to right-justify
	while (!in.eof())
	{
		out.width(w);			// Reset width after
		getline(in, tmp, '\n'); // each write
		out << tmp << '\n';
		cout << tmp << endl;
	}
	out.close();
}