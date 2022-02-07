#include<stdio.h>

struct employee
{
    int code;
    char name[50];
    float salary;
};


int main() {
    struct employee E1={1,"Vicky",300};
    struct employee E2={2,"jugnu",500};
    struct employee E3={0};
    printf("%d %s %f\n",E1.code,E1.name,E1.salary);
    printf("%d %s %f\n",E2.code,E2.name,E2.salary);
    printf("%d %s %f\n",E3.code,E3.name,E3.salary);
    return 0;
}