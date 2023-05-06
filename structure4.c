#include<stdio.h>

struct demo
{
   int i;
   float f;
   int Arr[4];
};

int main()
{
    struct demo obj;

    obj.i = 20;
    obj.f = 30.20;
    
    obj.Arr[0] = 20;
    obj.Arr[1] = 30;
    obj.Arr[2] = 40;
    obj.Arr[3] = 50;

    printf("%d",obj.Arr[2]);
    return 0;
}