#include<stdio.h>
int main(){
	int i,fact=1,num;
	printf("Enter a number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
	
		fact=fact*i;}
	printf("the factorial is %d",fact);
}