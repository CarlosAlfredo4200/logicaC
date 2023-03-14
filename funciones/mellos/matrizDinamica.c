#include <stdio.h>
int main()
{
    int filas = 2; 
    int columnas = 2;
    int **memory1;
    int **memory2;
    int i, j;

    memory1 = (int **)malloc(filas * sizeof(int *));
    if (memory1 == NULL)
    {
        printf("No reserva de memoria");
        exit(1);
    }
    
    for ( i = 0; i < filas; i++)
    {
        memory1[i] =(int*)malloc(columnas * sizeof(int));
        if (memory1[i] == NULL)
    {
        printf("No reserva de memoria");
        exit(1);
    }
    }


   for ( i = 0; i < filas; i++)
   {
        for ( j = 0; j < columnas; j++)
        {
            printf("*");
        }
        
   }

//------------------------------------------------------------

    memory2 = (int **)malloc(filas * sizeof(int *));
    if (memory2 == NULL)
    {
        printf("No reserva de memoria");
        exit(1);
    }

     for ( i = 0; i < filas; i++)
    {
        memory1[i] =(int*)malloc(columnas * sizeof(int));
        if (memory1[i] == NULL)
    {
        printf("No reserva de memoria");
        exit(1);
    }
    }

    for ( i = 0; i < filas; i++)
   {
        for ( j = 0; j < columnas; j++)
        {
            memory2[i][j] = memory1[i][j];
            printf("%i ", memory2[i][j]);
        }
        printf("%\n");
        
   }
   
    
    

    return 0;
}