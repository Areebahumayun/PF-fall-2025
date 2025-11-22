//pointer arthimetic
//pointer can be increemented and decreemented 
#include<stdio.h>
int main(){
	int age=22;
	int *ptr=&age;
	++(*ptr);
	printf("%d",*ptr);
	
	float price=5.6;
	float *tptr=&price;
	(tptr)--;
	printf("%f",*tptr);
      int num1=9;
	 int num2=8;
	 int *pptr=&num1;
	 int *pttr=&num2;
	 int diff=*pptr-*pttr;
	 printf("the difference b/w %d",diff);
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 }