#include <stdio.h>

int main()
{
    char cadena[] = "este texto sera cambiado a mayusculas";

    for (int i = 0; i < cadena[i] != '\0'; i++)
    {

        if (cadena[i] == ' ')
        {
            cadena[i + 1]= toupper(cadena[i]);
            printf("%c", cadena[i]);

        }

        printf("%c", cadena[i]);
    }

    return 0;
}
