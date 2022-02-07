/*

Pascal Triangles
   
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
 1 5 10 10 5 1

*/

#include<stdio.h>

void PascalTriangles(int a);
int Factorial(int b);
int Combination(int n,int r);

int main (){
    int n;
    printf("Pascal Triangle Upto : ");
    scanf("%d" ,&n);
    
    PascalTriangles(n);

    return 0;
}

/*_________________________________ Pascal Triangle ________________________________  */

void PascalTriangles(int a)
{
    int k;
    for(int i=0;i<a;i++)
    {   
        k=0;
        for(int j=1;j<=a;j++)
        {
             if(j>a-1-i&&j<=a+1+i)
             {
                 printf("%d ",Combination(i,k++));

             }
             else
             {
                 printf(" ");
             }
             
        }
    printf("\n");
    }
}

/*_________________________________ Factorial ________________________________  */

int Factorial(int b)
{  
    int p=1;
  for(int i=1;i<=b;i++)
  {
     p=p*i;
  }
  return p;
}

/*_________________________________ BinomialCoef ________________________________  */

int Combination(int n,int r)
{
    int a;
    a=Factorial(n)/(Factorial(n-r)*Factorial(r));
    return a;
}
