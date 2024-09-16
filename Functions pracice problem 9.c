//Write program to check whether a number is even or odd using functions.
#include<stdio.h>
int CheckEvenOdd(int );
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    CheckEvenOdd(num);
    return 0;
    }
   int CheckEvenOdd(int num){

   if(num%2==0) {//condition for even
    printf("Number is even\n",num);
   }
   else{
    printf("Number is odd\n",num);
   }
   return num;
    }
