#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    // Pointers
    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    // Printing values using dereferencing
    printf("Integer value: %d\n", *pInt);
    printf("Float value: %.2f\n", *pFloat);
    printf("Char value: %c\n", *pChar);

    return 0;
}
