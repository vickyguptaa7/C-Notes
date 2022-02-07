#include<stdio.h>
int main (){
    // 
    // int i=34;
    // int *j=&i;
    // printf("The Value Of J : %u \n",j);
    // j++;
    // printf("The Value Of J : %u",j);
    char i='A';
    char k='B';
    char *j=&i;
    char *m=&k;
    printf("The Value Of J : %u And M : %u \n",j,m);
    printf("The Value Of J : %u",(j-m));
    

    return 0;
}