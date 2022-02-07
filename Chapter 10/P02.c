#include<stdio.h>

int main() {
    int a;
    printf("Print The Table Of : ");
    scanf("%d",&a);
    FILE *ptr;
    ptr=fopen("Table.txt","w");
    for(int i=1;i<=10;i++)
    {
        int b=a*i;
        fprintf(ptr,"%d X %d = %d \n",a,i,b);
    }
    fclose(ptr);
    printf("Successfully The Table of %d Is Generated.",a);
    return 0;
}