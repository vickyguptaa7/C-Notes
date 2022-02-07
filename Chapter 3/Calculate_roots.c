#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, D, x, y; 
    /* Here a and b are coefficient of x^2 and x c is constant term.
       D is Discreminant and x and y are the roots of the equation. */ 

    printf("Enter The Coeffecient of x^2 ,x and constant term : \n");
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 * a * c;

    if (D < 0)
    {
        printf("Imaginary Roots");
    }
    else if (D == 0)
    {
        printf("Both Root Are Equals Which Is %f", (-b / 2 * a));
    }
    else
    {
        x = (-b + sqrt(D)) / 2 * a;
        y = (-b - sqrt(D)) / 2 * a;

        printf("First Root Is %f Second Root IS %f", x, y);
    }
    return 0;
}
