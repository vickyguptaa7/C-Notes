#include <stdio.h>


struct books// to call in program
{
	int books_id; // declare the integer data type
	char b_name[20];// declare the character data type
	char a_name[20];// declare the charecter data type
	char s_name[20];// declare the character data type
	char add[15];// declare the character data type
	int days;// declare the integer data type
	int yr; // declare the integer data type
	
}m;

void Add_User();

void Add_Contacts();

int main()
{
  Add_Contacts();
  return 0;
}

void Add_Contacts()
{
  struct books b;

  printf("Enter Your Name : ");
  fflush(stdin);

  gets(b.a_name);
  printf("YOur Details Are Here : %s\n",CD.Name);

  printf("Enter Your Contact Number : ");
  fflush(stdin);

  gets(b.b_name);
  printf("YOur Details Are Here : %s\n",CD.Contacts);

  printf("Enter Your Birthday : ");
  fflush(stdin);

  gets(b.add);
  printf("YOur Details Are Here : %s\n",CD.Birthday);

  printf("Enter Your Email : ");
  fflush(stdin);

  gets((*cd).Email);
    printf("YOur Details Are Here : %s\n",CD.Email);


  printf("Enter Your Address : ");
  fflush(stdin);

  gets((*cd).Address);
  printf("\n\nYOur Details Are Here : %s\n",CD.Name);
  printf("YOur Details Are Here : %s\n",CD.Contacts);
  printf("YOur Details Are Here : %s\n",CD.Birthday);
    printf("YOur Details Are Here : %s\n",CD.Email);
  printf("YOur Details Are Here : %s\n",CD.Address);

}
