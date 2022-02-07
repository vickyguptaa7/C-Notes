#include<stdio.h>

struct Vector
{
    int x;
    int y;
};

struct Vector Sum_Vector(struct Vector Vector1, struct Vector Vector2)
{
struct Vector result;
result.x=Vector1.x+Vector2.x;
result.y=Vector1.y+Vector2.y;
return result;
};

int main() {
    struct Vector Vector1,Vector2,sum;
    Vector1.x=15;
    Vector1.y=45;
    printf("The Dim Of X : %d And The Dim Of Y : %d \n",Vector1.x,Vector1.y);
    
    Vector2.x=50;
    Vector2.y=23;
    printf("The Dim Of X : %d And The Dim Of Y : %d \n",Vector2.x,Vector2.y);
    
  sum=Sum_Vector(Vector1,Vector2);

    printf("The Sum Dim Of X : %d And The Sum Dim Of Y : %d \n",sum.x,sum.y);
    return 0;
}