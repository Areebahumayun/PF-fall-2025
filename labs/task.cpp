#include <stdio.h>

int main() {
    double sum = 0.0;
    int denominator = 4;

    printf("Series: 1");
    sum += 1.0;

    while (denominator <= 400) {
        printf(" + 1/%d", denominator);
        sum += 1.0 / denominator;
        denominator += 4;
    }

    printf("\nSum of the series: %.6f\n", sum);

    return 0;
}