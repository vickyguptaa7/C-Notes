#include <stdio.h>
int main()
{
    int a = 0, b = 1, c;
    int Upto;
    printf("Fibonacci Series Upto :");
    scanf("%d", &Upto);

    for (int i = 1; i <= Upto; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d \t", c);
    }
    return 0;
}
