#include <stdio.h>
#include <string.h>

int main() {
    char name[25];
    char course[100];


    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    printf("Enter your course: ");
    fgets(course, sizeof(course), stdin);
    course[strcspn(course, "\n")] = 0;
    char maxChar = name[0];
    int maxCount = 1;

    for(int i=0; i<strlen(name); i++) {
        if(name[i] == ' ') continue; // skip spaces
        int count = 1;
        for(int j=i+1; j<strlen(name); j++) {
            if(name[i] == name[j]) count++;
        }
        if(count > maxCount) {
            maxCount = count;
            maxChar = name[i];
        }
    }

    printf("Maximum frequency in name: '%c' appearing %d times\n", maxChar, maxCount);
    maxChar = course[0];
    maxCount = 1;

    for(int i=0; i<strlen(course); i++) {
        if(course[i] == ' ') continue; // skip spaces
        int count = 1;
        for(int j=i+1; j<strlen(course); j++) {
            if(course[i] == course[j]) count++;
        }
        if(count > maxCount) {
            maxCount = count;
            maxChar = course[i];
        }
    }

    printf("Maximum frequency in course: '%c' appearing %d times\n", maxChar, maxCount);

    return 0;
}

	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	
