#include<stdio.h>
int main(){
	int n;
	printf("enter the number of elements");
	scanf("%d",&n);
	int count=0;
	float avg;
	int sum=0;
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter number %d  : ",i+1);
		scanf("%d",&arr[i]);
		}
			for(int i=0;i<n;i++){
				if(arr[i]>0){
				
				sum=sum+arr[i];
				count++;}}
				printf("sum of all positive numbers are %d",sum);
				
				for(int i=0;i<n;i++){
			
				if(count>0){
					avg=(float)sum/count;
				}}
				printf("the average is %f", avg);
				
				
				
				
				
				
				
				
				} 