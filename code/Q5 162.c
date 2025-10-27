#include <stdio.h>
#include <string.h>
 int main() {
 	char str1[20]="Programming";
 	char str2[20]="Trauma";
 	strncpy(str2,str1,4);
 	str2[4]='\0';
 	printf(" %s",str2);
 }