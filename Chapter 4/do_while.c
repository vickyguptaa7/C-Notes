#include<stdio.h>
int main (){
    int i=0;
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    do{
        printf("%d\n", i); 
        i++;
    }while(i<n);
    return 0;
}

