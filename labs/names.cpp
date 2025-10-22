#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50], lastName[50], fullName[100];
    char courses[200];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter your first name: ");
    gets(firstName);
    printf("Enter your last name: ");
    gets(lastName);

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("\nFull name backwards: ");
    for (i = strlen(fullName) - 1; i >= 0; i--) {
        printf("%c", fullName[i]);
    }

    printf("\n\nEnter your courses:\n");
    gets(courses);

    strcat(fullName, " ");
    strcat(fullName, courses);

    for (i = 0; fullName[i] != '\0'; i++) {
        char ch = fullName[i];
        if (ch != ' ' && ch != ',') {
            freq[(int)ch]++;
        }
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            maxChar = (char)i;
        }
    }

    printf("\nCharacter with maximum occurrence: '%c'\n", maxChar);
    printf("It appears %d times.\n", max);

    return 0;
}
