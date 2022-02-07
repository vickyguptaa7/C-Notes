#include <stdio.h>
int main()
{
    float radius;
    float pi = 3.14;

    printf("Radius of the circle :");
    scanf("%f", &radius);
    printf("Area of the circle : %f sq units", pi * radius * radius);
    return 0;
}
