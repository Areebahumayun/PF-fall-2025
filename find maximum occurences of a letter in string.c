#include <stdio.h>

int main() {
    char name[100], courses[200];
    int i, j, maxCount;
    char maxChar;
    printf("Enter your name: ");
    gets(name);  
    printf("Enter courses offered (Fall 2021): ");
    gets(courses); 

    maxCount = 0;  
    for(i = 0; name[i] != '\0'; i++) { 
        if(name[i] == ' ') continue;   
        int count = 0;              
        for(j = 0; name[j] != '\0'; j++) {  
            if(name[i] == name[j] || name[i] + 32 == name[j] || name[i] - 32 == name[j]) {
                count++; 
            }
        }
        if(count > maxCount) {  
            maxCount = count;   
            maxChar = name[i];  
        }
    }

    printf("\nFor Name:\n");
    printf("Maximum occurring character: %c\n", maxChar);
    printf("Occurrences: %d\n", maxCount);
    maxCount = 0;
    for(i = 0; courses[i] != '\0'; i++) {
        if(courses[i] == ' ') continue;
        int count = 0;
        for(j = 0; courses[j] != '\0'; j++) {
            if(courses[i] == courses[j] || courses[i] + 32 == courses[j] || courses[i] - 32 == courses[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            maxChar = courses[i];
        }
    }

    printf("\nFor Courses:\n");
    printf("Maximum occurring character: %c\n", maxChar);
    printf("Occurrences: %d\n", maxCount);

    return 0;
}












