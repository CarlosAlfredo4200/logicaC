#include <stdio.h>

int main()
{
    int resultado;

    int n = 5;
    
    
    int suma(int n)
    {
        int res = 0;

        if (n != 0)
        {   
            printf("%d", n);
            res = n + suma(n - 1);
        }

        return res;
    }

    resultado = suma(n);
    printf("El resultado es : %d", resultado);
    return 0;
}
