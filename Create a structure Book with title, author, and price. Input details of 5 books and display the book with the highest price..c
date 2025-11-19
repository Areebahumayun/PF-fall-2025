#include<stdio.h>
#include<string.h>
	struct book{
		int pages;
		char name[20];
		char theme[40];
		
	};
int main(){
    struct book b[5];
    for(int i=0;i<5;i++){
    	printf("enter the pages of book %d",i+1);
    	scanf("%d",&b[i].pages);
    	printf("enter the name of book %d  ",i+1);
    	scanf("%s",b[i].name);
    	printf("enter the theme of book %d",i+1);
    	scanf("%s",b[i].theme);
    }
	
	
	
	
	
}