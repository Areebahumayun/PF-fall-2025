#include <stdio.h>

int main() {
    int n, qty, total = 0;
    char choice;

    printf("How many items do you want to order (2, 3 or 4): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("\nEnter item (B=Burger, F=Fries, P=Pizza, S=Sandwich): ");
        scanf(" %c", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if (qty > 0) {
            switch (choice) {
                case 'B':
                case 'b':
                    total = total + 200 * qty;
                    break;
                case 'F':
                case 'f':
                    total = total + 50 * qty;
                    break;
                case 'P':
                case 'p':
                    total = total + 500 * qty;
                    break;
                case 'S':
                case 's':
                    total = total + 150 * qty;
                    break;
                default:
                    printf("Invalid choice!\n");
            }
        } 
        else {
            printf("Invalid quantity!\n");
        }
    }

    printf("\nTotal Bill = Rs. %d", total);
    return 0;