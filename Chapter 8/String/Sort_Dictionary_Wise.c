#include<stdio.h>

void Sort(char *Array);

int main (){

    char str[50];
    printf("Enter Any String : ");
    gets(str);
    
    Sort(str);
    printf("Sorting Dictionary Wise : %s",str);
    
    return 0;
}

void Sort(char *Array)
{
    int temp;
    for(int i=0;Array[i]!=0;i++)
    {
        for(int j=0;Array[j]!=0;j++)
        {
            if(Array[j]>Array[i])
            {
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }
    }
}
