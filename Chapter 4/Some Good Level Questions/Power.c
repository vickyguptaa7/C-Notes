#include<stdio.h>
int main (){
    int x,y,product=1;
    printf("Enter the value's of x and y : \n");
    scanf("%d %d",&x,&y);
    
    for(int i=1;i<=y;i++){
        product=product*x;
    }
    printf("Value Of x^y : %d",product);
    return 0;
}
