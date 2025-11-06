#include <stdio.h>
int cube(int x) {
    return x * x * x;
}

int main() {
    int number;
    int result;
    printf("Enter an integer: ");
    scanf("%d", &number);
    result = cube(number);
    printf("The cube of %d is %d\n", number, result);

    return 0; 
}