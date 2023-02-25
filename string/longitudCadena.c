#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[] = "Carlos";
    int k;
    int longitud = 0;
    for (k = 0; cadena[k] != '\0'; k++)
    {
        printf("\nLength of the string: %d", k);
        longitud++;
    }

        printf("\nLength of the string: %d\n", longitud);

    return 0;
}


