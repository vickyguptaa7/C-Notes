#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    char name[50];
    float salary;
};

void show(struct employee emp);

int main() {
struct employee e1;
e1.code=1;
strcpy(e1.name,"Vicky");
e1.salary=10000;

show (e1);
printf("%d",e1.code);//code does not change beause there is copy goes to function not the actual arguments 
    return 0;
}

void show(struct employee emp)
{
    printf("%d %s %f\n",emp.code,emp.name,emp.salary);
    emp.code=200; 
}