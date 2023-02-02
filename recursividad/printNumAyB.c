#include <stdio.h>

int main()
{

    int resultado;
    int a = 3;
    int b = 9;

    int imprimirNaturalesEntre(int a, int b)

    {

        int res = 0;

        if ((b - 1) == a)
        {
            res = b;
        }
        else
        {
            printf("%d,", (b - 1));
            res = b + imprimirNaturalesEntre(a, b - 1);
        }
    }

            printf("\nLos números entre %d y %d son :\n", a, b);
    resultado = imprimirNaturalesEntre(a, b);


    return 0;
}
