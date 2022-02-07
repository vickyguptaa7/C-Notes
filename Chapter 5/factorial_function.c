#include<stdio.h>
int factorial(int n);

int main (){
int a;
printf("Calculate Factorial Of : ");
scanf("%d",&a);
printf("Factorial Of %d : %d ",a,factorial(a));
    return 0;
}
int factorial(int n)
{
    int b=1;
    for(int i=1;i<=n;i++)
    {
        b=b*i;
    }
    return b;
}
