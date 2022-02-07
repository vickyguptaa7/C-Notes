#include<stdio.h>
#include<math.h>
int main (){
    int a;
    printf("Enter A Binary Number : ");
    scanf("%d",&a);
    int sum=0,i=0;
    while(a>0){
       int last_digit;
       last_digit=a%10;
       a=a/10;
       sum=pow(2,i)*last_digit+sum;
       i++;
    }
    printf("The Decimal Number : %d",sum);
    
    return 0;
}
