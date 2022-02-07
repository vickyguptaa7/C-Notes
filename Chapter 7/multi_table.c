#include<stdio.h>

void Multi_table(int *Array,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int a;
            printf("The Table Of : ");
            scanf("%d",&a);
            Array[i][j]=a*(j+1);
        
        }
    }
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            printf("",Array[i][j]);
        
        }
    }
}

int main (){
    int a,b;
printf("The Collums And The Rows : \n");
scanf("%d %d",&a,&b);
    int array[a][b];

    Multi_table(array,a,b);
    return 0;
}