#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char username[20];
    char password[20];
    char loginUser[20];
    char loginPass[20];
    int i, hasDigit, hasUpper, hasLower;

    // Step 1: Username input
    while (1) {
        printf("Enter a username (5 alphabets only): ");
        scanf("%s", username);

        if (strlen(username) != 5) {
            printf("Username must be exactly 5 alphabets!\n");
            continue; 
        }

        int allAlpha = 1;
        for (i = 0; i < 5; i++) {
            if (!isalpha(username[i])) {
                allAlpha = 0;
                break;
            }
        }

        if (!allAlpha) {
            printf("Username must contain only alphabets!\n");
            continue;
        }

        break; 
    }

    // Step 2: Password input
    while (1) {
        printf("Enter a password (6 chars, 1 capital, 1 small, 1 digit): ");
        scanf("%s", password);

        if (strlen(password) != 6) {
            printf("Password must be exactly 6 characters!\n");
            continue; 
        }

        hasDigit = hasUpper = hasLower = 0;

        for (i = 0; i < 6; i++) {
            if (isdigit(password[i]))
                hasDigit = 1;
            else if (isupper(password[i]))
                hasUpper = 1;
            else if (islower(password[i]))
                hasLower = 1;
        }

        if (!hasDigit || !hasUpper || !hasLower) {
            printf("Password must have at least 1 digit, 1 capital, and 1 small letter!\n");
            continue;
        }

        break; 
    }

    // Step 3: Account created
    printf("\nAccount Created Successfully!\n");

    // Step 4: Login process
    while (1) {
        printf("\nLogin now\n");
        printf("Enter username: ");
        scanf("%s", loginUser);
        printf("Enter password: ");
        scanf("%s", loginPass);

        if (strcmp(username, loginUser) == 0 && strcmp(password, loginPass) == 0) {
            printf("\nWelcome %s, you are now logged in!\n", username);
            break; 
        } else {
            printf("Invalid username or password. Try again.\n");
            continue; 
        }
    }

    return 0;
}
