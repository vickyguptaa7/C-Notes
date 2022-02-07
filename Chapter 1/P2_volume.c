#include <stdio.h>
int main()
{
    float radius;
    float pi = 3.14;
    float hieght;
    printf("Enter the radius :");
    scanf("%f", &radius);
    printf("The area of the circle is %f\n", (radius * radius * pi));
    printf("Enter the hieght of the cylinder :");
    scanf("%f", &hieght);
    printf("The Voulume Of The Cylinder Is %f", 2 * pi * radius * radius * hieght);
    return 0;
}