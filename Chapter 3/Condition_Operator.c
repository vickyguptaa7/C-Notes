#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter the number :\n");
    scanf("%f %f", &num1, &num2);
    (num1 > num2) ? printf("%f Is Greater Than %f ", num1, num2) : printf("%f Is Greater Than %f ", num2, num1);
    return 0;
}
