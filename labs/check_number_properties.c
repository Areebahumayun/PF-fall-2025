#include <stdio.h>

int main() {
    int num, n, digit, sum = 0, rev = 0, i, isPrime = 1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    n = num;

    // Calculate sum of digits
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    if (sum % 2 == 0) {
        // If sum is even → check prime
        if (num <= 1)
            isPrime = 0;
        else {
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime)
            printf("%d is a Prime number.\n", num);
        else
            printf("%d is not a Prime number.\n", num);
    } 
    else {
        // If sum is odd → check palindrome
        n = num;
        while (n > 0) {
            digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        if (rev == num)
            printf("%d is a Palindrome number.\n", num);
        else
            printf("%d is not a Palindrome number.\n", num);
    }

    return 0;
}
