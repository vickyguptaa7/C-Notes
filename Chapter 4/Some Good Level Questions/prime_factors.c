#include <stdio.h>
int main()
{
    int a;
    printf("Enter A Number :");
    scanf("%d", &a);
    int temp;
    for (int i = 2; i <= a; i++)
    {
        temp = a % i;
        if (temp == 0)
        {
            printf("%d ", i);
            a = a / i;
            i = i - 1;
        }
       
    }

    return 0;
}
