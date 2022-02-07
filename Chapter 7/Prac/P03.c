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

    int min=array[0];
    for(int i=0;i<a;i++)
    { 
             
            if(min>array[i])
            min=array[i];
               
    }
    printf("Smallest Number In Array : %d",min);
    return 0;
}
