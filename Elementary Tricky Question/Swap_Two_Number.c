#include <stdio.h>
int main()
{

    int a, b;

    printf("Enter the first number  : ");
    scanf("%d", &a);
    printf("Enter the Second number  : ");
    scanf("%d", &b);

    a=b-a;
    b=b-a;
    a=b+a;


    printf("The Value Of First Number:%d And Second Number:%d", a, b);

    return 0;
}
