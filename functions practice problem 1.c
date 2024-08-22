// write a program to get two numbers from user and print the sum of those number using functions.//
#include<stdio.h>
int add(int x,int y)
{
   int sum;
   sum=x+y;
   return (sum);
}
int main(){
    int x,y,sum;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    sum=add(x,y);
    printf("%d\n",sum);
    return 0;

}
