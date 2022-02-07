#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1,num2;
    char str[10];
    ptr = fopen("Vicky.txt", "r");      // Opening The File For Our Use.
    if(ptr==NULL)
    {
        printf("The File Does Not Exist.\n");
    }
    else
    {
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%s", str);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);                       // Closing The File After It Has Been Used. 
    printf("The Value Of \nNum1 : %d \nNum2 : %d  \nString : %s\n", num1,num2,str);
    }
    return 0;
}