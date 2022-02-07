/*
Pattern 8.
*
* *
*   * 
*     *
* * * * *

*/

#include<stdio.h>
int main (){
    
int n;
    printf("Pattern Of Stars :");
    scanf("%d", &n);

    printf("*\n");
for(int i=2;i<n;i++){
     printf("* ");

    for(int j=1;j<i-1;j++){
         printf("  ");   
    }
    printf("*\n");
         
}

for(int k=1;k<=n;k++){
    printf("* ");
}


    return 0;
}
