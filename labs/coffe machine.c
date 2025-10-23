#include <stdio.h>

// Function to show menu
void instructions() {
    printf("Welcome to the Coffee Machine!\n");
    printf("Press B for Black Coffee\n");
    printf("Press W for White Coffee\n");
    printf("Cup Size: Y for Double, N for Regular\n");
    printf("Manual Mode: Y for Manual, N for Automatic\n");
}

float coffeeTime(char type, int isDouble) {
    float time;

    if (type == 'B' || type == 'b') {
        time = 30;  // Black coffee time
    } else {
        time = 45;  // White coffee time
    }

    if (isDouble == 1) {
        time = time * 1.5;  // Increase time by 50%
    }

    return time;
}

int main() {
    char type, cup, manual;
    float total;

    instructions();

    printf("Enter coffee type (B/W): ");
    scanf(" %c", &type);

    printf("Do you want double cup? (Y/N): ");
    scanf(" %c", &cup);

    printf("Do you want manual control? (Y/N): ");
    scanf(" %c", &manual);

    int isDouble = (cup == 'Y' || cup == 'y') ? 1 : 0;

    printf("\nCoffee Machine Started\n");

    if (type == 'B' || type == 'b') {
        printf("Grinding black coffee beans...\n");
        printf("Adding hot water...\n");
        printf("Brewing black coffee...\n");
    } 
    else if (type == 'W' || type == 'w') {
        printf("Grinding coffee beans...\n");
        printf("Adding milk and sugar...\n");
        printf("Brewing white coffee...\n");
    } 
    else {
        printf("Invalid coffee type!\n");
        return 0;
    }

    if (manual == 'Y' || manual == 'y') {
        printf("Manual mode: Adjusting taste manually...\n");
    } else {
        printf("Automatic mode: Serving coffee...\n");
    }

    total = coffeeTime(type, isDouble);

    printf("Total time: %.2f seconds\n", total);
    printf("Your coffee is ready! ? Enjoy!\n");

    return 0;
}