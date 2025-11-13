#include<stdio.h>
int calculatesum(int a,int b){


 return a+b;}
int main() {
	int num1,num2,result;
	printf("enter value of num1");
	scanf("%d",&num1);
	printf("enter value of num2");
	scanf("%d",&num2);
	result=calculatesum(num1,num2);
	printf("result is %d",result);
}