/*
Pattern 3.

* * * * *
* * * *
* * *
* *
* 

*/

// #include <stdio.h>
// int main()
// {

//     int n;
//     printf("Pattern Of Stars :");
//     scanf("%d", &n);

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {

//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>
int main()
{

    int n;
    printf("Pattern Of Stars : ");
    scanf("%d", &n);
int k=n;
    for (int i = 0; i <= n; i++)
    {k=n-i;
        for (int j = 0; j <= n - i; j++)
        {

            printf("%d ",k);
            k=k-1;
            
        }
        printf("\n");
    }

    return 0;
}
