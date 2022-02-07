#include<stdio.h>

int CheckPostive(int *Array,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(Array[i]>0)
        {
           count=count+1;
        }
    }
    return count;
}

int main (){
      int a;
    printf("Length Of Array : ");
    scanf("%d",&a);
    int array[a];
for(int i=0;i<a;i++)
{
    printf("Enter A Number Array[%d] : \n",i+1);
    scanf("%d", &array[i]);
}
printf("The Number Of +ve Numbers In Array : %d",CheckPostive(array,a));

    return 0;
}
