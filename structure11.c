#include<stdio.h>

struct demo 
{
  int x;
  struct demo *ptr;
};

int main()
{
   struct demo *head;

   struct demo obj1;
   struct demo obj2;
   struct demo obj3;

   obj1.x = 45;
   obj2.x = 15;
   obj3.x = 25;

   obj1.ptr = &obj2;
   obj2.ptr = &obj1;
   obj3.ptr = NULL;

   head = &obj1;

   printf("%d",obj1.ptr);
   



    return 0;
}