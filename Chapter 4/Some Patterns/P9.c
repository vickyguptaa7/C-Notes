/*

Pattern 9.

* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *


*/
// #include<stdio.h>
// int main (){
//     int a;
//     printf("Pattern Of Stars : ");
//     scanf("%d",&a);

//     for(int i=0;i<a;i++){
//         for(int j=1;j<=a*2-1;j++)
//         {
//             if(j<=a-i||j>=a+i)
//         {
//             printf("* ");
//         }
//         else
//         {
//             printf("  ");
//         }
        
//         }
//         printf("\n");

//     }
    
//     return 0;
// }

#include<stdio.h>
int main (){
    int a;
    printf("Pattern Of Stars : ");
    scanf("%d",&a);
    int k;
    for(int i=0;i<a;i++){
        k=65;
        for(int j=1;j<=a*2-1;j++)
        {
            if(j<=a-i||j>=a+i)
        {
            printf("%c ",k);
           j<a?k++:k--;
           
            
        }
        else
        {
            printf("  ");
           if(j==a){ k--;}
        }
       
        
        }
        printf("\n");

    }   
    
    
    return 0;
}
