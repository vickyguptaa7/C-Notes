#include <stdio.h>
int main()
{
    int n;
    printf("Table Of :");
    scanf("%d", &n);
    for (int a = 1; a <= 10; a++)
    {
        printf("%d X %d = %d \n",n,a,n*a);
    }
    return 0;
}
