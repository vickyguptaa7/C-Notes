#include<stdio.h>
int sum(int a,int b);

int main (){
    int a=7,b=5;
    
    printf("The Value Of A :%d And B :%d\n",a,b);
    printf("The Value Of A + B :%d\n",sum(a,b));
    printf("The Value Of A :%d And B :%d\n",a,b);
    
    return 0;
}

int sum(int a, int b){
    int c=a+b;
    a=23;
    b=45;
    return c;

}