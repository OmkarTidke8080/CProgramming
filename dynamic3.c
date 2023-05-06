#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[10]; // Static memory allocation

    int size = 0;
    int *ptr = NULL;

    printf("Enter the size of Array : \n" );
    scanf("%d",&size);
   
   // step 1 : Allocate the  memory
    
    // step 2 : Use the memory(In logic bulding batch)

      ptr = (int *)realloc( ptr, sizeof(int), size * 7); // 28 bytes
      
      ptr = (int *)realloc( ptr, sizeof(int), size * 3); // 12 bytes
       // step 3 : De allocte the memory

    free(ptr);
    

     

    return 0;
}
