#include<stdio.h>

struct hello
{
    int i;
    int no;

    struct demo
    {
        int x;
        float f;
    }dobj1,dobj2;
}hobj;

int main()
{
   hobj.dobj1.f = 45.21;
   hobj.dobj2.x = 25;

   hobj.i = 78;
   hobj.no = 48;

   printf("%d",hobj.dobj1.f);

    return 0;
}