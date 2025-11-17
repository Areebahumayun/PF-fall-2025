#include<stdio.h>
int main(){
	
	int r,c;
	int i,j;
	printf("enter number of rows ");
	scanf("%d",&r);
	printf("enter number of columns ");
	scanf("%d",&c);
	
		int matr1[r][c];
	int trans[c][r];
	
	printf("enter elements of matrix 1");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d", &matr1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			trans[j][i]=matr1[i][j];
		}
	}
	printf("transpose is ");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf(" %d",trans[j][i]);
		}}
			return 0;

	
}