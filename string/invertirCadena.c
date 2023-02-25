#include <stdio.h>
#include <string.h>

int main()
{
    // char cadena[] = "Carlos";
    // int longitud, i, j;

    // longitud = strlen(cadena);

    // for (i = 0, j = longitud - 1; i < j; i++, j--) {
    //     char temp = cadena[i];
    //     cadena[i] = cadena[j];
    //     cadena[j] = temp;
    // }

    // printf("La cadena invertida es: %s\n", cadena);

    char cadena[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    int longitud = strlen(cadena);
    
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        printf("%c",cadena[longitud - 1]);
        longitud--;
    }

    return 0;
}
