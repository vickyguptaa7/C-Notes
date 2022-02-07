#include<stdio.h>

void wrong_swap(int a,int b);

void swap(int *a,int *b);

int main (){
    int x=2,y=4;
    printf("The Number X :%d Y:%d\n",x,y);
    // wrong_swap(x,y); it is call by values so it does not swap the values
   swap(&x,&y);
    printf("Number Swap X :%d Y :%d" , x,y);

    return 0;
}


void wrong_swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=*a;
    

}