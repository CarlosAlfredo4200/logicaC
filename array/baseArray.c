#include <stdio.h>
// #define TAMANIO 3
#define NUM 10

int main(int argc, char const *argv[])
{
     
    // int array2[TAMANIO];
     
    // printf("\nIngrese %d números ",TAMANIO);
    
    // for (int i = 0; i < TAMANIO; i++)
    // {
    //     printf("\nArreglo[%d]:", i);
    //     scanf("%d",&array2[i]);
    // }


    // printf("\nLos datos ingresados son : ");
    // for (int k = 0; k < TAMANIO; k++)
    // {
    //    printf("\nArreglo[%d] = %d", k, array2[k] );
    // }



    // ----------------  DECLARAR Caracteres------------------

    char apellido[NUM] = {'M','o','n', 't','o','y','a','\0'};
    char nombre[NUM] = "Carlos";

     
    printf("%s %s", nombre, apellido);
     

    return 0;
}
    
     



 
