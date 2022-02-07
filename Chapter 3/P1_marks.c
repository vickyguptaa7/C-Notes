#include<stdio.h>
int main (){
    float maths,chemistry,physics;
    printf("Enter The Marks Of Maths :");
    scanf("%f", &maths);
    printf("Enter The Marks Of Chemistry :");
    scanf("%f", &chemistry);
    printf("Enter The Marks Of Physics :");
    scanf("%f", &physics);
    float total=maths+chemistry+physics;
    if(maths>=33&&chemistry>=33&&physics>=33&&total>=120)
    {
        printf("You Have Passed ");
    }
    else 
    {
        printf("You Are Failed");
        }
    
    return 0;
}