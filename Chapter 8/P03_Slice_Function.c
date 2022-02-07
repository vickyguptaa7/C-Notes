#include <stdio.h>

void slice(char *arr, int a, int b);

int main()
{
    char str[25];
    printf("Enter The Value Of String : ");
    scanf("%s", str);
    int a, b;
    printf("Slice The String From : ");
    scanf("%d", &a);
    printf("Slice The String From %d To  : ", a);
    scanf("%d", &b);

    slice(str, a, b);

    return 0;
}

void slice(char *arr, int a, int b)
{
    char sliced[b-a];
    int j=0;
    for(int i=a-1;i<b;i++)
    {
        sliced[j]=arr[i];
        j++;
    }
     
    printf("The Sliced String : %s",sliced);
     

}
