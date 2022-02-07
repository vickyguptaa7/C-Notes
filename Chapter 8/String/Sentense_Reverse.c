#include <stdio.h>
#include <string.h>

char Reverse(char *Array);

int main()
{
    char str[50];
    printf("Enter Any String : ");
    gets(str);
    Reverse(str);
    printf("The Reversed String : %s",str);
    return 0;
}

char Reverse(char *Array)
{
        int i = 0, j;
    char reverse[50];

    int WorkStart = strlen(Array) - 1;
    int WorkEnd = strlen(Array) - 1;

    while(WorkStart>0)
    {
        if(Array[WorkStart]==' ')
        {
            j=WorkStart+1;
            while (j<=WorkEnd)
            {
                reverse[i]=Array[j];
                i++;
                j++;
            }
            reverse[i++]=' ';            
            WorkEnd=WorkStart-1;
        }
       WorkStart--;
    }
    for(j=0;j<=WorkEnd;j++)
    {
        reverse[i]=Array[j];
    i++;
    }
    reverse[i++]='\0';

    strcpy(Array,reverse);
}

