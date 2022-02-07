#include <stdio.h>
int main()
{
    int number;
    printf("Enter The Number : ");
    scanf("%d", &number);
    int reverse = 0;
    while (number != 0)
    {
        int last_digit = number % 10;
        number = number / 10;
        reverse = 10 * reverse + last_digit;
    }
    printf("The Reverse Number : %d ", reverse);

    return 0;
}
