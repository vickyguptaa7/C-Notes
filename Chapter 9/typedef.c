#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    char name[50];
    float salary;
}emp;

void show(emp emp1)
{
    printf("%d %s %f\n", emp1.code, emp1.name, emp1.salary);
}

int main()
{
    emp e1;
    e1.code = 1;
    strcpy(e1.name, "Vicky");
    e1.salary = 10000;

    show(e1);

    return 0;
}
