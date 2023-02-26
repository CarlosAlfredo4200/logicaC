// convertir Cadena en number
#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     char num[5] = "-1234";

//     printf("\nConvertir caddena %s en un número %d .\n", num, atoi(num));
//     return 0;
// }

//-------------------------- sin funcion atoi -----------
// Se declara la cadena de texto a convertir y el número entero resultante.
// Se utiliza un bucle for para iterar a través de cada carácter de la cadena de texto.
// El bucle continúa hasta que se llega al carácter nulo '\0'.
// En cada iteración del bucle, se multiplica el número actual por 10 para igualarlo con la tabla ASCCI y se le suma el valor entero del carácter actual.
// Se resta el valor ASCII de '0' para convertir el carácter en su valor entero correspondiente.
// Después de la iteración, el número resultante se imprime en pantalla.

int main()
{
    char cadena[] = "-1234";
    int numero = 0;
    int i  = 0;
    int signo = 1;

    if (cadena[0] == '-')
    {
        signo = -1;
        i = 1;
    }

    for (; cadena[i] != '\0'; i++)
    {
        numero = numero * 10 + cadena[i] - '0';
    }

    numero *= signo;

    printf("El número es: %d\n", numero);

    return 0;
}
