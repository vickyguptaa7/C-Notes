#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter Two Number :\n");
    scanf("%d %d", &num1, &num2);
    int m;
    m = num2 * num2;

    for (m; m < 0; m--)
        if (num1 % m == 0 && num2 % m == 0)
        {
            printf("LCM Of The TWo Number : %d", m);
            break;
        }

    return 0;
}


// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     printf("Enter Two Number :\n");
//     scanf("%d %d", &num1, &num2);
//     int min;
//     min = num1 > num2 ? num2 : num1;

//     for (min; min > 0; min--)
//         if (num1 % min == 0 && num2 % min == 0)
//         {

//             break;
//         }
//     int LCM = (num1 * num2) / min;
//     printf("LCM Of The TWo Number : %d", LCM);
//     return 0;
// }
