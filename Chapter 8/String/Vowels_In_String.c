#include<stdio.h>

int Check_Vowel(char *Array,char *Vowel);

int main() {
    char str[50];
    printf("Enter Any String : ");
    gets(str);

    char vowel[]="AEIOUaeiou";
    
    int a=Check_Vowel(str,vowel);

    printf("The No Of VOwel In The String : %d",a);

    return 0;
}

int Check_Vowel(char *Array,char *Vowel)
{
    int i=0,count=0;
    while(Array[i]!='\0')
    {
        for(int j=0;Vowel[j]!='\0';j++)
        {
            if(Array[i]==Vowel[j])
            {
                count++;
            }
        }
        i++;
    }
    return count;
}
