#include<stdio.h>

int SumDigit(int a);

int main (){
    int n;
    printf("Enter Any Number : ");
    scanf("%d",&n);
    
    printf("Sum Of Digit Of %d : %d",n,SumDigit(n));
     
    return 0;
}

int SumDigit(int a)
{
   if(a==0)
   {
       return 0;
   }
   else
   {
       int b,sum=0;;
       b=a%10;
       sum=b+SumDigit(a/10);
       return sum;
   }
   
}