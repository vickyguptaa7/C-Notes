#include <stdio.h>
int main()
{
    int num;
    printf("Enter Any Number :");
    scanf("%d", &num);

    int temp = num;
    int reverse = 0;
    while (temp > 0)
    {
        int last_digit = temp % 10;
        temp /= 10;
        reverse = reverse * 10 + last_digit;
    }

    if (reverse == num)
    {
        printf("%d Is Pallindrome Number", num);
    }
    else
    {
        printf("%d Is Not Pallindrome Number ", num);
    }

    return 0;
}
