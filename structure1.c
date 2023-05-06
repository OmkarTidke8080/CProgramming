#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;

};

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    
    obj1.i = 20;
    obj1.f = 50.45;
    obj1.j = 30;

    obj2.i = 45;
    obj2.f = 60.15;
    obj2.j = 40;

    printf("%d\n",obj1.f);
    printf("%d\n",obj1.i);

    return 0;

}
