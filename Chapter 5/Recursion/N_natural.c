// #include <stdio.h>

// void Sum(int a);

// int main()
// {
//     int n;
//     printf("Enter A Number : ");
//     scanf("%d", &n);

//     Sum(n);

//     return 0;
// }

// void Sum(int a)
// {
//     if (a >= 1)
//     {
//         Sum(a - 1);
//         printf("%d \n", a);
//     }
// }

/* Reverse Order */

#include <stdio.h>

void Sum(int a);

int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);

    Sum(n);

    return 0;
}

void Sum(int a)
{
    if (a >= 1)
    {
        printf("%d \n", a);
        Sum(a - 1);
    }
}
