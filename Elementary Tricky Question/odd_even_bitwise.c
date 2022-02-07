#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);



    if ((a&1) == 0)
    {
        printf("%d Even Number",a);
    }
    else
    {
        printf("%d Odd Number",a);
    }
    return 0;
}
