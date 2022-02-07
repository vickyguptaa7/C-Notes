#include<stdio.h>
int main (){
    int arr[10];
    int *ptr=arr;
    ptr=ptr+2;

if(ptr==&arr[2])
{printf("Points To The Same Location");}
else
{
    printf("Do Not Points To The Same Location");
}

    return 0;
}