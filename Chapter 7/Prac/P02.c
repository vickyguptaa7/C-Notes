#include <stdio.h>
int main()
{
    int a;
    printf("The Length Of The Array : ");
    scanf("%d", &a);
    int array[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter The Number In Array[%d] : ", i + 1);
        scanf("%d", &array[i]);
    }

    int max=array[0];
    for(int i=0;i<a;i++)
    { 
             
            if(max<array[i])
            max=array[i];
               
    }
    printf("The Greatest Number In Array : %d",max);
    return 0;
}