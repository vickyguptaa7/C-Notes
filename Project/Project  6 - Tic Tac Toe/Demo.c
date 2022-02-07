#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char Array[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int chk[9];
int i = 0, GameEnd = 0;
int Won;

void Draw();
void Input();
int Verify();

int main()
{

while(!GameEnd)
{
    system("cls");
    Draw();
    Input();
}   

    return 0;
}

void Draw()
{
    printf("\n\n\t\t\t\t\t       ***************");
    printf("\n\t\t\t\t\t       ! Tic-Tac-Toe !    ");
    printf("\n\t\t\t\t\t       ***************\n");
    printf("\t\t\t\t   _________________________________________\n\n");

    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t| %c | %c | %c |\n", Array[0], Array[1], Array[2]);
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t| %c | %c | %c |\n", Array[3], Array[4], Array[5]);
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t| %c | %c | %c |\n", Array[6], Array[7], Array[8]);
    printf("\t\t\t\t\t\t-------------\n");
}

void Input()
{
    int number;
User:

    fflush(stdin);
    printf("\n\n\t\t\t\t\tEnter Your Choice : ");
    scanf("%d", &number);
    if (number > 9 || number < 1)
    {
        printf("\n\t\t\t\t\tThe Number Must Be Between  1 To 9\n\t\t\t\t\tEnter Again!\n");
        goto User;
    }
    for (int j = 0; j <= i; j++)
    {
        if ( number== chk[j])
        {
            printf("The Number Entered Is Used Earlier Or Its Invalid Entry.\nTry Angain!\n");
            goto User;
        }
        else if(j==i)
        {
            chk[i] = number;
        }
    }
    Array[number - 1] = 'O';

    i++;

    Verify();


Comp:
    srand(time(0));
    int Computer = rand() % 10;
    if (Computer == 0)
    {

        goto Comp;
    }
    for (int j = 0; j <= i; j++)
    {
        if (Computer == chk[j])
        {
            goto Comp;
        }
        else if(j==i)
        {
            chk[i] = Computer;
        }
    }

    Array[Computer - 1] = 'X';

    i++;
    
    Verify();

}

int Verify()
{ 
    if (
        Array[0] =='X'&& Array[1] =='X'&& Array[2] == 'X' ||
        Array[3] =='X'&& Array[4] =='X'&& Array[5] == 'X' ||
        Array[6] =='X'&& Array[7] =='X'&& Array[8] == 'X' ||
        Array[0] =='X'&& Array[3] =='X'&& Array[6] == 'X' ||
        Array[1] =='X'&& Array[4] =='X'&& Array[7] == 'X' ||
        Array[2] =='X'&& Array[5] =='X'&& Array[8] == 'X' ||
        Array[0] =='X'&& Array[4] =='X'&& Array[8] == 'X' ||
        Array[2] =='X'&& Array[4] =='X'&& Array[6] == 'X')
    {
        system("cls");
        Draw();
        printf("\n\t\t\t\t\t\tComputer Wins");
        GameEnd = 1;
        exit(1);
    }

    else if (
        Array[0] =='O'&& Array[1] =='O'&& Array[2] == 'O' ||
        Array[3] =='O'&& Array[4] =='O'&& Array[5] == 'O' ||
        Array[6] =='O'&& Array[7] =='O'&& Array[8] == 'O' ||
        Array[0] =='O'&& Array[3] =='O'&& Array[6] == 'O' ||
        Array[1] =='O'&& Array[4] =='O'&& Array[7] == 'O' ||
        Array[2] =='O'&& Array[5] =='O'&& Array[8] == 'O' ||
        Array[0] =='O'&& Array[4] =='O'&& Array[8] == 'O' ||
        Array[2] =='O'&& Array[4] =='O'&& Array[6] == 'O')
    {
        system("cls");
        Draw();
        printf("\n\t\t\t\t\t\tYou Won");
        GameEnd = 1;
        exit(1);
    
    }

    else if(i==9)
    {
        system("cls");
        Draw();
        printf("Match Draws");
        GameEnd = 1;
        exit(1);
        
    }

}