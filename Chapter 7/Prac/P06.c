#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[10], max, min, temp, i, j;
    min = 0;
    max = min + 9;

    printf("The 10 Distinct Number :\n");

    srand(time(0));
    for (i = 0; i < 10; i++)
    {
        temp=rand()%10+min;
        for (j = 0; j < i; j++)
        {
            if (temp == arr[j])
                break;
        }
        if (i == j)
        {
            arr[i] = temp;
        }
        else
        {
            i--;
        }
    }

for(i=0;i<10;i++)
{
    printf("%d \t",arr[i]);
}
    return 0;
}
