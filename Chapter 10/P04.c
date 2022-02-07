#include<stdio.h>

int main() {
    int a;
    printf("The No Of Employee To Be Entered : ");
    scanf("%d",&a);
    char name[25];
    int salary;
    FILE *ptr;
    ptr=fopen("Data.txt","w");
    for(int i=0;i<a;i++)
    {
        printf("Enter The Name Of The Employee %d : ",i+1);
        scanf("%s",name);
        printf("Enter The Salary Of The %s : ",name);
        scanf("%d",&salary);
        fprintf(ptr,"%s , %d \n",name,salary);
    }
    fclose(ptr);
    return 0;
}