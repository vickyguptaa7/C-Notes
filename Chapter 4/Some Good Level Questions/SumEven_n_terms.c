#include <stdio.h>
int main()
{
    int x, temp = 1, sum=0;
    int User_input;
    printf("Sum Upto :");
    scanf("%d", &User_input);

    for (x = 0; x < User_input; x++)
       { 
         temp=1+2*x;
         sum = sum + temp;           
       }
    printf("Sum Of Odd Natural Number Upto %d : %d",User_input,sum);

    return 0;
}
