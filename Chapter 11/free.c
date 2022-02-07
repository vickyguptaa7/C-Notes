#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int *)calloc(600, sizeof(int));

    for (int i = 0; i < 600; i++)
    {
        ptr2 = (int *)calloc(6000000, sizeof(int));
        printf("Enter The %d Element : \n", i + 1);
        scanf("%d", &ptr[i]);
       free(ptr2);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The %d Element : %d\n", i + 1, ptr[i]);
    }
    return 0;
}