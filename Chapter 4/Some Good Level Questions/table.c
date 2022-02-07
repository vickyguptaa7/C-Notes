#include<stdio.h>
int main (){
    int User_input;
    printf("Table Upto :");
    scanf("%d", &User_input);
int m=1;
for (int i=1;i<=User_input;i++)
{
 for(int j=1;j<=10;j++)
 {
    m=i*j;
    printf("%d\t",m);
 }   
 printf("\n"); 
}
    return 0;
}