#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

	char *csvArray[] = {"1000", "CAP_SYS_ADMIN", "CAP_SYS_RAW"};
	char *capList[] = {"CAP_SYS_SETFCAP", "CAP_SYS_SETPCAP", "CAP_SYS_ADMIN", "CAP_SYS_RAW"};

	int size = sizeof(csvArray) / sizeof(csvArray[0]);
	int sizeOfList = sizeof(capList) / sizeof(capList[0]);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < sizeOfList; j++) {
			if (strcmp(csvArray[i], capList[j]) == 0) {
				printf("%s Match\n", csvArray[i]);
			}
		}
	}

	return 0;
}
