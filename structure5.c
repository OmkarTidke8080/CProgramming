#include<stdio.h>

struct demo
{
   int i;
   float f;

};

int main()
{ 
    struct demo Arr[4];

    Arr[0].i = 45;
    Arr[0].f = 50.54;

    Arr[1].i = 45;
    Arr[1].f = 50.54;

    Arr[2].i = 45;
    Arr[2].f = 50.54;

    Arr[3].i = 45;
    Arr[3].f = 50.54;

    printf("%d\n",Arr[2]);






 
    return 0;
}