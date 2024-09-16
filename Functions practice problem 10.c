//write a program to calculate factorial of a number using functions.
#include<stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
   factorial(num);
    printf("%d",factorial(num));
    return 0;
}
int factorial(int num){
int factorial=1;
while(num>0){
factorial=factorial*num;//5!=5*4*3*2*1
        num--;
}
return factorial;
}
