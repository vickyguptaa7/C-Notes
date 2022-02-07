#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How Many Integers Do You Want To Enter : ");
    scanf("%d",&n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter The %d Element : \n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The %d Element : %d \n", i + 1, ptr[i]);
    }
    return 0;
} 