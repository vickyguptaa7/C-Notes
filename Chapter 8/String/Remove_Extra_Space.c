#include<stdio.h>
#include<string.h>

void Remove_Extra_Spaces(char *Array);

int main() {
    char str[50];
    printf("Enter Any String : ");
    gets(str);
    
    Remove_Extra_Spaces(str);
    
    printf("When Extra Spaces Are Removed : %s",str);

    return 0;
}

void Remove_Extra_Spaces(char *Array)
{
    char p[strlen(Array)];
     int i=0; 
    while(Array[i]!='\0')
    {
        if(Array[0]==' '|| Array[i]==' ' && Array[i+1]==' ') // Removes The Starting And In 
        {                                                   //  In Between Spaces
              for(int j=i;Array[j]!='\0';j++)
          {
              Array[j]=Array[j+1];
          }
                        i--;
        }
        
        else if(Array[i]==' '&&Array[i+1]=='\0')  // Removes The Ending Spaces
        {
            Array[i]=Array[i+1];
        }
    
    i++;
    }

}

