#include<stdio.h>
#include<string.h>
int main(){
   char str1[100];
   int left=0;
   printf("enter your string");
   gets(str1);
   int right=strlen(str1)-1;
    while(left<right){
   	int temp=str1[left];
   	str1[left]=str1[right];
   	str1[right]=temp;
   	left++;
   	right--;
   }
   printf("reveresed string is %s",str1);
   }