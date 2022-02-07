#include<stdio.h>
int main (){
int num;
printf("Enter Any Number :");
scanf("%d",&num);
int temp=num;
int sum=0;
while(temp>0){
    int last_digit=temp%10;
    temp /=10;
sum +=last_digit;
}
printf("The Sum Of Digit : %d",sum);
    return 0;
}
// #include<stdio.h>
// int main (){
//      int num;
// printf("Enter Any Number :");
// scanf("%d",&num);
// int sum=0;
//     while(num!=0){
//        int temp=num;
//        temp=num%10;
//        sum=sum+temp;
//        num=num/10;
//     }
//     printf("The Sum Of Digit : %d",sum);
//     return 0;
// }
