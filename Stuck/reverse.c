#include <stdio.h>
void foo(int x1, ...)
{
	int *ap = &x1;
	while (*ap)
	{
		printf("%d\n", *ap++);
	}
}

int main(void)
{
	foo(1, 2, 3, 4, 5, 6, 7, 8);

	return 0;
}
