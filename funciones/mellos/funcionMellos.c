#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;

    a = malloc(sizeof(int));
    // x = sizeof(int);
    // printf("%i\n", x);
    // printf("%d\n", x);

    printf("Valor statico: %i\n", *a); // Valor statico: 12259936
    *a = 5;
    printf("Valor dinamico: %i\n", *a); // Valor dinamico: 5

    //----------------------------------------------------
    float *b;

    b = malloc(sizeof(float));
    // x = sizeof(int);
    // printf("%i\n", x);
    // printf("%d\n", x);

    printf("Valor statico flotante: %.2f\n", *b); 
    *b = 8.5;
    printf("Valor dinamico flotante: %.2f\n", *b); 

    return 0;
}
