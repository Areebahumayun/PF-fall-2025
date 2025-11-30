/*swap the values of a and b using functions and pointers temp ko argument nhi 
bansakty isleye function ki body kai andar declare kartey hain*/
#include<stdio.h>
	int swapfunctions(int *a,int *b){
		int temp=*a;
		*a=*b;
		temp=*b;
		
	}
int main(){
	int a,b;
	int temp;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	swapfunctions(&a,&b);
	printf("value of a after swapping%d",a);
	printf("%d",b);
}