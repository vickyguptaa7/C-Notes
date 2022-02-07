  /*
Pattern 6.

          1
        2  3
      4  5  6
    7  8  9  10 

*/
  #include<stdio.h>
  int main (){
        
  int n;
    printf("Pattern Of Stars :");
    scanf("%d", &n);
  int sum=0;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {

            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            sum +=1 ;

            printf("%d  ",sum);
        }

        printf("\n");
    }
      return 0;
  }
  

  
