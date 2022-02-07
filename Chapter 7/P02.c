// #include <stdio.h>
// int main()
// {
//     int arr[10], a = 5;

//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = a;
//         a = a + 5;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("The Table Of 5 X %d = %d \n", i + 1, arr[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[10],a;
    printf("Table To Store Of : ");
    scanf("%d",&a);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = a*(i+1);
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" %d X %d = %d \n",a, i + 1, arr[i]);
    }

    return 0;
}
