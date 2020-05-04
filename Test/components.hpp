#include "iostream"
#include "conio.h"

// Displays the header of the app.
void showHeader(void);

// Takes input from the user.
char getInput(void);

// --------------- D E F I N I T I O N S

void showHeader(void)
{
	std::cout << "==============================" << std::endl
			  << "|    WELCOME TO THE MAGIXA   |" << std::endl
			  << "==============================" << std::endl << std::endl;
}

char getInput(void)
{
	char input;

	std::cout << "\n\tInput your choice : [ ]"
			  << "\b\b";
	input = getch();

	return input;
}