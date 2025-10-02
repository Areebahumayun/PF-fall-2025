#include <stdio.h>

int main() {
    int gb;
    float cost = 0, totalBill, tax;

    printf("Enter total GB used: ");
    scanf("%d", &gb);

    if (gb > 100 && gb <= 200) {
        cost = (gb - 100) * 2;
    }

    if (gb > 200 && gb <= 300) {
        cost = (100 * 2) + (gb - 200) * 1.5;
    }

    if (gb > 300 && gb <= 400) {
        cost = (100 * 2) + (100 * 1.5) + (gb - 300) * 1.5; 
    }

    if (gb > 400) {
        cost = (100 * 2) + (100 * 1.5) + (100 * 1.5) + (gb - 400) * 1;
    }

    // Add 10% tax
    tax = cost * 0.10;
    totalBill = cost + tax;

    printf("Internet Bill (with 10%% tax) = Rs. %.2f\n", totalBill);

    return 0;
}