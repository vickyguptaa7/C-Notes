#include <stdio.h>

int main()
{
    FILE *ptr1, *ptr2;
    ptr1 = fopen("Vicky.txt", "r");
    char c = fgetc(ptr1);
    ptr2 = fopen("Create.txt", "w");

    while (c != EOF)
    {
        fputc(c,ptr2);
        fputc(c,ptr2);
        c=fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    
    return 0;
}