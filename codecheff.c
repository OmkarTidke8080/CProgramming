#include <stdio.h>
#include<conio.h>

int main()
     {
    int a , b , c , d  , t;
    scanf("%d",t);
    for(int i = 0 ; i<t; i++)
    {
        scanf("%d%d",&a,&b);
        scanf("%d%d\n",&c,&d);
        
        if(c>=a && d>=b)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
        return 0;
    }
     }
    