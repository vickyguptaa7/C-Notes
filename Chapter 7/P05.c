#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter The Size Of The Arrray : \n");
    scanf("%d %d %d",&a,&b,&c);
    int Array[a][b][c];

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            for(int k=0;k<c;k++)
            {
                printf("Array[%d][%d][%d] : %d \n",i,j,k,&Array[i][j][k]);
            }
            
        }
    }
    return 0;
}