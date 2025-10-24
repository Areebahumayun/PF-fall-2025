#include<stdio.h>
int main()
{
	int i=0;
	float sum=0;
	while(i<=100)
	{
		sum=sum+1.0/i;
		i=i+2;
	}
	
	printf("sum of series is %.2f",sum);
	return 0;
	
}