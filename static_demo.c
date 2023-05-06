#include<stdio.h>
void demo()
{
    static int NO = 10;
    NO ++ ;
    printf("%d\n",NO);

}
  int main()
  { 
    demo();
    demo();
    demo();
    


    return 0;

  }