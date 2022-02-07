#include<stdio.h>

int SumSqDigi(int a);

int main (){
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);

    printf("Sum Of Square Of Digit %d : %d",n,SumSqDigi(n));

    return 0;
}

int SumSqDigi(int a)
{
    if(a==0)
    {
        return 0;
    }
    else 
    {
        int b,sum=0;
        b=a%10;
        a=a/10;
        sum=b*b+SumSqDigi(a);
        return sum;          
    }
}


