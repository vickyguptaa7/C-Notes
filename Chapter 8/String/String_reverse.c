
/*Using String Reverse Function strrev()*/

// #include<stdio.h>
// #include<string.h>
// int main (){
//     char str[50];
//     printf("Enter Any String : ");
//     gets(str);
//     strrev(str);
//     printf("Enter Any String : %s",str);
    


//     return 0;
// }

/*Without Using String Reverse Function strrev()*/

#include<stdio.h>

void StrRev(char *Array,int a);

int main (){
    char str[50];
    printf("Enter A String : ");
    gets(str);
int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    
    StrRev(str,i-1);
    printf("The Reversed String : %s",str);
    
    return 0;
}

void StrRev(char *Array,int a)
{
    int temp;
for(int i=0;i<=a/2;i++)
{
    temp=Array[i];
    Array[i]=Array[a-i];
    Array[a-i]=temp;
}
}