#include<stdio.h>
int price(int arr[3]){
	int sum=arr[0]+arr[1]+arr[2];
	return sum;
}
int main(){
	int arr1[3];
	int sum;
	printf("enter the price of first item");
	scanf("%d",&arr1[0]);
		printf("enter the price of first item");
	scanf("%d",&arr1[1]);
		printf("enter the price of first item");
	scanf("%d",&arr1[2]);
int SUM= price(arr1);
printf("the sum of array elemnt is %d",SUM);
	
}