#include <stdio.h>
main()
{
    char letra;
    printf("Introduzca una vocal: ");
   scanf("%c", letra);
    
    switch (letra)
    {
    case 'a':
        printf("Se ha pulsado una a.");
        break;


    case 'e':
        printf("Se ha pulsado una e.");
        break;
    case 'i':
        printf("Se ha pulsado una i.");
        break;
    case 'o':
        printf("Se ha pulsado una o.");
        break;
    case 'u':
        printf("Se ha pulsado una u.");
        break;
    default:
        printf("Error");
    }

    
}