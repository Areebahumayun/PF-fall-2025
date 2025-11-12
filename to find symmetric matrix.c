#include<stdio.h>
int main(){
	int arr1[2][2];
	int trans[2][2];
	int i,j;
	printf("enter elements of matrix:");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("elements [%d][%d]",i,j);
			scanf("%d",&arr1[i][j]);
				printf("\n\n");
			
		}}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				trans[j][i]=arr1[i][j];}
			
		}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++)
			{
				printf("%d",trans[j][i]);
			}
			printf("\n");
		int flag=1;
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				if(trans[j][i]!=arr1[i][j]){
					flag=0;
					break;
				}}}
				if (flag==1) {
				printf("Matrix is symmetric");}
				else{
				printf("matrix is asymmetric");}
				
			}
	}