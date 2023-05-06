#include<stdio.h>

struct demo
{
  int  i ;
  float f;
  int j;
};

int main()
{
    struct demo obj1 = {10,62.20,45};
    struct demo *ptr = &obj1;
 
    obj1.i = 10;  // . Direct member accessing operator
    ptr ->j = 45; // -> indirect member accessing operator
    ptr ->f = 62.20;

    printf("%d\n",ptr->i);
    printf("%d\n",ptr->f);



    return 0;

}