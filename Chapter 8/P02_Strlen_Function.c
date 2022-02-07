// #include<stdio.h>

// int strlen(char *arr);

// int main (){
//     char st1[25];
//     printf("Enter The Value Of String : ");
//     gets(st1);
//     printf("How Many Character Are There In String :  %d",strlen(st1));
//     return 0;
// }

// int strlen(char *arr)
// {
//     int i=0;
//     while(arr[i]!='\0')
//     {
//         i++;
//     }
//     return i;

// }
#include <stdio.h>
#include <string.h>

int main()
{
    char st1[25];
    printf("Enter The Value Of String : ");
    gets(st1);
    printf("How Many Character Are There In String :  %d", strlen(st1));
    return 0;

}
