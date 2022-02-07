#include <stdio.h>

int Occurence(char *Array, char c);

int main()
{
    char str[50];
    printf("Enter Any String : ");
    gets(str);

    char c;
    printf("Check This Character Present In String : ");
    scanf("%c", &c);
     
    int count=Occurence(str,c);

    printf("The %c Character Is Repeated %d Times ",c,count);


    return 0;
}

int Occurence(char *Array, char c)
{
    int count = 0;
    for (int i = 0; Array[i] != 0; i++)
    {
        if (c == Array[i])
        {
            count++;
        }
    }
    return count;
}

