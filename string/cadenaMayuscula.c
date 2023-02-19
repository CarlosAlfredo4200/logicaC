#include <stdio.h>
int main()
{
     char cadena[] = "este texto sera cambiado a mayusculas";

     for (int i = 0; i < cadena[i] !='\0'; i++)
     {
        cadena[i] = toupper(cadena[i]);

     }
     printf("\nCadena en mayusculas...%s\n", cadena);
     
    return 0;
}
