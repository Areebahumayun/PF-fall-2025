#include<stdio.h>
int sq(int num){
   return num*num;
}
int main(){
	int num;
	for(int i=0;i<10;i++){
		printf("enter a number\n");
		scanf("%d",&num);
		int result=sq(num);
	printf("squares of number are %d\n",result);}
}