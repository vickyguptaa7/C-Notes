 #include<stdio.h>
 int main (){
     int rating;
     printf("Rate The User In 1 To 5 Scale :");
     scanf("%d",&rating);
     switch(rating)
     {
         case 1: printf("The Rating is 1 Star");
         break;
         case 2: printf("The Rating is 2 Star");
         break;
         case 3: printf("The Rating is 3 Star");
         break;
         case 4: printf("The Rating is 4 Star");
         break;
         case 5: printf("The Rating is 5 Star");
         break;
         default : printf("Please Rate Between 1 To 5 Only");
     }

     return 0;
 }