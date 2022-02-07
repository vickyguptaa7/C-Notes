#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age :");
    scanf("%d", &age);
    if (age >= 18 && age<=60)
    {
        printf("You can drive a car");
    }
    else
    {
        printf("you cannot drive a car");
    }

    return 0;
}