#include<stdio.h>

struct demo
{
    int i;
    int *ip;
    float *fp;   
    int j ;

};

int main()
{
  struct demo obj;
  int no = 90;
  float f = 56.52;

  obj.i = 11;
  obj.j = 21;
  obj.ip= &no;
  obj.fp= &f;

  printf("%d\n",obj.i);
  printf("%d\n",obj.j);
  printf("%d\n",*(obj.ip));
  printf("%d\n",*(obj.fp));
  
}