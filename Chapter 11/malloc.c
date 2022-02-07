#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter The %d Element : \n", i + 1);
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The %d Element : %0.2f\n", i + 1, ptr[i]);
    }
    return 0;
}