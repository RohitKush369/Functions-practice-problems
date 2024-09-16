//Write a program to find cube of any number using function.
#include<stdio.h>
int cube(int);
int main()
{
    int num;
    int result=0;
    printf("Enter a number:");
    scanf("%d",&num);
    result=cube(num);
    printf("Cube is:%d",result);
    return 0;
}
int cube(int num){
    int cube;
cube=num*num*num;
return cube;
}
