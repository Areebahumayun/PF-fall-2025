#include<stdio.h>
int main() {
    int A[3][3]= {{1,2,3}
	             ,{4,5,6},
	              {7,8,9}};
	int sum=0,i;
	for(i=0;i<3;i++){
		sum=sum+A[i][i];
		
	}
	              printf("The sum of diagnol elements are %d:",sum);
}