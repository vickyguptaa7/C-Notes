# include <stdio.h>

int Sum1(int a);
int Sum2();
void Sum3(int a);
void Sum4();

int main()
{
    // int n;
    // printf("Sum Of The Square Of The Number Upto : "); // TSRS
    // scanf("%d",&n);
    Sum4();
    // printf("Sum : %d",Sum3());
    return 0;
}

/*Take Something, Return Something*/
int Sum1(int a)
{
    int i, s = 0;
    for (i = 1; i <= a; i++)
    {
        s = i * i + s;
    }
    return s;
}

/*Take Nothing, Return Something*/
int Sum2()
{
    int a;
    printf("Sum Of The Square Of The Number Upto : ");
    scanf("%d", &a);
    int i, s = 0;
    for (i = 1; i <= a; i++)
    {
        s = i * i + s;
    }
   return s;

}

/*Take Nothing, Return Something */
void Sum3(int a)
{
    int i, s = 0;
    for (i = 1; i <= a; i++)
    {
        s = i * i + s;
    }
    printf("Sum : %d",s);
}

/*Take Nothing, Return Nothing*/
void Sum4()
{
     int a;
    printf("Sum Of The Square Of The Number Upto : ");
    scanf("%d",&a);
    int i, s = 0;
    for (i = 1; i <= a; i++)
    {
        s = i * i + s;
    }
   printf("Sum : %d",s);
}


