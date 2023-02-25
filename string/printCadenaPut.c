#include <stdio.h>
#include <string.h>

int main()
{
    char *cadena;

    cadena = "I do not fear computers. I fear the lack of them - Isaac Asimov";

    int k;

    for ( k = 0;  cadena[k] != '\0'; k++)
    {
        putchar(cadena[k]);
    }
        putchar('\n');
    
    return (0);
}
