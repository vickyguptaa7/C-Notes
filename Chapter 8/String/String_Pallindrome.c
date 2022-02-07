#include<stdio.h>
#include<string.h>
void CheckPallindrome(char *Array,int a);

int main (){
    char str[50];
    printf("Enter Any String : ");
    gets(str);
   int a=strlen(str);
   CheckPallindrome(str,a);

}

void CheckPallindrome(char *Array,int a)
{
    int count=0,i;
    for(i=0;i<=a/2;i++)
    {
        if(Array[i]!=Array[a-i-1])
        {
            printf("%s Is Not A Pallindrome",Array);
            break;
        }
    }
    if(i-1==a/2)
    {
        printf("%s Is A Pallindrome",Array);
    }
}
