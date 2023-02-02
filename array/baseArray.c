#include <stdio.h>

// vla = variable len array
// #define TAMANIO 3


int main()
{
     
    int TAMANIO = 3; 
    int array2[TAMANIO];
     
    printf("\nIngrese %d números ",TAMANIO);
    
    for (int i = 0; i < TAMANIO; i++)
    {
        printf("Arreglo[%d]:", i);
        scanf("%d",&array2[i]);
    }


    printf("\nLos datos ingresados son : ");
    for (int k = 0; k < TAMANIO; k++)
    {
       printf("\nArreglo[%d] = %d", k, array2[k] );
    }

    return 0;
}
    
     



 
