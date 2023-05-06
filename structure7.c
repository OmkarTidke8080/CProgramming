#include<stdio.h>

struct demo 
{
   int i;
   float f;
};
struct hello
{
   int x;
   float h;
   struct demo dobj;

};

int main()
{
    struct hello dobj;
 

    return 0;
}