#include<stdio.h>
int main()
{
     float a, b, c, discriminant;
     printf("Enter coefficents a,b,c:");
     scanf("%f %f %f", &a , &b , &c);
     
     discriminant=b*b-4*a*c;
     if(discriminant > 0) {
     
     printf("roots are real and distinct");}
     else if (discriminant < 0) {
     
     printf("root are imaginary");}
     else {
     
     printf("roots are equal");}
     
}