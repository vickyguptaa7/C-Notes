#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year : ");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("%d Is A Leap Year", year);
        }
        else
        {
            printf("%d Is Not A Leap Year", year);
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            printf("%d Is A Leap Year", year);
        }
        else
        {
            printf("%d Is Not A Leap Year", year);
        }
    }
    return 0;
}
