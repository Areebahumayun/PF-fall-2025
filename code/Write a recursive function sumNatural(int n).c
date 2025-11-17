#include<stdio.h>
	 int sumnaturalnumber(int n) {
	 	int sum=0;
	 	if (n==0){
	 		return 0;
		 }
		 else{
		 for(int i=0;i<=n;i++) 
		 { 
		 	sum=sum+i;}
		 return sum;
	 }}
	 int main(){
	 	int num=5;
	
	 	int result=sumnaturalnumber(num);
	 	printf("sum of natural numbers are %d ",result);}
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 
