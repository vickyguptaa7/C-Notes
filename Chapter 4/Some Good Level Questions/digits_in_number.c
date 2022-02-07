// #include <stdio.h>
// int main()
// {
//     int number, product = 1;
//     printf("Enter The number :");
//     scanf("%d", &number);
//     for (int i = 1; i >= 1; i++)
//     {
//         product *= 10;
//         if (number / product < 1)
//         {
//             printf("No Of Digit %d", i);
//             break;
//         }
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int number, count = 0;
    printf("Enter The number :");
    scanf("%d", &number);
    while (number != 0)
    {
        number = number / 10;
        count = count + 1;
    }
    printf("No Of Digit %d", count);
    return 0;
}
