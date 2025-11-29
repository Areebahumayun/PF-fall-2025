#include<stdio.h>
int main(){
	int n;
	int sum=0;
	// find the sum of series with alternate signs 1-4+9-25+36-49 till n terms
	printf("enter the end limit of this series");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		if(i%2==0)
			sum=sum-(i*i);
		
		else sum=sum+(i*i);
	}
	printf("the sum of series is %d",sum);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}