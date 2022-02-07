#include<stdio.h>

int main (){
    int Array[3][10];
    int a;
 for(int i=0;i<3;i++)
 {
     printf("Table Of : ");
     scanf("%d",&a);
     Array[i][0]=a;
     for(int j=0;j<10;j++)
     {
         Array[i][j+1]=a*(j+2);
        
     }
 }
    printf("The Table : \n");
  for(int i=0;i<3;i++)
  {for(int j=0;j<10;j++)
  {
      printf("%d \t",Array[i][j]);
  }
  printf("\n");
  }
    return 0;
}

