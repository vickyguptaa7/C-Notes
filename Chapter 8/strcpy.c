#include<stdio.h>
#include<string.h>
int main (){
    char source[]="Vicky";
    char target[0];
    strcpy(target,source);
    printf("%s",target);
    return 0;
}