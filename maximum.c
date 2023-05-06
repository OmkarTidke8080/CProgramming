#include<stdio.h>

//#define MAX(X,Y)(X > Y,X) || (Y > X,Y)

int main()
{
   int X;
   int Y;

   printf("Enter Number 1 \n", X);
   scanf("%d",&X);

   printf("Enter Number 2 \n", Y);
   scanf("%d",&Y);

if(X>Y)
{
    printf("Number 1 is maximum");
}
else
{
    printf("NUmber 2 is maximum");
}

    return 0;
}