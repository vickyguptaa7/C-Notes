#include <windows.h>
#include <stdio.h>
void gotoxy(int x, int y); // Will Work As gotoxy Function

int main()
{
    int x = 30, y = 10;  // here x and y are arguements having the coordinates of xy plane

    char ch;     
    gotoxy(x, y);
    printf("Coding With Vicky");  // This Name Will Move When Pressing Keystorke

    while (1)               // Infinite Loop
    {
        
        switch (getch())        // Used For Input getch() From User
        {
        case 'a':       
            x--;                  // Moves Left
            break;

        case 'd':
            x++;                 // Moves Right
            break;

        case 'w':
            y--;                 // Moves Up
            break;

        case 's':
            y++;                 // Moves Down
            break;

        case 27:
            exit(0);            // When Escape Button Is Pressed This Will End The 
        }                       // This Program
        system("cls");          // Clear The Screen after Moving The Name
        gotoxy(x, y);           // New Coordinates After Input From User 
        printf("Coding With Vicky"); // This Name Will Be Printed at The New xy plane
    }

    return 0;
}

void gotoxy(int x, int y)   // Its A Function Which Is Used For Defining The Coordinates
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

