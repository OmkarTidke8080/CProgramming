#include<stdio.h>

struct demo 
{
  int i;
  float f;
  char c;
  double d;
};

int main()
{
    struct demo obj1;
    obj1.i = 45;
    obj1.f = 15.2;
    obj1.d = 78945;

    printf("%d\n",obj1.i);
    printf("%d\n",obj1.f);
    printf("%d\n",obj1.d);

    printf("%d\n",obj1);
    
    return 0;
}