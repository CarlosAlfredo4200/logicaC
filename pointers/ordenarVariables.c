#include <stdio.h>
// /
//     *Realiza una función que reciba tres argumentos de tipo entero,
//     a, b y c.*La función deberá ordenarlos de menor a mayor.*Al finalizar la función, a deberá tener el valor menor y c el valor mayor.**Utilizar paso de argumentos por referencia.*Realiza un programa que utilice dicha función e imprima los valores de a, b y c antes y después de la llamada a la función /

void ordenarValor(int *x, int *y, int *z);

int main()
{
    int a = 3;
    int b = 2;
    int c = 1;

    printf("\nValor inicial de a = %d\n", a);
    printf("Valor inicial de b = %d\n", b);
    printf("Valor inicial de c = %d\n", c);
    ordenarValor(&a, &b, &c);

    printf("\nValor final de a = %d\n", a);
    printf("Valor final de b = %d\n", b);
    printf("Valor final de c = %d\n", c);

    return 0;
}

void ordenarValor(int *x, int *y, int *z)
{

    int aa = *x;
    int bb = *y;
    int cc = *z;

    if (aa < bb && aa < cc)
    {
        printf("\nEl menor es a = %d\n", aa);
        *x = aa;
    }
    else if (bb < cc)
    {
        printf("\nEl menor es b = %d\n", bb);
        *x = bb;
    }
    else
    {
        printf("\nEl menor es c = %d\n", cc);
        *x = cc;
    }

    if (aa > bb && aa > cc)
    {
        printf("\nEl mayor es a = %d\n", aa);
        *z = aa;
    }
    else if (bb > cc)
    {
        printf("\nEl mayor es b = %d\n", bb);
        *z = bb;
    }
    else
    {
        printf("\nEl mayor es c = %d\n", cc);
        *z = cc;
    }
}
