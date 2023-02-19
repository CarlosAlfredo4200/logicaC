#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;
    char mayusculas;
    printf("Ingrese el caracter : ");
    scanf("%c",&caracter);

    // mayusculas = caracter - 'a' + 'A';
     mayusculas = caracter - 32;


    printf("\nEl caracter %c en mayusculas es %c ", caracter, mayusculas);
    return 0;
}
