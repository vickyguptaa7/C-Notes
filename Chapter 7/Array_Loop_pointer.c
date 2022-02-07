// #include<stdio.h>
// int main (){
//     int Marks[5];
    
//     for(int i=0;i<5;i++)
//     {
//         printf("Enter The Marks Of Student %d : ",i+1);
//         scanf("%d",&Marks[i]);
//     }
//     for(int i=0;i<5;i++)
//     {
//         printf("The Marks Of Student %d : %d \n",i+1,Marks[i]);
//     }
       

//     return 0;
// }

#include<stdio.h>
int main (){
    int Marks[5];
    int *ptr=&Marks[0];
    
    for(int i=0;i<5;i++)
    {
        printf("Enter The Marks Of Student %d : ",i+1);
        scanf("%d",ptr);
        ptr++;
        
    }
    for(int i=0;i<5;i++)
    {
        printf("The Marks Of Student %d : %d \n",i+1,Marks[i]);
    }
       

    return 0;
}