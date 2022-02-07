#include<stdio.h>
int main (){
    int a;
    printf("Enter A Nuumber :");
    scanf("%d", &a);
    int temp,binary=0;
    for(int i=1;i<=a;i++){
        temp=a%2;
        a=a/2;
        binary=temp*10+binary;
    }
    printf("%d",binary);
    return 0;
}