#include<stdio.h>
#include<string.h>
int main(){
	char arr1[20];
	char arr2[20];
	printf("enter your name");
	scanf("%s",&arr1);
		printf("enter your last name");
	scanf("%s",&arr2);
	strcat(arr1,arr2);
	printf("your full name is %s ",arr1);
      int count=0;
      for(int i=0;i<strlen(arr1);i++){
      	if(arr1[i]>='0' && arr1[i]<='9'){
      		
      	count++;
      	printf("number of characters are %d",count);
	 }}
}
