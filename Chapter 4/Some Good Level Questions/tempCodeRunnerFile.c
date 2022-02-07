#include <stdio.h>
int main()
{

    int a;
    printf("Enter The Number :");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        if(a/i*i==0){
            a=a/i;
            printf("%d,",a);
            i=i-1;
        }
        
    }

    return 0;
}