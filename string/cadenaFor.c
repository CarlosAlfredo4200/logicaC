#include <stdio.h>
#include <string.h>

// -------Declarar---------

int main(int argc, char const *argv[])
{
    char a[30] = "hello";

    for (int i = 0; i < strlen(a); i++)

    {
        printf("\n%c", a[i]);
    }

    //-- -- -- -- --Ingresar la palabra contar caracter-- -- -- -- -- -

    char cadena[255];
    printf("\n\nIngresa la cadena : ");
    scanf("%s",cadena);

    char *p;
    int caracteres = 0;
    p = cadena;
    while (*p != '\0')
    {
        caracteres++;
        p++;
    }

    printf("\n\nLa cadena tiene :%i caracteres", caracteres);

    //-- -- -- -- --Ingresar frase contar palabras-- -- -- -- -- -

    

        
        
 
    
    return 0;
}