#include <iostream>

using namespace std;

signed const int N = 50;

class Item
{
	string itemName[N];
	int itemCode[N];
	float itemPrice[N];
	int number;

public:
	void count(void) { number = 0; }
	void getItem(void);
	void displaySum(void);
	void remove(void);
	void displayItem(void);
};

void Item ::getItem(void)
{
	cout << "Enter item code: ";
	cin >> itemCode[number];

	cout << "Enter item cost: ";
	cin >> itemPrice[number];

	cout << "Product name: ";
	cin >> itemName[number];

	cout << "The product " << itemName[number] << " was added as " << itemCode[number] << " for Rs. " << itemPrice[number] << endl;

	number++;
}

void Item ::displaySum(void)
{
	float sum = 0;

	for (int i = 0; i < number; i++)
	{
		sum += itemPrice[i];
	}

	cout << "Total cost: " << sum << endl;
}

void Item ::remove(void)
{
	int a;

	cout << "Enter the item code to remove: ";
	cin >> a;

	for (int i = 0; i < number; i++)
	{
		if (itemCode[i] == a)
			itemCode[a] == 0;
	}
}

void Item ::displayItem(void)
{
	cout << "Code \tName \t \tPrice \n";

	for (int i = 0; i < number; i++)
	{
		cout << itemCode[i] << "\t" << itemName[i] << "\t" << itemPrice[i] << endl;
	}
}

int main(void)
{
	Item order;
	order.count();
	signed short int option;

loop:
	system("cls");

	cout << "[1] Add an Item" << endl
		 << "[2] Display total sum" << endl
		 << "[3] Delete an Item" << endl
		 << "[4] Display all items" << endl
		 << "[5] QUIT" << endl
		 << endl;

	cout << "Choose an option: ";
	cin >> option;

	cout << endl;

	switch (option)
	{
	case 1:
		order.getItem();
		break;
	case 2:
		order.displaySum();
		break;
	case 3:
		order.remove();
		break;
	case 4:
		order.displayItem();
		break;
	case 5:
		exit(0);
		break;
	}

	cout << endl;
	system("pause");
	goto loop;

	return 0;
}