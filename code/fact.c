#include<stdio.h>
int factorial(int x){
if (x==0){
	return 1;
}
else return
 factorial=x*factorial(x-1);
}
int main(){
	int x;
	printf("enter value of x");
	scanf("%d",&x);
int	result=factorial(x);
	printf("result is %d",result);
}