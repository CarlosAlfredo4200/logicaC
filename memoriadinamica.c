#include <stdio.h>
#include <stdlib.h>


 struct point
   {
    int x;
    int y;
    
   };
int main()
{
    
   struct point p = {3,7};
   struct point *p = &p;
   int a =  p->y  = 98;

  

   

    printf("%d", a);
    return 0;
}
 