#include<stdio.h>
int main()
{
	int age;
	char ch;

	printf("Enter age: ");
	scanf("%d", &age);

	printf("Enter your gender (M/F): ");
	scanf(" %c", &ch);  

	switch(age >= 18)
	{
		case 1: 
			printf("Age is greater than or equal to 18: ");
			switch(ch)
			{
				case 'M':
					printf("Gender is male");
					break;
				case 'F':
					printf("Gender is female");
					break;
				default:
					printf("Enter valid gender");
			}
			break;

		case 0: 
			printf("Age is less than 18: ");
			switch(ch)
			{
				case 'M':
					printf("is a boy");
					break;
				case 'F':
					printf("is a girl");
					break;
				default:
					printf("Enter valid gender");
			}
			break;
	}
}