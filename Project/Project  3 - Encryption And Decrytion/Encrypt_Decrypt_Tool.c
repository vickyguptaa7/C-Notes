#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include<windows.h>


void Main_Menu();  // Main Menu Page
void Encryption(); // Encryption  
void Decryption(); // Decryption
void Title();

char *Shift(char *str, int shft);             // Function To Shift The String
char *Reverse(char *str);                     // Fumction To Reverse The String
char *Char_Manipulation(char *str, int shft); //Function For Manipulating Of The Characters

/*____________________________________________main_______________________________________________*/

int main()
{
    Main_Menu();
    return 0;
}

/*_________________________________________Main_Menu_____________________________________________*/

void Main_Menu()
{
    system("cls");
    printf("\n\t\t\t\t*****************************");
    printf("\n\t\t\t\t       ! WELCOME TO !");
    printf("\n\t\t\t\t*****************************");
    printf("\n\n\t\t          ------------------------------------------");
    printf("\n\t\t          | Message Encryption-Decryption Software |");
    printf("\n\t\t          ------------------------------------------");
    printf("\n\t\t_________________________________________________________________");
    printf("\n\n\t\t\t\t\t1) Encrytion ");
    printf("\n\t\t\t\t\t2) Decrytion ");
    printf("\n\t\t\t\t\t3) Exit");

    int n;
    Repeat:
    printf("\n\t\t\t\t\tEnter Your Choice :");
    scanf("%d",&n);
    
    switch(n)
    {
        case 1:  printf("\n\t\t\t\t\tPress Any Key To Continue....... ");
                 getch();
                 system("cls");
                 Encryption();
                 break;
        case 2:  printf("\n\t\t\t\t\tPress Any Key To Continue....... ");
                 getch();
                 system("cls");
                 Decryption();
                 break;
        case 3:  exit(1);
                 break;
        
        default: printf("\n\n\t\t\t\t\tInvalid Entry. Try Again!\n");
                 goto Repeat;
    }

}

/*_________________________________________Encryption_____________________________________________*/


void Encryption()
{
    Title();
    printf("\n\n\t\t\t\t      -------------------");
    printf("\n\t\t\t\t      | Encryption_Page |");
    printf("\n\t\t\t\t      -------------------");
    printf("\n\t\t_________________________________________________________________");
 char Message[200];
    fflush(stdin);   
    printf("\n\n\t\tType Your Message Here : "); 
    gets(Message);

    srand(time(0));           
    
    int shft = rand() % 10 - 5; 

    Shift(Message, shft);
   
    Reverse(Message); 
    
    Char_Manipulation(Message, shft); 
    printf("\n\t\tYour Encrypted Message : %s", Message);

    char shft_code; 
    switch (shft)
    {
    case -5:
        shft_code = 'a';
        break;
    case -4:
        shft_code = 'b';
        break;
    case -3:
        shft_code = 'c';
        break;
    case -2:
        shft_code = 'd';
        break;
    case -1:
        shft_code = 'e';
        break;
    case 0:
        shft_code = 'f';
        break;
    case 1:
        shft_code = 'g';
        break;
    case 2:
        shft_code = 'h';
        break;
    case 3:
        shft_code = 'i';
        break;
    case 4:
        shft_code = 'j';
        break;
    }

    printf("%c",shft_code);

    
    char ans;
    Repeat:
    fflush(stdin);
    printf("\n\n\t\tDo You Want To Encrypt More Message [Y/N] : ");
    fflush(stdin);
    scanf("%c",&ans);
    if(toupper(ans)=='Y')
    {
        system("cls");
        Encryption();
    }
    else if(toupper(ans)=='N')
    {
        system("cls");
        Main_Menu();
    }
    else
    {
        printf("\n\n\t\tInvalid Entry. Try Aganin!");
        goto Repeat;
    }
}

/*_________________________________________Decryption_____________________________________________*/

void Decryption()
{
    Title();
    printf("\n\n\t\t\t\t      -------------------");
    printf("\n\t\t\t\t      | Decryption_Page |");
    printf("\n\t\t\t\t      -------------------");
    printf("\n\t\t_________________________________________________________________");
    fflush(stdin);
    char Encrypt[200];
    printf("\n\n\t\tEnter Your Encrypted Message : "); 
    gets(Encrypt);

    int l = strlen(Encrypt);

    char shft_code;

    shft_code = Encrypt[l - 1]; 

    int shft;
    switch (shft_code)
    {
    case 'a':
        shft = -5;
        break;
    case 'b':
        shft = -4;
        break;
    case 'c':
        shft = -3;
        break;
    case 'd':
        shft = -2;
        break;
    case 'e':
        shft = -1;
        break;
    case 'f':
        shft = 0;
        break;
    case 'g':
        shft = 1;
        break;
    case 'h':
        shft = 2;
        break;
    case 'i':
        shft = 3;
        break;
    case 'j':
        shft = 4;
        break;
    }

    shft = -(shft); 
    int i = 0;
    char Message[200];
    for (i; i < l - 1; i++) 
    {
        Message[i] = Encrypt[i];
    }
    Message[i++] = '\0';

    Reverse(Message); 

    Shift(Message, shft); 

    Char_Manipulation(Message, shft); 

    printf("\n\t\tYour Message : %s", Message);

    char ans;
    Repeat:    
    printf("\n\n\t\tDo You Want To Encrypt More Message [Y/N] : ");
    fflush(stdin);
    scanf("%c",&ans);
    if(toupper(ans)=='Y')
    {
        system("cls");
        Decryption();
    }
    else if(toupper(ans)=='N')
    {
        system("cls");
        Main_Menu();
    }
    else
    {
        printf("\n\n\t\tInvalid Entry. Try Aganin!");
        goto Repeat;
    }

}

/*_________________________________________Shift_____________________________________________*/

char *Shift(char *str, int shft)
{
    int l = strlen(str);

    if (shft < 0)
    {

        for (int i = 0; i < -(shft); i++)
        {
            char temp = str[0];
            for (int j = 0; j < l; j++)
            {
                if (j != l - 1)
                {
                    str[j] = str[j + 1];
                }
                else
                {
                    str[j] = temp;
                }
            }
        }
    }

    else
    {

        for (int i = 0; i < shft; i++)
        {
            char temp = str[l - 1];
            for (int j = 0; j < l; j++)
            {
                if (j != l - 1)
                {
                    str[l - 1 - j] = str[l - 2 - j];
                }
                else
                {
                    str[0] = temp;
                }
            }
        }
    }

    return str;
}

/*_________________________________________Reverse_____________________________________________*/

char *Reverse(char *str)
{
    int l = strlen(str) - 1;
    char temp;
    for (int i = 0; i < l / 2; i++)
    {
        temp = str[i];
        str[i] = str[l - i];
        str[l - i] = temp;
    }
    return str;
}

/*_________________________________________Char_Mainipulation_____________________________________________*/

char *Char_Manipulation(char *str, int shft)
{

    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] + shft;
        i++;
    }
    return str;
}

/*_________________________________________Title_____________________________________________*/

void Title()
{
    printf("\n\t\t*****************************************************************");
    printf("\n\t\t            ! Message Encryption-Decryption Software !");
    printf("\n\t\t*****************************************************************");
}
