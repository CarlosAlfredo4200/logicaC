#include <stdio.h>

int main()
{
    float ventas, total = 0;

    do
    {
        printf("Ingresa la venta ó ( 0 ) para terminar: ");
        scanf("%f", &ventas);
        total += ventas;
    } while (ventas != 0);

    printf("\nLa venta del dia fue : %.2f", total);

    return 0;
}
