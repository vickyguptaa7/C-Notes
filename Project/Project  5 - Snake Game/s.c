#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int Height = 30, Width = 100;
int x, y, FruitX, FruitY;
int Score = 0, GameOver = 0, Count = 0;
int flag;
int TailX[100],TailY[100];

void Draw();
void Setup();
void Input();
void Logic();

int main()
{

    Setup();
    while (!GameOver)
    {
        Draw();
        Input();
        Logic();
    }

    return 0;
}

void Draw()
{
    system("cls");
    int i, j,k;

    for (i = 0; i < Height; i++)
    {
        for (j = 0; j < Width; j++)
        {
            if (i == 0 || j == 0 || i == Height - 1 || j == Width - 1)
            {
                printf("*");
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("O");
                }
                else if (i == FruitX && j == FruitY)
                {
                    printf("F");
                }
                else
                {
                    for(k=0;k<Count;k++)
                    {
                        if(i==TailX[k]&&j==TailY[k]);
                        printf("o");
                    }

                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

void Setup()
{
    y = Height / 2;
    x = Width / 2;

    srand(time(0));

X:
    FruitX = rand() % 30;
    if (FruitX == 0)
        goto X;

Y:
    FruitY = rand() % 30;
    if (FruitY == 0)
        goto Y;
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
            exit(1);
            break;
        }
    }
}

void Logic()
{
    int i=0;
    int prevx,prevy,prev2x,prev2y;
    prevx=TailX[0];
    prevy=TailY[0];
    TailX[0]=x;
    TailY[0]=y;
    
    for(i=1;i<=Count;i++)
    {
        prev2x=TailX[i];
        prev2y=TailY[i];
        TailX[i]=prevx;
        TailY[i]=prevy;
    }
    switch (flag)
    {
    case 1:
        x--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y--;
        break;
    case 4:
        y++;
        break;
    }
    if(x==0||x==Height||y==0||y==Width)
    {
        GameOver=1;
    }
    if(x==FruitX&&y==FruitY)
    {
    x:
    FruitX = rand() % 30;
    if (FruitX == 0)
        goto x;

    y:
    FruitY = rand() % 30;
    if (FruitY == 0)
        goto y;

        GameOver=0;
        Score+=10;
        Count++;
    }
}