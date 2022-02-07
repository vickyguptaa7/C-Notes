#include<stdio.h>
#include<string.h>

int Check_Substr(char *Str,char *Substr);

int main() {
    char str[50];
    printf("Enter Any String : ");
    gets(str);

    char substr[50];
    printf("Enter Any Substring : ");
    gets(substr);

    printf("The Substring Found On Index : %d",Check_Substr(str,substr));
    return 0;
}

int Check_Substr(char *Str,char *Substr)
{
    int a=strlen(Substr),i,k,j=0;
    while(Str[i]!='\0')
    {
        for(j;j<a;j++)
        {   k=i;
            if(Substr[j]!=Str[k])
             {break;}
             k++;
        }
        i++;
         if(j==a)
        return i;
    }
   
}