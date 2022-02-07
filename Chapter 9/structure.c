#include<stdio.h>
#include<string.h>

struct employee{
int code;
float salary;
char name[50];
};

int main() {
struct employee E1;

    E1.code=1;
    E1.salary=1000;
    strcpy(E1.name,"Vicky");


struct employee E2;

    E2.code=2;
    E2.salary=1050;
    strcpy(E2.name,"Jugnu");


struct employee E3;

    E3.code=3;
    E3.salary=1100;
    strcpy(E3.name,"Bhanu");

printf("%d %f %s\n",E1.code,E1.salary,E1.name);
printf("%d %f %s\n",E2.code,E2.salary,E2.name);
printf("%d %f %s",E3.code,E3.salary,E3.name);


    return 0;
}