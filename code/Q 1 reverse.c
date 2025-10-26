#include<stdio.h>
int main(){
	int i;
	int A[5]={1,2,3,4,5};
	int REV[5];
	for(i=0;i<5;i++){
		REV[i]=A[4 - i];
		
	}
	for(i=0;i<5;i++){
			printf(" The reverse of array A of index %d=%d\n ", i,REV[i]);
	}
}