// -----------------------------------------------
// DISCLAIMER: It is an experimental project only.
// -----------------------------------------------
// Author: LINUX MAN		Copyright: MIT LICENSE
// Dated: 04-APR-2020		Version: 1.0
// -----------------------------------------------

#include <iostream>
#include <cmath>

using namespace std;

enum options { arith = 1, circle, trig, magic };
enum arithmetic { add = 1, subt, multiply, divide };

static short ask(void);
static void getValues(arithmetic);

float x, y, result;
short int option;

int main(void) {
	cout << flush << "========================================" << endl;
	cout << "|   WELCOME TO THE ULTIMA CALCULATOR   |" << endl;
	cout << "======================================== \n\n";

	cout << "[1] ARITHMETIC" << endl <<
			"[2] CIRCLE" << endl <<
			"[3] TRIGONOMETRY" << endl <<
			"[4] MAGICX" << endl;

	option = ask();

	if (option == 0) {
		exit(0);
	}
	
	switch (option) {
		case arith:
			repeat:
			{ // Inner block
				cout << flush << "===== ARITHMETIC =====" << endl << endl;
				cout << "[1.1] Addition" << endl
					 << "[1.2] Subtraction" << endl
					 << "[1.3] Multiplication" << endl
					 << "[1.4] Division" << endl;
				option = ask();

				switch (option) {
					case 0:
						main();
						break;
					case add:
						{
							getValues(add);
						}
						break;
					case subt:
						{
							getValues(subt);
						}
						break;
					case multiply:
						{
							getValues(multiply);
						}
						break;
					case divide:
						{
							getValues(divide);
						}
						break;
					default:
						goto repeat;
						break;
				}
			}
			break;
		case circle:
			{ // Inner block

			}
			break;
		case trig:
			{ // Inner block

			}
			break;
		default:
			cout << "Option invalid." << endl;
			main();
	}

	main();

	return 0;
}

static short ask(void) {
	short ch;

	cout << "\nInput your choice: ";
	cin >> ch;

	return ch;
}

static void getValues(arithmetic ar) {
	cout << "Input two values respectively: ";
	cin >> x >> y;

	switch (ar) {
		case add:
			result = x + y;
			break;

		case subt:
			result = x - y;
			break;

		case multiply:
			result = x * y;
			break;

		case divide:
			try {
				result = x / y;
			} catch (runtime_error re) {
				cout << "ERROR: Cannot divide by zero." << endl;
			}
			break;
		default:
			break;
	}

	printf("Result: %.2f\n", result);
	system("pause");
}