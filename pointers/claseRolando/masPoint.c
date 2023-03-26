#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *p0 = NULL;
     int *p1 = NULL;
     int n = 12;
     int *p2 = &n;


     //p0 = malloc(4);
     p0 =(float *) malloc(sizeof(float));//Cualquier valor por ser void
     p1 = (int *)malloc(sizeof(int));

      
     *p1 = 25;

     printf("%d\n", *p1);
     printf("%d\n", *p2);

    free(p0);
    free(p1);
     
    return 0;
}
