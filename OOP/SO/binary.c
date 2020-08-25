#include <stdio.h>

void printBin(char c);

int main(void) {
    char str[32];
    
    printf("Input a string to be converted into a binary: ");
    scanf("%s", &str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        printBin(str[i]);
    }
    
    return 0;
}

void printBin(char c) {
    char output[32];
    itoa(c, output, 2);
    
    printf("%s\n", output);
}