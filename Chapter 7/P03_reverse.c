#include<stdio.h>

int reverse(int *array,int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }
}

int main (){
    int a;
    printf("Length Of Array : ");
    scanf("%d",&a);
    int array[a];
for(int i=0;i<a;i++)
{
    printf("Enter A Number Array[%d] : ",i+1);
    scanf("%d", &array[i]);
}
reverse(array,a);

printf("Reversed Array : \n");

for(int i=0;i<a;i++)
{
    printf("%d \t",array[i]);  
}

    return 0;
}
