// #include<stdio.h>
// int main (){
//     int num1,num2,product=1,temp1,temp2;
//     printf("Enter the first number and second number :\n"  );
//    scanf("%d %d",&num1,&num2);
//  for(int i=2;i<=num1;i++){
//      temp1=num1/i*i;
//      temp2=num2/i*i;
//      if(temp1==num1)
//      {num1=num1/i;
//          if(temp2==num2){
//              num2=num2/i;
//              product=product*i;
//              i=i-1;
//          }
//      }
//  }
//  printf("HCF Of The Two Number Is : %d ",product);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter Two Number :\n");
    scanf("%d %d", &num1, &num2);
    int min;
    min = num1 > num2 ? num2 : num1;

    for (min; min > 0; min--)
        if (num1 % min == 0 && num2 % min == 0)
        {
            printf("HCF Of Two Number : %d", min);
            break;
        }
    return 0;
}
