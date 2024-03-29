#include "main.h"


int _process_format(char format, va_list argumentos)
{
    int num = 0;

    switch (format)

    {
    case 'd':
       
        num += printf("%d", va_arg(argumentos, int));
        break;
    case 's':
       
        num += printf("%s", va_arg(argumentos, char *));
        break;
    case 'f':
        num += printf("%f", va_arg(argumentos, double));
        break;
    case 'c':
        num += printf("%c", va_arg(argumentos, char *));
        break;
    case 'i':
        num += printf("%i", va_arg(argumentos, int));
        break;
    default:
        fprintf(stderr, "Formato inválido: %c\n", format);
        return -1;
    }
    return num;
}