#include <stdio.h>

void Check_Alphanumeric(char *Array);

int main()
{
    char str[50];
    printf("Enter Any String : ");
    gets(str);

    Check_Alphanumeric(str);
    return 0;
}

void Check_Alphanumeric(char *Array)
{
    int i = 0,A,B;
    while (Array[i] != '\0')
    {
        if (Array[i] >= '0' && Array[i] <='9')
        {
            A=1;
        }
        if((Array[i]>='a' && Array[i]<='z')||(Array[i]>='A' && Array[i]<='Z'))
        {
            B=1;
        }
        i++;
    }
   
    if(A==1&&B==1)
    {
        printf("This String Is An Alphanumeric");
    }
    else
    {
         printf("This String Is Not An Alphanumeric");
    }
    

}
