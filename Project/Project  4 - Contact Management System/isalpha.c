#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

// int main() {
//     char str[20];
//     printf("Enter Any String : ");
//     scanf("%s",str);
    
//     int i=0,a;

//     while(str[i]!=0)
//     {
//      a=isalpha(str[i]);
//      printf("%d\n",a);
//         i++;
//     }
//     return 0;
// }

int main() {
    char gender;

    printf("Enter : ");
    scanf("%c",&gender);

    gender=toupper(gender);
    printf("\t%c",gender);
    
    return 0;
}