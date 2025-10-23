#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; 

    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++) {
            printf(" "); 
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*"); 
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (space = n; space > i; space--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*"); 
        }
        printf("\n");
    }

    return 0;
}