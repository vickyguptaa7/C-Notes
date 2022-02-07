#include<stdio.h>
int main (){
    int a;
    printf("The Length Of The Array : ");
    scanf("%d",&a);
    int array[a];

    for(int i=0;i<a;i++)
    {
        printf("Enter The Number In Array[%d] : ",i+1);
        scanf("%d",&array[i]);
    }
    
    int Odd=0,Even=0;

    for(int j=0;j<a;j++)
    {
        if(array[j]%2==0)
        {
            Even=Even+array[j];
        }
        else
        {
            Odd=Odd+array[j];
        }
    }
    printf("The Sum Of Even And Odd Number's In Array \n Even : %d \n Odd : %d ",Even,Odd);

    return 0;
}
