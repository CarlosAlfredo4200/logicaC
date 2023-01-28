#include <stdio.h>
int main()
{
    char palabra[2];
    char letra = 'a';
    printf("Ingrese una letra : ");
    scanf("%s", palabra);

    if (palabra[0] == letra)
    {
        printf("Es vocal");
    }
    else
    {

        printf("No es vocal");
    }

    return 0;
}
