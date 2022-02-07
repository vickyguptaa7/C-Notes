#include<stdio.h>
#include<string.h>
struct employee
{
int code;
char name[50];
float salary;
};

int main() {
    struct employee Facebook[100];
 
Facebook[0].code=1;
strcpy(Facebook[0].name,"Vicky");
Facebook[0].salary=5000;   

Facebook[1].code=1;
strcpy(Facebook[1].name,"Jugnu");
Facebook[1].salary=4000;

Facebook[2].code=3;
strcpy(Facebook[2].name,"Bhanu");
Facebook[2].salary=1000;
    
printf("%d %s %f\n",Facebook[0].code,Facebook[0].name,Facebook[0].salary);
printf("%d %s %f\n",Facebook[1].code,Facebook[1].name,Facebook[1].salary);
printf("%d %s %f",Facebook[2].code,Facebook[2].name,Facebook[2].salary);
    return 0;
}