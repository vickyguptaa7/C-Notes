#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);

    if (a / 2 * 2 == a)
    {
        printf("%d Even Number", a);
    }
    else
    {
        printf("%d Odd Number", a);
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number :");
//     scanf("%d", &a);
//     int b;
//     b = a / 2;
//     float c, d;
//     c = (float)a / 2;
//     d = c - b;

//     if (d == 0)
//     {
//         printf("%d Even Number", a);
//     }
//     else
//     {
//         printf("%d Odd Number", a);
//     }
//     return 0;
// }