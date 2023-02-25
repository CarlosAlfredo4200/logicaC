#include <stdio.h>
#include <string.h>


int main()

{
    int a = 2;
    int b = 4;

    


    printf("Valor inicial de a es :%d y de b es %d\n", a, b);
    int varTemporal = a;
    a = b;
    b = varTemporal;
    printf("\nValor final de a es :%d y de b es %d\n", a, b);

    return 0;
}
