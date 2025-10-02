#include <stdio.h>

int main() {
    int program;
    int year;
    printf("Enter Program Type:\n");
    printf("1 = Computer Science\n");
    printf("2 = Electrical Engineering\n");
    scanf("%d", &program);

    switch(program) {
        case 1: 
            printf("Enter Year (1 = First Year, 2 = Second Year): ");
            scanf("%d", &year);
            
            switch(year){
             case 1:
                    printf("CS First Year Courses:\n");
                    printf("1. Programming Fundamentals\n");
                    printf("2. Calculus\n");
                    break;

                case 2:
                    printf("CS Second Year Courses:\n");
                    printf("1. Data Structures\n");
                    printf("2. Discrete Math\n");
                    break;

                default:
                    printf("Invalid Year!\n");
            }
            break;

        case 2: // Electrical Engineering
            printf("Enter Year (1 = First Year, 2 = Second Year): ");
            scanf("%d", &year);

            switch(year) {
                case 1:
                    printf("EE First Year Courses:\n");
                    printf("1. Circuit Theory\n");
                    printf("2. Physics\n");
                    break;

                case 2:
                    printf("EE Second Year Courses:\n");
                    printf("1. Signals\n");
                    printf("2. Electronics\n");
                    break;

                default:
                    printf("Invalid Year!\n");
            }
            break;

        default:
            printf("Invalid Program!\n");
    }

    return 0;
}