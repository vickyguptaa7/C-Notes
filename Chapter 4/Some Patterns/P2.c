/*
Pattern 2.

* 
* * 
* * * 
* * * *
* * * * *

*/

// #include <stdio.h>
// int main()
// {
    
//         int n;
//         printf("Pattern Of Stars : ");
//         scanf("%d", &n);

//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= i; j++)
//             {

//                 printf("* ");
//             }
//             printf("\n");
//         }
    

//     return 0;
// }
#include<stdio.h>
int main (){
    int a;
    printf("Pattern Of Stars : ");
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
    printf("\n");
    }

    return 0;
}
