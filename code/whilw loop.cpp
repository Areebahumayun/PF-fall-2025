#include<stdio.h>
int main(){
	float sum=0;
	int i;
	while(i<=99){
		sum=sum+(1.0/i);
		i=i+2;
	}
	printf("The sum of series 1+1/3+1/5+...+1/99 is %.4f",sum);
}