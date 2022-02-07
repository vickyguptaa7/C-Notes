#include <stdio.h>
int main()
{
    float Celsius;

    printf("Enter the temperature in celsius :");
    scanf("%f", &Celsius);

    printf("The tempearture in farehanite is %f", (9 * Celsius) / 5 + 32);
    return 0;
}
