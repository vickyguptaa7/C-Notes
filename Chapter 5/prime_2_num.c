#include <stdio.h>

int CheckPrime(int a);

int main()
{
    int n;
    printf("Enter Any Number : ");
    scanf("%d", &n);
    int a, b;
    for (int i = 2; i <= n; i++)
    {
        a = i;
        b = n - i;
        if (b >= a) // To Remove Duplicates.
        {
            if (CheckPrime(a) == 2 && CheckPrime(b) == 2)
            {
                printf("%d + %d = %d \n", a, b, n);
            }
        }
    }

    return 0;
}
int CheckPrime(int a)
{
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count = count + 1;
        }
    }
    return count;
}
