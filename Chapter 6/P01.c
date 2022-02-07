#include<stdio.h>

void SumAndAvg(int a,int b,int *Sum,float *Avg);

int main (){
    int a,b,Sum;
    float Avg;
    printf("Enter Two Numbers : \n");
    scanf("%d %d",&a,&b);

    SumAndAvg(a,b,&Sum,&Avg);

    printf("The Sum : %d And The Avg : %f",Sum,Avg);
    

    return 0;
}

void SumAndAvg(int a,int b,int *Sum,float *Avg)
{

    *Sum=a+b;
    *Avg=*Sum/2;

}