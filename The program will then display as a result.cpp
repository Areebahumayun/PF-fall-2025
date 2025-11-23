#include<stdio.h>
#include<string.h>
int main(){
	char str1[25];
	char str2[25];
	printf("enter the value of string 1");
	scanf("%s",str1);
	printf("enter the value string 2");
	scanf("%s",str2);
	if(strcmp(str1,str2)==0)
	{
		printf("the entered strings are equal");
	}
	else if(strcmp(str1,str2)>0)
	{ printf("string 1 is greater then 2");	}
		else { printf("string 2 is greayer then 1");
		}
	
	
	
	
}