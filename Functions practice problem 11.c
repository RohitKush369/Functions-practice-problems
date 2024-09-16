//write a program to reverse a number using functions.
#include<stdio.h>
int find_reverse(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    find_reverse(num);
    printf("Reverse is:%d",find_reverse(num));
    return 0;
}
int find_reverse(int num){
int reverse=0;
int remainder;
while(num>0){
remainder=num%10;//first digit
num/=10;//removing the last digit
reverse=(reverse*10+remainder);//for reversing the number
}
return reverse;
}
