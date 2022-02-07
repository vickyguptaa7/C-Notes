#include<stdio.h>

void StarPattern(int n);


int main (){
    int a=3;
  StarPattern(a);
  return 0;

}

void StarPattern(int n){
if(n==1)
{printf("*");}
else{StarPattern(n-1);
    for(int i=1;i<=2*n-1;i=i+1){
       printf("*");
    }    
}printf("\n");
}