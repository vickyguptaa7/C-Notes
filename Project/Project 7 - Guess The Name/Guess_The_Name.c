#include <stdio.h>
#include <string.h>
#include <conio.h>
#include<stdlib.h> // exit ();

char Input[30], Guess[30], Hint[50];
int chance=5,n;

void Title();
void First_Page();
void Main_Menu();
void Game_Page();
void Logic();


int main()
{
    First_Page();
    return 0;
}

void Title()
{
    printf("\n\n\t\t\t\t\t      ******************");
    printf("\n\t\t\t\t\t      ! Guess The Name !    ");
    printf("\n\t\t\t\t\t      ******************\n");
    printf("\t\t\t\t_______________________________________________\n");
}

void First_Page()
{
    Title();
    printf("\n\t\t\t\t  1)Play The Game");
    printf("\n\t\t\t\t  2)Exit");
    
    int number;
    First:
    printf("\n\n\t\t\t\t  Enter Your Choice : ");
    fflush(stdin);
    scanf("%d",&number);

    if(number==1)
    {
        system("cls");
        Main_Menu();
    }
    else if(number==2)
    {
        system("cls");
        exit(1);
    }
    else
    {
        printf("\n\t\t\t\t  Invalid Entry.Try Again!");
        goto First;
    }
    

}

void Main_Menu()
{
    Title();
    printf("\n\t\t\t\tEnter The Name Which Want To Guess : ");
    fflush(stdin);
    scanf("%s", Input);
    printf("\n\t\t\t\tHint Related To Name : ");
    fflush(stdin);
    scanf("%s", Hint);
    printf("\n\t\t\t\tPress Any Key To Start The Game...");
    getch();
    system("cls");
    Game_Page();
}

void Logic()
{
    int i;
    for(i=0;i<strlen(Input);i++)
    {
        if(Input[i]=='A'||Input[i]=='a'||Input[i]=='E'||Input[i]=='e'||Input[i]=='I'||
        Input[i]=='i'||Input[i]=='O'||Input[i]=='o'||Input[i]=='U'||Input[i]=='u')
        {
            Guess[i]=Input[i];
        }
        else
        {
           switch(n)
           {
               case 1: Guess[i]='1';
                       break;
               case 2: Guess[i]='2';
                       break;
               case 3: Guess[i]='3';
                       break;
               case 4: Guess[i]='4';
                       break;
               case 5: Guess[i]='5';
                       break;
               case 6: Guess[i]='6';
                       break;
               case 7: Guess[i]='7';
                       break;
               case 8: Guess[i]='8';
                       break;
               case 9: Guess[i]='9';
                       break;
               case 10: Guess[i]='10';
                       break;
               case 11: Guess[i]='11';
                       break;
               case 12: Guess[i]='12';
                       break;
               case 13: Guess[i]='13';
                       break;
               case 14: Guess[i]='14';
                       break;
               case 15: Guess[i]="15";
                       break;
                       
           }
           n++;
        }
        
    }
    Guess[i++]='\0';
  

}

void Game_Page()
{
 Title();
 Logic();
 printf("\n\t\t\t\tHint Related To Name : %s",Hint);
 printf("\n\t\t\t\t       %s",Guess);


}

