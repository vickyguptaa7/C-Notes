#include<stdio.h>
#include<windows.h>
int main (){
    system("cls");
    COORD c;
c.X=40;
c.Y=20;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

printf("BOSS");


    return 0;
}