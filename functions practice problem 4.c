// write a program to get two numbers from user and find the remainder of those numbers using function.//
#include<stdio.h>
int remainder(int x, int y)
{
int z;
z=x%y;
return(z);
}
int main(){
int x,y,z;

printf("Enter the first number:");
scanf("%d",&x);
printf("Enter the second number:");
scanf("%d",&y);
z=remainder(x,y);
printf("%d",z);
return 0;
}
