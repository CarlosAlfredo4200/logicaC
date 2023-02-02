#include <stdio.h>

int factorial(int n);

int main()
{
    int n, fact;
    printf("Ingrese el número que desea el factorial : ");
    scanf("%d", &n);

    fact = factorial(n);
    printf("%d", fact);

    return 0;
}

int factorial(int n)
{
    int res;
    if (n == 0)
    {
        res = 1;
    }
    else
    {
        res = n * factorial( n - 1);
    }
    
    
    return res;
}


 
// Ejemplo recursividad factorial 5

