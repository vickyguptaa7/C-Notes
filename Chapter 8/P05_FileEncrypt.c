#include <stdio.h>

void Encrypt(char *Array);

int main()
{

    char str[50];
    printf("Enter Any String : ");
    gets(str);

    Encrypt(str);
    printf("The Encrypted String Is :%s",str);
   
    return 0;
}

void Encrypt(char *Array)
{
    while (*Array != '\0')
    {
        *Array= *Array + 1;
        Array++;
    }
    *Array= '\0';

}

