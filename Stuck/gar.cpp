#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int j = 0;
	while (i < 10 || j < 5)
	{
		cout << "i: " << i << " "
			 << "j: " << j << endl;
		i = i + 1;
		j = j + 1;
	}
	return 0;
}