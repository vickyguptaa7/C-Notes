#include<stdio.h>
#include<string.h>

void StrCpy(char *arr_1,char *arr_2);

int main (){
    char str[20],stc[20];
    printf("Enter The Vlaue Of The String : ");
    scanf("%s",str);

    StrCpy(str,stc);

     printf("The Value Of Second string : %s\n",stc);

    printf("Comaparing The Two Strings : %d",strcmp(str,stc));

    return 0;
}

void StrCpy(char *arr_1,char *arr_2)
{
    int i=0;
    while(arr_1[i]!='\0')
    {
        arr_2[i]=arr_1[i];
        i++;
    }
    arr_2[i]='\0';; 
}