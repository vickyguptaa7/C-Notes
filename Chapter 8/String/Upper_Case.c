#include<stdio.h>

void UpperCase(char *Array);

int main (){
    printf("Enter The String In Lower Case : ");
    char str[50];
    gets(str);

    UpperCase(str);

    printf("The String In Upper Case : %s",str);
    
    return 0;
}

void UpperCase(char *Array)
{
    while(*Array!='\0')
    {
        if(*Array>='a'&&*Array<='z')
        *Array=*Array-32;
        Array++;
    }
}
