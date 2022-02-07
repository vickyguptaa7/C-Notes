#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Compare(char U, char O)
{
    // if you in it returns 1,and if you lose it returns -1 
    // if the match draws it return 0
    //Cases for draw
    //ww
    //ss
    //gg
    //cases for win or lose
    //sw
    //ws
    //wg
    //gw
    //gs
    //sg

    if (U == 's' && O == 'w')
    {
        return 1;
    }
    if (U == 'w' && O == 's')
    {
        return -1;
    }

    if (U == 'w' && O == 'g')
    {
        return 1;
    }
    if(U == 'g' && O == 'w')
    {
        return -1;
    }

    if (U == 'g' && O == 's')
    {
        return 1;
    }
    if(U == 's' && O == 'g')
    {
        return -1;
    }

    return 0;
}

int main()
{
    char User;
    printf("Enter 's' For Snake, 'w' For Water And 'g' For Gun : \n");
    scanf("%c", &User);

    srand(time(0)); //generates random number 
    int number = rand() % 10 + 1; // random number between 1 to 10
    char Computer;

    if (number <= 3)
    {
        Computer = 's';
    }
    else if (number >= 4 && number <= 6)
    {
        Computer = 'w';
    }
    else
    {
        Computer = 'g';
    }

    int a = Compare(User, Computer);

    if (a == 1)
    {
        printf("You Chose :'%c' And Computer Chose :'%c'. You Won! ", User, Computer);
    }
    else if (a == -1)
    {
        printf("You Chose :'%c' And Computer Chose :'%c'. You Lose!", User, Computer);
    }
    else
    {
        printf("You Chose :'%c' And Computer Chose :'%c'. Match Draw !", User, Computer);
    }

    return 0;
}