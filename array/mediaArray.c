#include <stdio.h>

float media(int* edades, int tam){
    float acumulador = 0;
    for (int i = 0; i < tam; i++)
    {
       acumulador += edades[i];
    }

    return acumulador / tam;
    
}


int main()
{   
    int tam ;
    printf("\nCuantos registrar deseas ingresar? ");
    scanf("%d", &tam);

    int edades[tam];
    for(int k = 0; k <= tam - 1; k++){
        printf("Ingrese la edad : ");
        scanf("%d", &edades[k]);


    }

    printf("\nLa media de edades ingresadas fue : %.2f", media(edades, tam));
     
    return 0;
}


