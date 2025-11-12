#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;  
    while (num > 0) {   
        int digit = num % 10; 
        sum = sum + digit;     
        num = num / 10;        
    }
    return sum;  
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumOfDigits(number);  
    printf("Sum of digits = %d", result);

    return 0;
}
