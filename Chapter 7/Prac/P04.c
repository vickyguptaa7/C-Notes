#include <stdio.h>
int main()
{
/*_______________________________________________Matrice 1___________________________________________*/
       
    int Matrice_1[3][3];

    for (int i = 0; i < 3; i++)
    {    
        for(int j=0;j<3;j++)
        {
        printf("Enter The Number In Matrice 1 [%d][%d] : ", i + 1,1+j);
        scanf("%d", &Matrice_1[i][j]);
        }
    }
/*_______________________________________________Matrice 2___________________________________________*/
       int Matrice_2[3][3];

    for (int i = 0; i < 3; i++)
    {    
        for(int j=0;j<3;j++)
        {
        printf("Enter The Number In Matrice 2 [%d][%d] : ", i + 1,1+j);
        scanf("%d", &Matrice_2[i][j]);
        }
    }
/*_______________________________________________Addition Of Matrice___________________________________________*/
    
     int Matrice_3[3][3];

     for (int i = 0; i < 3; i++)
    {    
        for(int j=0;j<3;j++)
        {
          Matrice_3[i][j]=Matrice_2[i][j]+Matrice_1[i][j];
        }
    }
/*_______________________________________________Result___________________________________________*/
    
     for (int i = 0; i < 3; i++)
    {    
        for(int j=0;j<3;j++)
        {
         printf("%d\t",Matrice_3[i][j]);
        }
        printf("\n");
    }


    return 0;
}
