#include <stdio.h>

typedef struct Complex_No
{
    int real;
    int img;
} Cn;

void Display(Cn C)
{
    printf("The Complex Number : %d + %di \n",C.real,C.img);
}

int main()
{

    Cn C[4];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Complex Number %d : \n",i+1);
        scanf("%d %d", &C[i].real, &C[i].img);
    }


    for (int i = 0; i < 5; i++)
    {
        Display(C[i]);
    }
    return 0;
} 