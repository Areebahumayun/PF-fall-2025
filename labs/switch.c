#include<stdio.h>
int main()
{   
	char choice;
	printf("Are you sure you want to delete? (y/n): ");
	scanf(" %c", &choice);
	switch(choice){
	case 'y':
	case 'Y':
		printf("Deleted successfully");
		break;
	case 'n':
	case 'N':
		printf("Delete cancelled");
		break;
	default:
		printf("choose a right option");}
}