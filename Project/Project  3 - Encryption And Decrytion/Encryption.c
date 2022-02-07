#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

char *Encryption(char *str, int shft); //Function For Encryption Of The String

char *Reverse(char *str); // Fumction To Reverse The String

char *Shift(char *str, int shft); // Function To Shift The String

int main()
{
    system("cls");
    printf("\n\t\t*****************************************************************");
    printf("\n\t\t            ! Message Encryption-Decryption System !");
    printf("\n\t\t*****************************************************************");
    
    printf("\n\n\t\t\t\t      -------------------");
    printf("\n\t\t\t\t      | Encryption_Page |");
    printf("\n\t\t\t\t      -------------------");
    printf("\n\t\t_________________________________________________________________");


    char Message[200];
    printf("\n\t\tType Your Message Here : "); // Message Taken As Input From The User
    gets(Message);

    srand(time(0));             // Function Used To Generate Random Number
    
    int shft = rand() % 10 - 5; // Number Generated Is Between -5 To 4 And Stored In Shift

    Shift(Message, shft); // Call To Shift Function To Shift The String
   
    Reverse(Message); // Call To Reverse Function To Reverse The String
    
    Encryption(Message, shft); // Call To Encrypt Function To Encrypt The String
    printf("Your Encrypted Message : %s", Message);

    char shft_code; // The Shift Is Converted To An Alphabet
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

    printf("%c",shft_code);// Now Concatenate The Encrypted Message With The shift_code which 
                        // will help in decoding the String
    return 0;
}

char *Encryption(char *str, int shft) // Encrypt Function Definition
{

    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] + shft;
        i++;
    }
    return str;
}

char *Reverse(char *str) // Reverse Function Definition
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

char *Shift(char *str, int shft) // Shift Function Definition
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
