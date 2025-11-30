#include<stdio.h>
int printriangle(int i,int j,int n){
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");}
		
	}
	int main(){
		int n;
		printf("enter the value of n");
		scanf("%d",&n);
		int i;
		int j;
	printriangle(i,j,n);
	}