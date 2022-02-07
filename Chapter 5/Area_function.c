#include<stdio.h>
float Area(float a);
int main (){
    float r;
    printf("Enter The VaLue Of Radius : ");
    scanf("%f",&r);
    
    printf("The Area Of The Circle : %f",Area(r));

    return 0;
}
float Area(float a)
{
    float pi=3.14;
    return pi*a*a;
}
