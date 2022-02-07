#include<stdio.h>

int main() {
    int a,b,c;
    FILE *ptr;
    ptr=fopen("P01.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("The Three Numbers : %d %d %d",a,b,c);
    return 0;
}