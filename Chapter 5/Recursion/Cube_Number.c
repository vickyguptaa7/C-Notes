#include<stdio.h>

int Cube(int a);

int main (){
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);

    printf("Cube Of First %d Natural Number : %d ",n,Cube(n));

    return 0;
}

int Cube(int a)
{
    if(a==1)
    {
        return 1;
    }
    else 
    {
        return a*a*a+Cube(a-1);
    }
}