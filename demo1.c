#include<stdio.h>

extern int i ;
extern int j;
extern int Arr[4];
 
 void gun();

int main()
{
    printf("The valie of i is : %d",i);
    printf("The value of j is : %d", j);

    j = 51;
    printf("Value of j is : %d",j);
    printf("Value from array %d", Arr[0]);

    fun();
    gun();

    return 0;


    int i = 21;
    void gun()
    {
        printf(" Inside gun");
    }
    

}