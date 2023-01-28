#include <stdio.h>

int main()
{
    int numeroInt;
    int acumulador;
    do
    {
        printf("\nIngresa un número : ");
        scanf("%d", &numeroInt);
        acumulador += numeroInt;
        printf("%d", acumulador);

    } while (acumulador < 30);

    printf("\nListo has superado el limite");
    return 0;
}
