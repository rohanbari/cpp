#include <stdio.h>

int t = 0;

int f(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else {
		return (n - 1);
	}
}

int s = 0;
int sum(int x)
{
	if (x == 0)
		return f(0);
	else {
		while (x != 0) {
			s += f(x);
			x--;
		}
		return s;
	}
}

int main()
{
	int input;
	scanf_s("%d", &input);
	printf("%d", sum(input));
}