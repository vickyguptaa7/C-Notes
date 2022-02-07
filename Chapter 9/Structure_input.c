#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[50];
};

int main()
{

    struct employee e1, e2, e3;

    printf("Enter The Code Of Employee 1 : ");
    scanf("%d", &e1.code);
    printf("Enter The Salary Of Employee 1 : ");
    scanf("%f", &e1.salary);
    printf("Enter The Name Of Employee 1 : ");
    scanf("%s", e1.name);

    printf("Enter The Code Of Employee 2 : ");
    scanf("%d", &e2.code);
    printf("Enter The Salary Of Employee 2 : ");
    scanf("%f", &e2.salary);
    printf("Enter The Name Of Employee 2 : ");
    scanf("%s", e2.name);

    printf("Enter The Code Of Employee 3 : ");
    scanf("%d", &e3.code);
    printf("Enter The Salary Of Employee 3 : ");
    scanf("%f", &e3.salary);
    printf("Enter The Name Of Employee 3 : ");
    scanf("%s", e3.name);

    printf("The Information Of The Employees : ");
    printf("%d %f %s", e1.code, e1.salary, e1.name);
    printf("%d %f %s", e2.code, e2.salary, e2.name);
    printf("%d %f %s", e3.code, e3.salary, e3.name);
    return 0;
}