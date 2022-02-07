/*
Pattern 4.

* * * * *
  * * * *
    * * *
      * *
        * 

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Pattern Of Stars :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        for(int j=1;j<=i-1;j++){

            printf("  ");
            }
                for(int k=0;k<=n-i;k++){
                    printf("* ");
                }       

            printf("\n");
          }

        return 0;
}
