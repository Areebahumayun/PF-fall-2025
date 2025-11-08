#include<stdio.h>
int main(){
	int num,count=0;
	int digits;
	printf("Enter a number");
	scanf("%d",&num);
	while(num!=0){
	//to count number of digits
	num=num/10;
	count=count+1;}
	printf("%d",count);
}
