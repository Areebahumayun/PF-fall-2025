#include<stdio.h>
int main(){

int arr[3]={8,9,7};
int *ptr;
 ptr=arr;
int i;
int sum=0;

for(i=0;i<3;i++){
	printf("the element no %d is %d\t",i,*(ptr+i));
}
for(i=0;i<3;i++){

   sum=sum+*(ptr+i);}
           printf("the sum of elements is %d",sum);    
           
           
           
           
      }