// write a program to get two numbers from user and print the division of those numbers using functions.//
#include<stdio.h>
int div(int x,int y)
{
    int z;
    z=x/y;
    return (z);
}
int main(){
int x,y,z;
printf ("Enter the first number:");
scanf("%d",&x);
printf("Enter the second number:");
scanf("%d",&y);
z=div(x,y);
printf("%d",z);
return 0;
}
