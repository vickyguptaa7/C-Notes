#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int Width = 100, Hight = 30;
int FruitX, FruitY, Score, x, y, GameOver, flag;
int TailX[100], TailY[100];
int CountTail = 0;

void Draw();
void Initial();
void Input();
void Logic();

int main()
{

    Initial();
    while (!GameOver)
    {
        Draw();
        Input();
        Logic();
        for(int p=0;p<10000;p++)
        {
            for(int q=0;q<1000;q++);
        }
    }

    return 0;
}

void Initial()
{
    srand(time(0));
    x = Width / 2;
    y = Hight / 2;

X:
    FruitX = rand() % 100;
    if (FruitX == 0)
    {
        goto X;
    }

Y:
    FruitY = rand() % 30;
    if (FruitY == 0)
    {
        goto Y;
    }

    GameOver = 0;
}

void Draw()
{
    system("cls");
    int k, i, j;
    for (i = 0; i < Hight; i++)
    {
        for (j = 0; j < Width; j++)
        {
            if (i == 0 || i == Hight - 1 || j == 0 || j == Width - 1)
            {
                printf("*");
            }
            else
            {
                if (i == y && j == x)
                {
                    printf("+");
                }
                else if (i == FruitY && j == FruitX)
                {
                    printf("@");
                }
                else
                {
                    int ch = 1;
                    for (k = 0; k < CountTail; k++)
                    {
                        if (j == TailX[k] && i == TailY[k])
                        {

                            printf("o");
                            ch = 0;
                        }
                    }

                    if (ch)
                        
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
}

void Input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'w':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'a':
            flag = 3;
            break;
        case 'd':
            flag = 4;
            break;
        case 'x':
            GameOver = 1;
            break;
        }
    }
}

void Logic()
{
    int i;
    int prevX = TailX[0];
    int prevY = TailY[0];
    int prev2X, prev2Y;
    TailX[0] = x;
    TailY[0] = y;

    for (i = 1; i <= CountTail; i++)
    {
        prev2X = TailX[i];
        prev2Y = TailY[i];
        TailX[i] = prevX;
        TailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;
    default:
        break;
    }
    if (x < 0 || x > Width || y < 0 || y > Hight)
    {
        GameOver = 1;
    }

    if (x == FruitX && y == FruitY)
    {

    x:
        FruitX = rand() % 100;
        if (FruitX == 0)
        {
            goto x;
        }

    y:
        FruitY = rand() % 30;
        if (FruitY == 0)
        {
            goto y;
        }

        Score += 10;
        CountTail++;
    }
}