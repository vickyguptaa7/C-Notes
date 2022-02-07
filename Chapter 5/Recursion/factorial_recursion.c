#include<stdio.h>
int factorial(int n);


int main (){
    int a;
    printf("Enter A Number : ");
    scanf("%d",&a);

    printf("The Factorial Of %d : %d ",a,factorial(a) );

    return 0;
}

int factorial(int n){
    int f;
    if(n==0||n==1){
        return 1;
    }
    else
    {
        f=n*factorial(n-1);
        return f;
    }
    
     
}
