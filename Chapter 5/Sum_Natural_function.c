/*Takes Something, Return Something*/

// #include<stdio.h>
// int Sum(int a);
// int main (){
//     int n;
//     printf("The Sum Of Natural Numbers Upto : ");
//     scanf("%d",&n);
//     printf("Sum Upto %d : %d ",n,Sum(n));
//     return 0;
// }
// int Sum(int a)
// {
//     int s=0;
//     for(int i=1;i<=a;i++)
//     {
//         s=s+i;
//     }
//     return s;
// }

/*Takes Nothing, Returns Nothing*/

// #include <stdio.h>
// void Sum();
// int main()
// {
//     Sum();
//     return 0;
// }
// void Sum()
// {
//     int a, i, s = 0;
//     printf("The Sum Of Natural Numbers Upto : ");
//     scanf("%d", &a);

//     for (i = 1; i <= a; i++)
//     {
//         s = s + i;
//     }
//     printf("Sum Upto %d : %d ",a,s);
// }

/*Takes Something, Returns Nothing*/

// #include<stdio.h>

// void Sum(int a);

// int main (){
//     int n;
//     printf("The Sum Of Natural Numbers Upto : ");
//     scanf("%d",&n);
//     Sum(n);
//     return 0;
// }

// void  Sum(int a)
// {
//     int i,s=0;
//     for(i=1;i<=a;i++)
//     {
//         s=s+i;
//     }
//    printf("Sum : %d", s);
// }

/*Takes Nothing, Returns Something*/

#include <stdio.h>

int Sum();

int main()
{
    int k;
    k = Sum();
   printf("Sum : %d",k);
    return 0;
}

int Sum()
{
    int n;
    printf("The Sum Of Natural Numbers Upto : ");
    scanf("%d", &n);
    int i, s = 0;
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }

    return(s);
}
