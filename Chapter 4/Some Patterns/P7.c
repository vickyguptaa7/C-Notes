/*
Pattern 7.
*
* *
* * * 
* * * *
* * * * *
* * * *
* * *
* *
* 

*/
// #include<stdio.h>
// int main (){
// int n;
//     printf("Pattern Of Stars :");
//     scanf("%d", &n);

// int rows=2*n-1;

// for(int i=1;i<=rows;i++){

//     if (i<=n)  
//        {   for(int j=1;j<=i;j++){
//                 printf("* ");
//        }
//     }
//       else{
//           for(int k=0;k<=rows-i;k++)
//           printf("* ");
//       } 
//       printf("\n");
//   }    
//     return 0;
// }


#include<stdio.h>
int main (){
int n;
    printf("Pattern Of Stars :");
    scanf("%d", &n);

int rows=2*n-1;
int l=0;

for(int i=1;i<=rows;i++){

    if (i<=n)  
       {   for(int j=1;j<=n;j++){
           if(j>=n+1-i)
           {
               printf("*");
           }
           else 
           {
               printf(" ");
           }
                
       }
    }
      else{
          
          for(int k=0;k<=n-l;k++){
          
          if(k>=l)
          {
          
                printf("*");
                
          }
          else 
          {
              printf(" ");
          }
          l++;
          }
      } 
      printf("\n");
  }    
    return 0;
}