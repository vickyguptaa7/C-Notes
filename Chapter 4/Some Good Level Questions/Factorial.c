#include <stdio.h>
int main()
{

    int n;  //Factorial of number.
    printf("Factorial of : ");
    scanf("%d", &n);

    int factorial = 1;
    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }
    printf("Factorial of %d Is %d", n, factorial);

    return 0;
}
