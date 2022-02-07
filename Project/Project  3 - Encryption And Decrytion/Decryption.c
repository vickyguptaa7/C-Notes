#include <stdio.h>
#include <string.h>

char *Shift(char *str, int shft);   // Function To Shift The String
char *Reverse(char *str);           // Fumction To Reverse The String
char *Decrypt(char *str, int shft); //Function For Decrypt Of The String

int main()
{
    system("cls");
    printf("\n\t\t*****************************************************************");
    printf("\n\t\t            ! Message Encryption-Decryption System !");
    printf("\n\t\t*****************************************************************");

    printf("\n\n\t\t\t\t      -------------------");
    printf("\n\t\t\t\t      | Decryption_Page |");
    printf("\n\t\t\t\t      -------------------");
    printf("\n\t\t_________________________________________________________________");

    char Encrypt[200];
    printf("\n\t\tEnter Your Encrypted Message : "); // Encrypted Message Taken As Input From The User
    gets(Encrypt);

    int l = strlen(Encrypt); // l Stores The Length Of The Encrypted Message

    char shft_code;

    shft_code = Encrypt[l - 1]; // The Encoded Shift Is Now Stored In sfht_code

    int shft;
    switch (shft_code) //  Used To Decode The Shift
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

    shft = -(shft); // Now We have To Reverse The Shift
    int i = 0;
    char Message[200];
    for (i; i < l - 1; i++) // The Encrypt Message Without shift Is Stored In Message
    {
        Message[i] = Encrypt[i];
    }
    Message[i++] = '\0';

    Reverse(Message); // Function Call To Reverse The String

    Shift(Message, shft); // Function Call To Shift The String

    Decrypt(Message, shft); //Function Call To Decrypt The String

    printf("Your Message : %s", Message);

    return 0;
}

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

char *Decrypt(char *str, int shft)
{

    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] + shft;
        i++;
    }
    return str;
}