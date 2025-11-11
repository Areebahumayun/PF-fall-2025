#include <stdio.h>

int main() {
    int a[2][3] = {
        {0, 1, 2},
        {4, 5, 6}
    };
    int i, j, sum;

    for (i = 0; i < 2; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}

