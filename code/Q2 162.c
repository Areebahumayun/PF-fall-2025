#include<stdio.h>
#include<string.h>
int main(){
	char str1[]="Hello";
	char str2[7];
	strcpy(str2,str1);
	printf("copied string is %s ",str2);
}