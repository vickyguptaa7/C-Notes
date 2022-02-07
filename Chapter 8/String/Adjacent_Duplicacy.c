#include<stdio.h>
#include<string.h>
void Remove_Duplicacy(char *Array);

int main() {
    char str[50];
    printf("Enter Any String : ");
    gets(str);

    Remove_Duplicacy(str);

    printf("Removing Duplicacy : %s",str);
    return 0;
}

void Remove_Duplicacy(char *Array)
{
    int i=0;
    while(Array[i]!='\0')
    {
       if(Array[i]==Array[i+1])
       {
           for(int j=i;Array[j]!='\0';j++)
           {
              Array[j]=Array[j+1];
           }
           i--;
       }
       i++;
    }
}
