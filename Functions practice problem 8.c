//Write a C program to find maximum and minimum between two numbers using functions.
#include<stdio.h>
int max(int ,int);
int min(int ,int);
int main()
{
    int num1,num2,maximum,minimum;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    maximum=max(num1,num2);
    minimum=min(num1,num2);
    printf("Maximum number is:%d\n",maximum);
    printf("minimum number is:%d\n",minimum);
    return 0;
}
int max(int num1,int num2){
if(num1>num2){//condition for maximum
    return num1;
}
    else{
        return num2;
    }
}
int min(int num1,int num2){
if(num1<num2){//condition for minimum
    return num1;
}
else{
    return num2;
}
}
