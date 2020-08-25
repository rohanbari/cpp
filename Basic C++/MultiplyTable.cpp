#include <iostream>

class table {
	unsigned int row;
	unsigned int column;

public:
	void getTableInfo(void);
	void drawTable(table &);
};

void table :: getTableInfo(void) {
	try {
		std::cout << "The number of columns: ";
		std::cin >> column;

	} catch (...) {
		std::cout << "Please provide the info correctly! \n";
	}

	row = 1;
}

void table :: drawTable(table & t) {
	int calc;

	for (; t.row <= 10; t.row++) {
		for (int temp = 1; temp <= t.column; temp++) {
			calc = t.row * temp;

			std::cout << calc << '\t';

			if (calc % 120 == 0) {
				
			}
		}
		std::cout << std::endl;
	}
}

int main(void) {
	table t;

	t.getTableInfo();
	t.drawTable(t);

	return 0;
}