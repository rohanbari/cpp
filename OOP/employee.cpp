#include <iostream>

using namespace std;
const int N = 50;
signed short int count = 0;

class Employee
{
	string name[N];
	signed short int age[N];
	int salary[N];
	string designation[N];

public:
	void addEntry(void);
	void removeEntry(void);
	void getEmployee(void);
	void getAllEmp(void);
};

void Employee ::addEntry(void)
{
	cout << "Employee Name: ";
	getline(cin, name[count]);

	cout << "Employee Age: ";
	cin >> age[count];

	cout << "Employee Salary: ";
	cin >> salary[count];

	cout << "Designation: ";
	cin >> designation[count];

	cout << endl
		 << name[count] << " added successfully!" << endl;

	count++;
}

void Employee ::removeEntry(void)
{
}

void Employee ::getEmployee(void)
{
}

void Employee ::getAllEmp(void)
{
}

int main(void)
{
	signed short int option;
	Employee person;

loop:
	system("cls");
	cout << "Welcome to Employee Management Service!" << endl
		 << "---------------------------------------" << endl
		 << endl;

	cout << "[1] Add an employee" << endl
		 << "[2] Remove an employee" << endl
		 << "[3] Get an employee info" << endl
		 << "[4] Get info about everyone" << endl
		 << endl;

	cout << "Choose an option: ";
	cin >> option;

	switch (option)
	{
	case 1:
		person.addEntry();
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	}

	goto loop;
}