#include <stdio.h>

struct employee
{
    int code;
    char name;
    float salary;
};

int main()
{

    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101; // Or we Can Also Use : ptr->code=101;
    ptr->code=101;
    printf("%d", e1.code);

    return 0;
} 