#include<stdio.h>

int main() {
    int x = 0, y = 1, next;

    for(; x <= 500; ) {

        if (x > 300) {
            break;  
        }

        if (x % 5 == 0 && x != 0) {
            next = x + y;
            x = y;
            y = next;
            continue;
        }

        printf("Fibonacci series is %d\n", x);
        next = x + y;
        x = y;
        y = next;
    }

    return 0;
}
