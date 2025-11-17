#include <stdio.h>

// Function to print the character a pointer points to
void printChar(char *p) {
    printf("Character pointed to: %c\n", *p);
}

int main() {
    //task 4
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  

    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

    // Task 2: Call function to print a char
    char ch = 'A';
    printChar(&ch);  

    return 0;
}
