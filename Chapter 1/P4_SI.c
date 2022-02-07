#include <stdio.h>
int main()
{
    float principle, rate, intrest;

    printf("Enter the principle amount :");
    scanf("%f", &principle);
    printf("Enter the rate :");
    scanf("%f", &rate);
    printf("Enter the interest :");
    scanf("%f", &intrest);
    float simple_intrest = principle * rate * intrest / 100;
    printf("The Simple Interest is %f", simple_intrest);
    return 0;
}