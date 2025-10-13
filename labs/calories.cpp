#include<stdio.h>
int main()
{
	float calories,fat_grams,calories_from_fat,percentage;
	printf("Enter the number of calories:");
	scanf("%f",&calories);
	printf("Enter the number of fat grams");
	scanf("%f",&fat_grams);
	calories_from_fat = fat_grams * 9;
	percentage = (calories_from_fat / calories) * 100;
	printf("calories from fat: %2f\n",calories_from_fat);
	printf("percentage of calories from fat,%2f",percentage);
	if(percentage<=30){
		
		printf("food is low in fat:");
}
	
}