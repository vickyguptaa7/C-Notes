#include<stdio.h>
#include<string.h>
int main() {
    char st[50];
    printf("Enter Any String : ");
    gets(st);
    strrev(st);
    printf("The Reverse String : %s",st);
    return 0;
}

// #include<stdio.h>
// #include<string.h>

// void String_Reverse(char *Array);

// int main() {
//     char st[50];
//     printf("Enter Any String : ");
//     gets(st);
//     String_Reverse(st);
//     printf("The Reverse String : %s",st);
//     return 0;
// }

// void String_Reverse(char *Array)
// {
//     int l=strlen(Array)-1;
//     char temp;
//     for(int i=0;i<(l/2);i++)
//     {
//         temp=Array[i];
//         Array[i]=Array[l-i];
//         Array[l-i]=temp;
//     }
// }
