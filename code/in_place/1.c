#include<stdio.h>
int main() {
 int a;
 int b;
 char ch;
 printf("Enter the value of a:");
 scanf("%d", &a);
 printf("Enter the value of b:");
 scanf("%d" , &b);
 printf("Enter operator (+, -, *, /, %%): ");
 scanf(" %c", &ch);   // ? FIXED (space before %c, no \n)

 switch(ch)
{       case '+':
  printf("a+b = %d\n", a+b);
  break;
  case '-':
  printf("a-b = %d\n", a-b);
  break;
  case '*':
        printf("a*b = %d\n" , a*b);
        break;
        case '/':
            if(b != 0)
                printf("a / b = %d\n", a / b);  
            else
                printf("Error: Division by zero not allowed.\n");
            break;

        case '%':
            if(b != 0)
                printf("a %% b = %d\n", a % b);
            else
                printf("Error: Modulo by zero not allowed.\n");
            break;

        default:
            printf("Invalid operator entered!\n");
    }

    return 0;
}