/*
Pattern 5.

         *
        * *
       * * *
      * * * * 
    * * * * * *
*/

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Pattern Of Stars :");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= n - i; j++)
//         {

//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {

//             printf("* ");
//         }

//         printf("\n");
//     }

//     return 0;
// }

// Review This Question OF Shape Diamond
/*
#include <stdio.h>
int main()
{
    int n;
    printf("Pattern Of Stars :");
    scanf("%d", &n);
    int k = 0;
    for (int i = 0; i < n * 2 - 1; i++)
    {
        i <= n ? k = ++k : --k;

        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j >= n + 1 - k && j <= n - 1 + k)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Pattern Of Stars : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
            if (j > i && j <= n * 2 - 1 - i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        printf("\n");
    }
    return 0;
}
