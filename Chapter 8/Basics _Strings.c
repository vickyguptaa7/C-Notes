#include<stdio.h>
int main (){
// char str[]={'V','I','C','K','Y','\0'};

char str[]= "Vicky";
char *ptr = str;
while(*ptr!='\0')
{
    printf("%c", *ptr);
    ptr++;
}
printf("\n");
char st[50];
scanf("%s",st);
printf("Your Name : %s",st);
    return 0;
}