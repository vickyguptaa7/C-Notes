// #include<stdio.h>
// int main (){
//      int num1;
//     printf("Enter Two Number :");
//     scanf("%d", &num1);
//     int temp=num1, sum=0;
//     while (temp!=0){
//         int last_Digit=temp%10;
        
//         sum=last_Digit*last_Digit*last_Digit+sum;
        
//         temp=temp/10;

//     }
// if(num1==sum){
//     printf("%d Is An Armstrong Number",num1);
// }
// else
// {
//     printf("%d Is Not An Armstrong Number",num1);
// }

//     return 0;
// }
#include<stdio.h>
int main (){
    for(int i=1;i<=1000;i++){
        int temp=i, sum=0;
    while (temp!=0){
        int last_Digit=temp%10;
        
        sum=last_Digit*last_Digit*last_Digit+sum;
        
        temp=temp/10;
    }
    if(i==sum)
    {printf("%d \n",i);}
    }
    return 0;
}
