#include<stdio.h>

struct demo
{
    int x;
    struct demo *ptr;

};
int main()
{
    struct demo obj1;

    obj1.x = 78;
    obj1.ptr = NULL;

 printf("%d\n",obj1);
 printf("%d\n",obj1.ptr);
  return 0;


}