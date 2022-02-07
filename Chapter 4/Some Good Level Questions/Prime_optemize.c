#include<stdio.h>
int main (){
    
int User_input;
    printf("Check Number Is Prime Or Not :");
    scanf("%d", &User_input);

int count = 0;

    for (int i = 2; i*i< User_input; i++)
     {
         if(User_input%i==0)
         {count +=1;}
     }
if (count==0)
 {    printf("%d Is Prime Number", User_input);
 }
else
{
    printf("%d Not A Prime Number", User_input);
}




    return 0;
}