#include <stdio.h>

int main()
{
    FILE *fptr;
    int a = 25;
    fptr = fopen("Generated.txt", "w");
    fprintf(fptr, "The Value Of a : %d", a);
    fclose(fptr);
    return 0;
}