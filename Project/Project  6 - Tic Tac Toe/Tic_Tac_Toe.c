#include <stdio.h>      // all basic
#include <stdlib.h>      //rand
#include <time.h>        //time 
#include <conio.h>      //getch
#include <windows.h>    //toupper 
#include <string.h>     // memset function

char Array[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; //An Array To Denote Position Of 
int chk[9], i=0, number;       // chk an array used to store the user inputs 
                               // number is used to take the input from the user's 
int player, F_or_C;            //F_or_C is used to decide whether you will play with computer or with your friends
                               //player is used to decide who will play first 

void Title();                   // used To Show Tic Tac Toe 
void Main_Menu();               // used for The First_Page of the game
void Draw();                    //  used to draw the tic tac toe 
void InputSymbol();             // used for which will have 'O' aor 'X'
void Start();                   //used to decide who will play first
void Player1();                 // input from the first user
void Player2();                 // input from the second user
void Computer();                // used to take input from computer
int Logic();                    // Its the part which decide who will win the game or draw
int Check();                    //check is used to operate logic and input function simulatneously

int main()
{
Repeat:
    system("cls");             
    Main_Menu();
    system("cls");
    Draw();
    InputSymbol();
    Start();
    Check();

    char ans;

Ans:
    printf("\n\t\t\t\t\t\tDo You Want To Play Again [Y/N] : ");
    fflush(stdin);
    scanf("%c", &ans);
    if (toupper(ans) == 'Y')   // Reinitializing The array To play The Game Again
    {
        Array[0] = '1';
        Array[1] = '2';
        Array[2] = '3';
        Array[3] = '4';
        Array[4] = '5';
        Array[5] = '6';
        Array[6] = '7';
        Array[7] = '8';
        Array[8] = '9';
        i=0;
        memset(chk,0,sizeof(chk));  // used to set the all element of chk as 0;
        goto Repeat;
    }
    else if (toupper(ans) == 'N')   // used to exit the game
    {
        exit(1);
    }
    else
    {
        printf("\n\t\t\t\t\t\tInvalid Entry. Try Again!");
        goto Ans;
    }

    return 0;
}

void Title()
{
    printf("\n\n\t\t\t\t\t       ***************");
    printf("\n\t\t\t\t\t       ! Tic-Tac-Toe !    ");
    printf("\n\t\t\t\t\t       ***************\n");
    printf("\t\t\t\t   _________________________________________\n\n");
}

void Main_Menu()
{
    Title();
    printf("\n\n\t\t\t\t\t1)Play With Friend's ");
    printf("\n\t\t\t\t\t2)Play With Computer ");
    printf("\n\t\t\t\t\t3)Exit ");

Main:
    printf("\n\n\t\t\t\t\tEnter Your Choice : ");
    fflush(stdin);
    scanf("%d", &F_or_C);
    if (F_or_C > 3 || F_or_C < 1)
    {
        printf("\n\t\t\t\t\tInvalid Choice.Enter Again!");
        goto Main;
    }
    if (F_or_C == 3)
    {
        printf("\n\t\t\t\t\tThank You For Playing The Game.");
        exit(1);
    }
}

void Draw()
{
    Title();
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t| %c | %c | %c |\n", Array[0], Array[1], Array[2]);
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t| %c | %c | %c |\n", Array[3], Array[4], Array[5]);
    printf("\t\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t\t| %c | %c | %c |\n", Array[6], Array[7], Array[8]);
    printf("\t\t\t\t\t\t-------------\n");
}

void InputSymbol()
{
    if (F_or_C == 1)// To play with friend
    {
        printf("\n\n\t\t\t\t    Player 1 Sysmbol : X");
        printf("\n\t\t\t\t    Player 2 Sysmbol : O");
    }
    else if (F_or_C == 2)// to play with computer
    {
        printf("\n\n\t\t\t\t    Your Sysmbol : X");
        printf("\n\t\t\t\t    Computer Sysmbol : O");
    }
}

void Start()
{
    if (F_or_C == 1)
    {
    P1:
        printf("\n\n\t\t\t\t    Who Will Play First : Player 1 or Player 2\n\t\t\t\t    Player [1/2] : ");
        fflush(stdin);
        scanf("%d", &player);
        if (player < 1 || player > 2)
        {
            printf("\n\n\t\t\t\t    Invalid Entry. Try Again!");
            goto P1;
        }
    }
    else if (F_or_C == 2)
    {
    P2:
        printf("\n\n\t\t\t\t    Who Will Play First : You(1) or Computer(2)\n\t\t\t\t    Enter [1/2]  : ");
        fflush(stdin);
        scanf("%d", &player);
        if (player < 1 || player > 2)
        {
            printf("\n\n\t\t\t\t    Invalid Entry. Try Again!");
            goto P2;
        }
    }
}

void Player1()
{
    InputSymbol();

Player1:
    printf("\n\n\t\t\t\t\tEnter Your Choice (Plyaer1) : ");
    fflush(stdin);
    scanf("%d", &number);
    if (number > 9 || number < 1)
    {
        printf("\n\t\t\t\t\tThe Number Must Be Between  1 To 9\n\t\t\t\t\tEnter Again!\n");
        goto Player1;
    }
    for (int j = 0; j <= i; j++)
    {
        if (number == chk[j])
        {
            printf("The Number Entered Is Used Earlier Or Its Invalid Entry.\nTry Angain!\n");
            goto Player1;
        }
        else if (j == i)
        {
            chk[i] = number;
        }
    }
    Array[number - 1] = 'X';

    i++;
}
void Player2()
{
    InputSymbol();

Player2:
    printf("\n\n\t\t\t\t\tEnter Your Choice (Player 2) : ");
    fflush(stdin);
    scanf("%d", &number);
    if (number > 9 || number < 1)
    {
        printf("\n\t\t\t\t\tThe Number Must Be Between  1 To 9\n\t\t\t\t\tEnter Again!\n");
        goto Player2;
    }
    for (int j = 0; j <= i; j++)
    {
        if (number == chk[j])
        {
            printf("The Number Entered Is Used Earlier Or Its Invalid Entry.\nTry Angain!\n");
            goto Player2;
        }
        else if (j == i)
        {
            chk[i] = number;
        }
    }
    Array[number - 1] = 'O';

    i++;
}

void Computer()
{
    InputSymbol();

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
        else if (j == i)
        {
            chk[i] = Computer;
        }
    }

    Array[Computer - 1] = 'O';

    i++;
}

int Logic()
{
    if (
        Array[0] == 'X' && Array[1] == 'X' && Array[2] == 'X' ||
        Array[3] == 'X' && Array[4] == 'X' && Array[5] == 'X' ||
        Array[6] == 'X' && Array[7] == 'X' && Array[8] == 'X' ||
        Array[0] == 'X' && Array[3] == 'X' && Array[6] == 'X' ||
        Array[1] == 'X' && Array[4] == 'X' && Array[7] == 'X' ||
        Array[2] == 'X' && Array[5] == 'X' && Array[8] == 'X' ||
        Array[0] == 'X' && Array[4] == 'X' && Array[8] == 'X' ||
        Array[2] == 'X' && Array[4] == 'X' && Array[6] == 'X')
    {

        return 1; //player 1
    }

    else if (
        Array[0] == 'O' && Array[1] == 'O' && Array[2] == 'O' ||
        Array[3] == 'O' && Array[4] == 'O' && Array[5] == 'O' ||
        Array[6] == 'O' && Array[7] == 'O' && Array[8] == 'O' ||
        Array[0] == 'O' && Array[3] == 'O' && Array[6] == 'O' ||
        Array[1] == 'O' && Array[4] == 'O' && Array[7] == 'O' ||
        Array[2] == 'O' && Array[5] == 'O' && Array[8] == 'O' ||
        Array[0] == 'O' && Array[4] == 'O' && Array[8] == 'O' ||
        Array[2] == 'O' && Array[4] == 'O' && Array[6] == 'O')
    {

        return -1; //player 2 or Computer
    }
    else if (i == 9)
    {

        return 0;
    }
    else
    {
        return 2;
    }
}

int Check()
{
    while (Logic() == 2)
    {
        system("cls");
        Draw();
        if (F_or_C == 1)
        {

            if (player == 1)
            {
                Player1();
                if (Logic() == 1)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tPlayer 1 Won");
                    break;
                }
                system("cls");
                Draw();
                if (Logic() == 0)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tMatch Draw's");
                    break;
                }
                Player2();
                if (Logic() == -1)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tPLayer 2 Won");
                    break;
                }
            }
            else if (player == 2)
            {
                Player2();
                if (Logic() == -1)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tPlayer 2 Won");
                    break;
                }
                system("cls");
                Draw();
                if (Logic() == 0)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tMatch Draw's");
                    break;
                }
                Player1();
                if (Logic() == 1)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tPlayer 1 Won");
                    break;
                }
            }
        }
        else if (F_or_C == 2)
        {

            if (player == 1)
            {
                Player1();
                if (Logic() == 1)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tYou Won");
                    break;
                }
                system("cls");
                Draw();
                if (Logic() == 0)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tMatch Draw's");
                    break;
                }
                Computer();
                if (Logic() == -1)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tComputer Wins");
                    break;
                }
            }
            else if (player == 2)
            {
                Computer();
                if (Logic() == -1)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tComputer Wins");
                    break;
                }
                system("cls");
                Draw();
                if (Logic() == 0)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tMatch Draw's");
                    break;
                }
                Player1();
                if (Logic() == 1)
                {
                    system("cls");
                    Draw();
                    printf("\n\t\t\t\t\t\tYou Won");
                    break;
                }
            }
        }
    }
}