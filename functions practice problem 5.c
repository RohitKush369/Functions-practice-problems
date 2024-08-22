// write a program to get a number from user and print the square of that number.//
#include<stdio.h>
int sqrt(int x){
 int y;
 y=x*x;
return (y);
}
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=sqrt(x);
    printf("%d",y);
    return 0;

}
