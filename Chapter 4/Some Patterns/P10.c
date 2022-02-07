/*

Pattern 10.

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/
// #include<stdio.h>
// int main (){
//         int a;
//     printf("Pattern Of Stars : ");
//     scanf("%d",&a);

//     for(int i=0;i<a;i++){
//         int k=1,l=i;
//         for(int j=1;j<=a*2-1;j++){
            
//             if(j>=a-i&&j<=a+i){
                
//                 if(j<=a)
//             {    printf("%d ",k);
//                 k++;
//             }
//             else{
//                 printf("%d ",l);
//                 l=l-1;
//             }
//             }
//             else{
//                 printf("  ");
//             }
            


//         }
//     printf("\n");
//     }
    
//     return 0;
// }


#include<stdio.h>
int main (){
        int a;
    printf("Pattern Of Stars : ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        int k=i,l;
        for(int j=1;j<=a*2-1;j++){
            
            if(j>=a+1-i&&j<=a-1+i){
                
                if(j<=a)
            {    printf("%d ",k);
                l=k;
                k++;
               
            }
            else{ l=l-1;
                
                printf("%d ",l);
             
            }
           
            }
            else{
                printf("  ");
            }
             
            


        }
    printf("\n");
    }
    
    return 0;
}


