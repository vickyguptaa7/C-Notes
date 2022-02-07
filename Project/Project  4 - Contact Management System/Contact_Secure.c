#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#define True 1
#define False 0

void gotoxy(int x, int y);
void First_Page();
void Title();
void Login_Page();
void SignUp_Page();
void Main_Menu();
void Add();
void Display();
void Search();
void Edit();
void Remove();
void Delete_All();

struct User_Account
{
    char First_Name[20];
    char Last_Name[20];
    char Username[25];
    char Password[20];
    char Confirm_Password[20];
    char Gender;
    int Age;
    char Contact_Number[10];
};

struct Contact_Detail
{
    char Name[30];
    char Contact[10];
    char Birthday[10];
    char Email_Address[30];
    char Address[30];
};

int main()
{

    Main_Menu();

    return 0;
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

/*________________________________________First Page_________________________________________*/

void First_Page()
{

    printf("\n\t\t*********************************************************************");
    printf("\n\t\t\t\t! Welcome To Secure Contact System !");
    printf("\n\t\t*********************************************************************");
    printf("\n\n\t\t\t\t 1) Login ");
    printf("\n\t\t\t\t 2) SignUp ");
    printf("\n\n\t\t\t\t Enter Your Choice: ");
    int number;
Repeat:
    scanf("%d", &number);
    switch (number)
    {
    case 1:

        printf("\n\t\t\t\t Press Any Key To Continue....... ");
        getch();
        system("cls");
        Login_Page();
        break;

    case 2:

        printf("\n\t\t\t\t Press Any Key To Continue....... ");
        getch();
        system("cls");
        SignUp_Page();
        break;

    default:

        printf("\n\n\t\t\t\t Enter A Valid Number !\n");
        printf("\n\t\t\t\t Enter Your Choice: ");
        goto Repeat;
    }
}

/*________________________________________Title_________________________________________*/

void Title()
{
    printf("\n\t\t*****************************************************************");
    printf("\n\t\t                    ! Secure Contact System !");
    printf("\n\t\t*****************************************************************");
}

/*________________________________________Login Page_________________________________________*/

void Login_Page()
{
    Title();
    printf("\n\n\t\t\t\t      --------------");
    printf("\n\t\t\t\t      | Login Page |");
    printf("\n\t\t\t\t      --------------");
    printf("\n\t\t_________________________________________________________________");

    char username[25], password[20];
    struct User_Account a1;

    int Valid = False;
Login:

    printf("\n\n\t\t Enter UserName : ");
    scanf("%s", username);
    printf("\n\t\t Enter Password : ");
    scanf("%s", password);

    FILE *account;
    account = fopen("Account_info.txt", "rb");
    while (fread(&a1, sizeof(a1), 1, account))
    {
        if (strcmp(a1.Username, username) == 0 && strcmp(a1.Password, password) == 0)
        {
            Valid = True;
            printf("\n\t\t Login Successfully...");
            printf("\n\t\t Press Any Key To Continue...");
            getch();
            system("cls");
            Main_Menu();
        }
    }
    if (Valid == False)
    {
        printf("\n\n\t\t Username Or Password Is/Are Incorrect\n\t\t Enter Again!");
        goto Login;
    }
}
/*______________________________________SignUp Page____________________________________*/

void SignUp_Page()
{
    Title();
    printf("\n\n\t\t\t\t      --------------");
    printf("\n\t\t\t\t      | SignUp Page |");
    printf("\n\t\t\t\t      --------------");
    printf("\n\t\t_________________________________________________________________");

    struct User_Account A1;

    fflush(stdin);

    /*-------------------------------------First_Name--------------------------------------*/

First_Name:
    printf("\n\n\t\tFirst Name : ");
    gets(A1.First_Name);

    A1.First_Name[0] = toupper(A1.First_Name[0]);

    if (strlen(A1.First_Name) > 20 || strlen(A1.First_Name) < 3)
    {
        printf("\n\t\tInvalid | The Max Range For First Name Is 20 and Min Range Is 3. Enter Again!\n");
        goto First_Name;
    }
    else
    {
        for (int i = 0; i < strlen(A1.First_Name); i++)
        {
            if (isalpha(A1.First_Name[i]) == False)
            {
                printf("\n\t\tInvalid | Do Not Enter Any Number's In First Name. Enter Again! \n");
                goto First_Name;
            }
        }
    }

    /*--------------------------------------Last_Name--------------------------------------*/

Last_Name:

    printf("\n\t\tLast Name : ");
    gets(A1.Last_Name);

    A1.Last_Name[0] = toupper(A1.Last_Name[0]);

    if (strlen(A1.Last_Name) > 20 || strlen(A1.Last_Name) < 3)
    {
        printf("\n\t\tInvalid | The Max Range For Last Name Is 20 and Min Range Is 4. Enter Again!\n");
        goto Last_Name;
    }
    else
    {
        for (int i = 0; i < strlen(A1.Last_Name); i++)
        {
            if (isalpha(A1.Last_Name[i]) == False)
            {
                printf("\n\t\tInvalid | Do Not Enter Any Number's In Last Name. Enter Again!\n");
                goto Last_Name;
            }
        }
    }

    /*----------------------------------Username_Name---------------------------------*/

Username:

    printf("\n\t\tCreate A Username : ");
    gets(A1.Username);

    if (strlen(A1.Username) > 25 || strlen(A1.Username) < 5)
    {
        printf("\n\t\tInvalid | The Max Range For Username Is 25 and Min Range Is 5. Enter Again!\n");
        goto Username;
    }

    /*--------------------------------------Password-----------------------------------*/

Password:

    printf("\n\t\tCreate A Password : ");
    gets(A1.Password);

    if (strlen(A1.Password) > 25 || strlen(A1.Password) < 3)
    {
        printf("\n\t\tInvalid | The Max Range For Password Is 25 and Min Range Is 4. Enter Again!\n");
        goto Password;
    }

    /*---------------------------------Confirm_Password---------------------------------*/

Confirm_Password:

    printf("\n\t\tConfirm Password : ");
    gets(A1.Confirm_Password);

    if (strcmp(A1.Confirm_Password, A1.Password) != 0)
    {
        printf("\n\t\tInvalid | The Password Didn't Match :) \n\t\tEnter Again!\n");

        goto Confirm_Password;
    }

    /*-------------------------------------Contact_Number------------------------------------------*/

Contact_Number:

    printf("\n\t\tContact Number : ");
    gets(A1.Contact_Number);

    if (strlen(A1.Contact_Number) != 10)
    {
        printf("\n\t\tInvalid | Contact Number Must Contains 10 Digits. Enter Again!\n");
        goto Contact_Number;
    }

    /*-------------------------------------Age------------------------------------------*/

Age:

    printf("\n\t\tAge : ");
    scanf("%d", &A1.Age);

    if (A1.Age < 12 || A1.Age > 99)
    {
        printf("\n\t\tInvalid | The Max Range For Age Is 99 And Min Range Is 12. Enter Again! \n");
        goto Age;
    }

    /*---------------------------------------Gender--------------------------------------*/

    int Valid;

Gender:

    fflush(stdin);

    printf("\n\t\tGender [M/F] : ");
    scanf("%c", &A1.Gender);

    if (toupper(A1.Gender) == 'M' || toupper(A1.Gender) == 'F')
    {
        Valid = True;
    }
    else
    {
        Valid = False;
    }

    if (Valid == 0)
    {
        goto Gender;
    }

    /*----------------------------------------File_Handling----------------------------------------*/

    FILE *Accounts;
    Accounts = fopen("Account_info.txt", "ab");
    fwrite(&A1, sizeof(A1), 1, Accounts);
    fclose(Accounts);

    printf("\n\t\t Your Account Has Been Created Successfully !");
    printf("\n\t\t Press Any Key To Continue......");
    system("cls");
    First_Page();
}

/*_______________________________________Main_Menu______________________________________*/

void Main_Menu()
{
    Title();
    printf("\n\n\t\t\t\t      --------------");
    printf("\n\t\t\t\t      | Main Menu |");
    printf("\n\t\t\t\t      --------------");
    printf("\n\t\t_________________________________________________________________");

    printf("\n\n\t\t1) Add Contact ");
    printf("\n\t\t2) Display Contact");
    printf("\n\t\t3) Search Contact");
    printf("\n\t\t4) Edit Contact");
    printf("\n\t\t5) Remove Contact");
    printf("\n\t\t6) Delete All Contact");
    printf("\n\t\t7) Exit");
    printf("\n\n\t\tEnter Your Choice: ");

    int number;

Repeat:

    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("\n\n\t\tPress Any Key To Continue...");
        getch();
        system("cls");
        Add();
        break;

    case 2:
        printf("\n\n\t\tPress Any Key To Continue...");
        getch();
        system("cls");
        Display();
        break;

    case 3:
        printf("\n\n\t\tPress Any Key To Continue...");
        getch();
        system("cls");
        Search();
        break;

    case 4:
        printf("\n\n\t\tPress Any Key To Continue...");
        getch();
        system("cls");
        Edit();
        break;

    case 5:
        printf("\n\n\t\tPress Any Key To Continue...");
        getch();
        system("cls");
        Remove();
        break;

    case 6:
        printf("\n\n\t\tPress Any Key To Continue...");
        getch();
        system("cls");
        Delete_All();
        break;

    case 7:
        printf("\n\n\t\tPress Any Key To Continue...");
        getch();
        system("cls");
        exit(1);
        break;

    default:
        printf("\n\n\t\t\t\t Enter A Valid Number !\n");
        printf("\n\t\t\t\t Enter Your Choice: ");
        goto Repeat;
    }
}

/*___________________________________Add Contacts________________________________________*/

void Add()
{
    Title();
    printf("\n\n\t\t\t\t      ----------------");
    printf("\n\t\t\t\t      | Add Contacts |");
    printf("\n\t\t\t\t      ----------------");
    printf("\n\t\t_________________________________________________________________");

    struct Contact_Detail C1,*cd;

    cd=&C1;

    fflush(stdin);

    /*--------------------------------------Name-----------------------------------------------*/

Name:

    printf("\n\n\t\tName : ");
    gets((*cd).Name);

    if (strlen((*cd).Name) > 30 || strlen((*cd).Name) < 4)
    {
        printf("\n\t\tInvalid | The Max Range For Name Is 30 and Min Range Is 4. Enter Again!\n");
        goto Name;
    }
    else
    {
        for (int i = 0; i < strlen((*cd).Name); i++)
        {

            if (isalpha((*cd).Name[i]) == False)
            {
                printf("\n\t\tInvalid | Number Are Not Allowed In Name. Enter Again!\n");
                goto Name;
            }
        }
    }

    /*--------------------------------------Contact--------------------------------------------*/

Contact:

    printf("\n\t\tContact Number : ");
    gets((*cd).Contact);

    if (strlen((*cd).Contact) != 10)
    {
        printf("\n\t\tInvalid | The Contact Number Must Contains 10 Digit. Enter Again!\n");
        goto Contact;
    }

    /*--------------------------------------Birthday-------------------------------------------*/

Birthday:

    printf("\n\t\tBIrthday DD/MM/YYYY : ");
    gets((*cd).Birthday);

    if (strlen((*cd).Birthday) != 10)
    {
        printf("\n\t\tInvalid | The Birthday Is Incorrect. Enter Again!\n");
        goto Birthday;
    }

    /*-------------------------------------------Email---------------------------------------------*/

Email:

    printf("\n\t\tEmail : ");
    gets((*cd).Email_Address);

    if (strlen((*cd).Email_Address) > 30 || strlen((*cd).Email_Address) < 4)
    {
        printf("\n\t\tInvalid | The Max Range For Email Is 30 and Min Range Is 4. Enter Again!\n");
        goto Email;
    }

    /*-------------------------------------------Address---------------------------------------------*/

Address:

    printf("\n\t\tAddress : ");
    gets((*cd).Address);

    if (strlen((*cd).Address) > 30 || strlen((*cd).Address) < 4)
    {
        printf("\n\t\tInvalid | The Max Range For Address Is 30 and Min Range Is 4. Enter Again!\n");
        goto Address;
    }

    /*----------------------------------------File_Handling----------------------------------------*/

    FILE *Contacts;
    Contacts = fopen("Contact_List.txt", "ab");
    fwrite(&C1, sizeof(C1), 1, Contacts);
    fclose(Contacts);

    printf("\n\t\t Contacts Added Successfully !");
    printf("\n\t\t Press Any Key To Continue......");
    system("cls");
    printf("\n\t\t%s   %s   %s   %s  %s ", (*cd).Name, (*cd).Contact, (*cd).Birthday, (*cd).Email_Address, (*cd).Address);

    getch();
    Main_Menu();
}

void Display()
{
    system("cls");
    Title();

    printf("\n\n\t\t\t\t      --------------------");
    printf("\n\t\t\t\t      | Display Contacts |");
    printf("\n\t\t\t\t      --------------------");
    printf("\n\t\t_________________________________________________________________");

    printf("\n\t Sno      Name       Contact        Birthday        Email         Address");
    printf("\n\t--------------------------------------------------------------------------");
    struct Contact_Detail c1;

    FILE *Contacts;

    Contacts = fopen("Contact_List.txt", "rb");

    if (Contacts == NULL)
    {
        printf("\n\t\tFile Is Missing.");
        getch();
        exit(1);
    }

    while (fread(&c1, sizeof(c1), 1, Contacts))
    {
        printf("\n\t\t%s   %s   %s   %s  %s ", c1.Name, c1.Contact, c1.Birthday, c1.Email_Address, c1.Address);
    }
}

void Search()
{
    system("cls");
    Title();

    printf("\n\n\t\t\t\t      --------------------");
    printf("\n\t\t\t\t      | Display Contacts |");
    printf("\n\t\t\t\t      --------------------");
    printf("\n\t\t_________________________________________________________________");
    struct User_Account a1;

    FILE *Accounts;

    Accounts = fopen("Account_info.txt", "rb");

    if (Accounts == NULL)
    {
        printf("\n\t\tFile Is Missing.");
        getch();
        exit(1);
    }

    while (fread(&a1, sizeof(a1), 1, Accounts))

    {
        printf("\n\t\t%s   %s   %s   %s  %s  %s %c  %d",
               a1.First_Name, a1.Last_Name, a1.Username, a1.Password, a1.Confirm_Password, a1.Contact_Number, a1.Gender, a1.Age);
    }
}
void Edit()
{
}
void Remove()
{
}
void Delete_All()
{
}