#include<stdio.h>
int main(){
	int i , count=0;
	int arr[4]={1,2,3,4};
    for(i=0;i<4;i++){
    	if(arr[i] % 2==0){
    	count++;}
	}
	printf("Total even numbers are %d ",count);
}