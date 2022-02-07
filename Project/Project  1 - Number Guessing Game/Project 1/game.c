#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){

    int number,guess,no_guess=1;

    srand(time(0));

    number=rand()%100+1; // Number Between 1 to 100;

   // printf("The random number is %d",number);

    
    do{
        printf("Guess The Number Between 1 to 100 \n");

        scanf("%d",&guess);

        if(guess>number){
            printf("Enter Lower Number ! \n");
        }        
        
        else if (guess<number){
            printf("Enter Higher Number ! \n");
        }
        
        else{
            printf("You Have Guess The Number In %d Attempt",no_guess);
        }

        no_guess +=1;
    }while(guess!=number);

    return 0;
}