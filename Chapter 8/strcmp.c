#include<stdio.h>
#include<string.h>
int main (){
    char s1[]="Jok";
    char s2[]="Jole";
    int value = strcmp(s1,s2);
    printf("%d",value);
    return 0;
}