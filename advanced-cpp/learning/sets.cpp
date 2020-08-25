#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Gets the user input with a custom prompt.
int get(string);

int main(void) {
	int *set1, *set2;
	int temp[1] = {0};
	int lowest = 0;
	vector<int> diff;

	temp[0] = get("Size for the first set: ");
	set1 = new int[temp[0]];

	for (int i = 0; i < temp[0]; i++) {
		cout << "Value [" << i << "]: ";
		cin >> set1[i];
	}

	temp[1] = get("Size for the second set: ");
	set2 = new int[temp[1]];

	for (int i = 0; i < temp[1]; i++) {
		cout << "Value [" << i << "]: ";
		cin >> set2[i];
	}

	lowest = (temp[1] < temp[0]) ? temp[1] : temp[0];

	sort(set1, set1 + temp[0]);
	sort(set2, set2 + temp[1]);

	for (int i = 0; i < lowest; i++) {
		if (set1[i] != set2[i]) {
			diff.push_back(set1[i]);
		}
	}

	for (int i = 0; i < diff.size(); i++)
		cout << diff[i] << ' ';
	
	return 0;
}

int get(string prompt) {
	int value = 0;

	cout << prompt;
	cin >> value;

	return value;
}