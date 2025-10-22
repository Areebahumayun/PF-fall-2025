#include <stdio.h>

int main() {
    int num, last, rest;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 9 || num <-9)
        last = num % 10;       
        rest = num / 10;       
        num = rest - (2 * last);
        printf("%d - %d = %d\n", rest, 2 * last, num);
    }

    if (num == 0 || num == 7 || num == -7)
        printf("? The number is divisible by 7.\n");
    else
        printf("? The number is not divisible by 7.\n");

    return 0;
}
