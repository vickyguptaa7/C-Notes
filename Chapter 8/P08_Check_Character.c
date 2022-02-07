#include<stdio.h>

int Check(char *Array,char c);

int main (){
    char str[50];
    printf("Enter Any String : ");
    gets(str);

    char c;
    printf("Check This Character Present In String : ");
    scanf("%c",&c);
    
    int count=Check(str,c);

    if(count>0)
    {
        printf("The %c Character Is Present In The String",c);
    }
    else 
    {
    printf("The %c Character Is Not Present In The String",c);    
    }
    return 0;
}

int Check(char *Array,char c)
{
    int count=0;
    for(int i=0;Array[i]!=0;i++)
    {
        if(c==Array[i])
        {
           count++;  
        }
    }
    return count;
}

