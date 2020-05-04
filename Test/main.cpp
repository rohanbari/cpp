#include <iostream>
#include <conio.h>
#include "components.hpp"
#include "functions.hpp"

using namespace std;

int main(void)
{
	char option;

looper:
	system("cls");
	fflush(stdin);
	showHeader();

	cout << "[1] Mathematical operations" << endl
		 << "[2] Programming tricks" << endl
		 << "[3] Miscellaneous" << endl
		 << "[0] EXIT FROM APP" << endl;

	option = getInput();
	system("cls");

	switch (option)
	{
	case '1':
		mathematics();
		break;
	case '2':
		programming();
		break;
	case '3':
		miscellaneous();
		break;
	case '0':
		exit(0);
		break;
	}
	getch();
	goto looper; // unless user forcibly closes the app

	return 0;
}
