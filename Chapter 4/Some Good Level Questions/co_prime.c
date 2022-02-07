// #include<stdio.h>
// int main (){
//     int a,b;
//     printf("Enter Two Number :\n");
//     scanf("%d %d",&a,&b);
//     int min=a>b?b:a;
//     int count=0;
//     for(min;min>0;min--){
//         if(a%min==0&&b%min==0){
//             count=count+1;
//         }
//     }
//     if(count==1){
//         printf("%d And %d Are Co-Prime Numbers",a,b);
//     }
//     else
//     {
//     printf("%d And %d Are Not Co-Prime Numbers",a,b);

//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    printf("Enter Two Number :");
    scanf("%d", &n);
    int a = 2;
    while (n > 0)
    {
        for (int b = 2; b <= a; b++)
        {
            int min = a > b ? b : a;
            int count = 0;
            for (min; min > 0; min--)
            {
                if (a % min == 0 && b % min == 0)
                {
                    count = count + 1;
                }
            }
            if (count == 1)
            {
                printf("(%d,%d) \t", a, b);
            }
        }    
           
            ++a;
            --n;
        }

        return 0;
    }
