#include<stdio.h>
void dowork(int x,int y, int *sum,int *avg, int*product);



void dowork(int x,int y,int *sum,int *avg,int *product){
	*sum=x+y;
	*product=x*y;
	*avg=(x+y)/2;
	
}

int main()
{
	int x=3;
	int sum,product,avg;
	int y=4;
	dowork(x,y, &sum, &avg, &product);
	printf("%d %d %d",sum,avg,product);
}