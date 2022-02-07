#include <stdio.h>

void Decrypt(char *Array);

int main()
{

    char str[100];
    printf("Enter Any String : ");
    gets(str);

    Decrypt(str);
    printf("The Encrypted String Is :%s",str);
    return 0;
}

void Decrypt(char *Array)
{
    while (*Array != '\0')
    {
        *Array= *Array - 1;
        Array++;
    }
    *Array= '\0';

}

