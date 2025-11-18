#include<stdio.h>
int main(){
	int arr[7]={1,2,3,4,5};
	int i;
	int j;
	int temp;
	for(i=0,j=4; i<=j; i++,j--){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		
		
	}
	for(i=0; i<=5;i++){
	
		printf("%d" , arr[i]);
	} 
	
	return 0;
	
}