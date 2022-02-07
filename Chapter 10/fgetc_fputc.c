#include <stdio.h>

int main()
{
    FILE *ptr;
    //     ptr=fopen("Vicky.txt","r");

    // printf("The Character : %c\n",fgetc(ptr));
    // printf("The Character : %c\n",fgetc(ptr));
    // printf("The Character : %c\n",fgetc(ptr));
    // printf("The Character : %c\n",fgetc(ptr));
    // printf("The Character : %c\n",fgetc(ptr));

    ptr = fopen("Generate.txt", "w");
    fputc('v', ptr);
    fclose(ptr);
    return 0;
}