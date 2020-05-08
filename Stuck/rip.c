#include <stdio.h>

int main(void)
{
	typedef unsigned long long int address;

	address *addr;

	printf("%llx\n", &addr);

	return 0;
}
