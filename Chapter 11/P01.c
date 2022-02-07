#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr=(int *)malloc(6*sizeof(int));
    for(int i=0;i<6;i++)
    {
        printf("Enter The Element In Ptr[%d] : ",i);
        fflush(stdin);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int i=0;i<6;i++)
    {
        printf("Enter The Element In Ptr[%d] : %d\n",i,ptr[i]);
    }
    return 0;
}