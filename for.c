#include <stdio.h>

int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

   // array_iterator(array, 5, &print_elem);
   // array_iterator(array, 5, &print_elem_hex);

   for (int i = 0; i < 5; i++)
   {
     printf("%d\n", array[i]);
   }
   
    return (0);
}