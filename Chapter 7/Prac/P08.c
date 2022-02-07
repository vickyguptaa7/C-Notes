#include<stdio.h>
int main (){
    int n;
    printf("The Length Of The Array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Any %d Number : \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int Shift_Right,Shift_Left,temp;

    printf("Shift To The Right Upto : ");
    scanf("%d",&Shift_Right);

    for(int i=0;i<Shift_Right;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp=arr[i];
           arr[i+1]=arr[i];
           arr[j]=temp;


        }
    }

 for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
 



    return 0;
}