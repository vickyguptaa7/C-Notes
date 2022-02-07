#include<stdio.h>
#include<string.h>

void Remove_Space(char *Array);

int main() {
    char str[50];
    printf("Enter Any String : ");
    gets(str);

    Remove_Space(str);

    printf("String Without Any Space : %s ",str);



    return 0;
}

void Remove_Space(char *Array)
{
    int i=0,j;
    while(Array[i]!='\0')
    {
        if(Array[i]==' ')
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

