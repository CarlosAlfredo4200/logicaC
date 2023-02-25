#include <stdio.h>
int main()
{
    char c;
    int k = 0;
    char frase[] = "Termina el programa!";

    do
    {
       printf("\n\ningrese cadacter :");
       c = getchar();
       fflush(stdin);//Limpiar campo
       printf("\nElcaracter ingresado es : ");
       putchar(c);
       putchar('\n');
       k++;

    } while (k < 2);
    
    putchar(frase[0]);
    printf("%c", frase);

    return 0;
}
