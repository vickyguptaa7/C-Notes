// #include <stdio.h>
// int main()
// {

//     int User_input;
//     printf("Check Number Is Prime Or Not :");
//     scanf("%d", &User_input);

//     int count = 0;

//     for (int i = 1; i <= User_input; i++)

//     {
//         if (User_input%i == 0)
//         {
//             count += 1;
//         }
//     }
//     if (count == 2)
//     {
//         printf("%d Is Prime Number", User_input);
//     }
//     else
//     {
//         printf("%d Is Not Prime Number", User_input);
//     }

//     return 0;
// }


#include <stdio.h>
int main()
{

    int a, b;
    printf("Prime Number Between Number :\n");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        int count = 0;

        for (int j = 1; j <= i ; j++)

        {
            if (i% j == 0)
            {
                count += 1;
            }
        }
        if (count == 2)
        {
            printf("Prime Number : %d \n",i );
        }
        
    }

    return 0;
}



