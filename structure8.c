#include<stdio.h>

struct hello
{
   int x;
   int no;

struct demo
{
  int i;
  float f;

} dobj;
}hobj;

int main()
{
  hobj.no = 10;
  hobj.x = 20;
  hobj.dobj.i = 30;
  hobj.dobj.f= 40.50;


 printf("%d",hobj.no);
    return 0;
}